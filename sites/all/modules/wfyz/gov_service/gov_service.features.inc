<?php
/**
 * @file
 * gov_service.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function gov_service_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'gov_service'
  $workflows['gov_service'] = entity_import('Workflow', '{
    "name" : "gov_service",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "5" : {"sid":"5","wid":"2","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "6" : {"sid":"6","wid":"2","weight":"-20","sysid":"0","state":"\\u8d44\\u6599\\u5df2\\u63d0\\u4ea4","status":"1","name":"doc_submitted"},
      "7" : {"sid":"7","wid":"2","weight":"-19","sysid":"0","state":"\\u8d44\\u6599\\u6709\\u8bef\\uff0c\\u9700\\u91cd\\u65b0\\u63d0\\u4ea4","status":"1","name":"doc_mistake"},
      "8" : {"sid":"8","wid":"2","weight":"-18","sysid":"0","state":"\\u8d44\\u6599\\u65e0\\u8bef\\uff0c\\u51c6\\u5907\\u63d0\\u4ea4\\u7a97\\u53e3","status":"1","name":"doc_correct"},
      "9" : {"sid":"9","wid":"2","weight":"-17","sysid":"0","state":"\\u5df2\\u63d0\\u4ea4\\u7a97\\u53e3","status":"1","name":"submitted_to_gov"},
      "10" : {"sid":"10","wid":"2","weight":"-16","sysid":"0","state":"\\u53ef\\u4ee5\\u53d6\\u4ef6\\uff0c\\u529e\\u7406\\u5b8c\\u6210","status":"1","name":"get_doc"}
    },
    "transitions" : {
      "7" : {"tid":"7","sid":"5","target_sid":"6","roles":{"-1":-1},"wid":"2","name":"5_6","label":""},
      "8" : {"tid":"8","sid":"6","target_sid":"6","roles":{"-1":-1,"1":1,"2":2,"3":3,"4":4,"6":6,"5":5,"8":8,"9":9,"7":7},"wid":"2","name":"6_6","label":"\\u6dfb\\u52a0\\u6d41\\u7a0b\\u5907\\u6ce8"},
      "9" : {"tid":"9","sid":"6","target_sid":"7","roles":{"4":4,"5":5},"wid":"2","name":"6_7","label":""},
      "10" : {"tid":"10","sid":"6","target_sid":"8","roles":{"4":4,"5":5},"wid":"2","name":"6_8","label":""},
      "11" : {"tid":"11","sid":"7","target_sid":"7","roles":{"-1":-1,"1":1,"2":2,"3":3,"4":4,"6":6,"5":5,"8":8,"9":9,"7":7},"wid":"2","name":"7_7","label":"\\u6dfb\\u52a0\\u6d41\\u7a0b\\u5907\\u6ce8"},
      "12" : {"tid":"12","sid":"7","target_sid":"8","roles":{"4":4,"5":5},"wid":"2","name":"7_8","label":""},
      "13" : {"tid":"13","sid":"8","target_sid":"8","roles":{"-1":-1,"1":1,"2":2,"3":3,"4":4,"6":6,"5":5,"8":8,"9":9,"7":7},"wid":"2","name":"8_8","label":"\\u6dfb\\u52a0\\u6d41\\u7a0b\\u5907\\u6ce8"},
      "14" : {"tid":"14","sid":"8","target_sid":"9","roles":{"4":4,"5":5},"wid":"2","name":"8_9","label":""},
      "15" : {"tid":"15","sid":"9","target_sid":"9","roles":{"-1":-1,"1":1,"2":2,"3":3,"4":4,"6":6,"5":5,"8":8,"9":9,"7":7},"wid":"2","name":"9_9","label":"\\u6dfb\\u52a0\\u6d41\\u7a0b\\u5907\\u6ce8"},
      "16" : {"tid":"16","sid":"9","target_sid":"10","roles":{"4":4,"5":5},"wid":"2","name":"9_10","label":""},
      "17" : {"tid":"17","sid":"10","target_sid":"10","roles":{"-1":-1,"1":1,"2":2,"3":3,"4":4,"6":6,"5":5,"8":8,"9":9,"7":7},"wid":"2","name":"10_10","label":""}
    },
    "label" : "\\u884c\\u653f\\u670d\\u52a1\\u53d7\\u7406\\u6d41\\u7a0b",
    "typeMap" : [],
    "wid_original" : "2",
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
 * Implements hook_views_api().
 */
function gov_service_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function gov_service_eck_bundle_info() {
  $items = array(
    'gov_service_doc_gov_service_doc' => array(
      'machine_name' => 'gov_service_doc_gov_service_doc',
      'entity_type' => 'gov_service_doc',
      'name' => 'gov_service_doc',
      'label' => 'Gov Service Doc',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function gov_service_eck_entity_type_info() {
  $items = array(
    'gov_service_doc' => array(
      'name' => 'gov_service_doc',
      'label' => 'Gov Service Doc',
      'properties' => array(
        'doc_title' => array(
          'label' => '文件名称',
          'type' => 'text',
          'behavior' => 'title',
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_node_info().
 */
function gov_service_node_info() {
  $items = array(
    'gov_service_info' => array(
      'name' => t('行政服务'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('标题'),
      'help' => '',
    ),
    'gov_service_order' => array(
      'name' => t('行政服务受理订单'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('受理编号'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
