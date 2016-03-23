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



  <div class="slide-show-wrap">
    <?php print render($page['slideshow']); ?> 
    <div class="full-wrap clearfix">
      <?php print render($page['search']) ?>
    </div>
  </div>

  <div class="top-msg-wrap">
    <div class="full-wrap clearfix">
      <?php print render($page['top_message']) ?>
    </div>
  </div>



<div id="page-wrapper">

      <?php if ($is_front): ?>
      
      
      
      
      
      
      
      
      <section id="DemandServicesModule">
  <div class="container">
    <div class="DemandServices">
      <div class="ds_container marginTop30">
        <h2 class="h2">在这里有您所需的一切</h2>
        <h5 class="h5">公司注册、代理、税务、融资、人才...你所需要的一切产品，微服驿站为你企业提供保姆式服务</h5>
        <ul class="ds_ul marginTop50">
          <li class="ds_ul_li">
            <div class="hhh">
              <div class="left zxfwbg">
                <div class="dsl_title"> <img src="sites/all/themes/proedge/images/home/xzfw.png" height="78" width="78" alt=""> </div>
                <div class="marginTop30">
                  <ul class="dsl_menu">
                    <li><a>行政服务</a></li>
                    <li>
                      <p>线上受理，后台办理，实现信息查询</p>
                    </li>
                  </ul>
                </div>
              </div>
              <div class="right">
                <div class="dsr_title">
                  <p class="pull-left "> <img style="width: 30px;height:30px" src="sites/all/themes/proedge/images/home/as_administrativeService1.png"> </p>
                  <p class="pull-left"> <strong>行政服务</strong> <br>
                    <span>线上受理、后台办理、gg</span> </p>
                </div>
                <hr class="clear">
                <div class="dsr_content marginTop50">
                  <ul class="dsr_ul">
                    <li>
                      <p class="dsr_ul_title">工会资助资金</p>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a class="fontColorBlue" href="#">详情</a> </li>
                    <li> <span class="dsr_ul_title">技术交易补助</span>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a href="#">详情</a> </li>
                    <li> <span class="dsr_ul_title">科技成果转化</span>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a href="#">详情</a> </li>
                    <li> <span class="dsr_ul_title">高薪技术企业奖励</span>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a href="#">详情</a> </li>
                  </ul>
                </div>
              </div>
            </div>
          </li>
          <li class="ds_ul_li">
            <div class="hhh">
              <div class="left erpbg">
                <div class="dsl_title"> <img src="sites/all/themes/proedge/images/home/erp.png" alt=""> </div>
                <div class="marginTop30">
                  <ul class="dsl_menu">
                    <li><a>云服务服务</a></li>
                    <li>
                      <p>企业数据分析、制定商业策略</p>
                    </li>
                  </ul>
                </div>
              </div>
              <div class="right">
                <div class="dsr_title">
                  <p class="pull-left "> <img style="width: 30px;height:30px" src="sites/all/themes/proedge/images/home/as_ERPService1.png"> </p>
                  <p class="pull-left"> <strong>云服务服务</strong> <br>
                    <span>企业数据分析、制定商业策略</span> </p>
                </div>
                <hr class="clear">
                <div class="dsr_content marginTop50">
                  <ul class="dsr_ul">
                    <li>
                      <p class="dsr_ul_title">库存管理</p>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a class="fontColorBlue" href="#">详情</a> </li>
                    <li> <span class="dsr_ul_title">员工档案管理</span>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a href="#">详情</a> </li>
                    <li> <span class="dsr_ul_title">财务管理</span>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a href="#">详情</a> </li>
                    <li> <span class="dsr_ul_title">营销管理</span>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a href="#">详情</a> </li>
                  </ul>
                </div>
              </div>
            </div>
          </li>
          <li class="ds_ul_li">
            <div class="hhh">
              <div class="left zlbg">
                <div class="dsl_title "> <img src="sites/all/themes/proedge/images/home/zl.png" height="78" width="78" alt=""> </div>
                <div class="marginTop30">
                  <ul class="dsl_menu">
                    <li><a>专利查询</a></li>
                    <li>
                      <p>知识产权、法律援助</p>
                    </li>
                  </ul>
                </div>
              </div>
              <div class="right">
                <div class="dsr_title">
                  <p class="pull-left "> <img style="width: 30px;height:30px" src="sites/all/themes/proedge/images/home/as_PatentQuery1.png"> </p>
                  <p class="pull-left"> <strong>专利查询</strong> <br>
                    <span>知识产权、法律援助</span> </p>
                </div>
                <hr class="clear">
                <div class="dsr_content marginTop50">
                  <ul class="dsr_ul">
                    <li>
                      <p class="dsr_ul_title">多维分析</p>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a class="fontColorBlue" href="#">详情</a> </li>
                    <li> <span class="dsr_ul_title">专利提醒</span>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a href="#">详情</a> </li>
                    <li> <span class="dsr_ul_title">智威搜索</span>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a href="#">详情</a> </li>
                    <li> <span class="dsr_ul_title">化学结构式检索</span>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a href="#">详情</a> </li>
                  </ul>
                </div>
              </div>
            </div>
          </li>
          <li class="ds_ul_li">
            <div class="hhh">
              <div class="left dxyqbg">
                <div class="dsl_title"> <img src="sites/all/themes/proedge/images/home/dxyq.png" height="78" width="78" alt=""> </div>
                <div class="marginTop30">
                  <ul class="dsl_menu">
                    <li><a>大型设备仪器</a></li>
                    <li>
                      <p>融合400余家单位、大型设备仪器</p>
                    </li>
                  </ul>
                </div>
              </div>
              <div class="right">
                <div class="dsr_title">
                  <p class="pull-left "> <img style="width: 30px;height:30px" src="sites/all/themes/proedge/images/home/as_apparatus1.png"> </p>
                  <p class="pull-left"> <strong>大型设备仪器</strong> <br>
                    <span>融合400余家单位、大型设备仪器</span> </p>
                </div>
                <hr class="clear">
                <div class="dsr_content marginTop50">
                  <ul class="dsr_ul">
                    <li>
                      <p class="dsr_ul_title">分析仪器</p>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a class="fontColorBlue" href="#">详情</a> </li>
                    <li> <span class="dsr_ul_title">医学诊断仪器</span>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a href="#">详情</a> </li>
                    <li> <span class="dsr_ul_title">天文仪器</span>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a href="#">详情</a> </li>
                    <li> <span class="dsr_ul_title">电子诊断仪器</span>
                      <p> 简单介绍描述，简单介 绍描述... </p>
                      <a href="#">详情</a> </li>
                  </ul>
                </div>
              </div>
            </div>
          </li>
        </ul>
      </div>
      <div class="container">
        <div class="row more">
          <div class="tab-content marginTop30 moretitle "> 更多业务需求系列产品 </div>
          <div class="col-lg-4 col-md-4 col-sm-4">
            <p class="tab-content title fontStyle14">工商代理</p>
            <p class="tab-content fontStyle10"> 为企业提供在线咨询，在线下单。线下一对一服务模式为您省时、省心又省钱 </p>
            <p class="tab-content marginTop30"> <a href="#">注册公司</a><span>|</span><a href="#">工商变更</a><span>|</span><a href="#">资质审批</a> </p>
          </div>
          <div class="col-lg-4 col-md-4 col-sm-4">
            <p class="tab-content title fontStyle14">工商代理</p>
            <p class="tab-content fontStyle10"> 为企业提供在线咨询，在线下单。线下一对一服务模式为您省时、省心又省钱 </p>
            <p class="tab-content marginTop30"> <a href="#">注册公司</a><span>|</span><a href="#">工商变更</a><span>|</span><a href="#">资质审批</a> </p>
          </div>
          <div class="col-lg-4 col-md-4 col-sm-4">
            <p class="tab-content title fontStyle14">工商代理</p>
            <p class="tab-content fontStyle10"> 为企业提供在线咨询，在线下单。线下一对一服务模式为您省时、省心又省钱 </p>
            <p class="tab-content marginTop30"> <a href="#">注册公司</a><span>|</span><a href="#">工商变更</a><span>|</span><a href="#">资质审批</a> </p>
          </div>
        </div>
      </div>
    </div>
  </div>
