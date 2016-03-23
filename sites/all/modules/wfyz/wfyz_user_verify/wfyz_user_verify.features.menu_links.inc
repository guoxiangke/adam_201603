<?php
/**
 * @file
 * wfyz_user_verify.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function wfyz_user_verify_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-member-menu_:profile-company.
  $menu_links['menu-member-menu_:profile-company'] = array(
    'menu_name' => 'menu-member-menu',
    'link_path' => 'profile-company',
    'router_path' => 'profile-company',
    'link_title' => '企业实名验证资料',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-member-menu_:profile-company',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-member-menu_:user',
  );
  // Exported menu link: menu-member-menu_:profile-individual.
  $menu_links['menu-member-menu_:profile-individual'] = array(
    'menu_name' => 'menu-member-menu',
    'link_path' => 'profile-individual',
    'router_path' => 'profile-individual',
    'link_title' => '个人实名验证资料',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-member-menu_:profile-individual',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-member-menu_:user',
  );
  // Exported menu link: menu-member-menu_:user.
  $menu_links['menu-member-menu_:user'] = array(
    'menu_name' => 'menu-member-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => '我的资料',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-member-menu_:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('个人实名验证资料');
  t('企业实名验证资料');
  t('我的资料');

  return $menu_links;
}
