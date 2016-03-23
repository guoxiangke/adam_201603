<div id="auth_box" class="register" style="width: 450px; margin: 0 auto; padding: 50px 0 0; font-family: sans-serif;">
  <div id="top_part">
    <h1 id="the_logo" style="text-align: center; margin: 0; padding: 0 0 25px;">
      <a href="<?php print url('<front>'); ?>">
        <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>" style="max-width: 150px;">
      </a>
    </h1>
  </div>

  <div id="middle_part" style="border-radius: 3px; background: #fff; overflow: hidden; box-shadow: 0 0 3px 1px #ccc;">
   

    <?php print $messages; ?>
    
  
  
  
  
<div class="tabbable">
  <ul class="nav nav-tabs">
    <li class="active"><a href="#individual-reg" data-toggle="tab"><?php print t('Individual Register'); ?></a></li>
    <li><a href="#company-reg" data-toggle="tab"><?php print t('Company Register'); ?></a></li>
  </ul>
  <div class="tab-content">
    <div class="tab-pane active" id="individual-reg">
      <p><?php $block = module_invoke('profile2_regpath', 'block_view', 'p2rp_register_3');
    print render($block['content']);
    ?></p>
    </div>
    <div class="tab-pane" id="company-reg">
      <p><?php $block = module_invoke('profile2_regpath', 'block_view', 'p2rp_register_2');
    print render($block['content']);
    ?></p>
    </div>
  </div>
</div>
  
  
  
  
    
	

    
    
    
    
  </div>

  <div id="bottom_part" style="margin: 20px 0 150px;">
    
    
    <div class="btn btn-danger password_link">
      <?php print l(t('Forgot your password?'), 'user/password'); ?>
    </div>
    
    <div class="btn btn-primary login_link">
      <?php print l(t('Login'), 'user/login'); ?>
    </div>

    <div class="back_link">
      <a href="<?php print url('<front>'); ?>">&larr; <?php print t('Back'); ?> <?php print $site_name; ?></a>
    </div>
  </div>
</div>
