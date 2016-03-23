<?php
/**
 * @file
 * wfyz_commerce_service.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wfyz_commerce_service_taxonomy_default_vocabularies() {
  return array(
    'service_type' => array(
      'name' => '服务分类',
      'machine_name' => 'service_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
    ),
  );
}
