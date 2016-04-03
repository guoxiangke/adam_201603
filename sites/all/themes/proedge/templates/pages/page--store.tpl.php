<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/garland.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to main-menu admin pages.
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
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_left']: Items for the first sidebar.
 * - $page['sidebar_right']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>

<!-- top-menu -->
<div class="top-menu-wrapper">
  <div class="container">
    <div class="row">
      <div class="col-lg-12">
         <?php print render($page['top_menu']); ?>
         <div class="top_right">
            <nav id="user-menu"  role="navigation">
              <a class="nav-toggle" href="#"><?php print t('Menu') ?></a>
              <div class="user-navigation-container">
                <?php $user_menu_tree = menu_tree(variable_get('user_main_links_source', 'user-menu'));
                  print drupal_render($user_menu_tree);
                ?>
              </div>
              <div class="clear"></div>
            </nav>
          </div>
      </div>
    </div>
  </div>
</div>
<!-- end top-menu -->

<!-- header -->
<div id="header_wrapper">
  <header id="header" role="banner">

    <div class="top_left">
      <?php if ($logo): ?>
        <div id="logo">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><img src="<?php print $logo; ?>"/></a>
        </div>
      <?php endif; ?>

      <h2 id="site-title">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
        <div id="site-description"><?php print $site_slogan; ?></div>
      </h2>
    </div>

    <!-- menu -->
    <div class="top_middle">
      <nav id="main-menu"  role="navigation">
        <a class="nav-toggle" href="#"><?php print t('Menu') ?></a>
        <div class="menu-navigation-container">
          <?php $main_menu_tree = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
            print drupal_render($main_menu_tree);
          ?>
        </div>
        <div class="clear"></div>
      </nav>
    </div>
    <!-- end menu -->
    <div class="clear"></div>
  </header>
</div>
<!-- end header -->

  <div class="top-msg-wrap">
    <div class="full-wrap clearfix">
      <?php print render($page['top_message']) ?>
    </div>
  </div>


<div id="page-wrapper">

      <div class="row">
        <div class="container page-width">
            <?php if ($primary_local_tasks): ?>
                    <div class="col-lg-12 col-md-12 col-sm-12">
                      <div class="primary-tab-wrap">
                      <ul class="tabs primary"><?php print render($primary_local_tasks); ?></ul>
                      </div>
                    </div>
            <?php endif; ?>

            <?php if ($page['content_top_right']): ?>
                    <div class="add-content-button">
                    <?php print render($page['content_top_right']); ?>
                    </div>
            <?php endif; ?>
        </div>
      </div>

      
            <div class="slide-show-wrap">
            <?php print render($page['content_top']); ?>
            </div>
      

      <?php if ($secondary_local_tasks): ?>
          <div class="container page-width">
            <div class="row">
              <div class="col-lg-12 col-md-12 col-sm-12">
                <div class="secondary-tab-wrap">
                <ul class="tabs secondary"><?php print render($secondary_local_tasks); ?></ul>
                </div>
              </div>
            </div>
          </div>
      <?php endif; ?>






<div class="container page-width">

<div class="store-navbar-header">
<?php 
$image_logo = field_view_field('node', $node, 'field_image_logo', array('label'=>'hidden'));
print render($image_logo); ?>

</div>
<p class="title"><?php print drupal_get_title(); ?></p>
</div>


<div class="store_banner">
<?php $single_image = field_view_field('node', $node, 'field_single_image', array('label'=>'hidden')); 
print render($single_image ); ?>
</div>

    <div class="container page-width">
        <!-- Main Content start//-->
        <!-- Sider left and sider right cannot appear at the same time!!//-->
        <div class="row">
            <?php print $messages; ?>
            <?php  if($page['sidebar_right'] || $page['sidebar_left']){ ?>

                <?php  if($page['sidebar_left']): ?>
                  <div class="col-lg-3 col-md-3 col-sm-12">
                    <?php print render($page['sidebar_left']) ?>
                  </div>
                <?php endif; ?>
                  
                  <div class="col-lg-9 col-md-9"> 
                    <?php print render($page['content']) ?> 
                  </div>
              
                <?php  if($page['sidebar_right']): ?>
                  <div class="col-lg-3 col-md-3 col-sm-12">
                    <?php print render($page['sidebar_right']) ?>
                  </div>
                <?php endif; ?>
              
            <?php } else {?>
              <div class="col-lg-12">
                <?php  if($page['content']):?>
                    <?php print render($page['content']) ?>
                <?php endif; ?>
              </div>
            <?php } ?> 
        </div>   
    </div>    
      <!-- Main Content end//-->
</div>

<!-- Footer -->

<div id="footer" class="footer">
    <?php if ($page['footer_first'] || $page['footer_second'] || $page['footer_third'] || $page['footer_forth']): ?>
      <div class="container">
        <div class="row">
          <?php if ($page['footer_first']): ?>
          <div class="col-lg-3 col-md-3 col-sm-12"><?php print render($page['footer_first']); ?></div>
          <?php endif; ?>
          <?php if ($page['footer_second']): ?>
          <div class="col-lg-3 col-md-3 col-sm-12"><?php print render($page['footer_second']); ?></div>
          <?php endif; ?>
          <?php if ($page['footer_third']): ?>
          <div class="col-lg-3 col-md-3 col-sm-12"><?php print render($page['footer_third']); ?></div>
          <?php endif; ?>
          <?php if ($page['footer_forth']): ?>
          <div class="col-lg-3 col-md-3 col-sm-12"><?php print render($page['footer_forth']); ?></div>
          <?php endif; ?>
        </div>
      </div>
    <?php endif; ?>

    <div class="footer_bottom">
      <div id="copyright">
        <p class="copyright">
          <?php print t('Copyright'); ?> &copy; <?php echo date("Y"); ?>, <?php print $site_name; ?>
        </p> 
        <div class="clear"></div>
      </div>
    </div>

  <?php print render($page['offer']) ?>
</div>
