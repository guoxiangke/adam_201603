<?php
/**
 * @file
 * gov_service.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gov_service_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gov_service';
  $view->description = '';
  $view->tag = 'gov-service';
  $view->base_table = 'node';
  $view->human_name = '行政服务';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '行政服务';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'full_html_no_editor',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_gov_dept_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="row">
          <div class="col-lg-4 col-md-4 col-sm-12">[field_image_logo]</div>
          <div class="col-lg-8 col-md-8 col-sm-12">[description]</div>
</div>
<p>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html_no_editor';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relationship: Content: 行政部门 (field_gov_dept) */
  $handler->display->display_options['relationships']['field_gov_dept_tid']['id'] = 'field_gov_dept_tid';
  $handler->display->display_options['relationships']['field_gov_dept_tid']['table'] = 'field_data_field_gov_dept';
  $handler->display->display_options['relationships']['field_gov_dept_tid']['field'] = 'field_gov_dept_tid';
  /* Field: Field: 行政部门封面图 */
  $handler->display->display_options['fields']['field_image_logo']['id'] = 'field_image_logo';
  $handler->display->display_options['fields']['field_image_logo']['table'] = 'field_data_field_image_logo';
  $handler->display->display_options['fields']['field_image_logo']['field'] = 'field_image_logo';
  $handler->display->display_options['fields']['field_image_logo']['relationship'] = 'field_gov_dept_tid';
  $handler->display->display_options['fields']['field_image_logo']['label'] = '';
  $handler->display->display_options['fields']['field_image_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_logo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_logo']['settings'] = array(
    'image_style' => 'event_logo',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_logo']['group_column'] = 'entity_id';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_gov_dept_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '0';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: 身份证照片 */
  $handler->display->display_options['fields']['field_single_image']['id'] = 'field_single_image';
  $handler->display->display_options['fields']['field_single_image']['table'] = 'field_data_field_single_image';
  $handler->display->display_options['fields']['field_single_image']['field'] = 'field_single_image';
  $handler->display->display_options['fields']['field_single_image']['label'] = '';
  $handler->display->display_options['fields']['field_single_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_single_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_single_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: 所需文件 */
  $handler->display->display_options['fields']['field_doc_required']['id'] = 'field_doc_required';
  $handler->display->display_options['fields']['field_doc_required']['table'] = 'field_data_field_doc_required';
  $handler->display->display_options['fields']['field_doc_required']['field'] = 'field_doc_required';
  $handler->display->display_options['fields']['field_doc_required']['label'] = '';
  $handler->display->display_options['fields']['field_doc_required']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_required']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_doc_required']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_doc_required']['settings'] = array(
    'view_mode' => 'ief_table',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_doc_required']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_doc_required']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_doc_required']['separator'] = '';
  /* Field: Content: 内容 */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: 申报日期 */
  $handler->display->display_options['fields']['field_multiple_date']['id'] = 'field_multiple_date';
  $handler->display->display_options['fields']['field_multiple_date']['table'] = 'field_data_field_multiple_date';
  $handler->display->display_options['fields']['field_multiple_date']['field'] = 'field_multiple_date';
  $handler->display->display_options['fields']['field_multiple_date']['label'] = '';
  $handler->display->display_options['fields']['field_multiple_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_multiple_date']['alter']['text'] = '申报日期: [field_multiple_date]';
  $handler->display->display_options['fields']['field_multiple_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_multiple_date']['settings'] = array(
    'format_type' => 'china_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_multiple_date']['delta_offset'] = '0';
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
    'gov_service_info' => 'gov_service_info',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: 行政部门 (field_gov_dept) */
  $handler->display->display_options['filters']['field_gov_dept_tid']['id'] = 'field_gov_dept_tid';
  $handler->display->display_options['filters']['field_gov_dept_tid']['table'] = 'field_data_field_gov_dept';
  $handler->display->display_options['filters']['field_gov_dept_tid']['field'] = 'field_gov_dept_tid';
  $handler->display->display_options['filters']['field_gov_dept_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_gov_dept_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_gov_dept_tid']['expose']['operator_id'] = 'field_gov_dept_tid_op';
  $handler->display->display_options['filters']['field_gov_dept_tid']['expose']['label'] = '行政部门';
  $handler->display->display_options['filters']['field_gov_dept_tid']['expose']['operator'] = 'field_gov_dept_tid_op';
  $handler->display->display_options['filters']['field_gov_dept_tid']['expose']['identifier'] = 'field_gov_dept_tid';
  $handler->display->display_options['filters']['field_gov_dept_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_gov_dept_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_gov_dept_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_gov_dept_tid']['vocabulary'] = 'gov_department';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gov-service';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '行政服务';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['gov_service'] = $view;

  $view = new view();
  $view->name = 'gov_service_admin';
  $view->description = '';
  $view->tag = 'gov-service';
  $view->base_table = 'node';
  $view->human_name = '行政服务管理';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/gov-service-order" style="background: #b73939; color: #fff; padding: 10px; float: right; margin-bottom: 10px;">新增行政服务受理订单</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html_no_editor';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '受理编号';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: 申办服务 */
  $handler->display->display_options['fields']['field_gov_service_apply']['id'] = 'field_gov_service_apply';
  $handler->display->display_options['fields']['field_gov_service_apply']['table'] = 'field_data_field_gov_service_apply';
  $handler->display->display_options['fields']['field_gov_service_apply']['field'] = 'field_gov_service_apply';
  $handler->display->display_options['fields']['field_gov_service_apply']['label'] = '行政服务';
  $handler->display->display_options['fields']['field_gov_service_apply']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: 申办人 */
  $handler->display->display_options['fields']['field_applicant']['id'] = 'field_applicant';
  $handler->display->display_options['fields']['field_applicant']['table'] = 'field_data_field_applicant';
  $handler->display->display_options['fields']['field_applicant']['field'] = 'field_applicant';
  $handler->display->display_options['fields']['field_applicant']['label'] = '申请人';
  $handler->display->display_options['fields']['field_applicant']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: 备注 */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '目前状态';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Field: Workflow history: Old state name */
  $handler->display->display_options['fields']['old_sid']['id'] = 'old_sid';
  $handler->display->display_options['fields']['old_sid']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['old_sid']['field'] = 'old_sid';
  $handler->display->display_options['fields']['old_sid']['label'] = '';
  $handler->display->display_options['fields']['old_sid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['old_sid']['element_label_colon'] = FALSE;
  /* Field: Workflow history: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  $handler->display->display_options['fields']['comment']['label'] = '';
  $handler->display->display_options['fields']['comment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment']['alter']['text'] = ' - [comment] ';
  $handler->display->display_options['fields']['comment']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[old_sid][comment]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: 行政服务流程 */
  $handler->display->display_options['fields']['field_gov_service_workflow']['id'] = 'field_gov_service_workflow';
  $handler->display->display_options['fields']['field_gov_service_workflow']['table'] = 'field_data_field_gov_service_workflow';
  $handler->display->display_options['fields']['field_gov_service_workflow']['field'] = 'field_gov_service_workflow';
  $handler->display->display_options['fields']['field_gov_service_workflow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gov_service_workflow']['type'] = 'workflow_default';
  $handler->display->display_options['fields']['field_gov_service_workflow']['field_api_classes'] = TRUE;
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
    'gov_service_order' => 'gov_service_order',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: Page-order */
  $handler = $view->new_display('page', 'Page-order', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '行政服务订单';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create gov_service_order content';
  $handler->display->display_options['path'] = 'admin/gov-service-order';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '行政服务订单';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page-info */
  $handler = $view->new_display('page', 'Page-info', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '行政服务业务';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create gov_service_info content';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/gov-service-info" style="background: #b73939; color: #fff; padding: 10px; float: right; margin-bottom: 10px;">新增行政服务业务</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html_no_editor';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '受理编号';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: 行政部门 */
  $handler->display->display_options['fields']['field_gov_dept']['id'] = 'field_gov_dept';
  $handler->display->display_options['fields']['field_gov_dept']['table'] = 'field_data_field_gov_dept';
  $handler->display->display_options['fields']['field_gov_dept']['field'] = 'field_gov_dept';
  /* Field: Content: 内容 */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: 申报日期 */
  $handler->display->display_options['fields']['field_multiple_date']['id'] = 'field_multiple_date';
  $handler->display->display_options['fields']['field_multiple_date']['table'] = 'field_data_field_multiple_date';
  $handler->display->display_options['fields']['field_multiple_date']['field'] = 'field_multiple_date';
  $handler->display->display_options['fields']['field_multiple_date']['settings'] = array(
    'format_type' => 'china_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_multiple_date']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '编辑';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = '删除';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'gov_service_info' => 'gov_service_info',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['path'] = 'admin/gov-service-info';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '行政服务业务';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['gov_service_admin'] = $view;

  $view = new view();
  $view->name = 'gov_service_app';
  $view->description = '';
  $view->tag = 'gov-service';
  $view->base_table = 'node';
  $view->human_name = '行政服务申请进度';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'stamp' => 'stamp',
    'sid' => 'sid',
    'uid' => 'uid',
    'comment' => 'comment',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Workflow history: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = '日期';
  $handler->display->display_options['fields']['stamp']['element_label_colon'] = FALSE;
  /* Field: Workflow history: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '受理状态';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Field: Workflow history: User */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '经办人';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  /* Field: Workflow history: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  $handler->display->display_options['fields']['comment']['label'] = '回馈';
  $handler->display->display_options['fields']['comment']['element_label_colon'] = FALSE;
  /* Sort criterion: Workflow history: Transition ID */
  $handler->display->display_options['sorts']['hid']['id'] = 'hid';
  $handler->display->display_options['sorts']['hid']['table'] = 'workflow_node_history';
  $handler->display->display_options['sorts']['hid']['field'] = 'hid';
  $handler->display->display_options['sorts']['hid']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'gov_service_order' => 'gov_service_order',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
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
    'gov_service_order' => 'gov_service_order',
  );

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'gov_service_order',
  );
  $export['gov_service_app'] = $view;

  $view = new view();
  $view->name = 'gov_service_enquiry';
  $view->description = '';
  $view->tag = 'gov-service';
  $view->base_table = 'node';
  $view->human_name = '行政服务查询';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '行政服务查询';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = '查询';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_service_apply',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_service_apply' => 'field_service_apply',
    'stamp' => 'stamp',
    'sid' => 'sid',
    'uid' => 'uid',
    'comment' => 'comment',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_service_apply' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '没有记录';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Workflow history: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = '日期';
  $handler->display->display_options['fields']['stamp']['element_label_colon'] = FALSE;
  /* Field: Workflow history: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '受理状态';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Field: Workflow history: User */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '经办人';
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Workflow history: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_history';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  $handler->display->display_options['fields']['comment']['label'] = '意见回馈';
  $handler->display->display_options['fields']['comment']['element_label_colon'] = FALSE;
  /* Sort criterion: Workflow history: Transition ID */
  $handler->display->display_options['sorts']['hid']['id'] = 'hid';
  $handler->display->display_options['sorts']['hid']['table'] = 'workflow_node_history';
  $handler->display->display_options['sorts']['hid']['field'] = 'hid';
  $handler->display->display_options['sorts']['hid']['order'] = 'DESC';
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
    'gov_service_order' => 'gov_service_order',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = '受理编号';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Workflow history: Transition ID */
  $handler->display->display_options['sorts']['hid']['id'] = 'hid';
  $handler->display->display_options['sorts']['hid']['table'] = 'workflow_node_history';
  $handler->display->display_options['sorts']['hid']['field'] = 'hid';
  $handler->display->display_options['sorts']['hid']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'gov-service-status';
  $export['gov_service_enquiry'] = $view;

  $view = new view();
  $view->name = 'gov_service_order_user_list';
  $view->description = '';
  $view->tag = 'gov-service';
  $view->base_table = 'users';
  $view->human_name = '行政服务订单申办人名单';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Field: 联系电话 */
  $handler->display->display_options['fields']['field_single_text2']['id'] = 'field_single_text2';
  $handler->display->display_options['fields']['field_single_text2']['table'] = 'field_data_field_single_text2';
  $handler->display->display_options['fields']['field_single_text2']['field'] = 'field_single_text2';
  $handler->display->display_options['fields']['field_single_text2']['label'] = '';
  $handler->display->display_options['fields']['field_single_text2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_single_text2']['alter']['text'] = ' - [field_single_text2]';
  $handler->display->display_options['fields']['field_single_text2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_single_text2']['type'] = 'text_plain';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['text'] = ' - [mail]';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_single_text2' => 'field_single_text2',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = '';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['gov_service_order_user_list'] = $view;

  return $export;
}
