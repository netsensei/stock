<?php

/**
 * @file
 * Contains Views specific hook implementations.
 */

/**
 * Implements hook_views_data().
 */
function zuiddag_views_data() {
  $data['node']['example'] = array(
    'title' => t('Example views field handler'),
    'help' => t('An example views field handler associated to the node table'),
    'field' => array(
      'handler' => 'stock_handler_field_example',
    ),
  );

  return $data;
}
