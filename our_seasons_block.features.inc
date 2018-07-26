<?php
/**
 * @file
 * our_seasons_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function our_seasons_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function our_seasons_block_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function our_seasons_block_node_info() {
  $items = array(
    'our_seasons_block' => array(
      'name' => t('Our Seasons Block'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
