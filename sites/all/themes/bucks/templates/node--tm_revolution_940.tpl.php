<div class="banner-container bannercontainer">
	<div class="tp-banner">

		<ul>	
			<?php if (!empty($node->field_s1l0_img)): ?>
			
			<!-- slide 1 -->
	
			 <li data-transition="<?php print $node->field_s1l0_trans['und'][0]['value']; ?>">
			
			<!-- background image -->
				<img src="/sites/default/files/slides/<?php print $node->field_s1l0_img['und'][0]['filename']; ?>">
			<!-- end background image -->

			<!-- layer 1 -->
				<div class="caption <?php print $node->field_s1l1_buildin['und'][0]['value']; ?> slide-layer" 
					data-x="0" 
					data-y="0" 
					data-speed="<?php print $node->field_s1l1_speed['und'][0]['value']; ?>" 
					data-start="<?php print $node->field_s1l1_start['und'][0]['value']; ?>" 
					data-end="<?php print $node->field_s1l1_end['und'][0]['value']; ?>"
					data-easing="easeOutBack"
					style="z-index: 2">
					<img src="/sites/default/files/slides/<?php print $node->field_s1l1_img['und'][0]['filename']; ?>">
				</div>
			<!-- end layer 1 -->
			
			<!-- link -->
			<?php if (!empty($node->field_s1link_url)): ?>
				<div class="caption <?php print $node->field_s1link_buildin['und'][0]['value']; ?> link-layer" 
					data-x="<?php print $node->field_s1link_xloc['und'][0]['value']; ?>" 
					data-y="<?php print $node->field_s1link_yloc['und'][0]['value']; ?>" 
					data-speed="<?php print $node->field_s1link_speed['und'][0]['value']; ?>" 
					data-start="<?php print $node->field_s1link_start['und'][0]['value']; ?>" 
					data-end="<?php print $node->field_s1link_end['und'][0]['value']; ?>"
					data-easing="easeOutBack"
					style="z-index: 3">
				
					<a href="<?php print $node->field_s1link_url['und'][0]['url']; ?>" title="<?php print $node->field_s1link_url['und'][0]['title']; ?>"><?php print $node->field_s1link_url['und'][0]['title']; ?></a>
				</div>
			<?php endif; ?>
			<!-- end link -->


			</li>
			
			<!-- end slide 1 -->
			<?php endif; ?>
			
			
			
			<?php if (!empty($node->field_s2l0_img)): ?>

			<!-- slide 2 -->

			 <li data-transition="<?php print $node->field_s2l0_trans['und'][0]['value']; ?>">

			<!-- background image -->
				<img src="/sites/default/files/slides/<?php print $node->field_s2l0_img['und'][0]['filename']; ?>">
			<!-- end background image -->

			<!-- layer 1 -->
				<div class="caption <?php print $node->field_s2l1_buildin['und'][0]['value']; ?> slide-layer" 
					data-x="0" 
					data-y="0" 
					data-speed="<?php print $node->field_s2l1_speed['und'][0]['value']; ?>" 
					data-start="<?php print $node->field_s2l1_start['und'][0]['value']; ?>" 
					data-end="<?php print $node->field_s2l1_end['und'][0]['value']; ?>"
					data-easing="easeOutBack"
					style="z-index: 2">
					<img src="/sites/default/files/slides/<?php print $node->field_s2l1_img['und'][0]['filename']; ?>">
				</div>
			<!-- end layer 1 -->

			<!-- link -->
			<?php if (!empty($node->field_s2link_url)): ?>
				<div class="caption <?php print $node->field_s2link_buildin['und'][0]['value']; ?> link-layer" 
					data-x="<?php print $node->field_s2link_xloc['und'][0]['value']; ?>" 
					data-y="<?php print $node->field_s2link_yloc['und'][0]['value']; ?>" 
					data-speed="<?php print $node->field_s2link_speed['und'][0]['value']; ?>" 
					data-start="<?php print $node->field_s2link_start['und'][0]['value']; ?>" 
					data-end="<?php print $node->field_s2link_end['und'][0]['value']; ?>"
					data-easing="easeOutBack"
					style="z-index: 3">

					<a href="<?php print $node->field_s2link_url['und'][0]['url']; ?>" title="<?php print $node->field_s2link_url['und'][0]['title']; ?>"><?php print $node->field_s2link_url['und'][0]['title']; ?></a>
				</div>
			<?php endif; ?>
			<!-- end link -->


			</li>

			<!-- end slide 2 -->
			<?php endif; ?>


			<?php if (!empty($node->field_s3l0_img)): ?>

			<!-- slide 3 -->

			 <li data-transition="<?php print $node->field_s3l0_trans['und'][0]['value']; ?>">

			<!-- background image -->
				<img src="/sites/default/files/slides/<?php print $node->field_s3l0_img['und'][0]['filename']; ?>">
			<!-- end background image -->

			<!-- layer 1 -->
				<div class="caption <?php print $node->field_s3l1_buildin['und'][0]['value']; ?> slide-layer" 
					data-x="0" 
					data-y="0" 
					data-speed="<?php print $node->field_s3l1_speed['und'][0]['value']; ?>" 
					data-start="<?php print $node->field_s3l1_start['und'][0]['value']; ?>" 
					data-end="<?php print $node->field_s3l1_end['und'][0]['value']; ?>"
					data-easing="easeOutBack"
					style="z-index: 2">
					<img src="/sites/default/files/slides/<?php print $node->field_s3l1_img['und'][0]['filename']; ?>">
				</div>
			<!-- end layer 1 -->

			<!-- link -->
			<?php if (!empty($node->field_s3link_url)): ?>
				<div class="caption <?php print $node->field_s3link_buildin['und'][0]['value']; ?> link-layer" 
					data-x="<?php print $node->field_s3link_xloc['und'][0]['value']; ?>" 
					data-y="<?php print $node->field_s3link_yloc['und'][0]['value']; ?>" 
					data-speed="<?php print $node->field_s3link_speed['und'][0]['value']; ?>" 
					data-start="<?php print $node->field_s3link_start['und'][0]['value']; ?>" 
					data-end="<?php print $node->field_s3link_end['und'][0]['value']; ?>"
					data-easing="easeOutBack"
					style="z-index: 3">

					<a href="<?php print $node->field_s3link_url['und'][0]['url']; ?>" title="<?php print $node->field_s3link_url['und'][0]['title']; ?>"><?php print $node->field_s3link_url['und'][0]['title']; ?></a>
				</div>
			<?php endif; ?>
			<!-- end link -->


			</li>

			<!-- end slide 3 -->
			<?php endif; ?>


			<?php if (!empty($node->field_s4l0_img)): ?>

			<!-- slide 4 -->

			 <li data-transition="<?php print $node->field_s4l0_trans['und'][0]['value']; ?>">

			<!-- background image -->
				<img src="/sites/default/files/slides/<?php print $node->field_s4l0_img['und'][0]['filename']; ?>">
			<!-- end background image -->

			<!-- layer 1 -->
				<div class="caption <?php print $node->field_s4l1_buildin['und'][0]['value']; ?> slide-layer" 
					data-x="0" 
					data-y="0" 
					data-speed="<?php print $node->field_s4l1_speed['und'][0]['value']; ?>" 
					data-start="<?php print $node->field_s4l1_start['und'][0]['value']; ?>" 
					data-end="<?php print $node->field_s4l1_end['und'][0]['value']; ?>"
					data-easing="easeOutBack"
					style="z-index: 2">
					<img src="/sites/default/files/slides/<?php print $node->field_s4l1_img['und'][0]['filename']; ?>">
				</div>
			<!-- end layer 1 -->

			<!-- link -->
			<?php if (!empty($node->field_s4link_url)): ?>
				<div class="caption <?php print $node->field_s4link_buildin['und'][0]['value']; ?> link-layer" 
					data-x="<?php print $node->field_s4link_xloc['und'][0]['value']; ?>" 
					data-y="<?php print $node->field_s4link_yloc['und'][0]['value']; ?>" 
					data-speed="<?php print $node->field_s4link_speed['und'][0]['value']; ?>" 
					data-start="<?php print $node->field_s4link_start['und'][0]['value']; ?>" 
					data-end="<?php print $node->field_s4link_end['und'][0]['value']; ?>"
					data-easing="easeOutBack"
					style="z-index: 3">

					<a href="<?php print $node->field_s4link_url['und'][0]['url']; ?>" title="<?php print $node->field_s4link_url['und'][0]['title']; ?>"><?php print $node->field_s4link_url['und'][0]['title']; ?></a>
				</div>
			<?php endif; ?>
			<!-- end link -->


			</li>

			<!-- end slide 4 -->
			<?php endif; ?>
			


			<?php if (!empty($node->field_s5l0_img)): ?>

			<!-- slide 5 -->

			 <li data-transition="<?php print $node->field_s5l0_trans['und'][0]['value']; ?>">

			<!-- background image -->
				<img src="/sites/default/files/slides/<?php print $node->field_s5l0_img['und'][0]['filename']; ?>">
			<!-- end background image -->

			<!-- layer 1 -->
				<div class="caption <?php print $node->field_s5l1_buildin['und'][0]['value']; ?> slide-layer" 
					data-x="0" 
					data-y="0" 
					data-speed="<?php print $node->field_s5l1_speed['und'][0]['value']; ?>" 
					data-start="<?php print $node->field_s5l1_start['und'][0]['value']; ?>" 
					data-end="<?php print $node->field_s5l1_end['und'][0]['value']; ?>"
					data-easing="easeOutBack"
					style="z-index: 2">
					<img src="/sites/default/files/slides/<?php print $node->field_s5l1_img['und'][0]['filename']; ?>">
				</div>
			<!-- end layer 1 -->

			<!-- link -->
			<?php if (!empty($node->field_s5link_url)): ?>
				<div class="caption <?php print $node->field_s5link_buildin['und'][0]['value']; ?> link-layer" 
					data-x="<?php print $node->field_s5link_xloc['und'][0]['value']; ?>" 
					data-y="<?php print $node->field_s5link_yloc['und'][0]['value']; ?>" 
					data-speed="<?php print $node->field_s5link_speed['und'][0]['value']; ?>" 
					data-start="<?php print $node->field_s5link_start['und'][0]['value']; ?>" 
					data-end="<?php print $node->field_s5link_end['und'][0]['value']; ?>"
					data-easing="easeOutBack"
					style="z-index: 3">

					<a href="<?php print $node->field_s5link_url['und'][0]['url']; ?>" title="<?php print $node->field_s5link_url['und'][0]['title']; ?>"><?php print $node->field_s5link_url['und'][0]['title']; ?></a>
				</div>
			<?php endif; ?>
			<!-- end link -->


			</li>

			<!-- end slide 5 -->
			<?php endif; ?>						
			
		</ul>
		<!-- banner timer -->
		<div class="<?php print $node->field_hide_slide_show_navigation['und'][0]['value']; ?>"></div>
				
	</div>
</div>
 							
<style>
<?php if (!empty($node->field_s1l0_color)):?>
.banner-container{background-color:#<?php print $node->field_s1l0_color['und'][0]['value'];?>;}
<?php endif;?>
<?php if (!empty($node->field_s1link_color)):?> 
.tp-caption a{background-color:#<?php print $node->field_s1link_color['und'][0]['value'];?> ;}
<?php endif;?> 
.tp-banner ul{position:relative;}
<?php if (!empty($node->field_hide_page_title_)):?> 
h1.title{display:<?php print $node->field_hide_page_title_['und'][0]['value'];?>;}
<?php endif;?>
</style>            





<script type="text/javascript">
 
   jQuery(document).ready(function() {
      jQuery('.tp-banner').revolution({
   								delay:<?php print $node->field_slide_show_speed['und'][0]['value']; ?>,
								startwidth:940,
								startheight:<?php print $node->field_slide_show_height['und'][0]['value']; ?>,
								hideThumbs:10,
								onHoverStop:"on",
 
      });
 
   });
 
</script>
