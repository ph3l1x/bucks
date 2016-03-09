<?php
/**
 * @file
 * bento_product_catalog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bento_product_catalog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pro_secondary_images|node|catalog_item|form';
  $field_group->group_name = 'group_pro_secondary_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'catalog_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Secondary Images',
    'weight' => '2',
    'children' => array(
      0 => 'field_pro_secondary_image_1',
      1 => 'field_pro_secondary_image_2',
      2 => 'field_pro_secondary_image_3',
      3 => 'field_secondary_images_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Secondary Images',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-pro-secondary-images field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_pro_secondary_images|node|catalog_item|form'] = $field_group;

  return $export;
}
