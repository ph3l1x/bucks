<?php
/**
 * @file
 * bento_profile_directory.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bento_profile_directory_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_biography_group|user|user|form';
  $field_group->group_name = 'group_biography_group';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Biography',
    'weight' => '4',
    'children' => array(
      0 => 'field_user_biography',
      1 => 'field_biography_instruction',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-biography-group field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_biography_group|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_group|user|user|form';
  $field_group->group_name = 'group_contact_group';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact / Location',
    'weight' => '6',
    'children' => array(
      0 => 'field_contact_location_info',
      1 => 'field_include_email_on_profile_',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Contact / Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-contact-group field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_contact_group|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_professional_group|user|user|form';
  $field_group->group_name = 'group_professional_group';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Professional',
    'weight' => '2',
    'children' => array(
      0 => 'field_user_company',
      1 => 'field_user_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-professional-group field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_professional_group|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_group|user|user|form';
  $field_group->group_name = 'group_social_group';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social',
    'weight' => '3',
    'children' => array(
      0 => 'field_user_twitter',
      1 => 'field_user_facebook',
      2 => 'field_user_linkedin',
      3 => 'field_user_website',
      4 => 'field_user_blog',
      5 => 'field_social_links_instruction',
      6 => 'field_include_social_links_on_yo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-social-group field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_social_group|user|user|form'] = $field_group;

  return $export;
}
