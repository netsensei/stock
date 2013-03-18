<?php
/**
 * @file
 *   This file contains page callbacks which do not refer to administration
 *   pages (admin/*)
 */

/**
 * Build the 'stock/page' page.
 */
function stock_example_page() {
  return 'test';
}

/**
 * Form builder for my_custom_form.
 */
function stock_my_custom_form($form_state) {
  $form = array();

  $form['name'] = array(
    '#title' => t('First name'),
    '#type' => 'textfield',
    '#default_value' => '',
  );

  $form['submit'] = array(
    '#value' => t('Send'),
    '#type' => 'submit',
  );

  return $form;
}
