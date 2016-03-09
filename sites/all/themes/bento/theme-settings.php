<?php
/**
 * @file
 * theme-settings.php
 *
 */


// ==================================
// = Bento Theme Settings Form      =
// ==================================

$form['components']['bento'] = array(
  '#type' => 'fieldset',
  '#title' => t('Bento'),
  '#collapsible' => TRUE,
  '#collapsed' => TRUE,
);
$form['components']['bento']['bootstrap_bento_name'] = array(
  '#type' => 'select',
  '#title' => t('Bento Header Site Name'),
  '#description' => t('To have the site name in the footer, it must be selected in theme general settings. This setting hides it in the header so it still appears in the footer.'),
  '#default_value' => theme_get_setting('bootstrap_bento_buttons'),
  '#options' => array(
    'site-name-no-header' => t('Hide Site Name in Header'),
  ),
  '#empty_option' => t('Show Site Name in Header'),
);
$form['components']['bento']['bootstrap_bento_buttons'] = array(
  '#type' => 'select',
  '#title' => t('Bento Button Styles'),
  '#description' => t('These options modify the default button style sitewide. Set your color options in your CSS file. You can override buttons in blocks with Skinr.'),
  '#default_value' => theme_get_setting('bootstrap_bento_buttons'),
  '#options' => array(
    'button-style-1' => t('Button Style 1 - Flat/Square'),
    'button-style-2' => t('Button Style 2 - Flat/Rounded'),
    'button-style-3' => t('Button Style 3 - Flat/Pill'),
    'button-style-4' => t('Button Style 4 - Outline/Square'),
    'button-style-5' => t('Button Style 5 - Outline/Rounded'),
    'button-style-6' => t('Button Style 6 - Outline/Pill'),
    'button-style-7' => t('Button Style 7 - Gradient/Square'),
    'button-style-8' => t('Button Style 8 - Gradient/Rounded'),
    'button-style-9' => t('Button Style 9 - Gradient/Pill'),
    'button-style-10' => t('Button Style 10 - Buttoned/Square'),
    'button-style-11' => t('Button Style 11 - Buttoned/Rounded'),
    'button-style-12' => t('Button Style 12 - Buttoned/Pill'),
  ),
  '#empty_option' => t('Default Button Style'),
);
$form['components']['bento']['bootstrap_bento_blocks'] = array(
  '#type' => 'select',
  '#title' => t('Bento Sidebar Block Styles'),
  '#description' => t('These options modify the default block style for sidebar blocks. Set your color options in your CSS file. You can override styles of blocks with Skinr. Note that if you select these for your sitewide defaults for your sidebar blocks, you will not be able to override certain elements in the skinr styles for specific blocks.'),
  '#default_value' => theme_get_setting('bootstrap_bento_blocks'),
  '#options' => array(
    'block-style-1' => t('Block Style 1 - Flat'),
    'block-style-2' => t('Block Style 2 - Outline'),
    'block-style-3' => t('Block Style 3 - Gradient from top'),
    'block-style-4' => t('Block Style 4 - Gradient from bottom'),
    'block-style-5' => t('Block Style 5 - Chiseled'),
  ),
  '#empty_option' => t('Default Block Style'),
);
$form['components']['bento']['bootstrap_bento_superfish'] = array(
  '#type' => 'select',
  '#title' => t('Bento Superfish Styles'),
  '#description' => t('These options modify the default superfish menu style. Set your color options in your CSS file.'),
  '#default_value' => theme_get_setting('bootstrap_bento_superfish'),
  '#options' => array(
    'superfish-style-1' => t('Superfish Style 1 - Flat/Square'),
    'superfish-style-2' => t('Superfish Style 2 - Flat/Full Width'),
    'superfish-style-3' => t('Superfish Style 3 - Flat/Round Pill Corners'),
    'superfish-style-4' => t('Superfish Style 4 - Flat/Square with light hover'),
    'superfish-style-5' => t('Superfish Style 5 - Flat/Full Width with light hover'),
    'superfish-style-6' => t('Superfish Style 6 - Flat/Round Pill with light hover'),
    'superfish-style-7' => t('Superfish Style 7 - Gradient/Square'),
    'superfish-style-8' => t('Superfish Style 8 - Gradient/Full Width'),
    'superfish-style-9' => t('Superfish Style 9 - Gradient/Round Pill Corners'),
    'superfish-style-10' => t('Superfish Style 10 - Buttony/Square'),
    'superfish-style-11' => t('Superfish Style 11 - Buttony/Full Width'),
    'superfish-style-12' => t('Superfish Style 12 - Buttony/Round Pill Corners'),
	'superfish-style-13' => t('Superfish Style 13 - Tabbed'),
	'superfish-style-14' => t('Superfish Style 14 - Tabbed/Full Width'),
	'superfish-style-15' => t('Superfish Style 15 - Boxed'),
	'superfish-style-16' => t('Superfish Style 16 - Boxed/Rounded Corners'),
  ),
  '#empty_option' => t('Default Superfish Style'),
);
$form['components']['bento']['bootstrap_bento_superfish_alignment'] = array(
  '#type' => 'select',
  '#title' => t('Bento Superfish Alignment'),
  '#description' => t('Do you want your main menu from the left or from the right?'),
  '#default_value' => theme_get_setting('bootstrap_bento_superfish_alignment'),
  '#options' => array(
    'sf-right' => t('Align from right.'),
    'sf-left' => t('Align from left.'),
  ),
  '#empty_option' => t('Default Superfish Alignment'),
);


