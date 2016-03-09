<?php
/**
 * @file
 * tm_ecommerce_2013.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tm_ecommerce_2013_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tm_ecommerce_2013_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tm_ecommerce_2013_node_info() {
  $items = array(
    'cart_product' => array(
      'name' => t('Cart Product'),
      'base' => 'node_content',
      'description' => t('This content type allows you to create products for your shopping cart. You\'ll need to have the product created in your store first.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
