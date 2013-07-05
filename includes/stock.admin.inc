<?php
/**
 * @file
 *   This file contains page callbacks to administration pages.
 */

/**
 * Form builder
 *
 * Build the 'General Stock Settings' form.
 */
function stock_general_settings_form() {
  $form = array();

  $form['stock_example'] = array(
   '#type' => 'textfield',
   '#title' => t('Example setting'),
   '#default_value' => variable_get('stock_example', ''),
  );

  return system_settings_form($form);
}
