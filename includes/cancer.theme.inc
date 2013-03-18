<?php
/**
 * @file
 *   This file contains custom theming logic
 */

/**
 * Wraps an element in an extra div.
 */
function theme_my_element_wrapper($element) {
  $element = $variables['element'];
  $output = '<div class="element-wrapper">';
  $output .= $element['#children'];
  $output .= '</div>';
  return $output;
}

/**
 * Some generic theming function.
 */
function theme_my_custom_html($variables) {
  $foo = $variables['foo'];
  $output = '<div class="type-foo clearfix">';
  $output .= $foo,
  $ouptut .= '</div>';
  return $output;
}