$form['components']['bento']['bootstrap_bento_fonts'] = array(
  '#type' => 'select',
  '#title' => t('Bento Font Stack Options'),
  '#description' => t('Choose your font stack options. If you want other options, you will need to edit your CSS file.'),
  '#default_value' => theme_get_setting('bootstrap_bento_fonts'),
  '#options' => array(
    'font-stack-1' => t('Headers: Archivo. Body: Luxi Sans.'),
    'font-stack-2' => t('Headers: Armata. Body: Titillium.'),
    'font-stack-3' => t('Headers: Arvo. Body: Rokkitt.'),
	'font-stack-4' => t('Headers: Droid Serif. Body: Bitstream Vera Serif.'),
	'font-stack-5' => t('Headers: Abel. Body: News Cycle.'),
	'font-stack-6' => t('"Bell MT", "Cambria", "Helvetica Neue", Helvetica, Arial, sans-serif'),
	'font-stack-7' => t('Times, "Times New Roman", serif'),
	'font-stack-8' => t('"New Century Schoolbook", "Century Schoolbook", "Century Schoolbook L", Georgia, serif'),
	'font-stack-9' => t('Tahoma, Geneva, "Helvetica Neue", Helvetica, Arial, sans-serif'),
	'font-stack-10' => t('Verdana, "Verdana Ref", sans-serif'),
  ),
  '#empty_option' => t('Default Font Stack'),
);
$form['components']['bento']['bootstrap_bento_social'] = array(
  '#type' => 'select',
  '#title' => t('Bento Social Button Styles'),
  '#description' => t('These options modify the default social icons in the secondary menu. You must use the menu attributes module to apply the appropriate class to the social icon for these to appear.'),
  '#default_value' => theme_get_setting('bootstrap_bento_social'),
  '#options' => array(
    'social-style-1' => t('Social 1 - Box Flat Small'),
    'social-style-2' => t('Social 2 - Box Flat Large'),
    'social-style-3' => t('Social 3 - Circle Flat Small'),
    'social-style-4' => t('Social 4 - Circle Flat Large'),
    'social-style-5' => t('Social 5 - White Circle Outline 1 - Small'),
    'social-style-6' => t('Social 6 - White Circle Outline 1 - Large'),
    'social-style-7' => t('Social 7 - White Circle Outline 2 - Small'),
    'social-style-8' => t('Social 8 - White Circle Outline 2 - Large'),
    'social-style-9' => t('Social 9 - Black Circle Outline 3 - Small'),
    'social-style-10' => t('Social 10 - Black Circle Outline 3 - Large'),
    'social-style-11' => t('Social 11 - Black Circle Outline 4 - Small'),
    'social-style-12' => t('Social 12 - Black Circle Outline 4 - Large'),
    'social-style-13' => t('Social 13 - White Plain 1 - Small'),
    'social-style-14' => t('Social 14 - White Plain 1 - Large'),
    'social-style-15' => t('Social 15 - White Plain 2 - Small'),
    'social-style-16' => t('Social 16 - White Plain 2 - Large'),
    'social-style-17' => t('Social 17 - Black Plain 3 - Small'),
    'social-style-18' => t('Social 18 - Black Plain 3 - Large'),
    'social-style-19' => t('Social 19 - Black Plain 4 - Small'),
    'social-style-20' => t('Social 20 - Black Plain 4 - Large'),
  ),
  '#empty_option' => t('Default Social Style'),
);
$form['components']['bento']['bento_round_block'] = array(
  '#type' => 'select',
  '#title' => t('Bento Round Corner - Blocks'),
  '#description' => t('If you would like all blocks on the page to have rounded corners, select the option here.'),
  '#default_value' => theme_get_setting('bento_round_block'),
  '#options' => array(
    'round-corners-block-1' => t('Round Block Corners 1px'),
    'round-corners-block-2' => t('Round Block Corners 2px'),
    'round-corners-block-3' => t('Round Block Corners 3px'),
    'round-corners-block-4' => t('Round Block Corners 4px'),
    'round-corners-block-5' => t('Round Block Corners 5px'),
    'round-corners-block-6' => t('Round Block Corners 6px'),
    'round-corners-block-7' => t('Round Block Corners 7px'),
    'round-corners-block-8' => t('Round Block Corners 8px'),
    'round-corners-block-9' => t('Round Block Corners 9px'),
    'round-corners-block-10' => t('Round Block Corners 10px'),
    'round-corners-block-11' => t('Round Block Corners 11px'),
    'round-corners-block-12' => t('Round Block Corners 12px'),
    'round-corners-block-13' => t('Round Block Corners 13px'),
    'round-corners-block-14' => t('Round Block Corners 14px'),
    'round-corners-block-15' => t('Round Block Corners 15px'),
    'round-corners-block-20' => t('Round Block Corners 20px'),
    'round-corners-block-25' => t('Round Block Corners 25px'),
  ),
  '#empty_option' => t('Square Block Corners'),
);
$form['components']['bento']['bento_round_region'] = array(
  '#type' => 'select',
  '#title' => t('Bento Round Corner - Regions'),
  '#description' => t('If you would like all regions on the page to have rounded corners, select the option here.'),
  '#default_value' => theme_get_setting('bento_round_region'),
  '#options' => array(
    'round-corners-region-1' => t('Round Region Corners 1px'),
    'round-corners-region-2' => t('Round Region Corners 2px'),
    'round-corners-region-3' => t('Round Region Corners 3px'),
    'round-corners-region-4' => t('Round Region Corners 4px'),
    'round-corners-region-5' => t('Round Region Corners 5px'),
    'round-corners-region-6' => t('Round Region Corners 6px'),
    'round-corners-region-7' => t('Round Region Corners 7px'),
    'round-corners-region-8' => t('Round Region Corners 8px'),
    'round-corners-region-9' => t('Round Region Corners 9px'),
    'round-corners-region-10' => t('Round Region Corners 10px'),
    'round-corners-region-11' => t('Round Region Corners 11px'),
    'round-corners-region-12' => t('Round Region Corners 12px'),
    'round-corners-region-13' => t('Round Region Corners 13px'),
    'round-corners-region-14' => t('Round Region Corners 14px'),
    'round-corners-region-15' => t('Round Region Corners 15px'),
    'round-corners-region-20' => t('Round Region Corners 20px'),
    'round-corners-region-25' => t('Round Region Corners 25px'),
  ),
  '#empty_option' => t('Square Region Corners'),
);
$form['components']['bento']['bento_round_container'] = array(
  '#type' => 'select',
  '#title' => t('Bento Round Corner - Containers'),
  '#description' => t('If you would like all containers on the page to have rounded corners, select the option here.'),
  '#default_value' => theme_get_setting('bento_round_container'),
  '#options' => array(
    'round-corners-container-1' => t('Round Container Corners 1px'),
    'round-corners-container-2' => t('Round Container Corners 2px'),
    'round-corners-container-3' => t('Round Container Corners 3px'),
    'round-corners-container-4' => t('Round Container Corners 4px'),
    'round-corners-container-5' => t('Round Container Corners 5px'),
    'round-corners-container-6' => t('Round Container Corners 6px'),
    'round-corners-container-7' => t('Round Container Corners 7px'),
    'round-corners-container-8' => t('Round Container Corners 8px'),
    'round-corners-container-9' => t('Round Container Corners 9px'),
    'round-corners-container-10' => t('Round Container Corners 10px'),
    'round-corners-container-11' => t('Round Container Corners 11px'),
    'round-corners-container-12' => t('Round Container Corners 12px'),
    'round-corners-container-13' => t('Round Container Corners 13px'),
    'round-corners-container-14' => t('Round Container Corners 14px'),
    'round-corners-container-15' => t('Round Container Corners 15px'),
    'round-corners-container-20' => t('Round Container Corners 20px'),
    'round-corners-container-25' => t('Round Container Corners 25px'),
  ),
  '#empty_option' => t('Square Container Corners'),
);
$form['components']['bento']['bento_wrapper_no_padding'] = array(
  '#type' => 'select',
  '#title' => t('Bento Remove Padding on Wrappers.'),
  '#description' => t('You may want to remove the padding on the wrappers if colors from various containers need to run together.'),
  '#default_value' => theme_get_setting('bento_wrapper_no_padding'),
  '#options' => array(
    'wrapper-no-padding' => t('Remove Padding on Wrappers'),
  ),
  '#empty_option' => t('Default Wrapper Padding'),
);

