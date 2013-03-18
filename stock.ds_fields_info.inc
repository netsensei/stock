<?php
/**
 * @file
 *   This file contains the register of all custom Display Suite field callbacks.
 *   These are registered via hook_ds_fields_info(). Display Suite will auto-
 *   matically include the file and execute the hook.
 */

/**
 * Implements hook_ds_fields_info().
 */
function stock_ds_fields_info() {
  $items = array();

  $file = drupal_get_path('module', 'stock') . '/includes/stock.ds.inc';

  $items['node']['my_custom_field'] = array(
    'title' => t('Stock: my custom field'),
    'field_type' => DS_FIELD_TYPE_FUNCTION,
    'function' => 'stock_ds_field_my_custom_field',
    'file' => $file,
  );

  if(!isset($items[$entity_type])) {
    return;
  }

  return array($entity_type => $items[$entity_type]);
}
