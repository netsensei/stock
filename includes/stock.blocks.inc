<?php
/**
 * @file
 *   This file contains block callbacks which contain custom block logic.
 */

/**
 * Build the stock-my-block block.
 */
function stock_my_block() {
  $build = array(
    '#markup' => t('Some generic content block.');
  );

  $block = array(
    'subject' => NULL,
    'content' => drupal_render($build),
  );

  return $block;
}
