<?php
/**
 * @file
 * bento_photo_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bento_photo_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'photo_galleries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo Galleries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Employees';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Field: Content: Gallery Photo */
  $handler->display->display_options['fields']['field_gallery_photo']['id'] = 'field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['table'] = 'field_data_field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['field'] = 'field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['text'] = '[field_gallery_photo]';
  $handler->display->display_options['fields']['field_gallery_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_photo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_photo']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_photo']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_gallery_photo']['settings'] = array(
    'colorbox_node_style' => 'photo-gallery-thumbnail',
    'colorbox_image_style' => 'large',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="gallery-post three columns">
  <div class="inner">
    
    <div class="title">[title]</div>
[field_gallery_photo] 
  </div>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery_photo' => 'gallery_photo',
  );

  /* Display: Generic Photo Gallery */
  $handler = $view->new_display('page', 'Generic Photo Gallery', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Photo Gallery';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div><div class="define">A photo gallery allows you to showcase images of your work, designs etc. The photo gallery allows for a grid view of your photos that open in a pop-up window when you click on it. This is optional for our websites.</div></div>

<style>
.define {
background:transparent url(\'/files/imce/1px-darken-3.png\');
padding: 10px;
border: 1px dotted #aaa;
}
.dark-region .define {
background:transparent url(\'/files/imce/1px-lighten-3.png\');
border-color: #777;
}
</style>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Photo */
  $handler->display->display_options['fields']['field_gallery_photo']['id'] = 'field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['table'] = 'field_data_field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['field'] = 'field_gallery_photo';
  $handler->display->display_options['fields']['field_gallery_photo']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_photo']['alter']['text'] = '[field_gallery_photo]';
  $handler->display->display_options['fields']['field_gallery_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_photo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_photo']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_photo']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_gallery_photo']['settings'] = array(
    'colorbox_node_style' => '220x220',
    'colorbox_image_style' => 'large',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-xs-6 col-sm-4 col-md-3">
<div class="gallery-post">
  <div class="inner">
    
    <div class="title">[title]</div>
[field_gallery_photo] 
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'gallery';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Photo Gallery';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['photo_galleries'] = $view;

  return $export;
}
