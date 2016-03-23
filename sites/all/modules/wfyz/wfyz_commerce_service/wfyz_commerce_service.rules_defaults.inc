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
  $items['rules_update_sales_vol_ser_order_complete'] = entity_import('rules_config', '{ "rules_update_sales_vol_ser_order_complete" : {
      "LABEL" : "update sales volume when service order complete",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "service" ],
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
  return $items;
}
