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
 * Implements hook_eck_bundle_info().
 */
function wfyz_commerce_service_eck_bundle_info() {
  $items = array(
    'payment_entity_payment' => array(
      'machine_name' => 'payment_entity_payment',
      'entity_type' => 'payment_entity',
      'name' => 'payment',
      'label' => 'Payment',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function wfyz_commerce_service_eck_entity_type_info() {
  $items = array(
    'payment_entity' => array(
      'name' => 'payment_entity',
      'label' => 'Payment Entity',
      'properties' => array(),
    ),
  );
  return $items;
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
      'title_label' => t('Title'),
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
