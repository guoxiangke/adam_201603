<?php
/**
 * @file
 * wfyz_user_verify.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function wfyz_user_verify_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_real_auth'.
  $field_bases['field_real_auth'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_real_auth',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'workflowfield',
    'settings' => array(
      'allowed_values_function' => 'workflowfield_allowed_values',
      'allowed_values_string' => '1 | (creation)
2 | 待审核
3 | 实名不通过
4 | 实名已验证',
      'history' => array(
        'history_tab_show' => 1,
        'roles' => array(
          -1 => -1,
          3 => 3,
        ),
      ),
      'profile2_private' => 1,
      'watchdog_log' => 1,
      'wid' => 1,
      'widget' => array(
        'comment' => 1,
        'fieldset' => 0,
        'hide' => 1,
        'name_as_title' => 1,
        'options' => 'select',
        'schedule' => 0,
        'schedule_timezone' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'workflow',
  );

  return $field_bases;
}
