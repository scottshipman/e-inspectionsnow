<div id="wrap">
    <div class="container">
    <div class="header-wrapper">
        <?php if ($page['header_top_left'] || $page['header_top_right']): ?>
        <!-- #header-top -->
        <div id="header-top" class="sixteen columns clearfix">
            
            <?php if ($page['header_top_left'] && $page['header_top_right']) { ?>
            <div class="one_half">
            <?php print render($page['header_top_left']); ?>
            </div>
            
            <div class="one_half last">
            <?php print render($page['header_top_right']); ?>
            </div>
            <?php } else { ?>
                
            <?php print render($page['header_top_left']); ?>
            <?php print render($page['header_top_right']); ?>
            
            <?php } ?>
            
        </div><!-- /#header-top -->
        <?php endif; ?>
        
        <div class="clear"></div>
        
        <!-- #header -->
        <?php if ($page['header_right']) { ?>
        <div id="header" class="five columns clearfix">
		<?php } else { ?>
        <div id="header" class="sixteen columns clearfix">   
        <?php } ?>
        
            <div class="inner">
    
                <?php if ($logo): ?>
                  <a href="<?php print $front_page; ?>" title="<?php print t('e-InspectionsNow Building Inspection Services'); ?>" rel="home" id="logo">
                    <img src="<?php print $logo; ?>" alt="<?php print t('e-InspectionsNow Building Inspection Services'); ?>" />
                  </a>
                <?php endif; ?>
                
                <?php if ($site_name || $site_slogan): ?>
                <div id="name-and-slogan"<?php if ($hide_site_name && $hide_site_slogan) { print ' class="element-invisible"'; } ?>>
                
                    <?php if ($site_name): ?>
                    <div id="site-name"<?php if ($hide_site_name) { print ' class="element-invisible"'; } ?>>
                    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><?php print $site_name; ?></a>
                    </div>
                    <?php endif; ?>
                    
                    <?php if ($site_slogan): ?>
                    <div id="site-slogan"<?php if ($hide_site_slogan) { print ' class="element-invisible"'; } ?>>
                    <?php print $site_slogan; ?>
                    </div>
                    <?php endif; ?>
                
                </div>
                <?php endif; ?>
            </div>
        </div><!-- /#header -->
        
        <?php if ($page['header_right']) : ?>
        <!-- #header-right -->
        <div id="header-right" class="eleven columns clearfix">
        
        	 <div class="inner">
			<?php print render($page['header_right']); ?>
        	</div>
            
        </div><!-- /#header-right -->
        <?php endif; ?>
        
        <div class="clear"></div>
        
        <!-- #navigation -->
        <div id="navigation" class="sixteen columns clearfix">
        
            <div class="menu-header">
            <?php if ($page['header']) : ?>
                <?php print drupal_render($page['header']); ?>
                <?php else : ?>
                <?php 
				if (module_exists('i18n_menu')) {
				$main_menu_tree = i18n_menu_translated_tree(variable_get('menu_main_links_source', 'main-menu'));
				} else { 
				$main_menu_tree = menu_tree(variable_get('menu_main_links_source', 'main-menu')); 
				} ?>
				<div class="content">
				<?php print drupal_render($main_menu_tree); ?>
                </div>
            <?php endif; ?>
            </div>
            
        </div><!-- /#navigation -->
        </div>
             <?php if ($breadcrumb): ?>
                <div id="breadcrumb"><?php print $breadcrumb; ?></div>
            <?php endif; ?>
        <?php if ($page['sidebar_first']): ?>
        <!-- #sidebar-first -->
        <div id="sidebar-first" class="five columns">
            <?php print render($page['sidebar_first']); ?>
        </div><!-- /#sidebar-first -->
        <?php endif; ?>
        
        <?php if ($page['sidebar_first'] && $page['sidebar_second']) { ?>
        <div id="content" class="six columns">
        <?php } elseif ($page['sidebar_first'] || $page['sidebar_second']) { ?>
        <div id="content" class="eleven columns">
		<?php } else { ?>
        <div id="content" class="sixteen columns clearfix">    
        <?php } ?>
        
            <?php if ($messages): ?>
                <div id="messages">
                <?php print $messages; ?>
                </div><!-- /#messages -->
            <?php endif; ?>
        
            
            <div id="main">
            
                <?php if ($page['highlighted']): ?><div id="highlighted" class="clearfix"><?php print render($page['highlighted']); ?></div><?php endif; ?>
               <?php if (!$is_front): ?> 
                <?php print render($title_prefix); ?>
                
                <?php if ($title): ?>
                <h1 class="title" id="page-title">
                  <?php print $title; ?>
                </h1>
                <?php endif; ?>
                
                <?php print render($title_suffix); ?>
                <?php endif; ?>
                <?php if ($tabs): ?>
                <div class="tabs">
                  <?php print render($tabs); ?>
                </div>
                <?php endif; ?>
                
                <?php print render($page['help']); ?>
                
                <?php if ($action_links): ?>
                <ul class="action-links">
                  <?php print render($action_links); ?>
                </ul>
                <?php endif; ?>
                
                <?php print render($page['content']); ?>
                <?php print $feed_icons; ?>
                
            </div>
        
        </div><!-- /#content -->
        
        <?php if ($page['sidebar_second']): ?>
        <!-- #sidebar-first -->
        <div id="sidebar-second" class="five columns">
            <?php print render($page['sidebar_second']); ?>
        </div><!-- /#sidebar-first -->
        <?php endif; ?>
        
        <div class="clear"></div>
        
        <?php if ($page['featured_left'] || $page['featured_right']): ?>
        <!-- #featured -->
        <div id="featured" class="sixteen columns clearfix">
            
            <?php if ($page['featured_left'] && $page['featured_right']) { ?>
            <div class="one_half">
            <?php print render($page['featured_left']); ?>
            </div>
            
            <div class="one_half last">
            <?php print render($page['featured_right']); ?>
            </div>
            <?php } else { ?>
                
            <?php print render($page['featured_left']); ?>
            <?php print render($page['featured_right']); ?>
            
            <?php } ?>
            
        </div><!-- /#featured -->
        <?php endif; ?>
        
	</div>
        
	<div id="footer" >
        <div class="container">
        	<div class="sixteen columns clearfix">
        
                <div class="one_third">
                <?php if ($page['footer_first']): ?><?php print render($page['footer_first']); ?><?php endif; ?>
                </div>
                
                <div class="one_third">
                <?php if ($page['footer_second']): ?><?php print render($page['footer_second']); ?><?php endif; ?>
                </div>
                
                <div class="one_third last">
                <?php if ($page['footer_third']): ?><?php print render($page['footer_third']); ?><?php endif; ?>
                </div>
        
                <div class="clear"></div>
                
                <?php if ($page['footer']): print render($page['footer']); endif; ?>
                
                <div class="clear"></div>


                <div class="footer-logos">
                    <div class="logo-item">
                        <img class="footer-logo-item" alt="Internachi Certified" src="/sites/all/themes/skeletontheme/images/internachi_certified_logo75.jpg" />
                        <span class="logo-caption">#09073107</span>
                    </div>
                    <div class="logo-item">
                        <img class="footer-logo-item" alt="Florida Certified" src="/sites/all/themes/skeletontheme/images/fl-seal75.jpg"  />
                        <span class="logo-caption">Lic # HI-575</span>
                    </div>
                    <div class="logo-item">
                        <img class="footer-logo-item" alt="Buyer's Choice" src="/sites/all/themes/skeletontheme/images/buyers-choice-logo75.jpg" />
                    </div>

                    <div id="credits">
                        <?php print(date('Y') . ' ');?>
                        <?php if (!empty($site_name)):?>
                            Copyright &copy; <?php print $site_name ?>
                        <?php endif;?>
                        |  Site provided by <a href="http://www.ibuilddrupalsites.com" target="_blank">I Build Drupal Sites.com</a>.
                    </div>
                </div>


        	</div>
        </div>
    </div>
    
</div> <!-- /#wrap -->

