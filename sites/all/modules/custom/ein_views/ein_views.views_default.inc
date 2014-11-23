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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_client_target_id']['id'] = 'field_client_target_id';
  $handler->display->display_options['relationships']['field_client_target_id']['table'] = 'field_data_field_client';
  $handler->display->display_options['relationships']['field_client_target_id']['field'] = 'field_client_target_id';
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
    4 => '4',
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
  /* Field: Content: Client */
  $handler->display->display_options['fields']['field_client']['id'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['table'] = 'field_data_field_client';
  $handler->display->display_options['fields']['field_client']['field'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_client']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Inspection Address */
  $handler->display->display_options['fields']['field_inspection_address']['id'] = 'field_inspection_address';
  $handler->display->display_options['fields']['field_inspection_address']['table'] = 'field_data_field_inspection_address';
  $handler->display->display_options['fields']['field_inspection_address']['field'] = 'field_inspection_address';
  $handler->display->display_options['fields']['field_inspection_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inspection_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_inspection_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
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
  );
  $handler->display->display_options['filters']['field_inspection_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_inspection_date_value']['year_range'] = '-3:+1';
  /* Filter criterion: Content: Inspection Address - Locality (i.e. City) */
  $handler->display->display_options['filters']['field_inspection_address_locality']['id'] = 'field_inspection_address_locality';
  $handler->display->display_options['filters']['field_inspection_address_locality']['table'] = 'field_data_field_inspection_address';
  $handler->display->display_options['filters']['field_inspection_address_locality']['field'] = 'field_inspection_address_locality';
  $handler->display->display_options['filters']['field_inspection_address_locality']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_inspection_address_locality']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_inspection_address_locality']['expose']['operator_id'] = 'field_inspection_address_locality_op';
  $handler->display->display_options['filters']['field_inspection_address_locality']['expose']['label'] = 'City';
  $handler->display->display_options['filters']['field_inspection_address_locality']['expose']['operator'] = 'field_inspection_address_locality_op';
  $handler->display->display_options['filters']['field_inspection_address_locality']['expose']['identifier'] = 'field_inspection_address_locality';
  $handler->display->display_options['filters']['field_inspection_address_locality']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'field_client_target_id';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Client Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Header';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<span class="my-reports-head">If an Inspection report has been completed on your behalf, you will see it below. </span>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_client_target_id']['id'] = 'field_client_target_id';
  $handler->display->display_options['relationships']['field_client_target_id']['table'] = 'field_data_field_client';
  $handler->display->display_options['relationships']['field_client_target_id']['field'] = 'field_client_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Client (field_client) */
  $handler->display->display_options['arguments']['field_client_target_id']['id'] = 'field_client_target_id';
  $handler->display->display_options['arguments']['field_client_target_id']['table'] = 'field_data_field_client';
  $handler->display->display_options['arguments']['field_client_target_id']['field'] = 'field_client_target_id';
  $handler->display->display_options['arguments']['field_client_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_client_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_client_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_client_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_client_target_id']['summary_options']['items_per_page'] = '25';
  $export['inspection_reports'] = $view;

  return $export;
}