</section>
      
<section class="continueBusinessModule">
  <div class="syBg"><img src="sites/all/themes/proedge/images/home/zz1.jpg" width="100%" height="529"></div>
  <div class="syBg"><img src="sites/all/themes/proedge/images/home/zz2.jpg" width="100%" height="529"></div>
  <div class="syBg"><img src="sites/all/themes/proedge/images/home/zz3.jpg" width="100%" height="529"></div>
  <div class="syBg"><img src="sites/all/themes/proedge/images/home/zz4.jpg" width="100%" height="529"></div>
  <div class="syBg"><img src="sites/all/themes/proedge/images/home/zz5.jpg" width="100%" height="529"></div>
  <div class="container">
    <h2 class="marginTop30 h2">在微服继续你的业务</h2>
    <h5 class="h5">不管你处于什么行业，微服驿站为你保驾护航，助你轻松跨入“互联网+”时代</h5>
    <div class="row marginTop30">
      <div class="col-lg-2 col-md-2 col-sm-2 ">
        <ul id="myTab " class="continueBusiness_tab">
          <li class="tabClick"><a href="#yxqy" data-toggle="tab" class="fontStyle14">金融服务</a></li>
          <li><a href="#ios" tabindex="-1" data-toggle="tab" class="fontStyle14">优秀企业</a></li>
          <li><a href="#jmeter" tabindex="-1" data-toggle="tab" class="fontStyle14">人才招聘</a></li>
          <li><a href="#ejb" tabindex="-1" data-toggle="tab" class="fontStyle14">优秀项目</a></li>
          <li><a href="#ejb2" tabindex="-1" data-toggle="tab" class="fontStyle14">活动交流</a></li>
        </ul>
      </div>
      <div class="col-lg-10 col-md-10 col-sm-10">
        <div id="myTabContent" class="tab-content pull-left continueBusiness_TabContent">
          <div class="tab-pane fade in active" id="yxqy">
            <ul class="row">
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/j-sdtz.png" alt="时代投资">
                  <h4>时代投资</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/j-qcxt.png" alt="启晨星投">
                  <h4>启晨星投</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/j-tftz.png" alt="天府投资">
                  <h4>天府投资</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/j-xnzb.png" alt="小牛资本">
                  <h4>小牛资本</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/j-htzb.png" alt="海天资本">
                  <h4>海天资本</h4>
                </div>
              </li>
            </ul>
            <div class="jieshao">
              <h5 class="h5">金融解决方案</h5>
              <p class="test1">金融云作为金融级业务解决方案，满足最严苛的设计要求，兼容传统金融业务架构， 助您无负担快速迁云，个性化订制及灵活扩展让您专注业务领域，连接汇聚互联网的海量计算、 存储、应用及大数据资源，是您互联网转型首选。 </p>
            </div>
          </div>
          <div class="tab-pane fade" id="ios">
            <ul class="row">
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/yxqy1.png" height="78" width="78" alt="丰谷酒业">
                  <h4>丰谷酒业</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/yxqy2.png" alt="攻城狮网络">
                  <h4>攻城狮网络</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/yxqy3.png" alt="昊天科技">
                  <h4>昊天科技</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/yxqy4.png" alt="科技服务">
                  <h4>科技服务</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/yxqy5.png" alt="绽放科技">
                  <h4>绽放科技</h4>
                </div>
              </li>
            </ul>
            <div class="jieshao">
              <h5 class="h5 marginTop30">优秀企业</h5>
              <p>金融云作为金融级业务解决方案，满足最严苛的设计要求，兼容传统金融业务架构， 助您无负担快速迁云，个性化订制及灵活扩展让您专注业务领域，连接汇聚互联网的海量计算、 存储、应用及大数据资源，是您互联网转型首选。</p>
            </div>
          </div>
          <div class="tab-pane fade" id="jmeter">
            <ul class="row">
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:0;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/rczp1.png" alt="传媒大学">
                  <h4>传媒大学</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:160px;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/rczp2.png" alt="电子科技大学">
                  <h4>电子科技大学</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:320px;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/rczp3.png" alt="农业大学">
                  <h4>农业大学</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:480px;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/rczp4.png" alt="四川大学">
                  <h4>四川大学</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:640px;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/rczp5.png" alt="西南财经大学">
                  <h4>西南财经大学</h4>
                </div>
              </li>
            </ul>
            <div class="jieshao">
              <h5 class="h5 marginTop30">人力招聘</h5>
              <p>jMeter 是一款开源的测试软件。它是 100% 纯 Java 应用程序，用于负载和性能测试。</p>
            </div>
          </div>
          <div class="tab-pane fade" id="ejb">
            <ul class="row">
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:0;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/yxxm1.png" alt="防丢智能手表">
                  <h4>防丢智能手表</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:160px;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/yxxm2.png" alt="防水智能点读笔">
                  <h4>防水智能点读笔</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:320px;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/yxxm3.png" alt="悍狼智能眼镜">
                  <h4>悍狼智能眼镜</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:480px;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/yxxm4.png" alt="烟民福音">
                  <h4>烟民福音</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:640px;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/yxxm5.png" alt="只为孩子健康">
                  <h4>只为孩子健康</h4>
                </div>
              </li>
            </ul>
            <div class="jieshao">
              <h5 class="h5 marginTop30">优秀项目</h5>
              <p>Enterprise Java Beans（EJB）是一个创建高度可扩展性和强大企业级应用程序的开发架构，部署在兼容应用程序服务器（比如 JBOSS、Web Logic 等）的 J2EE 上。 </p>
            </div>
          </div>
          <div class="tab-pane fade" id="ejb1">
            <ul class="row">
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/j-sdtz.png" alt="时代投资">
                  <h4>时代投资</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/j-qcxt.png" alt="启晨星投">
                  <h4>启晨星投</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/j-tftz.png" alt="天府投资">
                  <h4>天府投资</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/j-xnzb.png" alt="小牛资本">
                  <h4>小牛资本</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/j-htzb.png" alt="海天资本">
                  <h4>海天资本</h4>
                </div>
              </li>
            </ul>
            <div class="jieshao">
              <h5 class="h5 ">优惠政策</h5>
              <p>Enterprise Java Beans（EJB）是一个创建高度可扩展性和强大企业级应用程序的开发架构，部署在兼容应用程序服务器（比如 JBOSS、Web Logic 等）的 J2EE 上。 </p>
            </div>
          </div>
          <div class="tab-pane fade" id="ejb2">
            <ul class="row">
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:0;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/talk1.png" alt="创业沙龙">
                  <h4>创业沙龙</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:160px;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/talk2.png" alt="发布活动">
                  <h4>发布活动</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:320px;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/talk3.png" alt="企业交流">
                  <h4>企业交流</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:480px;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/talk4.png" alt="闪投会">
                  <h4>闪投会</h4>
                </div>
              </li>
              <li class="col-lg-2 col-md-2 col-sm-2" style="position:absolute; left:640px;">
                <div class="yxqy_libg"></div>
                <div class="yxqy_li"> <img src="sites/all/themes/proedge/images/home/talk5.png" alt="圆桌会议">
                  <h4>圆桌会议</h4>
                </div>
              </li>
            </ul>
            <div class="jieshao">
              <h5 class="h5 marginTop30">活动交流</h5>
              <p>Enterprise Java Beans（EJB）是一个创建高度可扩展性和强大企业级应用程序的开发架构，部署在兼容应用程序服务器（比如 JBOSS、Web Logic 等）的 J2EE 上。 </p>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
