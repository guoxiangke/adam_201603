<?php
/**
 * @file
 * wfyz_user.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wfyz_user_taxonomy_default_vocabularies() {
  return array(
    'institution' => array(
      'name' => '机构',
      'machine_name' => 'institution',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'school' => array(
      'name' => '学校',
      'machine_name' => 'school',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'study_field' => array(
      'name' => '修读范畴',
      'machine_name' => 'study_field',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
