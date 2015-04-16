<?php
/**
 * @file
 * ein_global.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ein_global_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-inspection_report-body'
  $field_instances['node-inspection_report-body'] = array(
    'bundle' => 'inspection_report',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-inspection_report-field_client'
  $field_instances['node-inspection_report-field_client'] = array(
    'bundle' => 'inspection_report',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You can start typing the name of an existing Client and it will automatically suggest Client names <strong>OR</strong> click the Plus Sign to the right to Add a New Client login based on the report type.<br /> The pencil icon is to edit an existing client for this report.
<br /><strong>Reminder: Enter a unique Client based on the type of report you are uploading.<strong>',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'entityconnect_unload_add' => 0,
    'entityconnect_unload_edit' => 0,
    'field_name' => 'field_client',
    'label' => 'Client',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-inspection_report-field_inspection_address'
  $field_instances['node-inspection_report-field_inspection_address'] = array(
    'bundle' => 'inspection_report',
    'default_value' => array(
      0 => array(
        'element_key' => 'node|inspection_report|field_inspection_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => 'FL',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => 'Location where the inspection was performed.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_inspection_address',
    'label' => 'Inspection Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-inspection_report-field_inspection_date'
  $field_instances['node-inspection_report-field_inspection_date'] = array(
    'bundle' => 'inspection_report',
    'deleted' => 0,
    'description' => 'Date the Inspection was performed',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_inspection_date',
    'label' => 'Inspection Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-inspection_report-field_report'
  $field_instances['node-inspection_report-field_report'] = array(
    'bundle' => 'inspection_report',
    'deleted' => 0,
    'description' => 'Upload the complete Inspection Report. Preferred file format is a PDF file.<br><strong>Reminder: Make sure the file is allowable for the Client entered above.</strong>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_report',
    'label' => 'Report',
    'required' => 1,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'reports',
      'file_extensions' => 'txt doc docx pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Client');
  t('Date the Inspection was performed');
  t('Inspection Address');
  t('Inspection Date');
  t('Location where the inspection was performed.');
  t('Notes');
  t('Report');
  t('Upload the complete Inspection Report. Preferred file format is a PDF file.<br><strong>Reminder: Make sure the file is allowable for the Client entered above.</strong>');
  t('You can start typing the name of an existing Client and it will automatically suggest Client names <strong>OR</strong> click the Plus Sign to the right to Add a New Client login based on the report type.<br /> The pencil icon is to edit an existing client for this report.
<br /><strong>Reminder: Enter a unique Client based on the type of report you are uploading.<strong>');

  return $field_instances;
}
