<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<div class="<?php print $bento_classes; print ' '; print $bento_dark; print ' '; print $bento_dark_b; print ' '; print $bento_bp; print ' '; print $bento_bc; print ' '; print $bento_br;?>">
	
	<?php if ($page['mobile']): ?>
	<div id="mobile-wrapper" class="mobile-wrapper closed phone <?php print $bento_mob_dark; ?>">
	    <div class="mobile-wrapper-inner">
	      <div class="mobile open1">
	        <div class="mobile-inner">

	        </div> <!-- .mobile-inner -->
	      </div>   <!-- .mobile open1 -->

	      <div class="mobile closed1">
	        <div class="mobile-inner">

	        </div>  <!-- .mobile-inner -->
	      </div>  <!-- .mobile closed1 -->
	    <?php print render($page['mobile'])?>
	    </div> <!-- .mobile-wrapper-inner -->
	</div> <!-- mobile-wrapper -->
	<div class="mobile-pusher"></div>
	<?php endif; ?>



	
	<div class="page">	
		<div class="page-inner">
	

		
			<div class="top-wrapper w-navigation">
				<div class="top-wrapper wo-navigation">
					<?php if (!empty($breadcrumb)): ?>
					<div class="breadcrumb-wrapper wrapper <?php print $bento_m_dark; ?>">
						<div class="breadcrumb-wrapper-inner">
							<div id="breadcrumb-container" class="container">
								<div id="breadcrumb" class="region clearfix" >
									<div class="inner">
										<?php print $breadcrumb; ?>
									</div> <!-- .inner -->
								</div> <!-- #breadcrumb -->
							</div> <!-- #breadcrumb-container -->
						</div> <!-- .breadcrumb-wrapper-inner -->
					</div> <!-- .breadcrumb-wrapper -->
					<?php endif; ?>		
		
					<?php if ($secondary_menu): ?>
					<div id="secondary-wrapper" class="secondary-wrapper wrapper <?php print $bento_m_dark; ?>">
						<div id="secondary-container" class="container <?php print $bento_bcs;?>">
							<div class="inner">
								<div id="secondary-navigation" class="secondary-navigation <?php if ($page['drawer']): ?>drawer-nav<?php endif;?>">
									<div class="inner-inner">
										<?php print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('id' => 'secondary-menu', 'class' => array('links', 'inline', 'clearfix')))); ?>
									</div> <!--.inner-inner -->
								</div> <!--#secondary-navigation -->
							</div> <!-- .inner -->
						</div> <!-- #secondary-container -->
					</div> <!-- #secondary-wrapper -->
					<?php endif; ?>

					<header id="header-wrapper" class="header-wrapper wrapper <?php print $bento_header_dark; print ' '; print $bento_bph; ?>">
						<div class="header-wrapper-inner">
							<div id="header-container" class="container <?php print $bento_bch;?>">
								<div class="header-inner">
				
		
									<div id="site-info" class="site-info col-xs-12 col-sm-5 col-lg-4">
										<div class="inner">
						
											<?php if ($logo): ?>
											<div class="logo">
												<a class="logo ol-xs-5" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
													<img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
											</div> <!-- .logo -->		
											<?php endif; ?>

											<?php if (!empty($site_name)): ?>
											<div class="site-name">	
												<a class="name ol-xs-5" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
											</div> <!-- .site-name -->
											<?php endif; ?>

											<?php if (!empty($site_slogan)): ?>
											<div class="site-slogan">	
												<span class="slogan ol-xs-5"><?php print $site_slogan; ?></span>
											</div> <!-- .site-slogan -->	
											<?php endif; ?>

										</div> <!-- .inner -->
									</div> <!-- .site-info -->

									<div id="header" class="header-region region <?php print $bento_brh;?> col-xs-12 col-sm-7 col-lg-8">
										<div class="inner">
											<?php print render($page['header']); ?>
										</div>
									</div>
								</div> <!-- .header-inner -->
							</div> <!-- #header-container -->
						</div> <!-- .header-wrapper-inner -->
					</header> <!-- #header-wrapper -->
				</div> <!-- .topper-wrapper .wo-navigation-->
				<?php if ($main_menu): ?>
				<nav id="main-navigation-wrapper" class="main-navigation-wrapper wrapper desktop <?php print $bento_m_dark; ?>">
					<div id="main-navigation" class="main-navigation container ">
						<div class="inner">
		                    <?php print render($main_menu_expanded); ?>
						</div> <!-- .inner -->
					</div> <!-- .main-navigation -->
				</nav> <!-- .main-navigation-wrapper -->
				<?php endif; ?>
			</div> <!-- .topper-wrapper .w-navigation-->



			<div id="content-area-wrapper" class="content-area-wrapper <?php print $bento_cw_dark; ?>">

				<?php if ($page['preface']): ?>
				<section id="preface-wrapper" class="preface-wrapper wrapper <?php print $bento_pre_dark; print ' '; print $bento_bppre; ?>">
					<div id="preface-container" class="container<?php print $bento_fluid;?> <?php print $bento_bcpre;?>">
						<div id="preface" class="region <?php print $bento_brpre;?> clearfix">
							<div class="inner">
								<?php print render($page['preface']); ?>
							</div><!-- .inner -->
						</div> <!-- #preface -->
					</div>  <!-- #preface-container -->
				</section>
				<?php endif; ?>


				<section id="contentArea" class="container"> <!-- begin content column-->

					<?php if (!empty($page['content_top'])): ?>
						<section id="content-top-wrapper" class="content-top-wrapper wrapper <?php print $bento_ct_dark; print ' '; print $bento_bpct; ?>">
							<div class="content-top-wrapper-inner">
								<div id="content-top" class="region <?php print $bento_brct;?> clearfix">
									<div class="inner">
										<?php print render($page['content_top']); ?>
									</div><!-- .inner -->
								</div>  <!-- #content-top -->
							</div> <!-- .content-top-wrapper-inner -->
						</section>
					<?php endif; ?>

				</section>

				<div id="content-wrapper" class="content-wrapper wrapper">
					<div class="row">
						<div id="content-container" class="container <?php print $bento_bcc;?>">	

							<?php if (!empty($page['sidebar_first'])): ?>
							<aside class="col-sm-3 sidebar-first sidebar region <?php print $bento_sl_dark; print ' '; print $bento_bpside; print ' '; print $bento_brside;?>" role="complementary">
								<div class="inner">
									<?php print render($page['sidebar_first']); ?>
								</div> <!-- .inner -->
							</aside>  <!-- /#sidebar-first -->
							<?php endif; ?>

							<section id="contentAreaMain"<?php print $content_column_class; ?>> <!-- begin content column-->





								<?php if (!empty($page['highlighted'])): ?>
								<section id="highlighted-wrapper" class="highlighted-wrapper wrapper">
									<div class="highlighted-wrapper-inner">
										<div id="highlighted" class="highlighted region clearfix">
											<div class="inner">
												<div class="jumbotron">
													<?php print render($page['highlighted']); ?>
												</div> <!-- .jumbotron -->
											</div><!-- .inner -->
										</div> <!-- #highlighted -->
									</div>  <!-- .highlighted-wrapper-inner -->
								</section>				
								<?php endif; ?>

								<div class="content-region <?php print $bento_c_dark; ?>">

									<a id="main-content"></a>

										<?php print render($title_prefix); ?>

										<?php if (!empty($title)): ?>
											<h1 class="page-header title"><?php print $title; ?></h1>
										<?php endif; ?>

										<?php print render($title_suffix); ?>

										<?php print $messages; ?>

										<?php if (!empty($tabs)): ?>
											<?php print render($tabs); ?>
										<?php endif; ?>

										<?php if (!empty($page['help'])): ?>
											<?php print render($page['help']); ?>
										<?php endif; ?>

										<?php if (!empty($action_links)): ?>
											<ul class="action-links"><?php print render($action_links); ?></ul>
										<?php endif; ?>

										<?php print render($page['content']); ?>
									</div> <!-- .content-region -->
									<?php if (!empty($page['content_bottom'])): ?>
									<section id="content-bottom-wrapper" class="content-bottom-wrapper wrapper <?php print $bento_cb_dark; print ' '; print $bento_bpcb; ?>">
										<div class="content-bottom-wrapper-inner">
											<div id="content-bottom" class="region <?php print $bento_brcb;?> clearfix">
												<div class="inner">
													<?php print render($page['content_bottom']); ?>
												</div><!-- .inner -->
											</div>  <!-- #content-bottom -->
										</div> <!-- .content-bottom-wrapper-inner -->
									</section>				
									<?php endif; ?>
			
							</section> <!-- /content column -->



							<?php if (!empty($page['sidebar_second'])): ?>
							<aside class="col-sm-3 sidebar-last sidebar region <?php print $bento_sr_dark; print ' '; print $bento_bpside; print ' '; print $bento_brside; ?>" role="complementary">
								<div class="inner">
									<?php print render($page['sidebar_second']); ?>
								</div> <!-- .inner -->
							</aside>  <!-- /#sidebar-second -->
							<?php endif; ?>
						
						</div> <!-- #content-container -->
					</div> <!-- #content-wrapper -->
				</div> <!-- .row -->
			</div> <!-- .content-area-wrapper -->
		
			<?php if ($page['postscript']): ?>
			<section id="postscript-wrapper" class="postscript-wrapper wrapper <?php print $bento_post_dark; print ' '; print $bento_bppost; ?>">
				<div class="postscript-wrapper-inner">
					<div id="postscript-container" class="container <?php print $bento_bcpost;?>">
						<div id="postscript" class="region <?php print $bento_brpost;?> clearfix">
							<div class="inner">
								<?php print render($page['postscript']); ?>
							</div> <!-- .inner -->
						</div> <!-- #postscript -->
					</div> <!-- #postscript-container -->
				</div> <!-- .postscript-wrapper-inner -->
			</section>
			<?php endif; ?>

			<footer class="footer-outer container <?php print $bento_f_dark; print ' '; print $bento_bppost; ?>">
				<div class="footer-outer-inner">
				
					<?php if ($page['footer']): ?>
					<div id="footer-wrapper" class="footer-wrapper wrapper">
						<div class="footer-wrapper-inner">
							<div id="footer-container" class="container <?php print $bento_bcf;?>">
								<div id="footer" class="region <?php print $bento_brf;?> clearfix" >
									<div class="inner">
										<?php print render($page['footer']); ?>
									</div> <!-- .inner -->
								</div> <!-- #footer -->
							</div> <!-- #footer-container -->
						</div> <!-- .footer-wrapper-inner -->
					</div> <!-- .footer-wrapper -->
					<?php endif; ?>
					

					<div id="footer-information" class="footer-information-wrapper wrapper">
						<div class="footer-information-wrapper-inner">
							<div id="footer-information-container" class="container <?php print $bento_bcf;?>">
								<div id="footer-information" class="region <?php print $bento_brf;?> clearfix" >
									<div class="inner">
										<div>&copy;<?php echo date("Y"); print ' ';?>Bucks 4x4. All Rights Reserved. Powered by <a href="http://www.mindimage.net" target="_BLANK">Mindimage Web Development</a></div>
									</div> <!-- .inner -->
								</div> <!-- #footer-information -->
							</div> <!-- #footer-information-container -->
						</div> <!-- .footer-information-wrapper-inner -->
					</div> <!-- .footer-information-wrapper -->

					
