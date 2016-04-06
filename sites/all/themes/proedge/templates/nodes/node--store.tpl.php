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

<div class="row margin-top-20">
          <div class="col-lg-6 col-md-6 col-sm-12">
            <!-- 总评分 -->    
            <div class="field-label">总体评分:</div>
            <div class="fivestar-static-item">
                <div class="form-item form-type-item">
                    <div class="fivestar-oxygen">
                      <div class="fivestar-widget-static fivestar-widget-static-vote fivestar-widget-static-5 clearfix">
                        <?php $rate=get_five_star_results($node->nid,$node->type,'overall_rate');
                          $i=1; while ($i <= 5) { ?>
                           <div class="star star-<?php echo $i;?>"><span class="<? echo ($i<=$rate['average'])?'on':'off' ?>"></span></div>
                        <?
                            $i++;
                          }
                        ?>
                      </div>
                    </div>

                    <div class="description">
                      <div class="fivestar-summary fivestar-summary-average-count">
                      <?php echo $rate['count']?('Average: <span>'.$rate['average'].'</span></span> <span class="total-votes">(<span>'.$rate['count'].'</span> votes)'):'<span class="empty">'.t('No votes yet').'</span>';?></div>
                    </div>

                </div>
            </div>
            <!-- end 总评分 -->
          </div>

          <div class="col-lg-6 col-md-6 col-sm-12">
            <!-- 服务态度 -->
            <div class="field-label">服务态度:</div>
            <div class="fivestar-static-item">
                <div class="form-item form-type-item">
                    <div class="fivestar-oxygen">
                        <div class="fivestar-widget-static fivestar-widget-static-vote fivestar-widget-static-5 clearfix">
                          <?php
                            $rate=get_five_star_results($node->nid,$node->type,'first_rate');
                            $i=1; while ($i <= 5) {
                          ?>
                           <div class="star star-<?php echo $i;?>"><span class="<? echo ($i<=$rate['average'])?'on':'off' ?>"></span>
                           </div>
                          <?
                              $i++;
                            }
                          ?>
                        </div>
                    </div>

                    <div class="description">
                      <div class="fivestar-summary fivestar-summary-average-count">
                      <?php echo $rate['count']?('Average: <span>'.$rate['average'].'</span></span> <span class="total-votes">(<span>'.$rate['count'].'</span> votes)'):'<span class="empty">'.t('No votes yet').'</span>';?></div>
                    </div>

                </div>
            </div>
            <!-- end 服务态度 -->
            <!-- 工作速度 -->                       
            <div class="field-label">工作速度:</div>
            <div class="fivestar-static-item">
                <div class="form-item form-type-item">
                    <div class="fivestar-oxygen">
                        <div class="fivestar-widget-static fivestar-widget-static-vote fivestar-widget-static-5 clearfix">
                        <?php
                          $rate=get_five_star_results($node->nid,$node->type,'second_rate');
                          $i=1; while ($i <= 5) {
                        ?>
                           <div class="star star-<?php echo $i;?>"><span class="<? echo ($i<=$rate['average'])?'on':'off' ?>"></span>
                           </div>
                        <?
                            $i++;
                          }
                        ?>
                        </div>
                    </div>

                    <div class="description">
                      <div class="fivestar-summary fivestar-summary-average-count">
                      <?php echo $rate['count']?('Average: <span>'.$rate['average'].'</span></span> <span class="total-votes">(<span>'.$rate['count'].'</span> votes)'):'<span class="empty">'.t('No votes yet').'</span>';?></div>
                    </div>

                </div>
            </div>
            <!-- end 服务态度 -->
            <!-- 完成质量 -->                       
            <div class="field-label">完成质量:</div>
            <div class="fivestar-static-item">
                <div class="form-item form-type-item">
                    <div class="fivestar-oxygen">
                        <div class="fivestar-widget-static fivestar-widget-static-vote fivestar-widget-static-5 clearfix">
                        <?php
                          $rate=get_five_star_results($node->nid,$node->type,'third_rate');
                          $i=1; while ($i <= 5) {
                        ?>
                           <div class="star star-<?php echo $i;?>"><span class="<? echo ($i<=$rate['average'])?'on':'off' ?>"></span>
                           </div>
                        <?
                            $i++;
                          }
                        ?>
                        </div>
                    </div>

                    <div class="description">
                      <div class="fivestar-summary fivestar-summary-average-count">
                      <?php echo $rate['count']?('Average: <span>'.$rate['average'].'</span></span> <span class="total-votes">(<span>'.$rate['count'].'</span> votes)'):'<span class="empty">'.t('No votes yet').'</span>';?></div>
                    </div>

                </div>
            </div>
            <!-- end 服务态度 -->
          </div>
    </div>


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
      hide($content['field_store_user']);
      print render($content);
    ?>




