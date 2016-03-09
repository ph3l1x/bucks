<?php

/**
 * views_isotope_advanced configuration form
 */
function views_isotope_advanced_settings_form() {
  $form = array();
  
  $instances = views_isotope_advanced_instances('all');
  $database_instances = views_isotope_advanced_instances('database');
  $module_instances = views_isotope_advanced_instances('code');
  
  $trs = '';
  $count = 0;
  foreach($instances AS $machine_name => $values) {
    $type = isset($database_instances[$machine_name]) ? (isset($module_instances[$machine_name]) ? 2 : 1) : 0;
    $type_text = $type == 2 ? t('Database overriding code') : ($type == 1 ? t('In database') : t('In code'));
    
    $even = ++$count % 2 ? 'odd' : 'even';
    $trs .= '<tr class="'.$even.'"><td><b>'.$machine_name.'</b><br><em>'.$type_text .'</em></td><td>'.($values['enabled'] ? t('enabled') : t('disabled')).'</td><td><ul class="links inline">
      <li class="disable first">'.($values['enabled'] ? l(t('disable'), 'admin/config/user-interface/views-isotope-advanced/'.$machine_name.'/disable') : l(t('enable'), 'admin/config/user-interface/views_isotope_advanced/'.$machine_name.'/enable')).'</li>
      <li class="edit">'.l('edit', 'admin/config/user-interface/views-isotope-advanced/'.$machine_name).'</li>'.($type == 2 ? '
      <li class="revert last">'.l('revert', 'admin/config/user-interface/views-isotope-advanced/'.$machine_name.'/revert').'</li>' : ($type == 1 ? '
      <li class="delete last">'.l('delete', 'admin/config/user-interface/views-isotope-advanced/'.$machine_name.'/delete').'</li>' : "")) . ' 
    </ul></td></tr>';
  }
  
  $form['views_isotope_advanced_list'] = array(
      '#markup' => '<label>'.t('Isotope Configurations').'</label> <table><tr>
        <th>'.t('Name').'</th>
        <th>'.t('Enabled').'</th>
        <th>'.t('Actions').'</th></tr>'
        .$trs.'</table>',
  );
    
  return system_settings_form($form);
}

/**
 * Isotope instance add form
 */
function views_isotope_advanced_instance_add_form($form_state) {
  $form = array();
  
  $form['isotope_machine_name'] = array(
      '#type' => 'machine_name',
      '#machine_name' => array('exists' => 'views_isotope_advanced_instance_name_exists'),
      '#required' => true,
      '#title' => t('Isotope Instance Machine Name'),
  );
  
  $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Save'),
  );
  
  $form['#submit'][] = 'views_isotope_advanced_instance_add_form_submit';
  
  return $form;
}

function views_isotope_advanced_instance_export_form($form, $form_state, $instance) {
  $instances = views_isotope_advanced_instances('all');
  $output = '$instances[\''.$instance.'\'] = '.var_export($instances[$instance], true).';';
          
  $form = array();
  $form['export_code'] = array(
      '#title' => t('Isotope Instance "@instance" Export', array('@instance' => $instance)),
      '#type' => 'textarea',
      '#rows' => 20,
      '#default_value' => $output,
  );
  
  return $form;
}

function views_isotope_advanced_instance_name_exists($value) {
  $instances = views_isotope_advanced_instances('all');
  if(!empty($instances[$value])) {
    return true;
  }
  
  return false;
}

function views_isotope_advanced_instance_add_form_submit($form, &$form_state) {
  $instances = views_isotope_advanced_instances('database');
  $new = $form_state['values']['isotope_machine_name'];
  $instances[$new] = array();
  views_isotope_advanced_instance_defaults_extend($instances[$new]);
  variable_set('views_isotope_advanced_instances', $instances);
  $form_state['redirect'] = 'admin/config/user-interface/views_isotope_advanced/'.$new;
}

/**
 * Isotope instance edit form
 */
