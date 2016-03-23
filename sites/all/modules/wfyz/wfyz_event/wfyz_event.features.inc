<?php
/**
 * @file
 * wfyz_event.features.inc
 */

/**
 * Implements hook_views_api().
 */
function wfyz_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function wfyz_event_flag_default_flags() {
  $flags = array();
  // Exported flag: "报名".
  $flags['signup'] = array(
    'entity_type' => 'node',
    'title' => '报名',
    'global' => 0,
    'types' => array(
      0 => 'event',
    ),
    'flag_short' => '我要参加',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => '我已参加',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '我已参加',
    'link_type' => 'confirm',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'token' => 0,
      'workflow_tab' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'flag_confirmation' => '确定报名？',
    'unflag_confirmation' => '确定取消？',
    'module' => 'wfyz_event',
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
function wfyz_event_image_default_styles() {
  $styles = array();

  // Exported image style: event_logo.
  $styles['event_logo'] = array(
    'label' => 'Event Logo (380x300)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 380,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function wfyz_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('活动'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('活动标题'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
