

<div class="landing-page-wrapper">
  <div class="inner">
    <div class="sixteen columns">
      <div class="inner">
        <div class="eleven columns alpha col-sm-7">
          <div id="video"><?php if(isset($content['field_landing_page_video'])) {print render($content['field_landing_page_video']);} ?></div>

          <div id="image"><?php if(isset($content['field_landing_page_image'])) {print render($content['field_landing_page_image']);} ?></div>
          
          <div id="node-body"><?php if (!empty($node->body)): ?><?php print $node->body['und'][0]['value']; ?><?php endif; ?></div>
        </div>
        <div class="five columns omega col-sm-5">
          <div id="block-above-form"><?php if(isset($content['field_block_above_form'])) {print render($content['field_block_above_form']);} ?></div>
          <div id="webform-block"><?php if(isset($content['webform'])) {print render($content['webform']);} ?></div>
          <div id="block-below-form"><?php if(isset($content['field_block_below_form'])) {print render($content['field_block_below_form']);} ?></div>
        </div>
      </div>
    </div>
  </div>
</div>




<style>
#block-above-form {
  padding-bottom:20px;
}
</style>
  
<?php if($node->field_hide_page_title_h1_['und'][0]['value'] == 1):?>

<style>
h1.title{display:none;}
</style>

<?php endif; ?>

<?php if($node->field_hide_header_and_main_menu['und'][0]['value'] == 1):?>

<style>
#header-wrapper-outer,
#navigation-wrapper,
.top-wrapper.w-navigation{display:none;}
</style>

<?php endif; ?>
