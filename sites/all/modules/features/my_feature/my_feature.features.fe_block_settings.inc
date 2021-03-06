<?php
/**
 * @file
 * my_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function my_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-latest_posts-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'latest_posts-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Latest Posts',
    'visibility' => 0,
  );

  return $export;
}
