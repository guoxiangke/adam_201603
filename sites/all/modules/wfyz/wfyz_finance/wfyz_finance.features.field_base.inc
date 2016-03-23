<?php
/**
 * @file
 * wfyz_finance.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function wfyz_finance_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_finance_type'.
  $field_bases['field_finance_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_finance_type',
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
        '个人融资' => '个人融资',
        '企业融资' => '企业融资',
        '政府招商引资' => '政府招商引资',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_fund_nature'.
  $field_bases['field_fund_nature'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_fund_nature',
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
        '个人投资' => '个人投资',
        '企业投资' => '企业投资',
        '典当担保' => '典当担保',
        '小额贷款' => '小额贷款',
        '投资公司' => '投资公司',
        '投资银行' => '投资银行',
        '私募基金' => '私募基金',
        '金融租赁' => '金融租赁',
        '风险投资' => '风险投资',
        '其他性质' => '其他性质',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_invest_amount'.
  $field_bases['field_invest_amount'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_invest_amount',
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
        '100万以下' => '100万以下',
        '100万-500万' => '100万-500万',
        '500万-1000万' => '500万-1000万',
        '1000万-3000万' => '1000万-3000万',
        '3000万-1亿' => '3000万-1亿',
        '1亿以上' => '1亿以上',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_invest_area'.
  $field_bases['field_invest_area'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_invest_area',
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
        '科研技术' => '科研技术',
        '能源动力' => '能源动力',
        '节能环保' => '节能环保',
        '社会服务' => '社会服务',
        '石油化工' => '石油化工',
        '生物技术' => '生物技术',
        '电子商务' => '电子商务',
        '电子通讯' => '电子通讯',
        '轻工纺织' => '轻工纺织',
        '金融投资' => '金融投资',
        '食品饮料' => '食品饮料',
        '物流仓储' => '物流仓储',
        '机械机电' => '机械机电',
        '加工制造' => '加工制造',
        '医疗健康' => '医疗健康',
        '基础设施' => '基础设施',
        '冶金矿产' => '冶金矿产',
        '农林牧渔' => '农林牧渔',
        '住宿餐饮' => '住宿餐饮',
        '信息产业' => '信息产业',
        '广告传媒' => '广告传媒',
        '建筑建材' => '建筑建材',
        '文体娱乐' => '文体娱乐',
        '旅游休闲' => '旅游休闲',
        '交通运输' => '交通运输',
        '教育培训' => '教育培训',
        '房地产业' => '房地产业',
        '批发零售' => '批发零售',
        '影视出版' => '影视出版',
        'IT互联网' => 'IT互联网',
        '不限行业' => '不限行业',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_invest_stage'.
  $field_bases['field_invest_stage'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_invest_stage',
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
        '不限' => '不限',
        '种子期' => '种子期',
        '初创期' => '初创期',
        '成长期' => '成长期',
        '扩张期' => '扩张期',
        '成熟期' => '成熟期',
        'Pre-IPO' => 'Pre-IPO',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
