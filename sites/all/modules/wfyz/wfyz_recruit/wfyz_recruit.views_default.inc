<?php
/**
 * @file
 * wfyz_recruit.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wfyz_recruit_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'recruit';
  $view->description = '';
  $view->tag = 'recruit';
  $view->base_table = 'node';
  $view->human_name = '人才招聘';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '人才集市';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'company' => 'company',
    'individual' => 'individual',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: 地区 */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '[[field_location]]';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d 发布';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: 待遇 */
  $handler->display->display_options['fields']['field_salary']['id'] = 'field_salary';
  $handler->display->display_options['fields']['field_salary']['table'] = 'field_data_field_salary';
  $handler->display->display_options['fields']['field_salary']['field'] = 'field_salary';
  $handler->display->display_options['fields']['field_salary']['label'] = '';
  $handler->display->display_options['fields']['field_salary']['element_label_colon'] = FALSE;
  /* Field: Field: 公司名称 */
  $handler->display->display_options['fields']['field_single_text']['id'] = 'field_single_text';
  $handler->display->display_options['fields']['field_single_text']['table'] = 'field_data_field_single_text';
  $handler->display->display_options['fields']['field_single_text']['field'] = 'field_single_text';
  $handler->display->display_options['fields']['field_single_text']['label'] = '';
  $handler->display->display_options['fields']['field_single_text']['element_label_colon'] = FALSE;
  /* Field: Content: 职位类别 */
  $handler->display->display_options['fields']['field_job_category']['id'] = 'field_job_category';
  $handler->display->display_options['fields']['field_job_category']['table'] = 'field_data_field_job_category';
  $handler->display->display_options['fields']['field_job_category']['field'] = 'field_job_category';
  /* Field: Content: 雇用性质 */
  $handler->display->display_options['fields']['field_employment_type']['id'] = 'field_employment_type';
  $handler->display->display_options['fields']['field_employment_type']['table'] = 'field_data_field_employment_type';
  $handler->display->display_options['fields']['field_employment_type']['field'] = 'field_employment_type';
  $handler->display->display_options['fields']['field_employment_type']['delta_offset'] = '0';
  /* Field: Content: 福利 */
  $handler->display->display_options['fields']['field_fringe_benefits']['id'] = 'field_fringe_benefits';
  $handler->display->display_options['fields']['field_fringe_benefits']['table'] = 'field_data_field_fringe_benefits';
  $handler->display->display_options['fields']['field_fringe_benefits']['field'] = 'field_fringe_benefits';
  $handler->display->display_options['fields']['field_fringe_benefits']['label'] = '';
  $handler->display->display_options['fields']['field_fringe_benefits']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fringe_benefits']['alter']['text'] = '<a>[field_fringe_benefits]</a>';
  $handler->display->display_options['fields']['field_fringe_benefits']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fringe_benefits']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fringe_benefits']['separator'] = '';
  /* Field: Content: 电邮 */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['text'] = '联系方式: [field_email]';
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  /* Field: Profile: 实名认证 */
  $handler->display->display_options['fields']['field_real_auth']['id'] = 'field_real_auth';
  $handler->display->display_options['fields']['field_real_auth']['table'] = 'field_data_field_real_auth';
  $handler->display->display_options['fields']['field_real_auth']['field'] = 'field_real_auth';
  $handler->display->display_options['fields']['field_real_auth']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_real_auth']['label'] = '';
  $handler->display->display_options['fields']['field_real_auth']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_real_auth']['alter']['text'] = '<a>[field_real_auth]</a>';
  $handler->display->display_options['fields']['field_real_auth']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_real_auth']['empty'] = '<a>没有认证</a>';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recruitment' => 'recruitment',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = '职位名称';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
  );
  /* Filter criterion: Content: 地区 (field_location) */
  $handler->display->display_options['filters']['field_location_tid']['id'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_tid']['field'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_tid']['expose']['operator_id'] = 'field_location_tid_op';
  $handler->display->display_options['filters']['field_location_tid']['expose']['label'] = '地区';
  $handler->display->display_options['filters']['field_location_tid']['expose']['operator'] = 'field_location_tid_op';
  $handler->display->display_options['filters']['field_location_tid']['expose']['identifier'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_location_tid']['type'] = 'textfield';
  $handler->display->display_options['filters']['field_location_tid']['vocabulary'] = 'location';
  /* Filter criterion: Content: 待遇 (field_salary) */
  $handler->display->display_options['filters']['field_salary_value']['id'] = 'field_salary_value';
  $handler->display->display_options['filters']['field_salary_value']['table'] = 'field_data_field_salary';
  $handler->display->display_options['filters']['field_salary_value']['field'] = 'field_salary_value';
  $handler->display->display_options['filters']['field_salary_value']['value'] = array(
    'all' => 'all',
    '1000-2000元' => '1000-2000元',
    '2001-5000元' => '2001-5000元',
    '5001-8000元' => '5001-8000元',
    '8001-12000元' => '8001-12000元',
    '12000以上' => '12000以上',
  );
  $handler->display->display_options['filters']['field_salary_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_salary_value']['expose']['operator_id'] = 'field_salary_value_op';
  $handler->display->display_options['filters']['field_salary_value']['expose']['label'] = '待遇';
  $handler->display->display_options['filters']['field_salary_value']['expose']['operator'] = 'field_salary_value_op';
  $handler->display->display_options['filters']['field_salary_value']['expose']['identifier'] = 'field_salary_value';
  $handler->display->display_options['filters']['field_salary_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_salary_value']['expose']['reduce'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'recruit';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '人才集市';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['recruit'] = $view;

  return $export;
}
