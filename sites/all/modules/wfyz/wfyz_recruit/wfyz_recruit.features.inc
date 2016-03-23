<?php
/**
 * @file
 * wfyz_recruit.features.inc
 */

/**
 * Implements hook_views_api().
 */
function wfyz_recruit_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function wfyz_recruit_node_info() {
  $items = array(
    'recruitment' => array(
      'name' => t('招聘'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('职位名称'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
