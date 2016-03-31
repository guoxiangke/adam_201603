<?php
/**
 * @file
 * Default theme implementation to display a node.
 */

//店铺名称  title
//店铺Logo  field_image_logo
//店铺横额  field_single_image
//店铺  body
//店铺管理用户  field_store_user
//服务范围  field_service_type
//service_market_eva_store


?>


<div class="label-tag label-orange"><?php print render($content['field_service_type']); ?></div>


<p>
<p>


<div class="navbar navbar-default">
  <div class="store-navbar-header">
    <?php print render($content['field_image_logo']); ?>
  </div>
   <ul class="nav navbar-nav">
    <li class="active"><a href="#store_service" data-toggle="tab"><?php print t('服务购买') ?></a></li>
    <li><a href="#store_about" data-toggle="tab"><?php print t('关于我们') ?></a></li>
    <li><a href="#store_showcase" data-toggle="tab"><?php print t('项目案例') ?></a></li>

  </ul>
  </div>



  <div class="tab-content">
    <div class="tab-pane active" id="store_service">
      <p><?php print render($content['service_market_eva_store']); ?></p>
    </div>
    <div class="tab-pane" id="store_about">
      <p><?php print render($content['body']); ?></p>
    </div>
    <div class="tab-pane" id="store_showcase">
      <p>项目案例。。。建设中</p>
    </div>
  </div>



<?php
      // Hide comments, tags, and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_single_image']);
      print render($content);
    ?>




