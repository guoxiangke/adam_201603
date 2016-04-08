<?php
/**
 * @file
 * wfyz_commerce_service.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function wfyz_commerce_service_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'service_order_payment'
  $workflows['service_order_payment'] = entity_import('Workflow', '{
    "name" : "service_order_payment",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "11" : {"sid":"11","wid":"3","weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "12" : {"sid":"12","wid":"3","weight":"-20","sysid":"0","state":"\\u672a\\u652f\\u4ed8","status":"1","name":"unpaid"},
      "13" : {"sid":"13","wid":"3","weight":"-19","sysid":"0","state":"\\u5df2\\u652f\\u4ed8\\u5e73\\u53f0","status":"1","name":"paid_to_platform"},
      "14" : {"sid":"14","wid":"3","weight":"-18","sysid":"0","state":"\\u5df2\\u652f\\u4ed8\\u5546\\u5bb6","status":"1","name":"paid_to_vendor"},
      "15" : {"sid":"15","wid":"3","weight":"-17","sysid":"0","state":"\\u7533\\u8bf7\\u9000\\u6b3e\\u4e2d","status":"1","name":"applied_refund"},
      "16" : {"sid":"16","wid":"3","weight":"-16","sysid":"0","state":"\\u5df2\\u9000\\u6b3e","status":"1","name":"refunded"},
      "17" : {"sid":"17","wid":"3","weight":"-15","sysid":"0","state":"\\u9000\\u6b3e\\u5931\\u8d25","status":"1","name":"refund_fail"}
    },
    "transitions" : {
      "20" : {"tid":"20","sid":"11","target_sid":"12","roles":{"-1":-1},"wid":"3","name":"11_12","label":""},
      "21" : {"tid":"21","sid":"12","target_sid":"12","roles":{"-1":-1,"1":1,"2":2,"3":3,"4":4,"6":6,"5":5,"8":8,"9":9,"7":7},"wid":"3","name":"12_12","label":""},
      "22" : {"tid":"22","sid":"12","target_sid":"13","roles":{"-1":-1},"wid":"3","name":"12_13","label":"\\u652f\\u4ed8"},
      "23" : {"tid":"23","sid":"13","target_sid":"13","roles":{"-1":-1,"1":1,"2":2,"3":3,"4":4,"6":6,"5":5,"8":8,"9":9,"7":7},"wid":"3","name":"13_13","label":""},
      "24" : {"tid":"24","sid":"13","target_sid":"14","roles":{"-1":-1},"wid":"3","name":"13_14","label":"\\u786e\\u8ba4\\u5b8c\\u6210"},
      "25" : {"tid":"25","sid":"13","target_sid":"15","roles":{"-1":-1},"wid":"3","name":"13_15","label":"\\u7533\\u8bf7\\u9000\\u6b3e"},
      "26" : {"tid":"26","sid":"14","target_sid":"14","roles":{"-1":-1,"1":1,"2":2,"3":3,"4":4,"6":6,"5":5,"8":8,"9":9,"7":7},"wid":"3","name":"14_14","label":""},
      "27" : {"tid":"27","sid":"15","target_sid":"15","roles":{"-1":-1,"1":1,"2":2,"3":3,"4":4,"6":6,"5":5,"8":8,"9":9,"7":7},"wid":"3","name":"15_15","label":""},
      "28" : {"tid":"28","sid":"15","target_sid":"16","roles":{"4":4,"5":5},"wid":"3","name":"15_16","label":""},
      "29" : {"tid":"29","sid":"15","target_sid":"17","roles":{"4":4,"5":5},"wid":"3","name":"15_17","label":""},
      "30" : {"tid":"30","sid":"16","target_sid":"16","roles":{"-1":-1,"1":1,"2":2,"3":3,"4":4,"6":6,"5":5,"8":8,"9":9,"7":7},"wid":"3","name":"16_16","label":""},
      "31" : {"tid":"31","sid":"17","target_sid":"17","roles":{"-1":-1,"1":1,"2":2,"3":3,"4":4,"6":6,"5":5,"8":8,"9":9,"7":7},"wid":"3","name":"17_17","label":""}
    },
    "label" : "\\u670d\\u52a1\\u8ba2\\u5355\\u652f\\u4ed8\\u6d41\\u7a0b",
    "typeMap" : [],
    "wid_original" : "3",
    "system_roles" : {
      "-1" : "(\\u4f5c\\u8005)",
      "1" : "\\u533f\\u540d\\u7528\\u6237",
      "2" : "\\u6ce8\\u518c\\u7528\\u6237",
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
function wfyz_commerce_service_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function wfyz_commerce_service_flag_default_flags() {
  $flags = array();
  // Exported flag: "Cancel Sales Order".
  $flags['cancel_sales_order'] = array(
    'entity_type' => 'node',
    'title' => 'Cancel Sales Order',
    'global' => 1,
    'types' => array(
      0 => 'service_order',
    ),
    'flag_short' => '取消订单',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => '订单已取消',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '订单已取消',
    'link_type' => 'confirm',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'diff_standard' => 0,
      'ief_table' => 0,
      'token' => 0,
      'workflow_tab' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => 'own',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'flag_confirmation' => '确认取消订单?',
    'unflag_confirmation' => '确认不取消订单?',
    'module' => 'wfyz_commerce_service',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Paid to vendor".
  $flags['paid_to_vendor'] = array(
    'entity_type' => 'field_collection_item',
    'title' => 'Paid to vendor',
    'global' => 1,
    'types' => array(
      0 => 'field_payment',
    ),
    'flag_short' => '标示为已付给商家',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => '已付给商家',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '已付给商家',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
      'ief_table' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'wfyz_commerce_service',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function wfyz_commerce_service_image_default_styles() {
  $styles = array();

  // Exported image style: service_catalog.
  $styles['service_catalog'] = array(
    'label' => 'Service Catalog (600 x 380)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 380,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: service_catalog_thumbnail.
  $styles['service_catalog_thumbnail'] = array(
    'label' => 'Service Catalog Thumbnail (145 x 90)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 145,
          'height' => 90,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function wfyz_commerce_service_node_info() {
  $items = array(
    'service' => array(
      'name' => t('服务'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('服务标题'),
      'help' => '',
    ),
    'service_order' => array(
      'name' => t('服务订单'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('服务订单号'),
      'help' => '',
    ),
    'service_requirement' => array(
      'name' => t('服务需求'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('需求标题'),
      'help' => '',
    ),
    'store' => array(
      'name' => t('店铺'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('店铺名称'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
