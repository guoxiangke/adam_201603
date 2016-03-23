<?php
/**
 * @file
 * wfyz_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wfyz_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wfyz_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function wfyz_core_flag_default_flags() {
  $flags = array();
  // Exported flag: "收藏".
  $flags['bookmark'] = array(
    'entity_type' => 'node',
    'title' => '收藏',
    'global' => 0,
    'types' => array(
      0 => 'store',
      1 => 'service',
      2 => 'gov_service_info',
    ),
    'flag_short' => '收藏',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => '取消收藏',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'ief_table' => 0,
      'token' => 0,
      'workflow_tab' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'wfyz_core',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "举报".
  $flags['report'] = array(
    'entity_type' => 'node',
    'title' => '举报',
    'global' => 0,
    'types' => array(
      0 => 'service',
    ),
    'flag_short' => '举报',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => '取消举报',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'ief_table' => 0,
      'token' => 0,
      'workflow_tab' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'wfyz_core',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function wfyz_core_node_info() {
  $items = array(
    'page' => array(
      'name' => t('一般页面'),
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
