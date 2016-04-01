<?php
/**
 * @file
 * Default theme implementation to display a node.
 */

//body
//field_image
//field_price_range
//field_sales_volume
//field_service_type
//og_group_ref
//field_location
//field_service_guarantee
//service_market_eva_comment

//field_first_rate
//field_second_rate
//field_third_rate
//field_overall_rate
?>


<?php print render($content['og_group_ref']); ?>


<div class="row margin-top-20">
    <div class="col-lg-6 col-md-6 col-sm-12">
      <?php print render($content['field_image']); ?>
    </div>

    <div class="col-lg-6 col-md-6 col-sm-12">
        <p class="title"><?php print $title; ?></p>
        <div class="label-tag label-orange"><?php print render($content['field_service_guarantee']); ?></div>
		<?php print render($content['field_service_type']); ?>

        <?php print render($content['field_price_range']); ?>
        <?php print render($content['field_location']); ?>
        
		<div style="margin-top: 15px;">
    		<a href="/node/add/service-order?field_from_service=<?php print $node->nid; ?>" class="btn btn-danger">
    	<?php print t('下单') ?></a>

		<?php print render($content['field_sales_volume']); ?>

		<div class="row margin-top-20">
    		<div class="col-lg-6 col-md-6 col-sm-12">
				<?php print render($content['field_overall_rate']); ?>
			</div>
			<div class="col-lg-6 col-md-6 col-sm-12">
				<?php print render($content['field_first_rate']); ?>
				<?php print render($content['field_second_rate']); ?>
				<?php print render($content['field_third_rate']); ?>
			</div>
		</div>

    </div>

    </div>
</div>


<div class="clear"></div>     

    

<div class="tabbable">
  <ul class="nav nav-tabs">
    <li class="active"><a href="#detail" data-toggle="tab"><?php print t('服务详情') ?></a></li>
    <li><a href="#eva_comment" data-toggle="tab"><?php print t('累计评论') ?></a></li>
    <li><a href="#guarantee" data-toggle="tab"><?php print t('交易保障') ?></a></li>

  </ul>
  <div class="tab-content">
    <div class="tab-pane active" id="detail">
      <p><?php print render($content['body']); ?></p>
    </div>
    <div class="tab-pane" id="eva_comment">
      <p><?php print render($content['service_market_eva_comment']); ?></p>
    </div>
    <div class="tab-pane" id="guarantee">
      <p>服务保障内容</p>
    </div>
  </div>
</div>


<?php
      // Hide comments, tags, and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>




