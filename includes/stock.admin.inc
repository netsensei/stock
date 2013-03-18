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

  return system_settings_form($form);
}
