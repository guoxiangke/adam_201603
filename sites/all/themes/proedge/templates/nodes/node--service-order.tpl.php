<?php
/**
 * @file
 * Default theme implementation to display a node.
 */

//购买服务  field_from_service
//服务订单号 title

//field_payment

//分阶段付款 field_multiple_payment
//补充资料  body
//相关资料  field_file
//需要发票  field_need_invoice
//发票邮寄地址  field_invoice_address
//订单编号  field_serial
//订单状态  field_so_status
//订单支付状态  field_so_pay_status

//field_first_rate
//field_second_rate
//field_third_rate
//field_overall_rate
//field_body

//flag_cancel_sales_order
?>


<p class="title"><?php print $title; ?></p>

<?php print render($content['field_from_service']); ?>

<?php print t('Submitted on '); ?><span class="submitted"><?php print format_date($node->created, 'china_date'); ?></span>



<?php if (!empty($content['field_multiple_payment'])): ?>
<div class="well margin-top-20">
<?php
foreach ($node->field_multiple_payment['und'] as $key => $value) {
  // dpm($value['entity']);
  $entity = $value['entity'];
  $entity_type = 'payment_entity';
  $field_pay_amount = field_view_field($entity_type, $entity, 'field_pay_amount');
  $field_pay_remark = field_view_field($entity_type, $entity, 'field_pay_remark');
  $field_pay_status = field_view_field($entity_type, $entity, 'field_pay_status');

print $id = $value['entity']->id;
print drupal_render($field_pay_amount);
print drupal_render($field_pay_remark);
print drupal_render($field_pay_status);
}

?>
</div>
<?php endif; ?>

<div class="well margin-top-20">
<?php print render($content['field_payment']); ?>
</div>



<?php if (!empty($content['body']) || !empty($content['field_file'])): ?>
<div class="well margin-top-20">
<?php print render($content['body']); ?>
<?php print render($content['field_file']); ?>
</div>
<?php endif; ?>


<div class="well margin-top-20">
<?php print render($content['field_need_invoice']); ?>
<?php print render($content['field_invoice_address']); ?>
</div>


<p><?php print render($content['field_so_pay_status']); ?></p>
<p><?php print render($content['field_so_status']); ?></p>



<?php if ($content['field_so_status']['#items']['0']['value']=='0'): ?>
<p><?php print render($content['flag_cancel_sales_order']); ?></p>
<?php endif; ?>


<?php if ($content['field_so_status']['#items']['0']['value']=='1' || $content['field_so_status']['#items']['0']['value']=='2'): ?>
<div class="well margin-top-20">
<?php print render($content['field_overall_rate']); ?>
<?php print render($content['field_first_rate']); ?>
<?php print render($content['field_second_rate']); ?>
<?php print render($content['field_third_rate']); ?>
<?php print render($content['field_body']); ?>
</div>
<?php endif; ?>

     

<?php print render($content['field_test22']); ?>


    <?php
      // Hide comments, tags, and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_single_payment']);
      hide($content['field_multiple_payment']);
      hide($content['flag_cancel_sales_order']);
      print render($content);
    ?>





