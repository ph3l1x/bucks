<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */
?>

<?php $user = user_load(arg(1)); if (!empty($user->roles['5']))  : 
if ($user->field_show_profile['und'][0]['value'] == 'yes') : ?>
<div id="user-profile-<?php $user = user_load(arg(1)); print $user->uid;?>" class="<?php print $classes; ?> clearfix">
     <?php if (!empty($user->field_user_company)) : ?><div class="org field_user_company"><h3><?php print $user->field_user_company['und'][0]['value']; ?></h3></div><?php endif; ?>
     <div id="profile-group">
  <div class="user-meta">
  <?php print render($user_profile['user_picture' ]); ?>
‎

<?php if ($user->field_include_social_links_on_yo[LANGUAGE_NONE][0]['value'] == 'yes') : ?>

  <div class="profile-social-links clearfix">
  <?php if (!empty($user->field_user_twitter)) : ?><div class="field_user_twitter"><a href="<?php print $user->field_user_twitter['und'][0]['url']; ?>">Twitter</a></div><?php endif; ?>
  <?php if (!empty($user->field_user_facebook)) : ?><div class="field_user_facebook"><a href="<?php print $user->field_user_facebook['und'][0]['url']; ?>">Facebook</a></div><?php endif; ?>
  <?php if (!empty($user->field_user_linkedin)) : ?><div class="field_user_linkedin"><a href="<?php print $user->field_user_linkedin['und'][0]['url']; ?>">LinkedIn</a></div><?php endif; ?>
  <?php if (!empty($user->field_user_website)) : ?><div class="field_user_website"><a href="<?php print $user->field_user_website['und'][0]['url']; ?>">Website</a></div><?php endif; ?>
  <?php if (!empty($user->field_user_blog)) : ?><div class="field_user_blog"><a href="<?php print $user->field_user_blog['und'][0]['url']; ?>">Blog</a></div><?php endif; ?>
  </div>
  <? endif; ?>
  
  <div class="profile-address-links">

    <div id="" class="vcard">


     <?php if (!empty($user->field_user_title)) : ?><div class="field_user_title"><strong><?php print $user->field_user_title['und'][0]['value']; ?></strong></div><?php endif; ?>
     
     <div class="adr">
      <?php if (!empty($user->locations)) : ?><div class="street-address locations"><?php print $user->locations[0]['street']; ?></div><?php endif; ?>
      <?php if (!empty($user->locations)) : ?><span class="locality locations"><?php print $user->locations[0]['city']; ?></span><?php endif; ?>
                                
      <?php if (!empty($user->locations)) : ?><span class="region locations"><?php print $user->locations[0]['province']; ?></span>, <?php endif; ?>
      <?php if (!empty($user->locations)) : ?><span class="postal-code locations"><?php print $user->locations[0]['postal_code']; ?></span><?php endif; ?>

     </div>
     <?php if (!empty($user->locations)) : ?><div class="tel locations"><?php print $user->locations[0]['phone']; ?></div><?php endif; ?>
     <?php if ($user->field_include_email_on_profile_[LANGUAGE_NONE][0]['value'] == 'yes') : ?>
     <div class="email"><?php print $user->mail; ?></div>
     <?php endif; ?>

    </div>
    
    
    
  
  </div>

    </div>
    <?php if (!empty($user->field_user_biography)) : ?>
    <div class="field_user_biography"><?php print $user->field_user_biography['und'][0]['value']; ?></div><?php endif; ?>
    </div></div><!-- #user-profile-# --><?php endif; endif; endif; ?>
    

       

