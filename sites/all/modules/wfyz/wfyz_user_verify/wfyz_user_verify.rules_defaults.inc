<?php
/**
 * @file
 * wfyz_user_verify.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function wfyz_user_verify_default_rules_configuration() {
  $items = array();
  $items['rules_assign_role_on_user_register'] = entity_import('rules_config', '{ "rules_assign_role_on_user_register" : {
      "LABEL" : "Assign role on user register",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "user role" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "9" : "9" } } } }
      ]
    }
  }');
  $items['rules_company_auth'] = entity_import('rules_config', '{ "rules_company_auth" : {
      "LABEL" : "Company Auth",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "user role" ],
      "REQUIRES" : [ "rules", "profile2" ],
      "ON" : { "profile2_update" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "profile2" ],
            "type" : "profile2",
            "bundle" : { "value" : { "company" : "company" } }
          }
        },
        { "data_is" : { "data" : [ "profile2:field-real-auth" ], "value" : "4" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "profile2:user" ], "roles" : { "value" : { "6" : "6" } } } },
        { "drupal_message" : { "message" : "\\u4f01\\u4e1a\\u7528\\u6237\\u6743\\u9650\\u5df2\\u7ecf\\u53d1\\u9001\\u3002" } }
      ]
    }
  }');
  $items['rules_individual_auth'] = entity_import('rules_config', '{ "rules_individual_auth" : {
      "LABEL" : "Individual Auth",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "user role" ],
      "REQUIRES" : [ "rules", "profile2" ],
      "ON" : { "profile2_update" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "profile2" ],
            "type" : "profile2",
            "bundle" : { "value" : { "individual" : "individual" } }
          }
        },
        { "data_is" : { "data" : [ "profile2:field-real-auth" ], "value" : "4" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "profile2:user" ], "roles" : { "value" : { "8" : "8" } } } },
        { "drupal_message" : { "message" : "\\u4e2a\\u4eba\\u7528\\u6237\\u5df2\\u9a8c\\u8bc1\\u6743\\u9650\\u5df2\\u7ecf\\u53d1\\u9001\\u3002" } }
      ]
    }
  }');
  return $items;
}
