<?php
/**
 * @file
 * wfyz_commerce_service.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function wfyz_commerce_service_conditional_fields_default_fields() {
  $items = array();

  $items["node:service_order"] = array(
    array(
      'entity' => 'node',
      'bundle' => 'service_order',
      'dependent' => 'field_body',
      'dependee' => 'field_so_status',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'OR',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          4 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          6 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          5 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          8 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          9 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          7 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
          4 => array(
            1 => 1,
            3 => 0,
          ),
          6 => array(
            1 => 1,
            3 => 0,
          ),
          5 => array(
            1 => 1,
            3 => 0,
          ),
          8 => array(
            1 => 1,
            3 => 0,
          ),
          9 => array(
            1 => 1,
            3 => 0,
          ),
          7 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 1,
        'value' => array(
          0 => array(
            'value' => 1,
          ),
        ),
        'values' => array(),
      ),
    ),
    array(
      'entity' => 'node',
      'bundle' => 'service_order',
      'dependent' => 'field_body',
      'dependee' => 'field_so_status',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'OR',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          4 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          6 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          5 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          8 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          9 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          7 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
          4 => array(
            1 => 1,
            3 => 0,
          ),
          6 => array(
            1 => 1,
            3 => 0,
          ),
          5 => array(
            1 => 1,
            3 => 0,
          ),
          8 => array(
            1 => 1,
            3 => 0,
          ),
          9 => array(
            1 => 1,
            3 => 0,
          ),
          7 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 2,
        'value' => array(
          0 => array(
            'value' => 2,
          ),
        ),
        'values' => array(),
      ),
    ),
    array(
      'entity' => 'node',
      'bundle' => 'service_order',
      'dependent' => 'field_first_rate',
      'dependee' => 'field_so_status',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'OR',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          4 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          6 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          5 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          8 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          9 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          7 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
          4 => array(
            1 => 1,
            3 => 0,
          ),
          6 => array(
            1 => 1,
            3 => 0,
          ),
          5 => array(
            1 => 1,
            3 => 0,
          ),
          8 => array(
            1 => 1,
            3 => 0,
          ),
          9 => array(
            1 => 1,
            3 => 0,
          ),
          7 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 1,
        'value' => array(
          0 => array(
            'value' => 1,
          ),
        ),
        'values' => array(),
      ),
    ),
    array(
      'entity' => 'node',
      'bundle' => 'service_order',
      'dependent' => 'field_first_rate',
      'dependee' => 'field_so_status',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'OR',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          4 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          6 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          5 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          8 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          9 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          7 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
          4 => array(
            1 => 1,
            3 => 0,
          ),
          6 => array(
            1 => 1,
            3 => 0,
          ),
          5 => array(
            1 => 1,
            3 => 0,
          ),
          8 => array(
            1 => 1,
            3 => 0,
          ),
          9 => array(
            1 => 1,
            3 => 0,
          ),
          7 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 2,
        'value' => array(
          0 => array(
            'value' => 2,
          ),
        ),
        'values' => array(),
      ),
    ),
    array(
      'entity' => 'node',
      'bundle' => 'service_order',
      'dependent' => 'field_invoice_address',
      'dependee' => 'field_need_invoice',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          4 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          6 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          5 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          8 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          9 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          7 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
          4 => array(
            1 => 1,
            3 => 0,
          ),
          6 => array(
            1 => 1,
            3 => 0,
          ),
          5 => array(
            1 => 1,
            3 => 0,
          ),
          8 => array(
            1 => 1,
            3 => 0,
          ),
          9 => array(
            1 => 1,
            3 => 0,
          ),
          7 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 1,
        'value' => array(
          0 => array(
            'value' => 1,
          ),
        ),
        'values' => array(),
      ),
    ),
    array(
      'entity' => 'node',
      'bundle' => 'service_order',
      'dependent' => 'field_second_rate',
      'dependee' => 'field_so_status',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'OR',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          4 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          6 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          5 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          8 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          9 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          7 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
          4 => array(
            1 => 1,
            3 => 0,
          ),
          6 => array(
            1 => 1,
            3 => 0,
          ),
          5 => array(
            1 => 1,
            3 => 0,
          ),
          8 => array(
            1 => 1,
            3 => 0,
          ),
          9 => array(
            1 => 1,
            3 => 0,
          ),
          7 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 1,
        'value' => array(
          0 => array(
            'value' => 1,
          ),
        ),
        'values' => array(),
      ),
    ),
    array(
      'entity' => 'node',
      'bundle' => 'service_order',
      'dependent' => 'field_second_rate',
      'dependee' => 'field_so_status',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'OR',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          4 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          6 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          5 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          8 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          9 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          7 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
          4 => array(
            1 => 1,
            3 => 0,
          ),
          6 => array(
            1 => 1,
            3 => 0,
          ),
          5 => array(
            1 => 1,
            3 => 0,
          ),
          8 => array(
            1 => 1,
            3 => 0,
          ),
          9 => array(
            1 => 1,
            3 => 0,
          ),
          7 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 2,
        'value' => array(
          0 => array(
            'value' => 2,
          ),
        ),
        'values' => array(),
      ),
    ),
    array(
      'entity' => 'node',
      'bundle' => 'service_order',
      'dependent' => 'field_third_rate',
      'dependee' => 'field_so_status',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'OR',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          4 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          6 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          5 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          8 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          9 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          7 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
          4 => array(
            1 => 1,
            3 => 0,
          ),
          6 => array(
            1 => 1,
            3 => 0,
          ),
          5 => array(
            1 => 1,
            3 => 0,
          ),
          8 => array(
            1 => 1,
            3 => 0,
          ),
          9 => array(
            1 => 1,
            3 => 0,
          ),
          7 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 1,
        'value' => array(
          0 => array(
            'value' => 1,
          ),
        ),
        'values' => array(),
      ),
    ),
    array(
      'entity' => 'node',
      'bundle' => 'service_order',
      'dependent' => 'field_third_rate',
      'dependee' => 'field_so_status',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'OR',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          4 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          6 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          5 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          8 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          9 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          7 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
          4 => array(
            1 => 1,
            3 => 0,
          ),
          6 => array(
            1 => 1,
            3 => 0,
          ),
          5 => array(
            1 => 1,
            3 => 0,
          ),
          8 => array(
            1 => 1,
            3 => 0,
          ),
          9 => array(
            1 => 1,
            3 => 0,
          ),
          7 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 2,
        'value' => array(
          0 => array(
            'value' => 2,
          ),
        ),
        'values' => array(),
      ),
    ),
  );

  return $items;
}