function views_isotope_advanced_instance_edit_form($form, $form_state, $instance_id) {
  $form = array();
  
  $instances = views_isotope_advanced_instances();
  
  if(empty($instances[$instance_id])) {
    return NULL;
  }
  
  $instance = $instances[$instance_id];
  
  $form['vertical_tabs'] = array(
    '#type' => 'vertical_tabs',
  );

  $form['vertical_tabs']['config'] = array(
    '#type' => 'fieldset',
    '#title' => t('Setup'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#group' => 'visibility',
    '#weight' => 0,
  );
    
  $form['vertical_tabs']['config']['item_selector'] = array(
      '#type' => 'textarea',
      '#title' => t('Item Selector - ANOTHER PLACE FORM FIELDS ARE CONNFIGURED AS A SUFFIX... uggh'),
      '#default_value' => $instance['item_selector'],
      '#description' => t('Within container context.'),
      '#suffix' => '<label>' . t('Config per CSS breakpoint') . '</label><table><tr>
    <th>'.t('Screen Width (min)').'</th>
    <th>'.t('Columns').'</th>
    <th>'.t('Gutter Width').'</th>
    <th>'.t('Fluid').'</th>
    <th>'.t('Destroy').'</th>
    <th>'.t('Actions').'</th>
    </tr>',
  );
  
//  $form['breakpoints_design'] = array(
//      '#type' => 'radios',
//      '#title' => t('CSS Breakpoints Design'),
//      '#default_value' => $instance['breakpoints_design'],
//      '#options' => array('mobile_first' => t('Mobile First'), 'desktop_first' => t('Desktop First')),
//  );
  
  $form['vertical_tabs']['config']['breakpoints']['#tree'] = TRUE;
  
  foreach($instance['breakpoints'] AS $num => $values) {
  
    $form['vertical_tabs']['config']['breakpoints'][$num]['screen_width'] = array(
      '#type' => 'textfield',
      '#default_value' => $values['screen_width'],
      '#size' => 5,
      '#prefix' => '<tr><td>',
      '#suffix' => '</td>',
     );
  
    $form['vertical_tabs']['config']['breakpoints'][$num]['number_of_columns'] = array(
      '#type' => 'textfield',
      '#default_value' => $values['number_of_columns'],
      '#size' => 5,
      '#prefix' => '<td>',
      '#suffix' => '</td>',
     );
  
    $form['vertical_tabs']['config']['breakpoints'][$num]['gutter_width'] = array(
      '#type' => 'textfield',
      '#default_value' => $values['gutter_width'],
      '#size' => 5,
      '#prefix' => '<td>',
      '#suffix' => '</td>',
     );
  
    $form['vertical_tabs']['config']['breakpoints'][$num]['fluid'] = array(
      '#type' => 'checkbox',
      '#default_value' => $values['fluid'],
      '#prefix' => '<td>',
      '#suffix' => '</td>',
     );
  
    $form['vertical_tabs']['config']['breakpoints'][$num]['disable'] = array(
      '#type' => 'checkbox',
      '#default_value' => $values['disable'],
      '#prefix' => '<td>',
      '#suffix' => '</td><td>'.l(t('Delete'),'admin/config/user-interface/views_isotope_advanced/'.$instance_id.'/'.$num.'/delete').'</td>',
     );
    
  } 
  
  $num = max(array_keys($instance['breakpoints']))+1;
  
  $form['vertical_tabs']['config']['breakpoints'][$num]['screen_width'] = array(
    '#type' => 'textfield',
      '#size' => 5,
    '#prefix' => '<tr><td>',
    '#suffix' => '</td>',
  );

  $form['vertical_tabs']['config']['breakpoints'][$num]['number_of_columns'] = array(
    '#type' => 'textfield',
      '#size' => 5,
    '#prefix' => '<td>',
    '#suffix' => '</td>',
  );

  $form['vertical_tabs']['config']['breakpoints'][$num]['gutter_width'] = array(
    '#type' => 'textfield',
      '#size' => 5,
    '#prefix' => '<td>',
    '#suffix' => '</td>',
  );

  $form['vertical_tabs']['config']['breakpoints'][$num]['fluid'] = array(
    '#type' => 'checkbox',
    '#prefix' => '<td>',
    '#suffix' => '</td>',
  );

  $form['vertical_tabs']['config']['breakpoints'][$num]['disable'] = array(
    '#type' => 'checkbox',
    '#prefix' => '<td>',
    '#suffix' => '</td><td></td></tr></table>',
  );
  
  // Per-path visibility.
  $form['vertical_tabs']['other'] = array(
    '#type' => 'fieldset',
    '#title' => t('Other'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#group' => 'visibility',
    '#weight' => 0,
  );
  
  $form['vertical_tabs']['other']['detect_rtl'] = array(
      '#type' => 'checkbox',
      '#title' => t('Detect RTL'),
      '#default_value' => $instance['detect_rtl'],
  );
  
  $form['vertical_tabs']['other']['layout_mode'] = array(
      '#type' => 'select',
      '#title' => t('Layout Mode'),
      '#options' => array('masonry' => t('Masonry')),
      '#default_value' => $instance['layout_mode'],
  );
  
  $form['vertical_tabs']['other']['init_animation'] = array(
      '#type' => 'checkbox',
      '#title' => t('Initialization Animation'),
      '#default_value' => $instance['init_animation'],
  );
  
  $form['vertical_tabs']['other']['wait_for_images'] = array(
      '#type' => 'checkbox',
      '#title' => t('Wait for images to load'),
      '#default_value' => $instance['wait_for_images'],
  );
  
  
//  Cancelled functionality
//  // Per-path visibility.
//  $form['vertical_tabs']['path'] = array(
//    '#type' => 'fieldset',
//    '#title' => t('Pages'),
//    '#collapsible' => TRUE,
//    '#collapsed' => TRUE,
//    '#group' => 'visibility',
//    '#weight' => 1,
//  );
//  
//  $options = array(
//    BLOCK_VISIBILITY_NOTLISTED => t('All pages except those listed'),
//    BLOCK_VISIBILITY_LISTED => t('Only the listed pages'),
//  );
//  $description = t("Specify pages by using their paths. Enter one path per line. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>'));
//  
//  $form['vertical_tabs']['path']['pages_filter_type'] = array(
//    '#type' => 'radios',
//    '#title' => t('Enable this isotope instance on specific pages'),
//    '#options' => $options,
//    '#default_value' => $instance['pages_filter_type'],
//  );
//  $form['vertical_tabs']['path']['pages'] = array(
//    '#type' => 'textarea',
//    '#title' => '<span class="element-invisible">' . $title . '</span>',
//    '#default_value' => $instance['pages'],
//    '#description' => $description,
//  );
//  $form['vertical_tabs']['node_type'] = array(
//    '#type' => 'fieldset',
//    '#title' => t('Content types'),
//    '#collapsible' => TRUE,
//    '#collapsed' => TRUE,
//    '#group' => 'visibility',
//    '#weight' => 5,
//  );
//  $form['vertical_tabs']['node_type']['node_types'] = array(
//    '#type' => 'checkboxes',
//    '#title' => t('Enable this isotope instance for specific content types'),
//    '#default_value' => $instance['node_types'],
//    '#options' => node_type_get_names(),
//    '#description' => t('Enable this isotope instance only on pages that display content of the given type(s). If you select no types, there will be no type-specific limitation.'),
//  );
  
  $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Save'),
  );
  
  $form['#submit'][] = 'views_isotope_advanced_instance_edit_form_submit';
    
  return $form;
}

function views_isotope_advanced_instance_edit_form_submit($form, &$form_state) {
  $instance_id = arg(4);
  
  $breakpoints = $form_state['values']['breakpoints'];
  
  foreach($breakpoints AS $num => $values) {
    if(trim($values['screen_width']) === '') {
      unset($breakpoints[$num]);
    } else {
      $breakpoints[$num]['screen_width'] = (int) $values['screen_width'];
      $breakpoints[$num]['number_of_columns'] = (int) $values['number_of_columns'];
      $breakpoints[$num]['gutter_width'] = $values['gutter_width'];
    }
  }
  
  usort($breakpoints, "_views_isotope_advanced_breakpoints_sort");
  $breakpoints = array_values($breakpoints);
  
  $instance = array();
  $instance['enabled'] = $form_state['values']['enabled'];
  $instance['container_selector'] = $form_state['values']['container_selector'];
  $instance['item_selector'] = $form_state['values']['item_selector'];
  $instance['breakpoints'] = $breakpoints;
  $instance['detect_rtl'] = $form_state['values']['detect_rtl'];
  $instance['layout_mode'] = $form_state['values']['layout_mode'];
  $instance['init_animation'] = $form_state['values']['init_animation'];
  $instance['wait_for_images'] = $form_state['values']['wait_for_images'];
//  $instance['pages_filter_type'] = $form_state['values']['pages_filter_type'];
//  $instance['pages'] = $form_state['values']['pages'];
//  $instance['node_types'] = $form_state['values']['node_types'];
  
  views_isotope_advanced_instance_save($instance_id, $instance);
}

function views_isotope_advanced_instance_breakpoint_delete($instance_id, $breakpoint_num) {
  $instances = views_isotope_advanced_instances('all');
  unset($instances[$instance_id]['breakpoints'][$breakpoint_num]);
  views_isotope_advanced_instance_save($instance_id, $instances[$instance_id]);
  drupal_goto('admin/config/user-interface/views_isotope_advanced/'.$instance_id);
}

function views_isotope_advanced_instance_delete($instance_id, $op) {
  views_isotope_advanced_instance_save($instance_id, NULL);
  drupal_goto('admin/config/user-interface/views_isotope_advanced');
  drupal_set_message(t('Isotope instance "@instance_id" was @op.', array('@instance_id' => $instance_id, '@op' => $op == 'revert' ? t('reverted') : t('deleted'))));
}

function views_isotope_advanced_instance_disable($instance_id) {
  $instances = views_isotope_advanced_instances('all');
  $instances[$instance_id]['enabled'] = 0;
  views_isotope_advanced_instance_save($instance_id, $instances[$instance_id]);
  drupal_set_message(t('Isotope instance "@instance_id" was disabled.', array('@instance_id' => $instance_id)));
  drupal_goto('admin/config/user-interface/views-isotope-advanced');
}

function views_isotope_advanced_instance_enable($instance_id) {
  $instances = views_isotope_advanced_instances('all');
  $instances[$instance_id]['enabled'] = 1;
  views_isotope_advanced_instance_save($instance_id, $instances[$instance_id]);
  drupal_set_message(t('Isotope instance "@instance_id" was enabled.', array('@instance_id' => $instance_id)));
  drupal_goto('admin/config/user-interface/views-isotope-advanced');
}