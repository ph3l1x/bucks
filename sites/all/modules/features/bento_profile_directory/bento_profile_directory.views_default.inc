<?php
/**
 * @file
 * bento_profile_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bento_profile_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'profile_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Profile Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Employee Directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div><div class="define"><p>This employee/member directory allows for you to feature your employees/members in a well designed landing page. You\'ll be able to add your employees/members to a group that has an advanced profile.</p>
<p>This profile directory comes in three different view options: <a href="/employees">grid view</a>, <a href="/employee-directory">directory view</a>, or <a href="/employee-list">list view</a>.</p>
<p>Note that the advanced search below is optional and can be turned off if you don\'t want it.</p>
<p>Click on a user below to see the advanced profile page.</p></div></div>

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
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = '220x220';
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['label'] = '';
  $handler->display->display_options['fields']['field_user_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_company']['element_label_colon'] = FALSE;
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['label'] = '';
  $handler->display->display_options['fields']['field_user_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_title']['element_label_colon'] = FALSE;
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['text'] = '<div class="user-profile-grid four columns omega">
<div class="inner">
<div class="user-profile-picture">[picture]</div>
<div class="user-profile-name">[name]</div>
<div class="user-profile-company">[field_user_company]</div>
<div class="user-profile-title">[field_user_title]</div>

</div>
</div>';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['text'] = 'View Profile';
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Show Profile (field_show_profile) */
  $handler->display->display_options['filters']['field_show_profile_value']['id'] = 'field_show_profile_value';
  $handler->display->display_options['filters']['field_show_profile_value']['table'] = 'field_data_field_show_profile';
  $handler->display->display_options['filters']['field_show_profile_value']['field'] = 'field_show_profile_value';
  $handler->display->display_options['filters']['field_show_profile_value']['value'] = array(
    'yes' => 'yes',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Start typing a user name to search';
  $handler->display->display_options['filters']['uid']['expose']['description'] = 'Note that some user names will not be listed in the directory even if you can search on them';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: User: Company (field_user_company) */
  $handler->display->display_options['filters']['field_user_company_value']['id'] = 'field_user_company_value';
  $handler->display->display_options['filters']['field_user_company_value']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['filters']['field_user_company_value']['field'] = 'field_user_company_value';
  $handler->display->display_options['filters']['field_user_company_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_company_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_company_value']['expose']['operator_id'] = 'field_user_company_value_op';
  $handler->display->display_options['filters']['field_user_company_value']['expose']['label'] = 'Search Company Name';
  $handler->display->display_options['filters']['field_user_company_value']['expose']['operator'] = 'field_user_company_value_op';
  $handler->display->display_options['filters']['field_user_company_value']['expose']['identifier'] = 'field_user_company_value';
  $handler->display->display_options['filters']['field_user_company_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: User: Title (field_user_title) */
  $handler->display->display_options['filters']['field_user_title_value']['id'] = 'field_user_title_value';
  $handler->display->display_options['filters']['field_user_title_value']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['filters']['field_user_title_value']['field'] = 'field_user_title_value';
  $handler->display->display_options['filters']['field_user_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_title_value']['expose']['operator_id'] = 'field_user_title_value_op';
  $handler->display->display_options['filters']['field_user_title_value']['expose']['label'] = 'Search Employee\'s Title';
  $handler->display->display_options['filters']['field_user_title_value']['expose']['operator'] = 'field_user_title_value_op';
  $handler->display->display_options['filters']['field_user_title_value']['expose']['identifier'] = 'field_user_title_value';
  $handler->display->display_options['filters']['field_user_title_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Member Grid Page */
  $handler = $view->new_display('page', 'Member Grid Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Member Directory';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = '250x250';
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['label'] = '';
  $handler->display->display_options['fields']['field_user_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_company']['element_label_colon'] = FALSE;
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['label'] = '';
  $handler->display->display_options['fields']['field_user_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="user-profile-grid col-xs-12 col-sm-4 col-lg-3">
<div class="inner">
<div class="user-profile-picture">[picture]</div>
<div class="user-profile-name">[name]</div>
<div class="user-profile-company">[field_user_company]</div>
<div class="user-profile-title">[field_user_title]</div>

</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Show Profile (field_show_profile) */
  $handler->display->display_options['filters']['field_show_profile_value']['id'] = 'field_show_profile_value';
  $handler->display->display_options['filters']['field_show_profile_value']['table'] = 'field_data_field_show_profile';
  $handler->display->display_options['filters']['field_show_profile_value']['field'] = 'field_show_profile_value';
  $handler->display->display_options['filters']['field_show_profile_value']['value'] = array(
    'yes' => 'yes',
  );
  $handler->display->display_options['filters']['field_show_profile_value']['group'] = 1;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  $handler->display->display_options['path'] = 'members';

  /* Display: Employee Grid Page */
  $handler = $view->new_display('page', 'Employee Grid Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Employee Directory - Grid View';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'We are sorry. It looks like your search returned no results. You can try another search or click here to <a href="/employees">reset your search</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = '250x250';
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['label'] = '';
  $handler->display->display_options['fields']['field_user_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_company']['element_label_colon'] = FALSE;
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['label'] = '';
  $handler->display->display_options['fields']['field_user_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="user-profile-grid col-xs-12 col-sm-4 col-lg-3">
<div class="inner">
<div class="user-profile-picture">[picture]</div>
<div class="user-profile-name">[name]</div>
<div class="user-profile-company">[field_user_company]</div>
<div class="user-profile-title">[field_user_title]</div>

</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'employees';

  /* Display: Member Directory Page */
  $handler = $view->new_display('page', 'Member Directory Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Member Directory';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = '100x100';
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['label'] = '';
  $handler->display->display_options['fields']['field_user_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_company']['element_label_colon'] = FALSE;
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['label'] = '';
  $handler->display->display_options['fields']['field_user_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_title']['element_label_colon'] = FALSE;
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  $handler->display->display_options['fields']['address']['label'] = '';
  $handler->display->display_options['fields']['address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['address']['hide'] = array(
    'name' => 'name',
    'additional' => 'additional',
    'country' => 'country',
    'locpick' => 'locpick',
    'province_name' => 'province_name',
    'country_name' => 'country_name',
    'map_link' => 'map_link',
    'coords' => 'coords',
    'street' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'phone' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="user-profile-directory-1" class="user-profile-directory col-xs-12 col-sm-6 clearfix">
<div class="inner clearfix">
  <div class="user-profile-grouping">
    <div class="user-profile-picture">[picture]</div>
    <div class="user-profile-name-group">
      <div class="user-profile-name">[name]</div>
      <div class="user-profile-company">[field_user_company]</div>
      <div class="user-profile-title">[field_user_title]</div>
    <div class="user-profile-address">[address]</div>
    </div>
  </div>


</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Show Profile (field_show_profile) */
  $handler->display->display_options['filters']['field_show_profile_value']['id'] = 'field_show_profile_value';
  $handler->display->display_options['filters']['field_show_profile_value']['table'] = 'field_data_field_show_profile';
  $handler->display->display_options['filters']['field_show_profile_value']['field'] = 'field_show_profile_value';
  $handler->display->display_options['filters']['field_show_profile_value']['value'] = array(
    'yes' => 'yes',
  );
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['path'] = 'member-directory';

  /* Display: Employee Directory Page */
  $handler = $view->new_display('page', 'Employee Directory Page', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Employee Directory - Directory View';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'We are sorry. It looks like your search returned no results. You can try another search or click here to <a href="/employee-directory">reset your search</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = '100x100';
  /* Field: User: Company */
  $handler->display->display_options['fields']['field_user_company']['id'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['table'] = 'field_data_field_user_company';
  $handler->display->display_options['fields']['field_user_company']['field'] = 'field_user_company';
  $handler->display->display_options['fields']['field_user_company']['label'] = '';
  $handler->display->display_options['fields']['field_user_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_company']['element_label_colon'] = FALSE;
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['label'] = '';
  $handler->display->display_options['fields']['field_user_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_title']['element_label_colon'] = FALSE;
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  $handler->display->display_options['fields']['address']['label'] = '';
  $handler->display->display_options['fields']['address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['address']['hide'] = array(
    'name' => 'name',
    'additional' => 'additional',
    'country' => 'country',
    'locpick' => 'locpick',
    'province_name' => 'province_name',
    'country_name' => 'country_name',
    'map_link' => 'map_link',
    'coords' => 'coords',
    'street' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'phone' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="user-profile-directory-1" class="user-profile-directory col-xs-12 col-sm-6 clearfix">
<div class="inner clearfix">
  <div class="user-profile-grouping">
    <div class="user-profile-picture">[picture]</div>
    <div class="user-profile-name-group">
      <div class="user-profile-name">[name]</div>
      <div class="user-profile-company">[field_user_company]</div>
      <div class="user-profile-title">[field_user_title]</div>
    <div class="user-profile-address">[address]</div>
    </div>
  </div>


</div>
</div>


<div id="user-profile-directory-2" class="user-profile-directory col-xs-12 col-sm-6 col-lg-4">
<div class="inner clearfix">
    <div class="user-profile-picture">[picture]</div>
    <div class="user-profile-name-group">
      <div class="user-profile-name">[name]</div>
      <div class="user-profile-company">[field_user_company]</div>
      <div class="user-profile-title">[field_user_title]</div>
    </div>
    <div class="user-profile-address">[address]</div>

</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'employee-directory';

  /* Display: Employee List Page */
  $handler = $view->new_display('page', 'Employee List Page', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Employee Directory - List View';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'We are sorry. It looks like your search returned no results. You can try another search or click here to <a href="/employee-directory">reset your search</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Title */
  $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['label'] = '';
  $handler->display->display_options['fields']['field_user_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_title']['element_label_colon'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = '220x220';
  /* Field: User: Biography */
  $handler->display->display_options['fields']['field_user_biography']['id'] = 'field_user_biography';
  $handler->display->display_options['fields']['field_user_biography']['table'] = 'field_data_field_user_biography';
  $handler->display->display_options['fields']['field_user_biography']['field'] = 'field_user_biography';
  $handler->display->display_options['fields']['field_user_biography']['label'] = '';
  $handler->display->display_options['fields']['field_user_biography']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_biography']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="user-profile-directory-3" class="user-profile-directory-3 clearfix">
<div class="inner clearfix">
    <div class="user-profile-picture">[picture]</div>
    <div class="user-profile-name-group">
      <div class="user-profile-name">[name]</div>
      <div class="user-profile-title">[field_user_title]</div>
      <div class="user-profile-biography">[field_user_biography]</div>
  </div>

</div>
</div>








';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'employee-list';
  $export['profile_directory'] = $view;

  return $export;
}
