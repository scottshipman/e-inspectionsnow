<?php
/**
 * @file
 * ein_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ein_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blog_list';
  $view->description = 'sidebar list of blogs';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'blog list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Homeowner Tips';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Media Container (field_media_container:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_media_container';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
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
    'blog' => 'blog',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Recent Homeowner Tips';

  /* Display: Latest Homeowner Tips */
  $handler = $view->new_display('page', 'Latest Homeowner Tips', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'homeowner-tips/latest';
  $export['blog_list'] = $view;

  $view = new view();
  $view->name = 'inspection_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Inspection Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Inspection Reports History';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Inspection Date */
  $handler->display->display_options['fields']['field_inspection_date']['id'] = 'field_inspection_date';
  $handler->display->display_options['fields']['field_inspection_date']['table'] = 'field_data_field_inspection_date';
  $handler->display->display_options['fields']['field_inspection_date']['field'] = 'field_inspection_date';
  $handler->display->display_options['fields']['field_inspection_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inspection_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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
    'inspection_report' => 'inspection_report',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'hide-edit';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Buyer First Name */
  $handler->display->display_options['fields']['field_buyer_first_name']['id'] = 'field_buyer_first_name';
  $handler->display->display_options['fields']['field_buyer_first_name']['table'] = 'field_data_field_buyer_first_name';
  $handler->display->display_options['fields']['field_buyer_first_name']['field'] = 'field_buyer_first_name';
  /* Field: Content: Buyer Last Name */
  $handler->display->display_options['fields']['field_buyer_last_name']['id'] = 'field_buyer_last_name';
  $handler->display->display_options['fields']['field_buyer_last_name']['table'] = 'field_data_field_buyer_last_name';
  $handler->display->display_options['fields']['field_buyer_last_name']['field'] = 'field_buyer_last_name';
  /* Field: Content: Inspection Report Type */
  $handler->display->display_options['fields']['field_inspection_report_type']['id'] = 'field_inspection_report_type';
  $handler->display->display_options['fields']['field_inspection_report_type']['table'] = 'field_data_field_inspection_report_type';
  $handler->display->display_options['fields']['field_inspection_report_type']['field'] = 'field_inspection_report_type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Inspection Date */
  $handler->display->display_options['fields']['field_inspection_date']['id'] = 'field_inspection_date';
  $handler->display->display_options['fields']['field_inspection_date']['table'] = 'field_data_field_inspection_date';
  $handler->display->display_options['fields']['field_inspection_date']['field'] = 'field_inspection_date';
  $handler->display->display_options['fields']['field_inspection_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inspection_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Street Number */
  $handler->display->display_options['fields']['field_street_number']['id'] = 'field_street_number';
  $handler->display->display_options['fields']['field_street_number']['table'] = 'field_data_field_street_number';
  $handler->display->display_options['fields']['field_street_number']['field'] = 'field_street_number';
  /* Field: Content: Street Name */
  $handler->display->display_options['fields']['field_street_name']['id'] = 'field_street_name';
  $handler->display->display_options['fields']['field_street_name']['table'] = 'field_data_field_street_name';
  $handler->display->display_options['fields']['field_street_name']['field'] = 'field_street_name';
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
    'inspection_report' => 'inspection_report',
  );
  /* Filter criterion: Content: Inspection Date (field_inspection_date) */
  $handler->display->display_options['filters']['field_inspection_date_value']['id'] = 'field_inspection_date_value';
  $handler->display->display_options['filters']['field_inspection_date_value']['table'] = 'field_data_field_inspection_date';
  $handler->display->display_options['filters']['field_inspection_date_value']['field'] = 'field_inspection_date_value';
  $handler->display->display_options['filters']['field_inspection_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_inspection_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_inspection_date_value']['expose']['operator_id'] = 'field_inspection_date_value_op';
  $handler->display->display_options['filters']['field_inspection_date_value']['expose']['label'] = 'Inspection Date';
  $handler->display->display_options['filters']['field_inspection_date_value']['expose']['operator'] = 'field_inspection_date_value_op';
  $handler->display->display_options['filters']['field_inspection_date_value']['expose']['identifier'] = 'field_inspection_date_value';
  $handler->display->display_options['filters']['field_inspection_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_inspection_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_inspection_date_value']['year_range'] = '-1:+0';
  /* Filter criterion: Content: Buyer Last Name (field_buyer_last_name) */
  $handler->display->display_options['filters']['field_buyer_last_name_value']['id'] = 'field_buyer_last_name_value';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['table'] = 'field_data_field_buyer_last_name';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['field'] = 'field_buyer_last_name_value';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_buyer_last_name_value']['expose']['operator_id'] = 'field_buyer_last_name_value_op';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['expose']['label'] = 'Buyer Last Name';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['expose']['operator'] = 'field_buyer_last_name_value_op';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['expose']['identifier'] = 'field_buyer_last_name_value';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Inspection Report Type (field_inspection_report_type) */
  $handler->display->display_options['filters']['field_inspection_report_type_value']['id'] = 'field_inspection_report_type_value';
  $handler->display->display_options['filters']['field_inspection_report_type_value']['table'] = 'field_data_field_inspection_report_type';
  $handler->display->display_options['filters']['field_inspection_report_type_value']['field'] = 'field_inspection_report_type_value';
  $handler->display->display_options['filters']['field_inspection_report_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_inspection_report_type_value']['expose']['operator_id'] = 'field_inspection_report_type_value_op';
  $handler->display->display_options['filters']['field_inspection_report_type_value']['expose']['label'] = 'Inspection Report Type';
  $handler->display->display_options['filters']['field_inspection_report_type_value']['expose']['operator'] = 'field_inspection_report_type_value_op';
  $handler->display->display_options['filters']['field_inspection_report_type_value']['expose']['identifier'] = 'field_inspection_report_type_value';
  $handler->display->display_options['filters']['field_inspection_report_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Street Name (field_street_name) */
  $handler->display->display_options['filters']['field_street_name_value']['id'] = 'field_street_name_value';
  $handler->display->display_options['filters']['field_street_name_value']['table'] = 'field_data_field_street_name';
  $handler->display->display_options['filters']['field_street_name_value']['field'] = 'field_street_name_value';
  $handler->display->display_options['filters']['field_street_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_street_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_street_name_value']['expose']['operator_id'] = 'field_street_name_value_op';
  $handler->display->display_options['filters']['field_street_name_value']['expose']['label'] = 'Street Name';
  $handler->display->display_options['filters']['field_street_name_value']['expose']['operator'] = 'field_street_name_value_op';
  $handler->display->display_options['filters']['field_street_name_value']['expose']['identifier'] = 'field_street_name_value';
  $handler->display->display_options['filters']['field_street_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['path'] = 'manager/inspection-reports';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Inspection Reports';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Inspection Reports';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Get My Reports';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Please complete each field to collect your report(s)';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Incorrect Report Criteria';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="error"><p><h3><i class="fa fa-exclamation-triangle fa-4"></i>The Report criteria you provided does not match any of our records.</h3> <br />Please check your selections and try again.</p><p> If you are unable to find your reports, please call us for assistance. <br/><strong>Please note:</strong> We only provide reports for 180 days from inspection.</p></div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Inspection Date */
  $handler->display->display_options['fields']['field_inspection_date']['id'] = 'field_inspection_date';
  $handler->display->display_options['fields']['field_inspection_date']['table'] = 'field_data_field_inspection_date';
  $handler->display->display_options['fields']['field_inspection_date']['field'] = 'field_inspection_date';
  $handler->display->display_options['fields']['field_inspection_date']['label'] = '';
  $handler->display->display_options['fields']['field_inspection_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_inspection_date']['alter']['text'] = '<h2>[title] [[field_inspection_date]]</h2>';
  $handler->display->display_options['fields']['field_inspection_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inspection_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Report */
  $handler->display->display_options['fields']['field_report']['id'] = 'field_report';
  $handler->display->display_options['fields']['field_report']['table'] = 'field_data_field_report';
  $handler->display->display_options['fields']['field_report']['field'] = 'field_report';
  $handler->display->display_options['fields']['field_report']['label'] = 'Download Report File(s)';
  $handler->display->display_options['fields']['field_report']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_report']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_report']['multi_type'] = 'ul';
  /* Field: Content: Buyer First Name */
  $handler->display->display_options['fields']['field_buyer_first_name']['id'] = 'field_buyer_first_name';
  $handler->display->display_options['fields']['field_buyer_first_name']['table'] = 'field_data_field_buyer_first_name';
  $handler->display->display_options['fields']['field_buyer_first_name']['field'] = 'field_buyer_first_name';
  $handler->display->display_options['fields']['field_buyer_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_buyer_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_buyer_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Buyer Last Name */
  $handler->display->display_options['fields']['field_buyer_last_name']['id'] = 'field_buyer_last_name';
  $handler->display->display_options['fields']['field_buyer_last_name']['table'] = 'field_data_field_buyer_last_name';
  $handler->display->display_options['fields']['field_buyer_last_name']['field'] = 'field_buyer_last_name';
  $handler->display->display_options['fields']['field_buyer_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_buyer_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_buyer_last_name']['alter']['text'] = 'For: [field_buyer_first_name] [field_buyer_last_name]';
  $handler->display->display_options['fields']['field_buyer_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Street Number */
  $handler->display->display_options['fields']['field_street_number']['id'] = 'field_street_number';
  $handler->display->display_options['fields']['field_street_number']['table'] = 'field_data_field_street_number';
  $handler->display->display_options['fields']['field_street_number']['field'] = 'field_street_number';
  $handler->display->display_options['fields']['field_street_number']['label'] = '';
  $handler->display->display_options['fields']['field_street_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_street_number']['element_label_colon'] = FALSE;
  /* Field: Content: Street Name */
  $handler->display->display_options['fields']['field_street_name']['id'] = 'field_street_name';
  $handler->display->display_options['fields']['field_street_name']['table'] = 'field_data_field_street_name';
  $handler->display->display_options['fields']['field_street_name']['field'] = 'field_street_name';
  $handler->display->display_options['fields']['field_street_name']['label'] = '';
  $handler->display->display_options['fields']['field_street_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_street_name']['element_label_colon'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = 'For the property at';
  $handler->display->display_options['fields']['field_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_city']['alter']['text'] = '[field_street_number] [field_street_name]<br />
[field_city] ';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'inspection_report' => 'inspection_report',
  );
  /* Filter criterion: Content: Inspection Report Type (field_inspection_report_type) */
  $handler->display->display_options['filters']['field_inspection_report_type_value']['id'] = 'field_inspection_report_type_value';
  $handler->display->display_options['filters']['field_inspection_report_type_value']['table'] = 'field_data_field_inspection_report_type';
  $handler->display->display_options['filters']['field_inspection_report_type_value']['field'] = 'field_inspection_report_type_value';
  $handler->display->display_options['filters']['field_inspection_report_type_value']['value'] = array(
    'Insurance ' => 'Insurance ',
    'Home Inspection ' => 'Home Inspection ',
  );
  $handler->display->display_options['filters']['field_inspection_report_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_inspection_report_type_value']['expose']['operator_id'] = 'field_inspection_report_type_value_op';
  $handler->display->display_options['filters']['field_inspection_report_type_value']['expose']['label'] = 'Inspection Report Type';
  $handler->display->display_options['filters']['field_inspection_report_type_value']['expose']['operator'] = 'field_inspection_report_type_value_op';
  $handler->display->display_options['filters']['field_inspection_report_type_value']['expose']['identifier'] = 'field_inspection_report_type_value';
  $handler->display->display_options['filters']['field_inspection_report_type_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_inspection_report_type_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_inspection_report_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_inspection_report_type_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Street Number (field_street_number) */
  $handler->display->display_options['filters']['field_street_number_value']['id'] = 'field_street_number_value';
  $handler->display->display_options['filters']['field_street_number_value']['table'] = 'field_data_field_street_number';
  $handler->display->display_options['filters']['field_street_number_value']['field'] = 'field_street_number_value';
  $handler->display->display_options['filters']['field_street_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_street_number_value']['expose']['operator_id'] = 'field_street_number_value_op';
  $handler->display->display_options['filters']['field_street_number_value']['expose']['label'] = 'Street Number';
  $handler->display->display_options['filters']['field_street_number_value']['expose']['operator'] = 'field_street_number_value_op';
  $handler->display->display_options['filters']['field_street_number_value']['expose']['identifier'] = 'field_street_number_value';
  $handler->display->display_options['filters']['field_street_number_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_street_number_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_street_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Buyer Last Name (field_buyer_last_name) */
  $handler->display->display_options['filters']['field_buyer_last_name_value']['id'] = 'field_buyer_last_name_value';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['table'] = 'field_data_field_buyer_last_name';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['field'] = 'field_buyer_last_name_value';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_buyer_last_name_value']['expose']['operator_id'] = 'field_buyer_last_name_value_op';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['expose']['label'] = 'Buyer\'s Last Name';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['expose']['operator'] = 'field_buyer_last_name_value_op';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['expose']['identifier'] = 'field_buyer_last_name_value';
  $handler->display->display_options['filters']['field_buyer_last_name_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_buyer_last_name_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_buyer_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $export['inspection_reports'] = $view;

  $view = new view();
  $view->name = 'inspection_steps_home_owners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Inspection Steps - Home Owners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'How Inspections Work';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'inspection-step-row';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_step_image']['id'] = 'field_step_image';
  $handler->display->display_options['fields']['field_step_image']['table'] = 'field_data_field_step_image';
  $handler->display->display_options['fields']['field_step_image']['field'] = 'field_step_image';
  $handler->display->display_options['fields']['field_step_image']['label'] = '';
  $handler->display->display_options['fields']['field_step_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_step_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_step_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_step_image']['settings'] = array(
    'image_style' => 'inspection-step',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="inspection-step">
   <div class="step-title" style="display:inline; position:relative;">
     <h3>[title]</h3>[edit_node]
  </div>
  <div>
    [field_step_image]
  </div>
  <div>
    [body]
  </div>
</div>
';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
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
    'inspection_step' => 'inspection_step',
  );
  /* Filter criterion: Content: Display This Step? (field_display) */
  $handler->display->display_options['filters']['field_display_value']['id'] = 'field_display_value';
  $handler->display->display_options['filters']['field_display_value']['table'] = 'field_data_field_display';
  $handler->display->display_options['filters']['field_display_value']['field'] = 'field_display_value';
  $handler->display->display_options['filters']['field_display_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['inspection_steps_home_owners'] = $view;

  return $export;
}
