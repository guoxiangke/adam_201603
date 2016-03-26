(function($){
  $("a[href*='user/logout']").addClass('SSOLOGOUT');
  console.log($("a[href*='user/logout']").attr('href'));

  $("a[href*='user/logout']").on('click',function(e){
    e.preventDefault();
    alert('clicked! first logout sso then logout drupal!');
    // logout();//SSO logout!
    window.location.href = $("a[href*='user/logout']").attr('href');
    alert('if success! logout drupal!');
  });
})(jQuery)
