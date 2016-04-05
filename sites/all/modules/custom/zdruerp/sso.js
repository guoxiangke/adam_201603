(function($){
  $("a[href*='user/logout']").addClass('SSOLOGOUT');
  $("a[href*='user/logout']").on('click',function(e){
    e.preventDefault();
    console.log('clicked logout ,need call SSO logout!');
    logout();//SSO logout!
    console.log('SSO logout called then drupal logout!');
    window.location.href = $("a[href*='user/logout']").attr('href');
    console.log('drupal logout!');
  });
})(jQuery)
