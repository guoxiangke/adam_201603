<?php
/**
 * @file
 * wfyz_user.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function wfyz_user_default_rules_configuration() {
  $items = array();
  $items['rules_user_login_page_redirect'] = entity_import('rules_config', '{ "rules_user_login_page_redirect" : {
      "LABEL" : "User login page redirect",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [ { "NOT data_is_empty" : { "data" : [ "account:last-access" ] } } ],
      "DO" : [ { "redirect" : { "url" : [ "site:url" ] } } ]
    }
  }');
  return $items;
}