$form['components']['bento']['bento_fluid'] = array(
  '#type' => 'select',
  '#title' => t('Make Preface Region Fluid'),
  '#description' => t('Select if you would like your preface region full-width fluid. Great for full width slideshows.'),
  '#default_value' => theme_get_setting('bento_fluid'),
  '#options' => array(
    '-fluid' => t('Make Preface Fluid'),
  ),
  '#empty_option' => t('Default Container'),
);


// ===========================================
// = Bento Dark Region Theme Settings Form   =
// ===========================================



$form['components']['bento_dark'] = array(
  '#type' => 'fieldset',
  '#title' => t('Bento Dark Regions'),
  '#collapsible' => TRUE,
  '#collapsed' => TRUE,
);
$form['components']['bento_dark']['bdrb'] = array(
  '#type' => 'select',
  '#title' => t('Dark Region Black Background'),
  '#description' => t('This will cause dark region backgrounds to be black. Makes development easier.'),
  '#default_value' => theme_get_setting('bdrb'),
  '#options' => array(
    'dark-region-background' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdr'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Styles'),
  '#description' => t('This will cause all the text on the site to convert to white for dark backgrounds.'),
  '#default_value' => theme_get_setting('bdr'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdrsm'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Secondary Menu Styles'),
  '#description' => t('This will add dark region styling to secondary menu region.'),
  '#default_value' => theme_get_setting('bdrsm'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdrh'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Header Styles'),
  '#description' => t('This will cause all the text in the header region to convert to white for dark backgrounds.'),
  '#default_value' => theme_get_setting('bdrh'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdrm'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Menu Styles'),
  '#description' => t('This will cause the menu to take on styling for dark backgrounds.'),
  '#default_value' => theme_get_setting('bdrm'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdrcw'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Content Area Wrapper'),
  '#description' => t('This will cause all the text in the content area (preface, sidebars, content top, content bottom, and content) to convert to white for dark backgrounds.'),
  '#default_value' => theme_get_setting('bdrcw'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdrpre'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Preface'),
  '#description' => t('This will cause all the text in the preface region to convert to white for dark backgrounds.'),
  '#default_value' => theme_get_setting('bdrpre'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdrct'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Content Top'),
  '#description' => t('This will cause all the text in the content top region to convert to white for dark backgrounds.'),
  '#default_value' => theme_get_setting('bdrct'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdrsl'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Sidebar Left'),
  '#description' => t('This will cause all the text in the sidebar left region to convert to white for dark backgrounds.'),
  '#default_value' => theme_get_setting('bdrsl'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdrc'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Content'),
  '#description' => t('This will cause all the text in the content region to convert to white for dark backgrounds.'),
  '#default_value' => theme_get_setting('bdrc'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdrsr'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Sidebar Right'),
  '#description' => t('This will cause all the text in the sidebar right region to convert to white for dark backgrounds.'),
  '#default_value' => theme_get_setting('bdrsr'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdrcb'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Content Bottom'),
  '#description' => t('This will cause all the text in the content bottom region to convert to white for dark backgrounds.'),
  '#default_value' => theme_get_setting('bdrcb'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdrpost'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Postscript'),
  '#description' => t('This will cause all the text in the postscript region to convert to white for dark backgrounds.'),
  '#default_value' => theme_get_setting('bdrpost'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdrf'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Footer'),
  '#description' => t('This will cause all the text in the footer region to convert to white for dark backgrounds.'),
  '#default_value' => theme_get_setting('bdrf'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdrmob'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Mobile Styles'),
  '#description' => t('This will add dark region styling to mobile only region.'),
  '#default_value' => theme_get_setting('bdrmob'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);
$form['components']['bento_dark']['bdrdrawer'] = array(
  '#type' => 'select',
  '#title' => t('Bento Dark Region Drawer Styles'),
  '#description' => t('This will add dark region styling to drawer region.'),
  '#default_value' => theme_get_setting('bdrdrawer'),
  '#options' => array(
    'dark-region' => t('Yes'),
  ),
  '#empty_option' => t('Default'),
);

// ===========================================
// = Bento Round Corner Padding - Blocks   =
// ===========================================



$form['components']['bento_block_padding'] = array(
  '#type' => 'fieldset',
  '#title' => t('Bento Padding for Blocks'),
  '#description' => t('This section allows you to add padding to all blocks on your site. Perfect when you have background colors or rounded corners and need your text to inset a little bit.'),
  '#collapsible' => TRUE,
  '#collapsed' => TRUE,
);
$form['components']['bento_block_padding']['bp'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all blocks'),
  '#default_value' => theme_get_setting('bp'),
  '#options' => array(
    'bp-all-5' => t('Padding on All Blocks - 5px'),
    'bp-all-10' => t('Padding on All Blocks - 10px'),
    'bp-all-15' => t('Padding on All Blocks - 15px'),
    'bp-all-20' => t('Padding on All Blocks - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);

$form['components']['bento_block_padding']['bph'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all blocks in header region'),
  '#default_value' => theme_get_setting('bph'),
  '#options' => array(
    'bp-5' => t(' Padding on All Blocks in Header- 5px'),
    'bp-10' => t('Padding on All Blocks in Header- 10px'),
    'bp-15' => t('Padding on All Blocks in Header- 15px'),
    'bp-20' => t('Padding on All Blocks in Header- 20px'),
  ),
  '#empty_option' => t('No Padding'),
);

$form['components']['bento_block_padding']['bppre'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all blocks in preface region'),
  '#default_value' => theme_get_setting('bppre'),
  '#options' => array(
    'bp-5' => t(' Padding on All Blocks in Preface - 5px'),
    'bp-10' => t('Padding on All Blocks in Preface - 10px'),
    'bp-15' => t('Padding on All Blocks in Preface - 15px'),
    'bp-20' => t('Padding on All Blocks in Preface - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_block_padding']['bpct'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all blocks in content top region'),
  '#default_value' => theme_get_setting('bpct'),
  '#options' => array(
    'bp-5' => t(' Padding on All Blocks in Content Top - 5px'),
    'bp-10' => t('Padding on All Blocks in Content Top - 10px'),
    'bp-15' => t('Padding on All Blocks in Content Top - 15px'),
    'bp-20' => t('Padding on All Blocks in Content Top - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_block_padding']['bpside'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all blocks in sidebar regions'),
  '#default_value' => theme_get_setting('bpside'),
  '#options' => array(
    'bp-5' => t(' Padding on All Blocks in Sidebars - 5px'),
    'bp-10' => t('Padding on All Blocks in Sidebars - 10px'),
    'bp-15' => t('Padding on All Blocks in Sidebars - 15px'),
    'bp-20' => t('Padding on All Blocks in Sidebars - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_block_padding']['bpcb'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all blocks in content bottom region'),
  '#default_value' => theme_get_setting('bpcb'),
  '#options' => array(
    'bp-5' => t(' Padding on All Blocks in Content Bottom - 5px'),
    'bp-10' => t('Padding on All Blocks in Content Bottom - 10px'),
    'bp-15' => t('Padding on All Blocks in Content Bottom - 15px'),
    'bp-20' => t('Padding on All Blocks in Content Bottom - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_block_padding']['bppost'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all blocks in postscript region'),
  '#default_value' => theme_get_setting('bppost'),
  '#options' => array(
    'bp-5' => t(' Padding on All Blocks in Postscript - 5px'),
    'bp-10' => t('Padding on All Blocks in Postscript - 10px'),
    'bp-15' => t('Padding on All Blocks in Postscript - 15px'),
    'bp-20' => t('Padding on All Blocks in Postscript - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_block_padding']['bpf'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all blocks in footer region'),
  '#default_value' => theme_get_setting('bpf'),
  '#options' => array(
    'bp-5' => t(' Padding on All Blocks in Footer - 5px'),
    'bp-10' => t('Padding on All Blocks in Footer - 10px'),
    'bp-15' => t('Padding on All Blocks in Footer - 15px'),
    'bp-20' => t('Padding on All Blocks in Footer - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_block_padding']['bpa'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all blocks in attribution line'),
  '#default_value' => theme_get_setting('bpa'),
  '#options' => array(
    'bp-5' => t(' Padding on All Blocks in Attribution Line - 5px'),
    'bp-10' => t('Padding on All Blocks in Attribution Line - 10px'),
    'bp-15' => t('Padding on All Blocks in Attribution Line - 15px'),
    'bp-20' => t('Padding on All Blocks in Attribution Line - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
// ===========================================
// = Bento Round Corner Padding - Region   =
// ===========================================



$form['components']['bento_region_padding'] = array(
  '#type' => 'fieldset',
  '#title' => t('Bento Padding for Regions'),
  '#description' => t('This section allows you to add padding to all regions on your site. Perfect when you have background colors or rounded corners and need your text to inset a little bit.'),
  '#collapsible' => TRUE,
  '#collapsed' => TRUE,
);
$form['components']['bento_region_padding']['br'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all regions'),
  '#default_value' => theme_get_setting('br'),
  '#options' => array(
    'br-all-5' => t('Padding on All Regions - 5px'),
    'br-all-10' => t('Padding on All Regions - 10px'),
    'br-all-15' => t('Padding on All Regions - 15px'),
    'br-all-20' => t('Padding on All Regions - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);

$form['components']['bento_region_padding']['brh'] = array(
  '#type' => 'select',
  '#title' => t('Padding for header region'),
  '#default_value' => theme_get_setting('brh'),
  '#options' => array(
    'br-5' => t(' Padding for Header Region- 5px'),
    'br-10' => t('Padding for Header Region- 10px'),
    'br-15' => t('Padding for Header Region- 15px'),
    'br-20' => t('Padding for Header Region- 20px'),
  ),
  '#empty_option' => t('No Padding'),
);

$form['components']['bento_region_padding']['brpre'] = array(
  '#type' => 'select',
  '#title' => t('Padding for preface region'),
  '#default_value' => theme_get_setting('brpre'),
  '#options' => array(
    'br-5' => t(' Padding for Preface Region - 5px'),
    'br-10' => t('Padding for Preface Region - 10px'),
    'br-15' => t('Padding for Preface Region - 15px'),
    'br-20' => t('Padding for Preface Region - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_region_padding']['brct'] = array(
  '#type' => 'select',
  '#title' => t('Padding for content top region'),
  '#default_value' => theme_get_setting('brct'),
  '#options' => array(
    'br-5' => t(' Padding for Content Top Region - 5px'),
    'br-10' => t('Padding for Content Top Region - 10px'),
    'br-15' => t('Padding for Content Top Region - 15px'),
    'br-20' => t('Padding for Content Top Region - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_region_padding']['brside'] = array(
  '#type' => 'select',
  '#title' => t('Padding for sidebar regions'),
  '#default_value' => theme_get_setting('brside'),
  '#options' => array(
    'br-5' => t(' Padding for Sidebar Regions - 5px'),
    'br-10' => t('Padding for Sidebar Regions - 10px'),
    'br-15' => t('Padding for Sidebar Regions - 15px'),
    'br-20' => t('Padding for Sidebar Regions - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_region_padding']['brcb'] = array(
  '#type' => 'select',
  '#title' => t('Padding for content bottom region'),
  '#default_value' => theme_get_setting('brcb'),
  '#options' => array(
    'br-5' => t(' Padding for Content Bottom Region - 5px'),
    'br-10' => t('Padding for Content Bottom Region - 10px'),
    'br-15' => t('Padding for Content Bottom Region - 15px'),
    'br-20' => t('Padding for Content Bottom Region - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_region_padding']['brpost'] = array(
  '#type' => 'select',
  '#title' => t('Padding for postscript region'),
  '#default_value' => theme_get_setting('brpost'),
  '#options' => array(
    'br-5' => t(' Padding for Postscript Region - 5px'),
    'br-10' => t('Padding for Postscript Region - 10px'),
    'br-15' => t('Padding for Postscript Region - 15px'),
    'br-20' => t('Padding for Postscript Region - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_region_padding']['brf'] = array(
  '#type' => 'select',
  '#title' => t('Padding for footer region'),
  '#default_value' => theme_get_setting('brf'),
  '#options' => array(
    'br-5' => t(' Padding for Footer Region - 5px'),
    'br-10' => t('Padding for Footer Region - 10px'),
    'br-15' => t('Padding for Footer Region - 15px'),
    'br-20' => t('Padding for Footer Region - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);

$form['components']['bento_region_padding']['bra'] = array(
  '#type' => 'select',
  '#title' => t('Padding for attribution region'),
  '#default_value' => theme_get_setting('bra'),
  '#options' => array(
    'br-5' => t(' Padding for Attribution Region - 5px'),
    'br-10' => t('Padding for Attribution Region - 10px'),
    'br-15' => t('Padding for Attribution Region - 15px'),
    'br-20' => t('Padding for Attribution Region - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);

// ===========================================
// = Bento Round Corner Padding - Containers =
// ===========================================

$form['components']['bento_container_padding'] = array(
  '#type' => 'fieldset',
  '#title' => t('Bento Padding for Containers'),
  '#description' => t('This section allows you to add padding to all containers on your site. Perfect when you have background colors or rounded corners and need your text to inset a little bit.'),
  '#collapsible' => TRUE,
  '#collapsed' => TRUE,
);
$form['components']['bento_container_padding']['bc'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all containers'),
  '#default_value' => theme_get_setting('bc'),
  '#options' => array(
    'bc-all-5' => t('Padding on All Containers - 5px'),
    'bc-all-10' => t('Padding on All Containers - 10px'),
    'bc-all-15' => t('Padding on All Containers - 15px'),
    'bc-all-20' => t('Padding on All Containers - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_container_padding']['bcs'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all secondary menu container'),
  '#default_value' => theme_get_setting('bcs'),
  '#options' => array(
    'bc-5' => t(' Padding on Secondary Menu - 5px'),
    'bc-10' => t('Padding on Secondary Menu - 10px'),
    'bc-15' => t('Padding on Secondary Menu - 15px'),
    'bc-20' => t('Padding on Secondary Menu - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_container_padding']['bch'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all containers in header'),
  '#default_value' => theme_get_setting('bch'),
  '#options' => array(
    'bc-5' => t(' Padding on Header Container - 5px'),
    'bc-10' => t('Padding on Header Container - 10px'),
    'bc-15' => t('Padding on Header Container - 15px'),
    'bc-20' => t('Padding on Header Container - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_container_padding']['bcpre'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all containers in preface'),
  '#default_value' => theme_get_setting('bcpre'),
  '#options' => array(
    'bc-5' => t(' Padding on Preface Container - 5px'),
    'bc-10' => t('Padding on Preface Container - 10px'),
    'bc-15' => t('Padding on Preface Container - 15px'),
    'bc-20' => t('Padding on Preface Container - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_container_padding']['bcc'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all containers in content region'),
  '#default_value' => theme_get_setting('bcc'),
  '#options' => array(
    'bc-5' => t(' Padding on Content Container - 5px'),
    'bc-10' => t('Padding on Content Container - 10px'),
    'bc-15' => t('Padding on Content Container - 15px'),
    'bc-20' => t('Padding on Content Container - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_container_padding']['bcpost'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all containers in postscript'),
  '#default_value' => theme_get_setting('bcpost'),
  '#options' => array(
    'bc-5' => t(' Padding on Postscript Container - 5px'),
    'bc-10' => t('Padding on Postscript Container - 10px'),
    'bc-15' => t('Padding on Postscript Container - 15px'),
    'bc-20' => t('Padding on Postscript Container - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);
$form['components']['bento_container_padding']['bcf'] = array(
  '#type' => 'select',
  '#title' => t('Padding on all containers in footer'),
  '#default_value' => theme_get_setting('bcf'),
  '#options' => array(
    'bc-5' => t(' Padding Footer Container - 5px'),
    'bc-10' => t('Padding Footer Container - 10px'),
    'bc-15' => t('Padding Footer Container - 15px'),
    'bc-20' => t('Padding Footer Container - 20px'),
  ),
  '#empty_option' => t('No Padding'),
);





/**
 * Bootstrap Overrides.
 * remove the nav bar settings
 * they are not used for Bento Theming
 * if you want them back, just add these to
 * your theme and uncomment the line items.
 */



// Navbar.
$form['components']['navbar'] = array(
  // '#type' => 'fieldset',
  // '#title' => t('Navbar'),
  // '#collapsible' => FALSE,
  // '#collapsed' => TRUE,
);
$form['components']['navbar']['bootstrap_navbar_position'] = array(
  // '#type' => 'select',
  // '#title' => t('Navbar Position'),
  // '#description' => t('Select your Navbar position.'),
  // '#default_value' => theme_get_setting('bootstrap_navbar_position'),
  // '#options' => array(
  //   'static-top' => t('Static Top'),
  //   'fixed-top' => t('Fixed Top'),
  //   'fixed-bottom' => t('Fixed Bottom'),
  // ),
  // '#empty_option' => t('Normal'),
);
$form['components']['navbar']['bootstrap_navbar_inverse'] = array(
  // '#type' => 'checkbox',
  // '#title' => t('Inverse navbar style'),
  // '#description' => t('Select if you want the inverse navbar style.'),
  // '#default_value' => theme_get_setting('bootstrap_navbar_inverse'),
);






