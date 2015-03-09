<?php
/**
 * @file
 * permission.edit_any_lista_geral_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any lista_geral content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.lista_geral' => 'content_type.lista_geral',
);

$optional = array();

$modules = array(
  0 => 'node',
);
