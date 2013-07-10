<?php

/**
 * @file
 * Contains the stock_handler_field_example views field handler
 */

/**
 * An example field handler
 *
 * This field handler outputs "An example field" string for each record retrieved
 * by views.
 */
class stock_handler_field_example extends views_handler_field {

  function render($values) {
    return t("An Example field");
  }

  function query() {
    // De nada
  }

}
