<?php
/**
 * @file
 * wfyz_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function wfyz_news_taxonomy_default_vocabularies() {
  return array(
    'info_category' => array(
      'name' => '综合信息类别',
      'machine_name' => 'info_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
    ),
  );
}
