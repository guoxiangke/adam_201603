<?php
/**
 * @file
 * wfyz_news.features.inc
 */

/**
 * Implements hook_views_api().
 */
function wfyz_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function wfyz_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('综合信息'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('标题'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
