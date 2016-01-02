<?php
/**
 * @file
 * ein_global.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ein_global_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inspection_address|node|inspection_report|form';
  $field_group->group_name = 'group_inspection_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'inspection_report';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_inspection_details';
  $field_group->data = array(
    'label' => 'Inspection Address',
    'weight' => '4',
    'children' => array(
      0 => 'field_street_number',
      1 => 'field_street_name',
      2 => 'field_city',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-inspection-address field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_inspection_address|node|inspection_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inspection_details|node|inspection_report|form';
  $field_group->group_name = 'group_inspection_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'inspection_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inspection Details',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_inspection_date',
      2 => 'group_inspection_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-inspection-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_inspection_details|node|inspection_report|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_report_details|node|inspection_report|form';
  $field_group->group_name = 'group_report_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'inspection_report';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Report Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_report',
      1 => 'field_buyer_first_name',
      2 => 'field_buyer_last_name',
      3 => 'field_inspection_report_type',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-report-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_report_details|node|inspection_report|form'] = $field_group;

  return $export;
}
