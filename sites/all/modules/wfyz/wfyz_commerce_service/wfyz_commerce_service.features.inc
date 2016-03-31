<?php
/**
 * @file
 * wfyz_commerce_service.features.inc
 */

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
