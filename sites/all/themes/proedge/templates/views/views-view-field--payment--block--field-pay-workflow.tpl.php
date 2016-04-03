<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
dpm($row);
$base_path = url(NULL, array('absolute' => TRUE)) . (variable_get('clean_url', 0) ? '' : '?q=');
if($row->_field_data['item_id']['entity']->field_pay_workflow['und'][0]['value'] ==12){
  echo '<a class= "btn btn-danger" target="_blank" href="'.$base_path.'order/'.$row->_field_data['item_id']['entity']->item_id.'/alipay">支付宝</a>';
  return;
}
?>
<?php print $output; ?>
