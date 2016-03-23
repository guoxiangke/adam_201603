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
  $view->name = 'needs';
  $view->description = '';
  $view->tag = 'service-market';
  $view->base_table = 'node';
  $view->human_name = '需求大厅';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '需求大厅';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '标题';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: 具体要求 */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  /* Field: Content: 融资区间 */
  $handler->display->display_options['fields']['field_price_range']['id'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['table'] = 'field_data_field_price_range';
  $handler->display->display_options['fields']['field_price_range']['field'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['label'] = '价格范围';
  $handler->display->display_options['fields']['field_price_range']['click_sort_column'] = 'from';
  $handler->display->display_options['fields']['field_price_range']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'range_separator' => '-',
    'range_combine' => 0,
    'from_prefix_suffix' => 1,
    'to_prefix_suffix' => 1,
    'field_prefix_suffix' => 1,
    'combined_prefix_suffix' => 0,
  );
  /* Field: Content: 您需要何时完成? */
  $handler->display->display_options['fields']['field_deadline']['id'] = 'field_deadline';
  $handler->display->display_options['fields']['field_deadline']['table'] = 'field_data_field_deadline';
  $handler->display->display_options['fields']['field_deadline']['field'] = 'field_deadline';
  $handler->display->display_options['fields']['field_deadline']['label'] = '完成限期';
  $handler->display->display_options['fields']['field_deadline']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
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
    'service_requirement' => 'service_requirement',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'needs';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '需求大厅';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['needs'] = $view;

  $view = new view();
  $view->name = 'services_market';
  $view->description = '';
  $view->tag = 'service-market';
  $view->base_table = 'node';
  $view->human_name = '服务超市';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '服务超市';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = '搜索';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: 图片 */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: 融资区间 */
  $handler->display->display_options['fields']['field_price_range']['id'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['table'] = 'field_data_field_price_range';
  $handler->display->display_options['fields']['field_price_range']['field'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['label'] = '';
  $handler->display->display_options['fields']['field_price_range']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price_range']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price_range']['click_sort_column'] = 'from';
  $handler->display->display_options['fields']['field_price_range']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'range_separator' => '-',
    'range_combine' => 1,
    'from_prefix_suffix' => 1,
    'to_prefix_suffix' => 1,
    'field_prefix_suffix' => 0,
    'combined_prefix_suffix' => 1,
  );
  /* Field: Content: 销售量 */
  $handler->display->display_options['fields']['field_sales_volume']['id'] = 'field_sales_volume';
  $handler->display->display_options['fields']['field_sales_volume']['table'] = 'field_data_field_sales_volume';
  $handler->display->display_options['fields']['field_sales_volume']['field'] = 'field_sales_volume';
  $handler->display->display_options['fields']['field_sales_volume']['label'] = '';
  $handler->display->display_options['fields']['field_sales_volume']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sales_volume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sales_volume']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-lg-4 col-md-4 col-sm-6">
	<div class="product-item">
			[field_image]
		<div class="product-details padding-10">
                        <p class="price font-size-12 padding-bottom-5">
                              <span class="normal">[field_price_range]</span>
                        </p>      
                        <p class="title font-bold"><a href="[path]">[title]</a></p>
                        <p class="border-bottom-1 font-size-10">[comment_count]</p>
 <p class="border-bottom-1 font-size-10">[field_sales_volume]</p>
 <p class="border-bottom-1 font-size-10">[value]</p>
			<p>
				<a href="[path]" class="details"><i class="fa fa-bars"></i> 详情</a>
			</p>
		</div>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: bookmark */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'bookmark';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: 图片 */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: 融资区间 */
  $handler->display->display_options['fields']['field_price_range']['id'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['table'] = 'field_data_field_price_range';
  $handler->display->display_options['fields']['field_price_range']['field'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['label'] = '';
  $handler->display->display_options['fields']['field_price_range']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price_range']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price_range']['click_sort_column'] = 'from';
  $handler->display->display_options['fields']['field_price_range']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'range_separator' => '-',
    'range_combine' => 1,
    'from_prefix_suffix' => 1,
    'to_prefix_suffix' => 1,
    'field_prefix_suffix' => 0,
    'combined_prefix_suffix' => 1,
  );
  /* Field: Content: 销售量 */
  $handler->display->display_options['fields']['field_sales_volume']['id'] = 'field_sales_volume';
  $handler->display->display_options['fields']['field_sales_volume']['table'] = 'field_data_field_sales_volume';
  $handler->display->display_options['fields']['field_sales_volume']['field'] = 'field_sales_volume';
  $handler->display->display_options['fields']['field_sales_volume']['label'] = '';
  $handler->display->display_options['fields']['field_sales_volume']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sales_volume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sales_volume']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-lg-4 col-md-4 col-sm-6">
	<div class="product-item">
			[field_image]
		<div class="product-details padding-10">
                        <p class="price font-size-12 padding-bottom-5">
                              <span class="normal">[field_price_range]</span>
                        </p>      
                        <p class="title font-bold"><a href="[path]">[title]</a></p>
                        <p class="border-bottom-1 font-size-10">[comment_count]</p>
 <p class="border-bottom-1 font-size-10">[field_sales_volume]</p>
 <p class="border-bottom-1 font-size-10">[value]</p>[ops]
			<p>
				<a href="[path]" class="details"><i class="fa fa-bars"></i> 详情</a>
			</p>
		</div>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'service-market';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '服务超市';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: EVA Field-Service */
  $handler = $view->new_display('entity_view', 'EVA Field-Service', 'entity_view_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '共有 @total 个评论';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '暂无评论';
  $handler->display->display_options['empty']['area']['format'] = 'full_html_no_editor';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Comment: Comments of the node */
  $handler->display->display_options['relationships']['cid']['id'] = 'cid';
  $handler->display->display_options['relationships']['cid']['table'] = 'node';
  $handler->display->display_options['relationships']['cid']['field'] = 'cid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Comment: Author */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'comment';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'cid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Comment: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'comment';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'cid';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'china_date';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Comment: Comment */
  $handler->display->display_options['fields']['comment_body']['id'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['table'] = 'field_data_comment_body';
  $handler->display->display_options['fields']['comment_body']['field'] = 'comment_body';
  $handler->display->display_options['fields']['comment_body']['relationship'] = 'cid';
  $handler->display->display_options['fields']['comment_body']['label'] = '';
  $handler->display->display_options['fields']['comment_body']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_overall_rating']['id'] = 'field_overall_rating';
  $handler->display->display_options['fields']['field_overall_rating']['table'] = 'field_data_field_overall_rating';
  $handler->display->display_options['fields']['field_overall_rating']['field'] = 'field_overall_rating';
  $handler->display->display_options['fields']['field_overall_rating']['relationship'] = 'cid';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_first_rating']['id'] = 'field_first_rating';
  $handler->display->display_options['fields']['field_first_rating']['table'] = 'field_data_field_first_rating';
  $handler->display->display_options['fields']['field_first_rating']['field'] = 'field_first_rating';
  $handler->display->display_options['fields']['field_first_rating']['relationship'] = 'cid';
  $handler->display->display_options['fields']['field_first_rating']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_second_rating_1']['id'] = 'field_second_rating_1';
  $handler->display->display_options['fields']['field_second_rating_1']['table'] = 'field_data_field_second_rating';
  $handler->display->display_options['fields']['field_second_rating_1']['field'] = 'field_second_rating';
  $handler->display->display_options['fields']['field_second_rating_1']['relationship'] = 'cid';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_third_rating']['id'] = 'field_third_rating';
  $handler->display->display_options['fields']['field_third_rating']['table'] = 'field_data_field_third_rating';
  $handler->display->display_options['fields']['field_third_rating']['field'] = 'field_third_rating';
  $handler->display->display_options['fields']['field_third_rating']['relationship'] = 'cid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: 服务 (field_from_service) */
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
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'service',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_image' => 0,
    'field_price_range' => 0,
    'field_sales_volume' => 0,
    'path' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: 图片 */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'slideshow_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: 融资区间 */
  $handler->display->display_options['fields']['field_price_range']['id'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['table'] = 'field_data_field_price_range';
  $handler->display->display_options['fields']['field_price_range']['field'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['label'] = '';
  $handler->display->display_options['fields']['field_price_range']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price_range']['click_sort_column'] = 'from';
  $handler->display->display_options['fields']['field_price_range']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'range_separator' => '-',
    'range_combine' => 1,
    'from_prefix_suffix' => 1,
    'to_prefix_suffix' => 1,
    'field_prefix_suffix' => 0,
    'combined_prefix_suffix' => 1,
  );

  /* Display: User-Page */
  $handler = $view->new_display('page', 'User-Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '店铺服务';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create service content';
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
    'field_image' => 'field_image',
    'title' => 'title',
    'field_price_range' => 'field_price_range',
    'field_service_type' => 'field_service_type',
    'field_sales_volume' => 'field_sales_volume',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'nid' => 'nid',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
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
    'field_service_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sales_volume' => array(
      'sortable' => 1,
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
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  /* Field: Content: 图片 */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'slideshow_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '服务标题';
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
    'thousand_separator' => ',',
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
    'prefix_suffix' => 0,
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
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<h2 class="float-left margin-top-0">[title_1]</h2>  <div class="bizz-btn bizz-btn-primary float-right">
<a href="/node/add/service?og_group_ref=[nid]">新增服务</a>
</div>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_group_ref_target_id';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = '服务标题';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['path'] = 'user/my-service';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '店铺服务';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-member-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: EVA Field-Store */
  $handler = $view->new_display('entity_view', 'EVA Field-Store', 'entity_view_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: 图片 */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: 融资区间 */
  $handler->display->display_options['fields']['field_price_range']['id'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['table'] = 'field_data_field_price_range';
  $handler->display->display_options['fields']['field_price_range']['field'] = 'field_price_range';
  $handler->display->display_options['fields']['field_price_range']['label'] = '';
  $handler->display->display_options['fields']['field_price_range']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_price_range']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price_range']['click_sort_column'] = 'from';
  $handler->display->display_options['fields']['field_price_range']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'range_separator' => '-',
    'range_combine' => 1,
    'from_prefix_suffix' => 1,
    'to_prefix_suffix' => 1,
    'field_prefix_suffix' => 0,
    'combined_prefix_suffix' => 1,
  );
  /* Field: Content: 销售量 */
  $handler->display->display_options['fields']['field_sales_volume']['id'] = 'field_sales_volume';
  $handler->display->display_options['fields']['field_sales_volume']['table'] = 'field_data_field_sales_volume';
  $handler->display->display_options['fields']['field_sales_volume']['field'] = 'field_sales_volume';
  $handler->display->display_options['fields']['field_sales_volume']['label'] = '';
  $handler->display->display_options['fields']['field_sales_volume']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sales_volume']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sales_volume']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-lg-3 col-md-3 col-sm-6">
	<div class="product-item">
			[field_image]
		<div class="product-details padding-10">
                        <p class="price font-size-12 padding-bottom-5">
                              <span class="normal">[field_price_range]</span>
                        </p>      
                        <p class="title font-bold"><a href="[path]">[title]</a></p>
                        <p class="border-bottom-1 font-size-10">[comment_count]</p>
 <p class="border-bottom-1 font-size-10">[field_sales_volume]</p>
 <p class="border-bottom-1 font-size-10">[value]</p>
			<p>
				<a href="[path]" class="details"><i class="fa fa-bars"></i> 详情</a>
			</p>
		</div>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'store',
  );
  $export['services_market'] = $view;

  $view = new view();
  $view->name = 'store';
  $view->description = '';
  $view->tag = 'store';
  $view->base_table = 'node';
  $view->human_name = '店铺';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '我的店铺';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="bizz-btn bizz-btn-primary">
<a href="/node/add/store">开通店铺</a>
</div>
注意：只能开通一家店铺，如需要开通多于一家店铺，需要向科服公司申请或收费。';
  $handler->display->display_options['empty']['area']['format'] = 'full_html_no_editor';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '店铺名称';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '编辑店铺信息';
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
    'store' => 'store',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/my-store';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '我的店铺';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-member-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '商家大厅';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_store_logo']['id'] = 'field_store_logo';
  $handler->display->display_options['fields']['field_store_logo']['table'] = 'field_data_field_store_logo';
  $handler->display->display_options['fields']['field_store_logo']['field'] = 'field_store_logo';
  $handler->display->display_options['fields']['field_store_logo']['label'] = '';
  $handler->display->display_options['fields']['field_store_logo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_store_logo']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-lg-3 col-md-3 col-sm-6">
	<div class="product-item">
	
			[field_store_logo]
		
		<div class="product-details">

                        [title]
			<a href="[path]" class="details"><i class="fa fa-caret-square-o-right"></i> 进入店铺</a>
		</div>
	</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'stores';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '商家大厅';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['store'] = $view;

  $view = new view();
  $view->name = 'store_service_orders';
  $view->description = '';
  $view->tag = 'service-market';
  $view->base_table = 'node';
  $view->human_name = '服务订单';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '店铺服务订单';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table_megarows';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_from_service' => 'field_from_service',
    'field_payment_choice' => 'field_payment_choice',
    'nid' => 'nid',
    'megarow_links' => 'megarow_links',
    'field_need_invoice' => 'field_need_invoice',
    'field_so_status' => 'field_so_status',
    'title_1' => 'title_1',
    'name' => 'name',
    'comment_count' => 'comment_count',
    'field_so_pay_status' => 'field_so_pay_status',
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
    'field_from_service' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_payment_choice' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'megarow_links' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_need_invoice' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_so_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_so_pay_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['scroll_padding'] = '120';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '订单号';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: 服务 */
  $handler->display->display_options['fields']['field_from_service']['id'] = 'field_from_service';
  $handler->display->display_options['fields']['field_from_service']['table'] = 'field_data_field_from_service';
  $handler->display->display_options['fields']['field_from_service']['field'] = 'field_from_service';
  $handler->display->display_options['fields']['field_from_service']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Megarow links */
  $handler->display->display_options['fields']['megarow_links']['id'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['megarow_links']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links']['label'] = '';
  $handler->display->display_options['fields']['megarow_links']['exclude'] = TRUE;
  $handler->display->display_options['fields']['megarow_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['megarow_links']['megarow'] = array(
    'links' => '详情|so-single-payment/[nid]',
  );
  /* Field: Content: Megarow links */
  $handler->display->display_options['fields']['megarow_links_1']['id'] = 'megarow_links_1';
  $handler->display->display_options['fields']['megarow_links_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['megarow_links_1']['field'] = 'megarow_links';
  $handler->display->display_options['fields']['megarow_links_1']['label'] = '';
  $handler->display->display_options['fields']['megarow_links_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['megarow_links_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['megarow_links_1']['megarow'] = array(
    'links' => '详情|so-multi-payment/[nid]',
  );
  /* Field: Content: 付款方式 */
  $handler->display->display_options['fields']['field_payment_choice']['id'] = 'field_payment_choice';
  $handler->display->display_options['fields']['field_payment_choice']['table'] = 'field_data_field_payment_choice';
  $handler->display->display_options['fields']['field_payment_choice']['field'] = 'field_payment_choice';
  $handler->display->display_options['fields']['field_payment_choice']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_payment_choice']['alter']['text'] = '分阶段付款 - [megarow_links_1]';
  $handler->display->display_options['fields']['field_payment_choice']['empty'] = '一次性付款 - [megarow_links]';
  $handler->display->display_options['fields']['field_payment_choice']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_payment_choice']['type'] = 'list_key';
  /* Field: Content: 需要发票 */
  $handler->display->display_options['fields']['field_need_invoice']['id'] = 'field_need_invoice';
  $handler->display->display_options['fields']['field_need_invoice']['table'] = 'field_data_field_need_invoice';
  $handler->display->display_options['fields']['field_need_invoice']['field'] = 'field_need_invoice';
  /* Field: Content: 订单状态 */
  $handler->display->display_options['fields']['field_so_status']['id'] = 'field_so_status';
  $handler->display->display_options['fields']['field_so_status']['table'] = 'field_data_field_so_status';
  $handler->display->display_options['fields']['field_so_status']['field'] = 'field_so_status';
  /* Field: Content: 订单支付状态 */
  $handler->display->display_options['fields']['field_so_pay_status']['id'] = 'field_so_pay_status';
  $handler->display->display_options['fields']['field_so_pay_status']['table'] = 'field_data_field_so_pay_status';
  $handler->display->display_options['fields']['field_so_pay_status']['field'] = 'field_so_pay_status';
  $handler->display->display_options['fields']['field_so_pay_status']['label'] = '支付状态';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '买家';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '评论';
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '已评论';
  $handler->display->display_options['fields']['comment_count']['empty'] = '未评论';
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '店铺';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
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

  /* Display: Store-Page */
  $handler = $view->new_display('page', 'Store-Page', 'page');
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
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'store_author';
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
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid_1';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['path'] = 'user/store-service-orders';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '店铺服务订单';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-member-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: User-Page */
  $handler = $view->new_display('page', 'User-Page', 'page_1');
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
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['path'] = 'user/my-service-orders';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '我的服务订单';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-member-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Admin-Page */
  $handler = $view->new_display('page', 'Admin-Page', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_from_service' => 'field_from_service',
    'nid' => 'nid',
    'megarow_links_1' => 'megarow_links_1',
    'field_payment_choice' => 'field_payment_choice',
    'field_need_invoice' => 'field_need_invoice',
    'field_so_status' => 'field_so_status',
    'field_so_pay_status' => 'field_so_pay_status',
    'title_1' => 'title_1',
    'name' => 'name',
    'comment_count' => 'comment_count',
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
    'field_from_service' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'megarow_links_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_payment_choice' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_need_invoice' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_so_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_so_pay_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment_count' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_multiple_payment_target_id']['id'] = 'field_multiple_payment_target_id';
  $handler->display->display_options['relationships']['field_multiple_payment_target_id']['table'] = 'field_data_field_multiple_payment';
  $handler->display->display_options['relationships']['field_multiple_payment_target_id']['field'] = 'field_multiple_payment_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_single_payment_target_id']['id'] = 'field_single_payment_target_id';
  $handler->display->display_options['relationships']['field_single_payment_target_id']['table'] = 'field_data_field_single_payment';
  $handler->display->display_options['relationships']['field_single_payment_target_id']['field'] = 'field_single_payment_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '订单号';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: 服务 */
  $handler->display->display_options['fields']['field_from_service']['id'] = 'field_from_service';
  $handler->display->display_options['fields']['field_from_service']['table'] = 'field_data_field_from_service';
  $handler->display->display_options['fields']['field_from_service']['field'] = 'field_from_service';
  $handler->display->display_options['fields']['field_from_service']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: 付款方式 */
  $handler->display->display_options['fields']['field_payment_choice']['id'] = 'field_payment_choice';
  $handler->display->display_options['fields']['field_payment_choice']['table'] = 'field_data_field_payment_choice';
  $handler->display->display_options['fields']['field_payment_choice']['field'] = 'field_payment_choice';
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
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '店铺';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  /* Field: Payment Entity: 金额 */
  $handler->display->display_options['fields']['field_pay_amount_1']['id'] = 'field_pay_amount_1';
  $handler->display->display_options['fields']['field_pay_amount_1']['table'] = 'field_data_field_pay_amount';
  $handler->display->display_options['fields']['field_pay_amount_1']['field'] = 'field_pay_amount';
  $handler->display->display_options['fields']['field_pay_amount_1']['relationship'] = 'field_multiple_payment_target_id';
  $handler->display->display_options['fields']['field_pay_amount_1']['label'] = '';
  $handler->display->display_options['fields']['field_pay_amount_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pay_amount_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pay_amount_1']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Payment Entity: 金额 */
  $handler->display->display_options['fields']['field_pay_amount']['id'] = 'field_pay_amount';
  $handler->display->display_options['fields']['field_pay_amount']['table'] = 'field_data_field_pay_amount';
  $handler->display->display_options['fields']['field_pay_amount']['field'] = 'field_pay_amount';
  $handler->display->display_options['fields']['field_pay_amount']['relationship'] = 'field_single_payment_target_id';
  $handler->display->display_options['fields']['field_pay_amount']['empty'] = '[field_pay_amount_1]';
  $handler->display->display_options['fields']['field_pay_amount']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_pay_amount']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Payment Entity: 支付状态 */
  $handler->display->display_options['fields']['field_pay_status']['id'] = 'field_pay_status';
  $handler->display->display_options['fields']['field_pay_status']['table'] = 'field_data_field_pay_status';
  $handler->display->display_options['fields']['field_pay_status']['field'] = 'field_pay_status';
  $handler->display->display_options['fields']['field_pay_status']['relationship'] = 'field_multiple_payment_target_id';
  $handler->display->display_options['fields']['field_pay_status']['label'] = '';
  $handler->display->display_options['fields']['field_pay_status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pay_status']['element_label_colon'] = FALSE;
  /* Field: Payment Entity: 支付状态 */
  $handler->display->display_options['fields']['field_pay_status_1']['id'] = 'field_pay_status_1';
  $handler->display->display_options['fields']['field_pay_status_1']['table'] = 'field_data_field_pay_status';
  $handler->display->display_options['fields']['field_pay_status_1']['field'] = 'field_pay_status';
  $handler->display->display_options['fields']['field_pay_status_1']['relationship'] = 'field_single_payment_target_id';
  $handler->display->display_options['fields']['field_pay_status_1']['empty'] = '[field_pay_status]';
  $handler->display->display_options['fields']['field_pay_status_1']['empty_zero'] = TRUE;
  /* Field: Payment Entity: 付款备注 */
  $handler->display->display_options['fields']['field_pay_remark']['id'] = 'field_pay_remark';
  $handler->display->display_options['fields']['field_pay_remark']['table'] = 'field_data_field_pay_remark';
  $handler->display->display_options['fields']['field_pay_remark']['field'] = 'field_pay_remark';
  $handler->display->display_options['fields']['field_pay_remark']['relationship'] = 'field_multiple_payment_target_id';
  $handler->display->display_options['fields']['field_pay_remark']['label'] = '';
  $handler->display->display_options['fields']['field_pay_remark']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pay_remark']['element_label_colon'] = FALSE;
  /* Field: Payment Entity: 付款备注 */
  $handler->display->display_options['fields']['field_pay_remark_1']['id'] = 'field_pay_remark_1';
  $handler->display->display_options['fields']['field_pay_remark_1']['table'] = 'field_data_field_pay_remark';
  $handler->display->display_options['fields']['field_pay_remark_1']['field'] = 'field_pay_remark';
  $handler->display->display_options['fields']['field_pay_remark_1']['relationship'] = 'field_single_payment_target_id';
  $handler->display->display_options['fields']['field_pay_remark_1']['empty'] = '[field_pay_remark]';
  $handler->display->display_options['path'] = 'admin/payment-management';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '支付管理';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['store_service_orders'] = $view;

  return $export;
}
