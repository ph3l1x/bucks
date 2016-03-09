<?php
/**
 * @file
 * product_catalog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function product_catalog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function product_catalog_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function product_catalog_image_default_styles() {
  $styles = array();

  // Exported image style: catalog-product-primary.
  $styles['catalog-product-primary'] = array(
    'name' => 'catalog-product-primary',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '470',
          'height' => '470',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: catalog-product-secondary.
  $styles['catalog-product-secondary'] = array(
    'name' => 'catalog-product-secondary',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '140',
          'height' => '140',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function product_catalog_node_info() {
  $items = array(
    'catalog_feed' => array(
      'name' => t('Catalog Feed'),
      'base' => 'node_content',
      'description' => t('This will be the feed used to import products using the Catalog Feed Importer.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'catalog_product' => array(
      'name' => t('Catalog Product'),
      'base' => 'node_content',
      'description' => t('Products for the copier catalog. New and improved.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
