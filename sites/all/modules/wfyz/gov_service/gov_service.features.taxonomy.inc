<?php
/**
 * @file
 * gov_service.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gov_service_taxonomy_default_vocabularies() {
  return array(
    'gov_department' => array(
      'name' => '行政部门',
      'machine_name' => 'gov_department',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
