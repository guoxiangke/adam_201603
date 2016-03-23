<?php
/**
 * @file
 * Default theme implementation to display a node.
 */

//field_body 
//field_category 
//field_event_type 
//field_single_date 
//field_image_logo 
//field_single_integer
//flag_signup 
?>


<div class="row margin-top-20">
    <div class="col-lg-4 col-md-4 col-sm-12">
      <?php print render($content['field_image_logo']); ?>
    </div>

    <div class="col-lg-8 col-md-8 col-sm-12">
        <p class="title"><?php print $title; ?></p>
        <?php if ($display_submitted): ?>
        <?php print t('Organised by '); ?><span class="submitted"><?php print $name; ?></span>
        <?php endif; ?>
        <?php print render($content['field_single_date']); ?>
        <?php print render($content['field_body']); ?>
        <?php print render($content['field_single_integer']); ?>

        <?php print render($content['flag_signup']); ?>
                 
    </div>
</div>


<div class="clear"></div>

  <div class="content-body">

     <?php print render($content['body']); ?>

     <?php print render($content['field_event_type']); ?>
     
     <div class="label-tag label-orange"><?php print render($content['field_category']); ?></div>
    <?php
      // Hide comments, tags, and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <?php print render($content['comments']); ?>
