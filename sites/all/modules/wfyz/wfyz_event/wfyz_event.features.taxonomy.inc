<?php
/**
 * @file
 * wfyz_event.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wfyz_event_taxonomy_default_vocabularies() {
  return array(
    'networking' => array(
      'name' => '活动类别',
      'machine_name' => 'networking',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
    ),
  );
}