</section>
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
        <!-- Top Three blocks -->
          <?php if ($page['top_first'] || $page['top_second'] || $page['top_third']): ?> 
            <div class="container">
              <div class="row">
                  <?php if ($page['top_first']): ?>
                  <div class="col-lg-4 col-md-4 col-sm-12"><?php print render($page['top_first']); ?></div>
                  <?php endif; ?>
                  <?php if ($page['top_second']): ?>
                  <div class="col-lg-4 col-md-4 col-sm-12"><?php print render($page['top_second']); ?></div>
                  <?php endif; ?>
                  <?php if ($page['top_third']): ?>
                  <div class="col-lg-4 col-md-4 col-sm-12"><?php print render($page['top_third']); ?></div>
                  <?php endif; ?>
              </div>
            </div>
          <?php endif; ?>

          <!-- End Top Three blocks -->

          <!-- Top Two Widgets -->

          <div class="full-wrap two-widgets clearfix">
            <?php print render($page['top_first_widget']) ?>
            <?php print render($page['top_second_widget']) ?>
          </div>
        <!-- End Top Two Widgets -->
      <?php endif; ?> 

      <?php if ($primary_local_tasks): ?>
          <div class="container page-width">
            <div class="row">
              <div class="col-lg-12 col-md-12 col-sm-12">
                <div class="primary-tab-wrap">
                <ul class="tabs primary"><?php print render($primary_local_tasks); ?></ul>
                </div>
              </div>
            </div>
        </div>
      <?php endif; ?>

      <?php if ($page['content_top']): ?>
            <div class="slide-show-wrap"> 
            <?php print render($page['content_top']); ?>                                 
            </div>
       <?php endif; ?>           


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
        <!-- Main Content start//-->
        <!-- Sider left and sider right cannot appear at the same time!!//-->
        <div class="row">
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
