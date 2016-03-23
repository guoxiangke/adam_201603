<div id="auth_box" class="login">
  <div id="top_part">
    <h1 id="the_logo">
      <a href="<?php print url('<front>'); ?>">
        <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>">
      </a>
    </h1>
  </div>

  <div id="middle_part">
    <h2 class="title"><?php print $title; ?></h2>

    <?php print $messages; ?>
    
    <?php print render($page['content']); ?>

    <div class="btn btn-danger password_link">
      <?php print l(t('Forgot your password?'), 'user/password'); ?>
    </div>

  </div>

  <div id="bottom_part">

    <?php if (variable_get('user_register')): ?>

    <div class="btn btn-success register_link" style="width: 100%;">
      <?php print l(t('User Register'), 'user/register'); ?>
    </div>
    <?php endif; ?>

    <div class="back_link">
      <a href="<?php print url('<front>'); ?>">&larr; <?php print t('Retuen to Home Page'); ?> <?php print $site_name; ?></a>
    </div>
  </div>
</div>


