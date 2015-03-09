<?php
/**
 * @file
 * permission.edit_own_panopoly_page_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own panopoly_page content',
  'roles' => array(
    0 => 'administrator',
    1 => 'editor',
  ),
);

$dependencies = array(
  'content_type.panopoly_page' => 'content_type.panopoly_page',
);

$optional = array();

$modules = array(
  0 => 'node',
);
