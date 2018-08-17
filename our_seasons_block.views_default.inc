<?php
/**
 * @file
 * our_seasons_block.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function our_seasons_block_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'our_seasons_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Our Seasons Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'See more';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '3';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '12';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'fieldset_1',
    1 => 'fieldset_2',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'view-what-s-on event-result-item';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_event_genre',
    1 => 'field_event_image',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'event-img-container';
  /* Field: Content: Event Genre */
  $handler->display->display_options['fields']['field_event_genre']['id'] = 'field_event_genre';
  $handler->display->display_options['fields']['field_event_genre']['table'] = 'field_data_field_event_genre';
  $handler->display->display_options['fields']['field_event_genre']['field'] = 'field_event_genre';
  $handler->display->display_options['fields']['field_event_genre']['label'] = '';
  $handler->display->display_options['fields']['field_event_genre']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_genre']['alter']['text'] = '<div class="views-field views-field-field-event-genre"><div class="field-content views-field-field-event-type [field_event_genre] fix-top-what-s-on">[field_event_genre]</div></div>';
  $handler->display->display_options['fields']['field_event_genre']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_genre']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_event_image']['element_wrapper_class'] = 'seasons-image-border';
  $handler->display->display_options['fields']['field_event_image']['empty'] = '<img src="/sites/default/files/ctp-season3.jpg" alt="2018-2019 Season" width="480">';
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'events_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'title',
    1 => 'field_dates',
    2 => 'view_node',
    3 => 'field_tickets_link',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'event-info-seasons';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = '';
  $handler->display->display_options['fields']['field_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'view_mode' => 'event_node',
  );
  $handler->display->display_options['fields']['field_dates']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_dates']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_dates']['separator'] = '-';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<a href="[field_tickets_link-url]" class="btn btn-small">Info</a>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Ticket Link */
  $handler->display->display_options['fields']['field_tickets_link']['id'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['table'] = 'field_data_field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['field'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['label'] = '';
  $handler->display->display_options['fields']['field_tickets_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['alter']['text'] = '<a href="[field_tickets_link-url]" class="btn btn-small">Tickets</a>';
  $handler->display->display_options['fields']['field_tickets_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tickets_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tickets_link']['type'] = 'link_url';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* Sort criterion: Content: Event Date (field_dates) */
  $handler->display->display_options['sorts']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value']['field'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Field: Organization (field_organization) */
  $handler->display->display_options['filters']['field_organization_tid']['id'] = 'field_organization_tid';
  $handler->display->display_options['filters']['field_organization_tid']['table'] = 'field_data_field_organization';
  $handler->display->display_options['filters']['field_organization_tid']['field'] = 'field_organization_tid';
  $handler->display->display_options['filters']['field_organization_tid']['value'] = array(
    0 => '176',
    1 => '192',
    2 => '193',
  );
  $handler->display->display_options['filters']['field_organization_tid']['vocabulary'] = 'organization';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'fieldset_1',
    1 => 'fieldset_2',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'view-what-s-on event-result-item';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_event_genre',
    1 => 'field_event_image',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'event-img-container';
  /* Field: Content: Event Genre */
  $handler->display->display_options['fields']['field_event_genre']['id'] = 'field_event_genre';
  $handler->display->display_options['fields']['field_event_genre']['table'] = 'field_data_field_event_genre';
  $handler->display->display_options['fields']['field_event_genre']['field'] = 'field_event_genre';
  $handler->display->display_options['fields']['field_event_genre']['label'] = '';
  $handler->display->display_options['fields']['field_event_genre']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_genre']['alter']['text'] = '<div class="views-field views-field-field-event-genre"><div class="field-content views-field-field-event-type [field_event_genre] fix-top-what-s-on">[field_event_genre]</div></div>';
  $handler->display->display_options['fields']['field_event_genre']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_genre']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_event_image']['element_wrapper_class'] = 'seasons-image-border';
  $handler->display->display_options['fields']['field_event_image']['empty'] = '<img src="/sites/default/files/ctp-season3.jpg" alt="2018-2019 Season" width="480">';
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'events_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'title',
    1 => 'field_dates',
    2 => 'view_node',
    3 => 'field_promo_code_url',
    4 => 'field_tickets_link',
    5 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'event-info-seasons';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = '';
  $handler->display->display_options['fields']['field_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'view_mode' => 'event_node',
  );
  $handler->display->display_options['fields']['field_dates']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_dates']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_dates']['separator'] = '-';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<a href="[field_tickets_link-url]" class="btn btn-small">Info</a>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = TRUE;
  /* Field: Content: Promo Code URL */
  $handler->display->display_options['fields']['field_promo_code_url']['id'] = 'field_promo_code_url';
  $handler->display->display_options['fields']['field_promo_code_url']['table'] = 'field_data_field_promo_code_url';
  $handler->display->display_options['fields']['field_promo_code_url']['field'] = 'field_promo_code_url';
  $handler->display->display_options['fields']['field_promo_code_url']['label'] = '';
  $handler->display->display_options['fields']['field_promo_code_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_promo_code_url']['alter']['text'] = '<a href="[field_promo_code_url]" class="btn btn-small">Promo Code</a>';
  $handler->display->display_options['fields']['field_promo_code_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promo_code_url']['hide_empty'] = TRUE;
  /* Field: Content: Ticket Link */
  $handler->display->display_options['fields']['field_tickets_link']['id'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['table'] = 'field_data_field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['field'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['label'] = '';
  $handler->display->display_options['fields']['field_tickets_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['alter']['text'] = '<a href="[field_tickets_link-url]" class="btn btn-small">Tickets</a>';
  $handler->display->display_options['fields']['field_tickets_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tickets_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_tickets_link']['type'] = 'link_url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="seasons-mask"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;

  /* Display: Homepage block */
  $handler = $view->new_display('block', 'Homepage block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Our Season';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'season-item';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p class="text-center"> Meridian Theatres at Centrepointe\'s 2018/2019 Season has something for everyone, including kid-friendly programming, big name comedy and music acts and more.</p>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'file_view_mode' => 'teaser',
  );
  /* Field: Field: Link */
  $handler->display->display_options['fields']['field_block_link']['id'] = 'field_block_link';
  $handler->display->display_options['fields']['field_block_link']['table'] = 'field_data_field_block_link';
  $handler->display->display_options['fields']['field_block_link']['field'] = 'field_block_link';
  $handler->display->display_options['fields']['field_block_link']['label'] = '';
  $handler->display->display_options['fields']['field_block_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_block_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_block_link']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="text-center"><a href="/our-seasons"><img src="/sites/default/files/season1819.jpg" alt="2018/2019 Season Image" title="2018/2019 Season" class="img-responsive"></a></div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'container';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Our Season Order */
  $handler = $view->new_display('page', 'Our Season Order', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Our Season Order';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
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
    'our_seasons_block' => 'our_seasons_block',
  );
  $handler->display->display_options['path'] = 'admin/content/our-seasons-order';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Our Season Order';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['our_seasons_blocks'] = $view;

  return $export;
}
