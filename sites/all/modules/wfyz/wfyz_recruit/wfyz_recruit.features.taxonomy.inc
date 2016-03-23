<?php
/**
 * @file
 * wfyz_recruit.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wfyz_recruit_taxonomy_default_vocabularies() {
  return array(
    'job_category' => array(
      'name' => '职位类别',
      'machine_name' => 'job_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
