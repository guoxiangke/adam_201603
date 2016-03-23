<?php
/**
 * @file
 * wfyz_core.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wfyz_core_taxonomy_default_vocabularies() {
  return array(
    'category' => array(
      'name' => '标签',
      'machine_name' => 'category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
    ),
    'location' => array(
      'name' => '地区',
      'machine_name' => 'location',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