<!--					<div id="attribution-line" class="attribution-wrapper wrapper">-->
<!--						<div id="attribution-container" class="container --><?php //print $bento_bcf;?><!--">-->
<!--							<div class="inner">-->
<!--								<div class="attribution-line-inside brf --><?php //print $bento_bra;?><!--">-->
<!--									<div class="inner-inner">-->
<!--										powered by .--><?php //if (!$logged_in) {
//										print $login_link;
//										} ?>
<!--									</div>-->
<!--								</div>-->
<!--							</div>-->
<!--						</div>-->
<!--					</div><!-- #attribution-line -->

				</div> <!-- .footer-outer-inner -->
			</footer> <!-- .footer-outer -->

		</div> <!-- .page-inner -->
		<?php if ($page['drawer']): ?>

		  <div id="region-drawer-wrapper" class="region-drawer-wrapper closed <?php print $bento_drawer_dark; ?>">

			
		      <div class="region-drawer-inner">
		        <div class="drawer-tab open1">
		          <div class="drawer-tab-inner">

		          </div>
		        </div>   

		        <div class="drawer-tab closed1">
		          <div class="drawer-tab-inner">

		          </div>
		        </div>
		      <?php print render($page['drawer'])?>
		      </div>

		  </div><?php endif; ?>
	</div> <!-- .page -->
</div> <!-- .bento -->



