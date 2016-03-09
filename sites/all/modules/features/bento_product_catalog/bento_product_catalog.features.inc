<?php
/**
 * @file
 * bento_product_catalog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bento_product_catalog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bento_product_catalog_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bento_product_catalog_node_info() {
  $items = array(
    'catalog_item' => array(
      'name' => t('Catalog Item'),
      'base' => 'node_content',
      'description' => t('A product catalog allows for you to add individual products to your website. It also gives you the option to send users to a form to request more information. That link is defaulted to your contact page but can be changed to any form or page you like. In addition, you\'ll see a block and a page with more information about your products.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
