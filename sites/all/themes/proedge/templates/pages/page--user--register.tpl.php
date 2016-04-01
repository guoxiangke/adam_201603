<div class="login_header">
  <div class="container">
    <img src="http://wdev.camplus.cn:8003/sites/all/themes/proedge/images/login/logo_text.png" class="pull-left">
    <div class="back_link floatRight">
      <a href="<?php print url('<front>'); ?>"><img src="http://wdev.camplus.cn:8003/sites/all/themes/proedge/images/login/home.png"><?php print t('返回首页'); ?></a>
    </div>
  </div>
</div>
<div class="bodyBox">
  <div id="logoBg">
      <img src="http://wdev.camplus.cn:8003/sites/all/themes/proedge/images/login/logoBg.png" width="1920" height="739">
  </div>
  <div class="registerBody">
    <div class="container">
      <div id="auth_box" class="register">
        <div id="middle_part">
          <?php print $messages; ?>
          <div class="tabbable">
            <ul>
              <li onclick="clicks()"><a class="act" id="biankuangLeft" href="#individual-reg" data-toggle="tab"><?php print t('Individual Register'); ?></a></li>
              <li onclick="clicks2()"><a id="biankuangRight"  href="#company-reg" data-toggle="tab"><?php print t('Company Register'); ?></a></li>
            </ul>
            <div class="tab-content">
              <div class="tab-pane active" id="individual-reg">
                <p><?php $block = module_invoke('profile2_regpath', 'block_view', 'p2rp_register_7');
              print render($block['content']); ?></p>
              </div>
              <div class="tab-pane" id="company-reg">
                <p><?php $block = module_invoke('profile2_regpath', 'block_view', 'p2rp_register_6');
              print render($block['content']);
              ?></p>
              </div>
            </div>
          </div>
        </div>

        <div id="bottom_part">
          <div class="login_link">
            <?php print l(t('Login'), 'user/login'); ?>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>
<div class="footer">
  <div id="_pageBottom">
        <div id="_pageBottomInfo" class="container">
            <div class="row">
                <div class="col-lg-7 col-md-7 col-sm-7" style="padding-top: 10px;">
                    <row>
                        <div class="col-lg-12 col-md-12 col-sm-12">
                            <ul class="kcylink">
                                <li><a href="javascript:">关于我们</a></li>
                                <li><a href="javascript:">用户协议</a></li>
                                <li><a href="javascript:">常见问题</a></li>
                                <li><a href="javascript:">联系我们</a></li>
                                <li><a href="javascript:">免责声明</a></li>
                            </ul>
                        </div>
                    </row>
                    <row>
                        <div class="col-lg-12 col-md-12 col-sm-12 logo">
                            <div style="float: left; padding-top: 10px;"><img width="77" height="49" src="http://wdev.camplus.cn:8003/sites/all/themes/proedge/images/login/logo_white.png"></div>
                            <div style="float: left;">
                                <p>Copyright @2013-2016 Qcloud.com.&nbsp;科服驿站&nbsp;版权所有</p>
                                <p>绵阳科技城科技服务有限责任公司&nbsp;版权所有&nbsp;&nbsp;ICP备案许可证:川ICP备&nbsp;11018762号</p>
                                <p>技术支持:绵阳大数据公司&nbsp;&nbsp;&nbsp;&nbsp;绵阳傲锋科技&nbsp;&nbsp;&nbsp;&nbsp;攻城狮</p>
                            </div>
                        </div>
                    </row>
                </div>
                <div class="col-lg-3 col-md-3 col-sm-3 contactus">
                    <div class="usme">联系我们(9:00-22:00)</div>
                    <p>平台热线：0816-2266040</p>
                    <p>商务合作：0816-2266040</p>
                    <p>客服邮箱：kefu@wfyizhan.com</p>
                </div>
                <div class="col-lg-2 col-md-2 col-sm-2">
                    <div><img src="http://wdev.camplus.cn:8003/sites/all/themes/proedge/images/login/microcode.png"></div>
                    <div style="font-size: 16px; padding-top: 5px;">微信扫我得服务券</div>
                </div>
            </div>
        </div>
    </div>
</div>
<script>
  function clicks(){
    document.getElementById('biankuangLeft').style.backgroundColor = '#fff';
    document.getElementById('biankuangLeft').style.borderBottom = 'none';
    document.getElementById('biankuangRight').style.backgroundColor= '#f2f2f2';
  };
  function clicks2(){
    document.getElementById('biankuangLeft').style.backgroundColor= '#f2f2f2';
    document.getElementById('biankuangRight').style.backgroundColor= '#fff';
    document.getElementById('biankuangRight').style.borderBottom = 'none';
  };
</script>