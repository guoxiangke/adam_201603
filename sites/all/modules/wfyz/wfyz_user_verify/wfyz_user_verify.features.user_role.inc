<?php
/**
 * @file
 * wfyz_user_verify.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wfyz_user_verify_user_default_roles() {
  $roles = array();

  // Exported role: 个人用户.
  $roles['个人用户'] = array(
    'name' => '个人用户',
    'weight' => 6,
  );

  // Exported role: 个人用户(已实名验证).
  $roles['个人用户(已实名验证)'] = array(
    'name' => '个人用户(已实名验证)',
    'weight' => 5,
  );

  // Exported role: 企业子用户.
  $roles['企业子用户'] = array(
    'name' => '企业子用户',
    'weight' => 7,
  );

  // Exported role: 企业用户.
  $roles['企业用户'] = array(
    'name' => '企业用户',
    'weight' => 4,
  );

  return $roles;
}
