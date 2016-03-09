<?php

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */

/*
* Initialize theme settings
*/


function bento_process_page(&$variables) {
	

	
	$variables['bento_classes_array'] = array('bento');
		if (theme_get_setting('bootstrap_bento_name') !== '') {
			$variables['bento_classes_array'][] = theme_get_setting('bootstrap_bento_name');
		} else {
			$variables['bento_classes_array'][] = '';
		}
		if (theme_get_setting('bootstrap_bento_buttons') !== '') {
			$variables['bento_classes_array'][] = theme_get_setting('bootstrap_bento_buttons');
		} else {
			$variables['bento_classes_array'][] = '';
		}
		if (theme_get_setting('bootstrap_bento_blocks') !== '') {
			$variables['bento_classes_array'][] = theme_get_setting('bootstrap_bento_blocks');
		} else {
			$variables['bento_classes_array'][] = '';
		}
		if (theme_get_setting('bootstrap_bento_superfish') !== '') {
			$variables['bento_classes_array'][] = theme_get_setting('bootstrap_bento_superfish');
		} else {
			$variables['bento_classes_array'][] = '';
		}
		if (theme_get_setting('bootstrap_bento_superfish_alignment') !== '') {
			$variables['bento_classes_array'][] = theme_get_setting('bootstrap_bento_superfish_alignment');
		} else {
			$variables['bento_classes_array'][] = '';
		}
		if (theme_get_setting('bootstrap_bento_fonts') !== '') {
			$variables['bento_classes_array'][] = theme_get_setting('bootstrap_bento_fonts');
		} else {
			$variables['bento_classes_array'][] = '';
		}
		if (theme_get_setting('bootstrap_bento_social') !== '') {
			$variables['bento_classes_array'][] = theme_get_setting('bootstrap_bento_social');
		} else {
			$variables['bento_classes_array'][] = '';
		}
		if (theme_get_setting('bento_round_block') !== '') {
			$variables['bento_classes_array'][] = theme_get_setting('bento_round_block');
		} else {
			$variables['bento_classes_array'][] = '';
		}
		if (theme_get_setting('bento_round_region') !== '') {
			$variables['bento_classes_array'][] = theme_get_setting('bento_round_region');
		} else {
			$variables['bento_classes_array'][] = '';
		}
		if (theme_get_setting('bento_round_container') !== '') {
			$variables['bento_classes_array'][] = theme_get_setting('bento_round_container');
		} else {
			$variables['bento_classes_array'][] = '';
		}
		if (theme_get_setting('bento_wrapper_no_padding') !== '') {
			$variables['bento_classes_array'][] = theme_get_setting('bento_wrapper_no_padding');
		} else {
			$variables['bento_classes_array'][] = '';
		}
	$variables['bento_classes'] = implode(' ', $variables['bento_classes_array']);


	$variables['bento_b_array'] = array('bento_fluid');

		if (theme_get_setting('bento_fluid') !== '') {
			$variables['bento_fluid_array'][] = theme_get_setting('bento_fluid');
		} else {
			$variables['bento_fluid_array'][] = '';
		}

	$variables['bento_fluid'] = implode(' ', $variables['bento_fluid_array']);
	
	

/* dark regions */

	$variables['bento_b_array'] = array('bdrb');

		if (theme_get_setting('bdrb') !== '') {
			$variables['bento_b_array'][] = theme_get_setting('bdrb');
		} else {
			$variables['bento_b_array'][] = '';
		}

	$variables['bento_dark_b'] = implode(' ', $variables['bento_b_array']);	
		
	$variables['bento_dark_array'] = array('bdr');

		if (theme_get_setting('bdr') !== '') {
			$variables['bento_dark_array'][] = theme_get_setting('bdr');
		} else {
			$variables['bento_dark_array'][] = '';
		}

	$variables['bento_dark'] = implode(' ', $variables['bento_dark_array']);
	
	$variables['bento_dark_sm_array'] = array('bdrsm');

		if (theme_get_setting('bdrsm') !== '') {
			$variables['bento_dark_sm_array'][] = theme_get_setting('bdrsm');
		} else {
			$variables['bento_dark_sm_array'][] = '';
		}

	$variables['bento_sm_dark'] = implode(' ', $variables['bento_dark_sm_array']);
		
	$variables['bento_dark_header_array'] = array('bdrh');

		if (theme_get_setting('bdrh') !== '') {
			$variables['bento_dark_header_array'][] = theme_get_setting('bdrh');
		} else {
			$variables['bento_dark_header_array'][] = '';
		}

	$variables['bento_header_dark'] = implode(' ', $variables['bento_dark_header_array']);
	
	$variables['bento_dark_m_array'] = array('bdrm');

		if (theme_get_setting('bdrm') !== '') {
			$variables['bento_dark_m_array'][] = theme_get_setting('bdrm');
		} else {
			$variables['bento_dark_m_array'][] = '';
		}

	$variables['bento_m_dark'] = implode(' ', $variables['bento_dark_m_array']);
		
	$variables['bento_dark_cw_array'] = array('bdrcw');

		if (theme_get_setting('bdrcw') !== '') {
			$variables['bento_dark_cw_array'][] = theme_get_setting('bdrcw');
		} else {
			$variables['bento_dark_cw_array'][] = '';
		}

	$variables['bento_cw_dark'] = implode(' ', $variables['bento_dark_cw_array']);		
	
	$variables['bento_dark_pre_array'] = array('bdrpre');

		if (theme_get_setting('bdrpre') !== '') {
			$variables['bento_dark_pre_array'][] = theme_get_setting('bdrpre');
		} else {
			$variables['bento_dark_pre_array'][] = '';
		}

	$variables['bento_pre_dark'] = implode(' ', $variables['bento_dark_pre_array']);
	
	$variables['bento_dark_ct_array'] = array('bdrct');

		if (theme_get_setting('bdrct') !== '') {
			$variables['bento_dark_ct_array'][] = theme_get_setting('bdrct');
		} else {
			$variables['bento_dark_ct_array'][] = '';
		}

	$variables['bento_ct_dark'] = implode(' ', $variables['bento_dark_ct_array']);
	
	$variables['bento_dark_sl_array'] = array('bdrsl');

		if (theme_get_setting('bdrsl') !== '') {
			$variables['bento_dark_sl_array'][] = theme_get_setting('bdrsl');
		} else {
			$variables['bento_dark_sl_array'][] = '';
		}

	$variables['bento_sl_dark'] = implode(' ', $variables['bento_dark_sl_array']);
	
	$variables['bento_dark_c_array'] = array('bdrc');

		if (theme_get_setting('bdrc') !== '') {
			$variables['bento_dark_c_array'][] = theme_get_setting('bdrc');
		} else {
			$variables['bento_dark_c_array'][] = '';
		}

	$variables['bento_c_dark'] = implode(' ', $variables['bento_dark_c_array']);
	
	$variables['bento_dark_sr_array'] = array('bdrsr');

		if (theme_get_setting('bdrsr') !== '') {
			$variables['bento_dark_sr_array'][] = theme_get_setting('bdrsr');
		} else {
			$variables['bento_dark_sr_array'][] = '';
		}

	$variables['bento_sr_dark'] = implode(' ', $variables['bento_dark_sr_array']);
	
	$variables['bento_dark_cb_array'] = array('bdrcb');

		if (theme_get_setting('bdrcb') !== '') {
			$variables['bento_dark_cb_array'][] = theme_get_setting('bdrcb');
		} else {
			$variables['bento_dark_cb_array'][] = '';
		}

	$variables['bento_cb_dark'] = implode(' ', $variables['bento_dark_cb_array']);
	
	$variables['bento_dark_post_array'] = array('bdrpost');

		if (theme_get_setting('bdrpost') !== '') {
			$variables['bento_dark_post_array'][] = theme_get_setting('bdrpost');
		} else {
			$variables['bento_dark_post_array'][] = '';
		}

	$variables['bento_post_dark'] = implode(' ', $variables['bento_dark_post_array']);
	
	$variables['bento_dark_f_array'] = array('bdrf');

		if (theme_get_setting('bdrf') !== '') {
			$variables['bento_dark_f_array'][] = theme_get_setting('bdrf');
		} else {
			$variables['bento_dark_f_array'][] = '';
		}

	$variables['bento_f_dark'] = implode(' ', $variables['bento_dark_f_array']);
	
	$variables['bento_dark_mob_array'] = array('bdrmob');

		if (theme_get_setting('bdrmob') !== '') {
			$variables['bento_dark_mob_array'][] = theme_get_setting('bdrmob');
		} else {
			$variables['bento_dark_mob_array'][] = '';
		}

	$variables['bento_mob_dark'] = implode(' ', $variables['bento_dark_mob_array']);
	
	$variables['bento_dark_drawer_array'] = array('bdrdrawer');

		if (theme_get_setting('bdrdrawer') !== '') {
			$variables['bento_dark_drawer_array'][] = theme_get_setting('bdrdrawer');
		} else {
			$variables['bento_dark_drawer_array'][] = '';
		}

	$variables['bento_drawer_dark'] = implode(' ', $variables['bento_dark_drawer_array']);


/* block round corners */

	$variables['bento_bp_array'] = array('bp');

		if (theme_get_setting('bp') !== '') {
			$variables['bento_bp_array'][] = theme_get_setting('bp');
		} else {
			$variables['bento_bp_array'][] = '';
		}

	$variables['bento_bp'] = implode(' ', $variables['bento_bp_array']);
	
	
	$variables['bento_bph_array'] = array('bph');

		if (theme_get_setting('bph') !== '') {
			$variables['bento_bph_array'][] = theme_get_setting('bph');
		} else {
			$variables['bento_bph_array'][] = '';
		}

	$variables['bento_bph'] = implode(' ', $variables['bento_bph_array']);
	
	$variables['bento_bppre_array'] = array('bppre');

		if (theme_get_setting('bppre') !== '') {
			$variables['bento_bppre_array'][] = theme_get_setting('bppre');
		} else {
			$variables['bento_bppre_array'][] = '';
		}

	$variables['bento_bppre'] = implode(' ', $variables['bento_bppre_array']);
	
	$variables['bento_bpct_array'] = array('bpct');

		if (theme_get_setting('bpct') !== '') {
			$variables['bento_bpct_array'][] = theme_get_setting('bpct');
		} else {
			$variables['bento_bpct_array'][] = '';
		}

	$variables['bento_bpct'] = implode(' ', $variables['bento_bpct_array']);
	
	$variables['bento_bpside_array'] = array('bpside');

		if (theme_get_setting('bpside') !== '') {
			$variables['bento_bpside_array'][] = theme_get_setting('bpside');
		} else {
			$variables['bento_bpside_array'][] = '';
		}

	$variables['bento_bpside'] = implode(' ', $variables['bento_bpside_array']);
	
	$variables['bento_bpcb_array'] = array('bpcb');

		if (theme_get_setting('bpcb') !== '') {
			$variables['bento_bpcb_array'][] = theme_get_setting('bpcb');
		} else {
			$variables['bento_bpcb_array'][] = '';
		}

	$variables['bento_bpcb'] = implode(' ', $variables['bento_bpcb_array']);
	
	$variables['bento_bppost_array'] = array('bppost');

		if (theme_get_setting('bppost') !== '') {
			$variables['bento_bppost_array'][] = theme_get_setting('bppost');
		} else {
			$variables['bento_bppost_array'][] = '';
		}

	$variables['bento_bppost'] = implode(' ', $variables['bento_bppost_array']);
	
	$variables['bento_bpf_array'] = array('bpf');

		if (theme_get_setting('bpf') !== '') {
			$variables['bento_bpf_array'][] = theme_get_setting('bpf');
		} else {
			$variables['bento_bpf_array'][] = '';
		}

	$variables['bento_bpf'] = implode(' ', $variables['bento_bpf_array']);
	
	$variables['bento_bpa_array'] = array('bpa');

		if (theme_get_setting('bpa') !== '') {
			$variables['bento_bpa_array'][] = theme_get_setting('bpa');
		} else {
			$variables['bento_bpa_array'][] = '';
		}

	$variables['bento_bpa'] = implode(' ', $variables['bento_bpa_array']);

	/* region round corners */

		$variables['bento_br_array'] = array('br');

			if (theme_get_setting('br') !== '') {
				$variables['bento_br_array'][] = theme_get_setting('br');
			} else {
				$variables['bento_br_array'][] = '';
			}

		$variables['bento_br'] = implode(' ', $variables['bento_br_array']);


		$variables['bento_brh_array'] = array('brh');

			if (theme_get_setting('brh') !== '') {
				$variables['bento_brh_array'][] = theme_get_setting('brh');
			} else {
				$variables['bento_brh_array'][] = '';
			}

		$variables['bento_brh'] = implode(' ', $variables['bento_brh_array']);

		$variables['bento_brpre_array'] = array('brpre');

			if (theme_get_setting('brpre') !== '') {
				$variables['bento_brpre_array'][] = theme_get_setting('brpre');
			} else {
				$variables['bento_brpre_array'][] = '';
			}

		$variables['bento_brpre'] = implode(' ', $variables['bento_brpre_array']);

		$variables['bento_brct_array'] = array('brct');

			if (theme_get_setting('brct') !== '') {
				$variables['bento_brct_array'][] = theme_get_setting('brct');
			} else {
				$variables['bento_brct_array'][] = '';
			}

		$variables['bento_brct'] = implode(' ', $variables['bento_brct_array']);

		$variables['bento_brside_array'] = array('brside');

			if (theme_get_setting('brside') !== '') {
				$variables['bento_brside_array'][] = theme_get_setting('brside');
			} else {
				$variables['bento_brside_array'][] = '';
			}

		$variables['bento_brside'] = implode(' ', $variables['bento_brside_array']);

		$variables['bento_brcb_array'] = array('brcb');

			if (theme_get_setting('brcb') !== '') {
				$variables['bento_brcb_array'][] = theme_get_setting('brcb');
			} else {
				$variables['bento_brcb_array'][] = '';
			}

		$variables['bento_brcb'] = implode(' ', $variables['bento_brcb_array']);

		$variables['bento_brpost_array'] = array('brpost');

			if (theme_get_setting('brpost') !== '') {
				$variables['bento_brpost_array'][] = theme_get_setting('brpost');
			} else {
				$variables['bento_brpost_array'][] = '';
			}

		$variables['bento_brpost'] = implode(' ', $variables['bento_brpost_array']);

		$variables['bento_brf_array'] = array('brf');

			if (theme_get_setting('brf') !== '') {
				$variables['bento_brf_array'][] = theme_get_setting('brf');
			} else {
				$variables['bento_brf_array'][] = '';
			}

		$variables['bento_brf'] = implode(' ', $variables['bento_brf_array']);
		
		$variables['bento_bra_array'] = array('bra');

			if (theme_get_setting('bra') !== '') {
				$variables['bento_bra_array'][] = theme_get_setting('bra');
			} else {
				$variables['bento_bra_array'][] = '';
			}

		$variables['bento_bra'] = implode(' ', $variables['bento_bra_array']);
/* container round corners */

	$variables['bento_bc_array'] = array('bc');

		if (theme_get_setting('bc') !== '') {
			$variables['bento_bc_array'][] = theme_get_setting('bc');
		} else {
			$variables['bento_bc_array'][] = '';
		}

	$variables['bento_bc'] = implode(' ', $variables['bento_bc_array']);

	$variables['bento_bcs_array'] = array('bcs');

		if (theme_get_setting('bcs') !== '') {
			$variables['bento_bcs_array'][] = theme_get_setting('bcs');
		} else {
			$variables['bento_bcs_array'][] = '';
		}

	$variables['bento_bcs'] = implode(' ', $variables['bento_bcs_array']);	
	
	$variables['bento_bch_array'] = array('bch');

		if (theme_get_setting('bch') !== '') {
			$variables['bento_bch_array'][] = theme_get_setting('bch');
		} else {
			$variables['bento_bch_array'][] = '';
		}

	$variables['bento_bch'] = implode(' ', $variables['bento_bch_array']);
	
	$variables['bento_bcpre_array'] = array('bcpre');

		if (theme_get_setting('bcpre') !== '') {
			$variables['bento_bcpre_array'][] = theme_get_setting('bcpre');
		} else {
			$variables['bento_bcpre_array'][] = '';
		}

	$variables['bento_bcpre'] = implode(' ', $variables['bento_bcpre_array']);
	
	$variables['bento_bcc_array'] = array('bcc');

		if (theme_get_setting('bcc') !== '') {
			$variables['bento_bcc_array'][] = theme_get_setting('bcc');
		} else {
			$variables['bento_bcc_array'][] = '';
		}

	$variables['bento_bcc'] = implode(' ', $variables['bento_bcc_array']);

	
	$variables['bento_bcpost_array'] = array('bcpost');

		if (theme_get_setting('bcpost') !== '') {
			$variables['bento_bcpost_array'][] = theme_get_setting('bcpost');
		} else {
			$variables['bento_bcpost_array'][] = '';
		}

	$variables['bento_bcpost'] = implode(' ', $variables['bento_bcpost_array']);
	
	$variables['bento_bcf_array'] = array('bcf');

		if (theme_get_setting('bcf') !== '') {
			$variables['bento_bcf_array'][] = theme_get_setting('bcf');
		} else {
			$variables['bento_bcf_array'][] = '';
		}

	$variables['bento_bcf'] = implode(' ', $variables['bento_bcf_array']);




}

			
/*menu tree */
	
