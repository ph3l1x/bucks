<?php
/**
 * @file
 * bento_video_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bento_video_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'video_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Video Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Video Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Video Embed Code */
  $handler->display->display_options['fields']['field_video_embed_code']['id'] = 'field_video_embed_code';
  $handler->display->display_options['fields']['field_video_embed_code']['table'] = 'field_data_field_video_embed_code';
  $handler->display->display_options['fields']['field_video_embed_code']['field'] = 'field_video_embed_code';
  $handler->display->display_options['fields']['field_video_embed_code']['label'] = '';
  $handler->display->display_options['fields']['field_video_embed_code']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_embed_code']['alter']['text'] = '<div class="gallery-post three columns">
  <div class="inner">
        <div class="title">[title]</div>
[field_video_embed_code]
  </div>
</div>

';
  $handler->display->display_options['fields']['field_video_embed_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_embed_code']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video_embed_code']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_video_embed_code']['settings'] = array(
    'video_style' => 'normal',
    'image_style' => 'large',
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
    'video_post' => 'video_post',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div><div class="define">The video gallery allows you to post videos to your website. They will automatically appear in a video gallery. We can also show a random video in a sidebar of your website on any page. This is optional for our websites.</div></div>

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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Video Embed Code */
  $handler->display->display_options['fields']['field_video_embed_code']['id'] = 'field_video_embed_code';
  $handler->display->display_options['fields']['field_video_embed_code']['table'] = 'field_data_field_video_embed_code';
  $handler->display->display_options['fields']['field_video_embed_code']['field'] = 'field_video_embed_code';
  $handler->display->display_options['fields']['field_video_embed_code']['label'] = '';
  $handler->display->display_options['fields']['field_video_embed_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_embed_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_embed_code']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video_embed_code']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_video_embed_code']['settings'] = array(
    'video_style' => 'normal',
    'image_style' => 'large',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="gallery-post col-xs-6 col-sm-4 col-md-3">
  <div class="inner">
        <div class="title">[title]</div>
[field_video_embed_code]
  </div>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'videos';

  /* Display: Random Video Block */
  $handler = $view->new_display('block', 'Random Video Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View All Videos';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Video Embed Code */
  $handler->display->display_options['fields']['field_video_embed_code']['id'] = 'field_video_embed_code';
  $handler->display->display_options['fields']['field_video_embed_code']['table'] = 'field_data_field_video_embed_code';
  $handler->display->display_options['fields']['field_video_embed_code']['field'] = 'field_video_embed_code';
  $handler->display->display_options['fields']['field_video_embed_code']['label'] = '';
  $handler->display->display_options['fields']['field_video_embed_code']['alter']['text'] = '<div class="gallery-post three columns">
  <div class="inner">
    
[field_video_embed_code]
  </div>
</div>

';
  $handler->display->display_options['fields']['field_video_embed_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_embed_code']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video_embed_code']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_video_embed_code']['settings'] = array(
    'video_style' => 'normal',
    'image_style' => '',
  );
  $export['video_gallery'] = $view;

  return $export;
}
