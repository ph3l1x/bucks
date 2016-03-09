<?php
/**
 * @file
 * tm_revolution_940.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tm_revolution_940_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slide1|node|tm_revolution_940|form';
  $field_group->group_name = 'group_slide1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tm_revolution_940';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slide 1',
    'weight' => '7',
    'children' => array(
      0 => 'field_s1l0_img',
      1 => 'field_s1l0_color',
      2 => 'field_s1l0_trans',
      3 => 'field_s1l1_img',
      4 => 'field_s1l1_start',
      5 => 'field_s1l1_end',
      6 => 'field_s1l1_buildin',
      7 => 'field_s1l1_speed',
      8 => 'field_s1link_buildin',
      9 => 'field_s1link_url',
      10 => 'field_s1link_color',
      11 => 'field_s1link_start',
      12 => 'field_s1link_end',
      13 => 'field_s1link_speed',
      14 => 'field_s1link_xloc',
      15 => 'field_s1link_yloc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_slide1|node|tm_revolution_940|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slide2|node|tm_revolution_940|form';
  $field_group->group_name = 'group_slide2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tm_revolution_940';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slide 2',
    'weight' => '9',
    'children' => array(
      0 => 'field_s2l0_img',
      1 => 'field_s2l0_color',
      2 => 'field_s2l0_trans',
      3 => 'field_s2l1_start',
      4 => 'field_s2l1_end',
      5 => 'field_s2l1_buildin',
      6 => 'field_s2l1_speed',
      7 => 'field_s2link_url',
      8 => 'field_s2link_buildin',
      9 => 'field_s2l1_img',
      10 => 'field_s2link_color',
      11 => 'field_s2link_start',
      12 => 'field_s2link_end',
      13 => 'field_s2link_xloc',
      14 => 'field_s2link_yloc',
      15 => 'field_s2link_speed',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_slide2|node|tm_revolution_940|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slide3|node|tm_revolution_940|form';
  $field_group->group_name = 'group_slide3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tm_revolution_940';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slide 3',
    'weight' => '11',
    'children' => array(
      0 => 'field_s3l0_img',
      1 => 'field_s3l0_color',
      2 => 'field_s3l0_trans',
      3 => 'field_s3l1_img',
      4 => 'field_s3l1_end',
      5 => 'field_s3l1_start',
      6 => 'field_s3l1_buildin',
      7 => 'field_s3l1_speed',
      8 => 'field_s3link_url',
      9 => 'field_s3link_color',
      10 => 'field_s3link_buildin',
      11 => 'field_s3link_start',
      12 => 'field_s3link_end',
      13 => 'field_s3link_speed',
      14 => 'field_s3link_xloc',
      15 => 'field_s3link_yloc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_slide3|node|tm_revolution_940|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slide4|node|tm_revolution_940|form';
  $field_group->group_name = 'group_slide4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tm_revolution_940';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slide 4',
    'weight' => '13',
    'children' => array(
      0 => 'field_s4l0_img',
      1 => 'field_s4l0_color',
      2 => 'field_s4l0_trans',
      3 => 'field_s4l1_img',
      4 => 'field_s4l1_start',
      5 => 'field_s4l1_end',
      6 => 'field_s4l1_buildin',
      7 => 'field_s4l1_speed',
      8 => 'field_s4link_url',
      9 => 'field_s4link_color',
      10 => 'field_s4link_buildin',
      11 => 'field_s4link_start',
      12 => 'field_s4link_end',
      13 => 'field_s4link_speed',
      14 => 'field_s4link_xloc',
      15 => 'field_s4link_yloc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_slide4|node|tm_revolution_940|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slide5|node|tm_revolution_940|form';
  $field_group->group_name = 'group_slide5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tm_revolution_940';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slide 5',
    'weight' => '15',
    'children' => array(
      0 => 'field_s5l0_img',
      1 => 'field_s5l0_color',
      2 => 'field_s5l0_trans',
      3 => 'field_s5l1_img',
      4 => 'field_s5l1_start',
      5 => 'field_s5l1_end',
      6 => 'field_s5l1_buildin',
      7 => 'field_s5l1_speed',
      8 => 'field_s5link_url',
      9 => 'field_s5link_color',
      10 => 'field_s5link_buildin',
      11 => 'field_s5link_start',
      12 => 'field_s5link_end',
      13 => 'field_s5link_speed',
      14 => 'field_s5link_xloc',
      15 => 'field_s5link_yloc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_slide5|node|tm_revolution_940|form'] = $field_group;

  return $export;
}
