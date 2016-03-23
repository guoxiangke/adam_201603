<?php
/**
 * @file
 * wfyz_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wfyz_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function wfyz_user_eck_bundle_info() {
  $items = array(
    'personal_info_education' => array(
      'machine_name' => 'personal_info_education',
      'entity_type' => 'personal_info',
      'name' => 'education',
      'label' => 'Education',
      'config' => array(),
    ),
    'personal_info_experience' => array(
      'machine_name' => 'personal_info_experience',
      'entity_type' => 'personal_info',
      'name' => 'experience',
      'label' => 'Experience',
      'config' => array(),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function wfyz_user_eck_entity_type_info() {
  $items = array(
    'personal_info' => array(
      'name' => 'personal_info',
      'label' => 'Personal Info',
      'properties' => array(),
    ),
  );
  return $items;
}
