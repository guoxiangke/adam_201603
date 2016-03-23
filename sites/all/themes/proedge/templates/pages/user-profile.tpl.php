<?php
//field_single_text 昵称
//field_single_text2 联系电话
//field_image_logo 公司Logo
//field_body 公司简介
//name 
//picture
//user_picture
//field_subuser_limit


?>


<div class="row">

    <div class="col-lg-6 col-md-6">
		<?php if (isset($user_profile['user_picture'])): ?>
      		
      		
      		<div class="user-profile" style="display: inline-flex;">
      		
      		<div style="display: inline-block;">
      		<?php print render($user_profile['user_picture']); ?>
      		</div>
      		
      		<div style="display: inline-block; padding-left: 10px;">
      			<div style="font-size: 16px; font-weight: bold;">
      			<?php print render($user_profile['field_single_text']); ?>
      			</div>
      			<div>
      			<?php print $user->mail;?>
      			<?php print render($user_profile['field_single_text2']); ?>
      			</div>
      			<div>
      			<?php print t('Member Since: '); ?><?php print format_date($user->created, 'china_date');?>
      			</div>
      			<div>
      			<a href="/user/<?php print $user->uid;?>/edit" class="btn btn-primary"><?php print t('Edit Info'); ?></a>
      			</div>
      		</div>
      		</div>
      		
    	<?php endif; ?>
    </div>

    
	<div class="col-lg-6 col-md-6">
	<div class="verification-link">
	
	    <!-- if users is not verified individual (rid=8) -->
 		<?php if (isset($user->roles['8'])): ?>
 		<a class="btn btn-danger" style="background: #ccc;"><?php print t('Individual Verified'); ?></a>   
 		<?php else: ?>
 		<a href="/profile-individual/<?php print $user->uid;?>/edit" class="btn btn-primary"><?php print t('Verify Individual'); ?></a>
 		<?php endif; ?>

		<!-- if users is not verified company or company sub-users (rid=6 and 7) -->
 		<?php if (isset($user->roles['6']) || isset($user->roles['7'])): ?>
 		<a class="btn btn-danger" style="background: #ccc;"><?php print t('Company Verified'); ?></a>
 		<?php else: ?>
 		<a href="/profile-company/<?php print $user->uid;?>/edit" class="btn btn-success"><?php print t('Verify Company'); ?></a>
 		<?php endif; ?>
	</div>
	</div>
</div>


    <hr>
  
<h3><?php print t('Company Info'); ?></h3>

<div class="row">

    <div class="col-lg-4 col-md-4 col-sm-12">
    <?php print render($user_profile['field_image_logo']); ?>
    </div>
    <div class="col-lg-8 col-md-8 col-sm-12">
    <?php print render($user_profile['field_body']); ?>
    </div>
</div>


 
