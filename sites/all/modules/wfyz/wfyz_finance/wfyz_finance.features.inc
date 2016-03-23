<?php
/**
 * @file
 * wfyz_finance.features.inc
 */

/**
 * Implements hook_views_api().
 */
function wfyz_finance_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function wfyz_finance_node_info() {
  $items = array(
    'finance_case' => array(
      'name' => t('金融案例'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('标题'),
      'help' => '',
    ),
    'fund' => array(
      'name' => t('资金'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('资金名称'),
      'help' => '',
    ),
    'project' => array(
      'name' => t('项目'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('项目名称'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
