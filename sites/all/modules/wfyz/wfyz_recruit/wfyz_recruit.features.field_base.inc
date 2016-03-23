<?php
/**
 * @file
 * wfyz_recruit.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function wfyz_recruit_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_employment_type'.
  $field_bases['field_employment_type'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_employment_type',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '全职' => '全职',
        '兼职' => '兼职',
        '临时' => '临时',
        '实习' => '实习',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_fringe_benefits'.
  $field_bases['field_fringe_benefits'] = array(
    'active' => 1,
    'cardinality' => 5,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_fringe_benefits',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '五险' => '五险',
        '公积金' => '公积金',
        '带薪年假' => '带薪年假',
        '年终奖' => '年终奖',
        '工作餐' => '工作餐',
        '公费旅游' => '公费旅游',
        '免费培训' => '免费培训',
        '班车接送' => '班车接送',
        '下午茶' => '下午茶',
        '年底双薪' => '年底双薪',
        '包吃' => '包吃',
        '包住宿' => '包住宿',
        '环境好' => '环境好',
        '双休' => '双休',
        '加班费' => '加班费',
        '朝九晚五' => '朝九晚五',
        '美女多' => '美女多',
        '帅哥多' => '帅哥多',
        '有提成' => '有提成',
        '全勤奖' => '全勤奖',
        '有补助' => '有补助',
        '晋升快' => '晋升快',
        '车贴' => '车贴',
        '房贴' => '房贴',
        '健康体检' => '健康体检',
        '住房补贴' => '住房补贴',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_job_category'.
  $field_bases['field_job_category'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_job_category',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'job_category',
          'parent' => 0,
        ),
      ),
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_salary'.
  $field_bases['field_salary'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_salary',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '1000-2000元' => '1000-2000元',
        '2001-5000元' => '2001-5000元',
        '5001-8000元' => '5001-8000元',
        '8001-12000元' => '8001-12000元',
        '12000以上' => '12000以上',
        '面议' => '面议',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
