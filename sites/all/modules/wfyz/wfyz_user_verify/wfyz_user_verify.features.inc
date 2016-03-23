<?php
/**
 * @file
 * wfyz_user_verify.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function wfyz_user_verify_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'realname_auth'
  $workflows['realname_auth'] = entity_import('Workflow', '{
    "name" : "realname_auth",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "1" : {"sid":"1","wid":"1","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "2" : {"sid":"2","wid":"1","weight":"-20","sysid":"0","state":"\\u5f85\\u5ba1\\u6838","status":"1","name":"pending"},
      "3" : {"sid":"3","wid":"1","weight":"-19","sysid":"0","state":"\\u5b9e\\u540d\\u4e0d\\u901a\\u8fc7","status":"1","name":"reject"},
      "4" : {"sid":"4","wid":"1","weight":"-18","sysid":"0","state":"\\u5b9e\\u540d\\u5df2\\u9a8c\\u8bc1","status":"1","name":"approve"}
    },
    "transitions" : {
      "1" : {"tid":"1","sid":"1","target_sid":"2","roles":{"-1":-1},"wid":"1","name":"1_2","label":""},
      "2" : {"tid":"2","sid":"2","target_sid":"2","roles":{"-1":-1,"1":1,"2":2,"3":3,"4":4,"6":6,"5":5,"8":8,"9":9,"7":7},"wid":"1","name":"2_2","label":"\\u6dfb\\u52a0\\u5907\\u6ce8"},
      "3" : {"tid":"3","sid":"2","target_sid":"3","roles":{"4":4,"5":5},"wid":"1","name":"2_3","label":""},
      "4" : {"tid":"4","sid":"2","target_sid":"4","roles":{"4":4,"5":5},"wid":"1","name":"2_4","label":""},
      "18" : {"tid":"18","sid":"3","target_sid":"2","roles":{"4":4,"5":5},"wid":"1","name":"3_2","label":"\\u6dfb\\u52a0\\u5907\\u6ce8"},
      "5" : {"tid":"5","sid":"3","target_sid":"3","roles":{"-1":-1,"1":1,"2":2,"3":3,"4":4,"6":6,"5":5,"8":8,"9":9,"7":7},"wid":"1","name":"3_3","label":""},
      "19" : {"tid":"19","sid":"3","target_sid":"4","roles":{"4":4,"5":5},"wid":"1","name":"3_4","label":""},
      "6" : {"tid":"6","sid":"4","target_sid":"4","roles":{"-1":-1,"1":1,"2":2,"3":3,"4":4,"6":6,"5":5,"8":8,"9":9,"7":7},"wid":"1","name":"4_4","label":"\\u6dfb\\u52a0\\u5907\\u6ce8"}
    },
    "label" : "\\u5b9e\\u540d\\u8ba4\\u8bc1",
    "typeMap" : [],
    "wid_original" : "1",
    "system_roles" : {
      "-1" : "(author)",
      "1" : "anonymous user",
      "2" : "authenticated user",
      "3" : "api user",
      "4" : "\\u7ba1\\u7406\\u5458",
      "6" : "\\u4f01\\u4e1a\\u7528\\u6237",
      "5" : "\\u79d1\\u670d\\u7ba1\\u7406\\u5458",
      "8" : "\\u4e2a\\u4eba\\u7528\\u6237(\\u5df2\\u5b9e\\u540d\\u9a8c\\u8bc1)",
      "9" : "\\u4e2a\\u4eba\\u7528\\u6237",
      "7" : "\\u4f01\\u4e1a\\u5b50\\u7528\\u6237"
    }
  }');

  return $workflows;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function wfyz_user_verify_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "profile2_regpath" && $api == "profile2_regpath") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wfyz_user_verify_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function wfyz_user_verify_default_profile2_type() {
  $items = array();
  $items['company'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "company",
    "label" : "\\u4f01\\u4e1a\\u7528\\u6237",
    "weight" : "4",
    "data" : { "registration" : 0, "roles" : { "6" : "6" }, "use_page" : 1 }
  }');
  $items['individual'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "individual",
    "label" : "\\u4e2a\\u4eba\\u7528\\u6237",
    "weight" : "0",
    "data" : { "registration" : 0, "roles" : { "5" : "5" }, "use_page" : 1 }
  }');
  return $items;
}
