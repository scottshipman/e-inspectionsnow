<?php
/**
 * @file
 * ein_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ein_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-association_logos'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'association_logos',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => -18,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-cities_served'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'cities_served',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'cities-served',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'testimonials',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-copywrite'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'copywrite',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'footer_second',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-header_phone_number'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'header_phone_number',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-home_first_bottom'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'home_first_bottom',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'bottom_widget_1',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-home_intro'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'home_intro',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'testimonials',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-home_second_bottom'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'home_second_bottom',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'bottom_widget_2',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-homebuyer_testimonial'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'homebuyer_testimonial',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'home-buyers',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'testimonials',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-left_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'left_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'top_first',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-login_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'login_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => 'header_right',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-middle_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'middle_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'top_second',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-my_report'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'my_report',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
      'authenticated user' => 2,
    ),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-new_report'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'new_report',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'Inspector' => 4,
    ),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => 'header_right',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-reaestate_bottom_middle'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'reaestate_bottom_middle',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'real-estate-professionals',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-realestate_bottom_left'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'realestate_bottom_left',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'real-estate-professionals',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'bottom_widget_1',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-realestate_bottom_right'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'realestate_bottom_right',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'real-estate-professionals',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'bottom_widget_2',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => -20,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-realestate_testimonial'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'realestate_testimonial',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'real-estate-professionals',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'testimonials',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-right_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'right_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'top_third',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-schedule_testimonial'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'schedule_testimonial',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'schedule-inspection',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'testimonials',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-services_bottom_left'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'services_bottom_left',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'services',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'bottom_widget_1',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-services_bottom_middle'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'services_bottom_middle',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'services',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'bottom_widget_2',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-services_bottom_right'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'services_bottom_right',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'services',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'bottom_widget_3',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => -19,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-services_quote'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'services_quote',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'services',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'testimonials',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-tagline'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'tagline',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'user_menu',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'switch_user',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['diff-inline'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'inline',
    'module' => 'diff',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['nivo_slider-nivo_slider'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'nivo_slider',
    'module' => 'nivo_slider',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'slideshow',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'skeletontheme' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['site_map-syndicate'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'site_map',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'search',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => 'header_top_left',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => 'top_nav',
        'status' => 1,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => -6,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => -6,
      ),
      'thecompany' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'thecompany',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => 'Login to Download Reports',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-60fccbf3ff4d3b1680d627472f618b47'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '60fccbf3ff4d3b1680d627472f618b47',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'home-buyers',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-blog_list-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blog_list-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'homeowner-tips/*',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-inspection_reports-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'inspection_reports-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'my-reports',
    'roles' => array(),
    'themes' => array(
      'lexus_zymphonies_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lexus_zymphonies_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'skeletontheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'skeletontheme',
        'weight' => 0,
      ),
      'thecompany' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'thecompany',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
