<?php
/**
 * @file
 * wfyz_commerce_service.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wfyz_commerce_service_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'payment';
  $view->description = '';
  $view->tag = 'service-market';
  $view->base_table = 'field_collection_item';
  $view->human_name = '支付管理';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '支付管理';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
    'field_pay_amount' => 'field_pay_amount',
    'field_body' => 'field_body',
    'field_pay_status' => 'field_pay_status',
    'field_alipay_trade_no' => 'field_alipay_trade_no',
    'field_pay_id' => 'field_pay_id',
    'title_2' => 'title_2',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pay_amount' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pay_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_alipay_trade_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pay_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Field collection item: Entity with the 付款方式 (field_payment) */
  $handler->display->display_options['relationships']['field_payment_node']['id'] = 'field_payment_node';
  $handler->display->display_options['relationships']['field_payment_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_payment_node']['field'] = 'field_payment_node';
  $handler->display->display_options['relationships']['field_payment_node']['required'] = TRUE;
  /* Relationship: Flags: paid_to_vendor */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'paid_to_vendor';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_from_service_target_id']['id'] = 'field_from_service_target_id';
  $handler->display->display_options['relationships']['field_from_service_target_id']['table'] = 'field_data_field_from_service';
  $handler->display->display_options['relationships']['field_from_service_target_id']['field'] = 'field_from_service_target_id';
  $handler->display->display_options['relationships']['field_from_service_target_id']['relationship'] = 'field_payment_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['relationship'] = 'field_from_service_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_payment_node';
  $handler->display->display_options['fields']['title']['label'] = '服务订单号';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_from_service_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '服务';
  /* Field: Field collection item: 金额 */
  $handler->display->display_options['fields']['field_pay_amount']['id'] = 'field_pay_amount';
  $handler->display->display_options['fields']['field_pay_amount']['table'] = 'field_data_field_pay_amount';
  $handler->display->display_options['fields']['field_pay_amount']['field'] = 'field_pay_amount';
  $handler->display->display_options['fields']['field_pay_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Field: 具体要求 */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '付款备注';
  /* Field: Field collection item: 支付状态 */
  $handler->display->display_options['fields']['field_pay_status']['id'] = 'field_pay_status';
  $handler->display->display_options['fields']['field_pay_status']['table'] = 'field_data_field_pay_status';
  $handler->display->display_options['fields']['field_pay_status']['field'] = 'field_pay_status';
  /* Field: Field collection item: 支付宝交易号 */
  $handler->display->display_options['fields']['field_alipay_trade_no']['id'] = 'field_alipay_trade_no';
  $handler->display->display_options['fields']['field_alipay_trade_no']['table'] = 'field_data_field_alipay_trade_no';
  $handler->display->display_options['fields']['field_alipay_trade_no']['field'] = 'field_alipay_trade_no';
  /* Field: Field collection item: 支付者ID */
  $handler->display->display_options['fields']['field_pay_id']['id'] = 'field_pay_id';
  $handler->display->display_options['fields']['field_pay_id']['table'] = 'field_data_field_pay_id';
  $handler->display->display_options['fields']['field_pay_id']['field'] = 'field_pay_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = '店铺';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Filter criterion: Field collection item: 支付状态 (field_pay_status) */
  $handler->display->display_options['filters']['field_pay_status_value']['id'] = 'field_pay_status_value';
  $handler->display->display_options['filters']['field_pay_status_value']['table'] = 'field_data_field_pay_status';
  $handler->display->display_options['filters']['field_pay_status_value']['field'] = 'field_pay_status_value';
  $handler->display->display_options['filters']['field_pay_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pay_status_value']['expose']['operator_id'] = 'field_pay_status_value_op';
  $handler->display->display_options['filters']['field_pay_status_value']['expose']['label'] = '支付状态';
  $handler->display->display_options['filters']['field_pay_status_value']['expose']['operator'] = 'field_pay_status_value_op';
  $handler->display->display_options['filters']['field_pay_status_value']['expose']['identifier'] = 'field_pay_status_value';
  $handler->display->display_options['filters']['field_pay_status_value']['expose']['remember_roles'] = array(
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
  /* Filter criterion: Flags: Flagged */
  $handler->display->display_options['filters']['flagged']['id'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['table'] = 'flagging';
  $handler->display->display_options['filters']['flagged']['field'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['filters']['flagged']['value'] = '0';
  $handler->display->display_options['filters']['flagged']['exposed'] = TRUE;
  $handler->display->display_options['filters']['flagged']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['flagged']['expose']['label'] = '已付给商家?';
  $handler->display->display_options['filters']['flagged']['expose']['operator'] = 'flagged_op';
  $handler->display->display_options['filters']['flagged']['expose']['identifier'] = 'flagged';
  $handler->display->display_options['filters']['flagged']['expose']['remember_roles'] = array(
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/payment';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '支付管理';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['payment'] = $view;

  $view = new view();
  $view->name = 'service_market';
  $view->description = '';
  $view->tag = 'service-market';
  $view->base_table = 'node';
  $view->human_name = '服务大厅';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '服务大厅';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
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
    'field_service_type_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => 0,
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
    'field_service_guarantee_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => 0,
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
    'field_location_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_term_description' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '全部',
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: 图片 */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'slideshow';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'slideshow_image_style' => 'service_catalog',
    'slideshow_link' => '',
    'slideshow_caption' => '',
    'slideshow_caption_link' => '',
    'slideshow_fx' => 'fade',
    'slideshow_speed' => '1000',
    'slideshow_timeout' => '4000',
    'slideshow_order' => '',
    'slideshow_controls' => 0,
    'slideshow_controls_pause' => 0,
    'slideshow_controls_position' => 'after',
    'slideshow_pause' => 0,
    'slideshow_start_on_hover' => 0,
    'slideshow_pager' => '',
    'slideshow_pager_position' => 'after',
    'slideshow_pager_image_style' => '',
    'slideshow_carousel_image_style' => '',
    'slideshow_carousel_visible' => '3',
    'slideshow_carousel_scroll' => '1',
    'slideshow_carousel_speed' => '500',
    'slideshow_carousel_skin' => '',
    'slideshow_carousel_follow' => 0,
    'slideshow_carousel_vertical' => 0,
    'slideshow_carousel_circular' => 0,
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: 融资区间 */
  $handler->display->display_options['fields']['field_price_range']['id'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['table'] = 'field_data_field_price_range';
  $handler->display->display_options['fields']['field_price_range']['field'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['label'] = '';
  $handler->display->display_options['fields']['field_price_range']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price_range']['click_sort_column'] = 'from';
  $handler->display->display_options['fields']['field_price_range']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'range_separator' => '-',
    'range_combine' => 1,
    'from_prefix_suffix' => 1,
    'to_prefix_suffix' => 1,
    'field_prefix_suffix' => 1,
    'combined_prefix_suffix' => 1,
  );
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
    'service' => 'service',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: 服务类别 (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_tid']['id'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_tid']['field'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_service_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['operator_id'] = 'field_service_type_tid_op';
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['operator'] = 'field_service_type_tid_op';
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['identifier'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_service_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_service_type_tid']['vocabulary'] = 'service_type';
  $handler->display->display_options['filters']['field_service_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: 雇主保障 (field_service_guarantee) */
  $handler->display->display_options['filters']['field_service_guarantee_tid']['id'] = 'field_service_guarantee_tid';
  $handler->display->display_options['filters']['field_service_guarantee_tid']['table'] = 'field_data_field_service_guarantee';
  $handler->display->display_options['filters']['field_service_guarantee_tid']['field'] = 'field_service_guarantee_tid';
  $handler->display->display_options['filters']['field_service_guarantee_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_service_guarantee_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_service_guarantee_tid']['expose']['operator_id'] = 'field_service_guarantee_tid_op';
  $handler->display->display_options['filters']['field_service_guarantee_tid']['expose']['label'] = '雇主保障';
  $handler->display->display_options['filters']['field_service_guarantee_tid']['expose']['operator'] = 'field_service_guarantee_tid_op';
  $handler->display->display_options['filters']['field_service_guarantee_tid']['expose']['identifier'] = 'field_service_guarantee_tid';
  $handler->display->display_options['filters']['field_service_guarantee_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_service_guarantee_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_service_guarantee_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_service_guarantee_tid']['vocabulary'] = 'service_guarantee';
  /* Filter criterion: Content: 地区 (field_location) */
  $handler->display->display_options['filters']['field_location_tid']['id'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_tid']['field'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_tid']['expose']['operator_id'] = 'field_location_tid_op';
  $handler->display->display_options['filters']['field_location_tid']['expose']['label'] = '地区';
  $handler->display->display_options['filters']['field_location_tid']['expose']['operator'] = 'field_location_tid_op';
  $handler->display->display_options['filters']['field_location_tid']['expose']['identifier'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_tid']['vocabulary'] = 'location';
  $handler->display->display_options['filters']['field_location_tid']['hierarchy'] = 1;

  /* Display: Page-default */
  $handler = $view->new_display('page', 'Page-default', 'page');
  $handler->display->display_options['path'] = 'market/services';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = '服务大厅';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = '服务超市';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Page-all-services */
  $handler = $view->new_display('page', 'Page-all-services', 'page_service_all');
  $handler->display->display_options['path'] = 'market/services/all-services';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = '所有服务';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = '服务大厅';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Page-all-vendors */
  $handler = $view->new_display('page', 'Page-all-vendors', 'page_vendor');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
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
    'field_service_type_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_term_description' => 0,
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: 行政部门封面图 */
  $handler->display->display_options['fields']['field_image_logo']['id'] = 'field_image_logo';
  $handler->display->display_options['fields']['field_image_logo']['table'] = 'field_data_field_image_logo';
  $handler->display->display_options['fields']['field_image_logo']['field'] = 'field_image_logo';
  $handler->display->display_options['fields']['field_image_logo']['label'] = '';
  $handler->display->display_options['fields']['field_image_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_logo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'store' => 'store',
  );
  /* Filter criterion: Content: 服务类别 (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_tid']['id'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_tid']['field'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['operator_id'] = 'field_service_type_tid_op';
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['operator'] = 'field_service_type_tid_op';
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['identifier'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_service_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_service_type_tid']['vocabulary'] = 'service_type';
  $handler->display->display_options['filters']['field_service_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'market/services/all-vendors';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = '所有服务商';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page-needs */
  $handler = $view->new_display('page', 'Page-needs', 'page_2');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
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
    'field_service_type_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_term_description' => 0,
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
    'field_location_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_term_description' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'any_label' => '全部',
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_price_range' => 'field_price_range',
    'comment_count' => 'comment_count',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price_range' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '需求项目';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: 具体要求 */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['preserve_tags'] = '<p> <br>';
  /* Field: Content: 融资区间 */
  $handler->display->display_options['fields']['field_price_range']['id'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['table'] = 'field_data_field_price_range';
  $handler->display->display_options['fields']['field_price_range']['field'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['click_sort_column'] = 'from';
  $handler->display->display_options['fields']['field_price_range']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'range_separator' => '-',
    'range_combine' => 1,
    'from_prefix_suffix' => 1,
    'to_prefix_suffix' => 1,
    'field_prefix_suffix' => 0,
    'combined_prefix_suffix' => 1,
  );
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '招标情况';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '[comment_count] 参与|招标';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['separator'] = '';
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
    'service_requirement' => 'service_requirement',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: 服务类别 (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_tid']['id'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_tid']['field'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_service_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['operator_id'] = 'field_service_type_tid_op';
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['operator'] = 'field_service_type_tid_op';
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['identifier'] = 'field_service_type_tid';
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_service_type_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_service_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_service_type_tid']['vocabulary'] = 'service_type';
  $handler->display->display_options['filters']['field_service_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: 地区 (field_location) */
  $handler->display->display_options['filters']['field_location_tid']['id'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_tid']['field'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_location_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_tid']['expose']['operator_id'] = 'field_location_tid_op';
  $handler->display->display_options['filters']['field_location_tid']['expose']['label'] = '地区';
  $handler->display->display_options['filters']['field_location_tid']['expose']['operator'] = 'field_location_tid_op';
  $handler->display->display_options['filters']['field_location_tid']['expose']['identifier'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_location_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_tid']['vocabulary'] = 'location';
  $handler->display->display_options['filters']['field_location_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'market/needs';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = '需求大厅';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: EVA Field-comment */
  $handler = $view->new_display('entity_view', 'EVA Field-comment', 'eva_comment');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: 具体要求 */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '评价';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  /* Field: Content: 总体评分 */
  $handler->display->display_options['fields']['field_overall_rate']['id'] = 'field_overall_rate';
  $handler->display->display_options['fields']['field_overall_rate']['table'] = 'field_data_field_overall_rate';
  $handler->display->display_options['fields']['field_overall_rate']['field'] = 'field_overall_rate';
  $handler->display->display_options['fields']['field_overall_rate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_overall_rate']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_overall_rate']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Content: 服务态度 */
  $handler->display->display_options['fields']['field_first_rate']['id'] = 'field_first_rate';
  $handler->display->display_options['fields']['field_first_rate']['table'] = 'field_data_field_first_rate';
  $handler->display->display_options['fields']['field_first_rate']['field'] = 'field_first_rate';
  $handler->display->display_options['fields']['field_first_rate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_rate']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_first_rate']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Content: 工作速度 */
  $handler->display->display_options['fields']['field_second_rate']['id'] = 'field_second_rate';
  $handler->display->display_options['fields']['field_second_rate']['table'] = 'field_data_field_second_rate';
  $handler->display->display_options['fields']['field_second_rate']['field'] = 'field_second_rate';
  $handler->display->display_options['fields']['field_second_rate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_second_rate']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_second_rate']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Content: 完成质量 */
  $handler->display->display_options['fields']['field_third_rate']['id'] = 'field_third_rate';
  $handler->display->display_options['fields']['field_third_rate']['table'] = 'field_data_field_third_rate';
  $handler->display->display_options['fields']['field_third_rate']['field'] = 'field_third_rate';
  $handler->display->display_options['fields']['field_third_rate']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_third_rate']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: 购买服务 (field_from_service) */
  $handler->display->display_options['arguments']['field_from_service_target_id']['id'] = 'field_from_service_target_id';
  $handler->display->display_options['arguments']['field_from_service_target_id']['table'] = 'field_data_field_from_service';
  $handler->display->display_options['arguments']['field_from_service_target_id']['field'] = 'field_from_service_target_id';
  $handler->display->display_options['arguments']['field_from_service_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_from_service_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_from_service_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_from_service_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_from_service_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_from_service_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_from_service_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_from_service_target_id']['validate_options']['types'] = array(
    'service' => 'service',
  );
  $handler->display->display_options['arguments']['field_from_service_target_id']['validate']['fail'] = 'empty';
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
    'service_order' => 'service_order',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'service',
  );

  /* Display: EVA Field-store */
  $handler = $view->new_display('entity_view', 'EVA Field-store', 'eva_store');
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
    'service' => 'service',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'store',
  );
  $export['service_market'] = $view;

  $view = new view();
  $view->name = 'store';
  $view->description = '';
  $view->tag = 'service-market';
  $view->base_table = 'node';
  $view->human_name = 'Store';
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
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '服务订单编号';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: 购买服务 */
  $handler->display->display_options['fields']['field_from_service']['id'] = 'field_from_service';
  $handler->display->display_options['fields']['field_from_service']['table'] = 'field_data_field_from_service';
  $handler->display->display_options['fields']['field_from_service']['field'] = 'field_from_service';
  $handler->display->display_options['fields']['field_from_service']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: 付款方式 */
  $handler->display->display_options['fields']['field_payment']['id'] = 'field_payment';
  $handler->display->display_options['fields']['field_payment']['table'] = 'field_data_field_payment';
  $handler->display->display_options['fields']['field_payment']['field'] = 'field_payment';
  $handler->display->display_options['fields']['field_payment']['type'] = 'field_collection_table_view';
  $handler->display->display_options['fields']['field_payment']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
    'empty' => 1,
    'cssrowcol' => 0,
    'cssfield' => 0,
  );
  $handler->display->display_options['fields']['field_payment']['delta_offset'] = '0';
  /* Field: Content: 订单支付状态 */
  $handler->display->display_options['fields']['field_so_pay_status']['id'] = 'field_so_pay_status';
  $handler->display->display_options['fields']['field_so_pay_status']['table'] = 'field_data_field_so_pay_status';
  $handler->display->display_options['fields']['field_so_pay_status']['field'] = 'field_so_pay_status';
  /* Field: Content: 订单状态 */
  $handler->display->display_options['fields']['field_so_status']['id'] = 'field_so_status';
  $handler->display->display_options['fields']['field_so_status']['table'] = 'field_data_field_so_status';
  $handler->display->display_options['fields']['field_so_status']['field'] = 'field_so_status';
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
    'service_order' => 'service_order',
  );

  /* Display: Page-my-service-order */
  $handler = $view->new_display('page', 'Page-my-service-order', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '我的服务订单';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: cancel_sales_order */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'cancel_sales_order';
  $handler->display->display_options['path'] = 'user/my-service-order';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '我的服务订单';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-member-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page-my-store */
  $handler = $view->new_display('page', 'Page-my-store', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<button class="btn btn-primary"><a href="/node/add/store">新增店铺</a></button>';
  $handler->display->display_options['header']['area']['format'] = 'full_html_no_editor';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: OG membership from Node group */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  /* Relationship: OG membership: User from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user']['id'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user']['field'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['relationship'] = 'og_membership_rel_group';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: 行政部门封面图 */
  $handler->display->display_options['fields']['field_image_logo']['id'] = 'field_image_logo';
  $handler->display->display_options['fields']['field_image_logo']['table'] = 'field_data_field_image_logo';
  $handler->display->display_options['fields']['field_image_logo']['field'] = 'field_image_logo';
  $handler->display->display_options['fields']['field_image_logo']['label'] = '';
  $handler->display->display_options['fields']['field_image_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="btn btn-primary"><a href="/node/add/service?og_group_ref=[nid]">新增服务</a></div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'store' => 'store',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'og_membership_related_user';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['path'] = 'user/store';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '我的店铺';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-member-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page-my-store-service */
  $handler = $view->new_display('page', 'Page-my-store-service', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_image' => 'field_image',
    'title' => 'title',
    'field_price_range' => 'field_price_range',
    'field_service_type' => 'field_service_type',
    'field_sales_volume' => 'field_sales_volume',
    'field_overall_rate' => 'field_overall_rate',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price_range' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_service_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sales_volume' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_overall_rate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
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
    'action::node_make_sticky_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: 图片 */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'slideshow';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'slideshow_image_style' => 'thumbnail',
    'slideshow_link' => 'content',
    'slideshow_caption' => '',
    'slideshow_caption_link' => '',
    'slideshow_fx' => 'fade',
    'slideshow_speed' => '1000',
    'slideshow_timeout' => '4000',
    'slideshow_order' => '',
    'slideshow_controls' => 0,
    'slideshow_controls_pause' => 0,
    'slideshow_controls_position' => 'after',
    'slideshow_pause' => 0,
    'slideshow_start_on_hover' => 0,
    'slideshow_pager' => '',
    'slideshow_pager_position' => 'after',
    'slideshow_pager_image_style' => '',
    'slideshow_carousel_image_style' => '',
    'slideshow_carousel_visible' => '3',
    'slideshow_carousel_scroll' => '1',
    'slideshow_carousel_speed' => '500',
    'slideshow_carousel_skin' => '',
    'slideshow_carousel_follow' => 0,
    'slideshow_carousel_vertical' => 0,
    'slideshow_carousel_circular' => 0,
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '服务名称';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: 融资区间 */
  $handler->display->display_options['fields']['field_price_range']['id'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['table'] = 'field_data_field_price_range';
  $handler->display->display_options['fields']['field_price_range']['field'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['label'] = '价格';
  $handler->display->display_options['fields']['field_price_range']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price_range']['click_sort_column'] = 'from';
  $handler->display->display_options['fields']['field_price_range']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'range_separator' => '-',
    'range_combine' => 1,
    'from_prefix_suffix' => 1,
    'to_prefix_suffix' => 1,
    'field_prefix_suffix' => 0,
    'combined_prefix_suffix' => 1,
  );
  /* Field: Content: 服务类别 */
  $handler->display->display_options['fields']['field_service_type']['id'] = 'field_service_type';
  $handler->display->display_options['fields']['field_service_type']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['fields']['field_service_type']['field'] = 'field_service_type';
  $handler->display->display_options['fields']['field_service_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_type']['delta_offset'] = '0';
  /* Field: Content: 销售量 */
  $handler->display->display_options['fields']['field_sales_volume']['id'] = 'field_sales_volume';
  $handler->display->display_options['fields']['field_sales_volume']['table'] = 'field_data_field_sales_volume';
  $handler->display->display_options['fields']['field_sales_volume']['field'] = 'field_sales_volume';
  $handler->display->display_options['fields']['field_sales_volume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sales_volume']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: 总体评分 */
  $handler->display->display_options['fields']['field_overall_rate']['id'] = 'field_overall_rate';
  $handler->display->display_options['fields']['field_overall_rate']['table'] = 'field_data_field_overall_rate';
  $handler->display->display_options['fields']['field_overall_rate']['field'] = 'field_overall_rate';
  $handler->display->display_options['fields']['field_overall_rate']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_overall_rate']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'average',
  );
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<h2 class="float-left margin-top-0">[title_1]</h2>
<div class="btn btn-primary float-right"><a href="/node/add/service?og_group_ref=[nid]">新增服务</a></div>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_user_groups';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['break_phrase'] = TRUE;
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
    'service' => 'service',
  );
  $handler->display->display_options['path'] = 'user/store/service';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '我的店铺服务';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-member-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page-my-store-order */
  $handler = $view->new_display('page', 'Page-my-store-order', 'page_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_from_service_target_id']['id'] = 'field_from_service_target_id';
  $handler->display->display_options['relationships']['field_from_service_target_id']['table'] = 'field_data_field_from_service';
  $handler->display->display_options['relationships']['field_from_service_target_id']['field'] = 'field_from_service_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['relationship'] = 'field_from_service_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '服务订单编号';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: 购买服务 */
  $handler->display->display_options['fields']['field_from_service']['id'] = 'field_from_service';
  $handler->display->display_options['fields']['field_from_service']['table'] = 'field_data_field_from_service';
  $handler->display->display_options['fields']['field_from_service']['field'] = 'field_from_service';
  $handler->display->display_options['fields']['field_from_service']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: 付款方式 */
  $handler->display->display_options['fields']['field_payment']['id'] = 'field_payment';
  $handler->display->display_options['fields']['field_payment']['table'] = 'field_data_field_payment';
  $handler->display->display_options['fields']['field_payment']['field'] = 'field_payment';
  $handler->display->display_options['fields']['field_payment']['type'] = 'field_collection_table_view';
  $handler->display->display_options['fields']['field_payment']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
    'empty' => 1,
    'cssrowcol' => 0,
    'cssfield' => 0,
  );
  $handler->display->display_options['fields']['field_payment']['delta_offset'] = '0';
  /* Field: Content: 订单支付状态 */
  $handler->display->display_options['fields']['field_so_pay_status']['id'] = 'field_so_pay_status';
  $handler->display->display_options['fields']['field_so_pay_status']['table'] = 'field_data_field_so_pay_status';
  $handler->display->display_options['fields']['field_so_pay_status']['field'] = 'field_so_pay_status';
  /* Field: Content: 订单状态 */
  $handler->display->display_options['fields']['field_so_status']['id'] = 'field_so_status';
  $handler->display->display_options['fields']['field_so_status']['table'] = 'field_data_field_so_status';
  $handler->display->display_options['fields']['field_so_status']['field'] = 'field_so_status';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '买家';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '店铺';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'field_from_service_target_id';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'og_user_groups';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['break_phrase'] = TRUE;
  $handler->display->display_options['path'] = 'user/store/order';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '店铺订单';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-member-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['store'] = $view;

  return $export;
}
