<?php
/**
 * @file
 * wfyz_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function wfyz_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-admin-menu.
  $menus['menu-admin-menu'] = array(
    'menu_name' => 'menu-admin-menu',
    'title' => 'Admin Menu',
    'description' => '',
  );
  // Exported menu: menu-member-menu.
  $menus['menu-member-menu'] = array(
    'menu_name' => 'menu-member-menu',
    'title' => 'Member Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Menu');
  t('Member Menu');

  return $menus;
}
