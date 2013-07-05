<?php
/**
 * @file
 *   This file contains callbacks which are fired through Display Suite
 *   fields.
 */

/**
 * Stock: My custom field
 *
 * Display extra information through a custom DS field
 */
function stock_ds_field_my_custom_field($field) {
  // The entire entity is available in $field. Since this field is assigned to
  // the node entity type, we know the 'entity' property of $field is a node
  // entity.
  $node = $field['entity'];

  // Add logic here ie. display the node title
  $output = check_plain($node->title);

  // Return rendered HTML
  return $output;
}
