<?php
/**
 * @file
 * wfyz_commerce_service.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function wfyz_commerce_service_default_rules_configuration() {
  $items = array();
  $items['rules_add_user_to_store'] = entity_import('rules_config', '{ "rules_add_user_to_store" : {
      "LABEL" : "add user to store",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "market" ],
      "REQUIRES" : [ "og", "rules" ],
      "ON" : { "node_insert--store" : { "bundle" : "store" } },
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-store-user" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "og_subcribe_user" : { "user" : [ "list-item" ], "group" : [ "node" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_cancel_sales_order'] = entity_import('rules_config', '{ "rules_cancel_sales_order" : {
      "LABEL" : "Cancel Sales Order",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "market" ],
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_cancel_sales_order" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "flagged-node" ], "field" : "field_so_status" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "flagged-node:field-so-status" ], "value" : "3" } },
        { "drupal_message" : { "message" : "\\u60a8\\u7684\\u8ba2\\u5355 [flagged-node:title] \\u5df2\\u53d6\\u6d88!" } }
      ]
    }
  }');
  $items['rules_update_sales_vol_ser_order_complete'] = entity_import('rules_config', '{ "rules_update_sales_vol_ser_order_complete" : {
      "LABEL" : "update sales volume when service order complete",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "market" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--service_order" : { "bundle" : "service_order" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-so-status" ], "value" : "2" } },
        { "NOT data_is" : { "data" : [ "node-unchanged:field-so-status" ], "value" : "2" } },
        { "entity_has_field" : {
            "entity" : [ "node:field-from-service" ],
            "field" : "field_sales_volume"
          }
        }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "node:field-from-service:field-sales-volume" ],
              "op" : "+",
              "input_2" : "1"
            },
            "PROVIDE" : { "result" : { "result" : "Calculation result" } }
          }
        },
        { "data_set" : {
            "data" : [ "node:field-from-service:field-sales-volume" ],
            "value" : [ "result" ]
          }
        }
      ]
    }
  }');
  $items['rules_update_user_to_store'] = entity_import('rules_config', '{ "rules_update_user_to_store" : {
      "LABEL" : "update user to store",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "market" ],
      "REQUIRES" : [ "og", "rules" ],
      "ON" : { "node_update--store" : { "bundle" : "store" } },
      "IF" : [ { "og_entity_is_group" : { "entity" : [ "node" ] } } ],
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "node-unchanged:field-store-user" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "og_unsubscribe_user" : { "user" : [ "list-item" ], "group" : [ "node" ] } }
            ]
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-store-user" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "og_subcribe_user" : { "user" : [ "list-item" ], "group" : [ "node" ] } }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
