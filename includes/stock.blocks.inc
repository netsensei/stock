<?php
/**
 * @file
 *
 */

/**
 * Block callback
 *
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
