<?php
/**
 * @file
 * bento_product_catalog.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bento_product_catalog_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'generic_catalog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Generic Catalog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Catalog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div><div class="define"><p>This simple product catalog can be used in a variety of ways. This feature includes image fields for your product images, a description field that can be designed in anyway you choose as well as optional fields for links (request quote form, etc), price and an embed code for ecommerce functions.</p>
<p>In addition to the product pages, you have an option for a <a href="/catalog-grid">grid view</a> or a <a href="/catalog-list">list view</a> of your products. A random, rotating sidebar block can be added to any location on your website and you\'ll be able to feature the products of your choice in this rotating block.</p>
<p>Notice that each of these boxes below have different options visible. This is because each has different loaded to show options. If you are consistent in your data entry, these boxes will appear consistent.</p></div></div>

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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Check back soon for our first product to be added.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '312x312',
    'image_link' => 'content',
  );
  /* Field: Content: Learn More Link */
  $handler->display->display_options['fields']['field_learn_more_link']['id'] = 'field_learn_more_link';
  $handler->display->display_options['fields']['field_learn_more_link']['table'] = 'field_data_field_learn_more_link';
  $handler->display->display_options['fields']['field_learn_more_link']['field'] = 'field_learn_more_link';
  $handler->display->display_options['fields']['field_learn_more_link']['label'] = '';
  $handler->display->display_options['fields']['field_learn_more_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_learn_more_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_learn_more_link']['click_sort_column'] = 'url';
  /* Field: Content: Pay Now Embed Code */
  $handler->display->display_options['fields']['field_pay_now_embed_code']['id'] = 'field_pay_now_embed_code';
  $handler->display->display_options['fields']['field_pay_now_embed_code']['table'] = 'field_data_field_pay_now_embed_code';
  $handler->display->display_options['fields']['field_pay_now_embed_code']['field'] = 'field_pay_now_embed_code';
  $handler->display->display_options['fields']['field_pay_now_embed_code']['label'] = '';
  $handler->display->display_options['fields']['field_pay_now_embed_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pay_now_embed_code']['element_label_colon'] = FALSE;
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_product_price']['id'] = 'field_product_price';
  $handler->display->display_options['fields']['field_product_price']['table'] = 'field_data_field_product_price';
  $handler->display->display_options['fields']['field_product_price']['field'] = 'field_product_price';
  $handler->display->display_options['fields']['field_product_price']['label'] = '';
  $handler->display->display_options['fields']['field_product_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_price']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_1']['text'] = 'Learn More';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-xs-12 col-sm-4 col-lg-3 product-catalog product-catalog-grid">
  <div class="equal-height inner">
  <div class="title">
  [title]
  </div>

  <div class="image">
  [field_image]
  </div>
  

  
  <div class="price">
  [field_product_price]
  </div>
  <div class="learn-more-link"><div class="content">
  [view_node_1] 
  </div></div>
  <div class="embed-code">
  [field_pay_now_embed_code]
  </div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'catalog_item' => 'catalog_item',
  );

  /* Display: Catalog Grid View */
  $handler = $view->new_display('page', 'Catalog Grid View', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'catalog-grid';

  /* Display: Catalog List View */
  $handler = $view->new_display('page', 'Catalog List View', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '220x220',
    'image_link' => 'content',
  );
  /* Field: Content: Learn More Link */
  $handler->display->display_options['fields']['field_learn_more_link']['id'] = 'field_learn_more_link';
  $handler->display->display_options['fields']['field_learn_more_link']['table'] = 'field_data_field_learn_more_link';
  $handler->display->display_options['fields']['field_learn_more_link']['field'] = 'field_learn_more_link';
  $handler->display->display_options['fields']['field_learn_more_link']['label'] = '';
  $handler->display->display_options['fields']['field_learn_more_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_learn_more_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_learn_more_link']['click_sort_column'] = 'url';
  /* Field: Content: Pay Now Embed Code */
  $handler->display->display_options['fields']['field_pay_now_embed_code']['id'] = 'field_pay_now_embed_code';
  $handler->display->display_options['fields']['field_pay_now_embed_code']['table'] = 'field_data_field_pay_now_embed_code';
  $handler->display->display_options['fields']['field_pay_now_embed_code']['field'] = 'field_pay_now_embed_code';
  $handler->display->display_options['fields']['field_pay_now_embed_code']['label'] = '';
  $handler->display->display_options['fields']['field_pay_now_embed_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pay_now_embed_code']['element_label_colon'] = FALSE;
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_product_price']['id'] = 'field_product_price';
  $handler->display->display_options['fields']['field_product_price']['table'] = 'field_data_field_product_price';
  $handler->display->display_options['fields']['field_product_price']['field'] = 'field_product_price';
  $handler->display->display_options['fields']['field_product_price']['label'] = '';
  $handler->display->display_options['fields']['field_product_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_product_price']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['label'] = '';
  $handler->display->display_options['fields']['view_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_1']['text'] = 'Learn More';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="product-catalog product-catalog-list">
  <div class="inner clearfix">
    <div class="catalog-info">
      <div class="image">
        [field_image]
      </div>
      <div class="title">
        [title]
      </div>
      <div class="body">
        [body]
      </div>
      <div class="catalog-info-2">
        <div class="embed-code">
          [field_pay_now_embed_code]
        </div>
        <div class="learn-more-link">
          <div class="content">
            [view_node_1]
          </div>
        </div>
        <div class="price">
          [field_product_price]
        </div>
      </div>
      <div class="catalog-info-3">
        <div class="price">
          [field_product_price]
        </div>
        <div class="learn-more-link">
          <div class="content">
            [view_node_1]
          </div>
        </div>
        <div class="embed-code">
          [field_pay_now_embed_code]
        </div>
      </div>
    </div>
  </div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'catalog-list';

  /* Display: Random Product Block */
  $handler = $view->new_display('block', 'Random Product Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_image' => 0,
    'field_product_price' => 0,
    'field_learn_more_link' => 0,
    'field_pay_now_embed_code' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_image' => 0,
    'field_product_price' => 0,
    'field_learn_more_link' => 0,
    'field_pay_now_embed_code' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div><div class="define">You\'ll have the option to add products to this rotating product block.</div></div>

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
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a class="button-red-45-square" href="/catalog-grid">View All Products</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '312x312',
    'image_link' => 'content',
  );
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_product_price']['id'] = 'field_product_price';
  $handler->display->display_options['fields']['field_product_price']['table'] = 'field_data_field_product_price';
  $handler->display->display_options['fields']['field_product_price']['field'] = 'field_product_price';
  $handler->display->display_options['fields']['field_product_price']['label'] = '';
  $handler->display->display_options['fields']['field_product_price']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Learn More';
  /* Field: Content: Pay Now Embed Code */
  $handler->display->display_options['fields']['field_pay_now_embed_code']['id'] = 'field_pay_now_embed_code';
  $handler->display->display_options['fields']['field_pay_now_embed_code']['table'] = 'field_data_field_pay_now_embed_code';
  $handler->display->display_options['fields']['field_pay_now_embed_code']['field'] = 'field_pay_now_embed_code';
  $handler->display->display_options['fields']['field_pay_now_embed_code']['label'] = '';
  $handler->display->display_options['fields']['field_pay_now_embed_code']['element_label_colon'] = FALSE;
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
    'catalog_item' => 'catalog_item',
  );
  /* Filter criterion: Content: Feature in Sidebar Block (field_feature_in_sidebar_block) */
  $handler->display->display_options['filters']['field_feature_in_sidebar_block_value']['id'] = 'field_feature_in_sidebar_block_value';
  $handler->display->display_options['filters']['field_feature_in_sidebar_block_value']['table'] = 'field_data_field_feature_in_sidebar_block';
  $handler->display->display_options['filters']['field_feature_in_sidebar_block_value']['field'] = 'field_feature_in_sidebar_block_value';
  $handler->display->display_options['filters']['field_feature_in_sidebar_block_value']['value'] = array(
    'yes' => 'yes',
  );
  $export['generic_catalog'] = $view;

  return $export;
}
