<?php

/**
 * @file
 *   This file contains custom drush logic
 */

/**
 * Implements hook_drush_command().]
 */
function stock_drush_command() {
  $items = array();

  $items['stock-example'] = array(
    'description' => 'A custom stock example drush command'),
  );

  return $items;
}

/**
 * Drush callback: stock-example
 *
 * This is a stub callback for an example drush command. Not the convention of
 * the function name: drush_<key-defined-in-hook_drush_comamnd>. Scores should
 * be converted to underscores. i.e stock-example becomes drush_stock_example.
 *
 * @return [type] [description]
 */
function drush_stock_example() {
  // Add drush logic
}