function bento_menu_tree__main_menu($variables) {
	global $level;
	$class = ($level == 1) ? 'sf-menu' : 'sf-depth-' . $level .'" style="display:none"';
	return '<ul class="'.$class.'">' . $variables['tree'] . '</ul>';
	$level++;
}

function bento_menu_link__main_menu($variables) {

	$depth = $variables['element']['#original_link']['depth'];
	$element = $variables['element'];
	$sub_menu = '';
	// set the global variable in order to use it in hook_menu_tree()
	// I called it "level" to avoid confusing with the $depth
	global $level;

	if ($element['#below']) {
	$sub_menu = drupal_render($element['#below']);
	$level = $depth; // set the level as first for each list with submenu
	}
	else {
	$level = $element['#original_link']['depth'];
	}
	$output = l($element['#title'], $element['#href'], $element['#localized_options']);
	return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
	
		
function bento_preprocess_page(&$variables, $hook) {

		$main_menu_tree = menu_tree_all_data('main-menu');
		$variables['main_menu_expanded'] = menu_tree_output($main_menu_tree);
		
		
		$login_link = '';

		 if (!$variables['logged_in']) { 
		   $login_link = ' | <a href="/user">Login</a>.';
		 }

		 $variables['login_link'] = $login_link;


		}


function bento_js_alter(&$js) {
		  unset($js['misc/tableheader.js']);
		}
		
		
function bento_preprocess_html(&$vars) {
  $node = menu_get_object();
  if ($node && isset($node->nid)) {
    if ($node->status) {
      $vars['classes_array'][] = 'published';
    } else {
      $vars['classes_array'][] = 'unpublished';
    }
  }
  /**
   * Add default icon
   */
  $apple_icon =  array(

    '#tag' => 'link',
    '#attributes' => array(
      'href' => '/'.path_to_theme() .'/apple-touch-icon.png',
      'rel' => 'apple-touch-icon-precomposed',
    ),
  );

  /**
   * Loop through to add various sizes
   */
  $apple_icon_sizes = array(57,72,114,144);

  foreach($apple_icon_sizes as $size){
    $apple = array(
      '#tag' => 'link',
      '#attributes' => array(
        'href' => '/'.path_to_theme().'/apple-touch-icon-'.$size.'x'.$size.'.png',
        'rel' => 'apple-touch-icon-precomposed',
        'sizes' => $size . 'x' . $size,
      ),
    );
    drupal_add_html_head($apple, 'apple-touch-icon-'.$size);
  }
}






		
?>

