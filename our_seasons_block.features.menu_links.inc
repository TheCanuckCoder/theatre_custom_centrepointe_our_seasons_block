<?php
/**
 * @file
 * our_seasons_block.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function our_seasons_block_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_our-season:node/31.
  $menu_links['main-menu_our-season:node/31'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/31',
    'router_path' => 'node/%',
    'link_title' => 'Our Season',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'identifier' => 'main-menu_our-season:node/31',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: management_our-season-order:admin/content/our-seasons-order.
  $menu_links['management_our-season-order:admin/content/our-seasons-order'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/our-seasons-order',
    'router_path' => 'admin/content/our-seasons-order',
    'link_title' => 'Our Season Order',
    'options' => array(
      'identifier' => 'management_our-season-order:admin/content/our-seasons-order',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: navigation_our-seasons-block:node/add/our-seasons-block.
  $menu_links['navigation_our-seasons-block:node/add/our-seasons-block'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/our-seasons-block',
    'router_path' => 'node/add/our-seasons-block',
    'link_title' => 'Our Seasons Block',
    'options' => array(
      'identifier' => 'navigation_our-seasons-block:node/add/our-seasons-block',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Our Season');
  t('Our Season Order');
  t('Our Seasons Block');

  return $menu_links;
}
