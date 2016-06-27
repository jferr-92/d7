<?php
/**
 * @file
 * trainingblog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function trainingblog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function trainingblog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function trainingblog_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('Blog posts'),
      'has_title' => '1',
      'title_label' => t('Blog'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
