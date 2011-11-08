<?php
/**
 * @file
 * drupanium.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function drupanium_plugin_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass;
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'rest_api';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'api/rest';
  $endpoint->authentication = array(
    'services' => 'services',
  );
  $endpoint->server_settings = array(
    'rest_server' => array(
      'formatters' => array(
        'bencode' => TRUE,
        'json' => TRUE,
        'php' => TRUE,
        'rss' => TRUE,
        'xml' => TRUE,
        'yaml' => TRUE,
        'jsonp' => FALSE,
      ),
      'parsers' => array(
        'application/json' => TRUE,
        'application/vnd.php.serialized' => TRUE,
        'application/x-www-form-urlencoded' => TRUE,
        'application/x-yaml' => TRUE,
        'multipart/form-data' => TRUE,
      ),
    ),
  );
  $endpoint->resources = array(
    'flag' => array(
      'actions' => array(
        'is_flagged' => array(
          'enabled' => 1,
        ),
        'flag' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'comment' => array(
      'operations' => array(
        'create' => array(
          'enabled' => 1,
        ),
        'retrieve' => array(
          'enabled' => 1,
        ),
        'update' => array(
          'enabled' => 1,
        ),
        'delete' => array(
          'enabled' => 1,
        ),
        'index' => array(
          'enabled' => 1,
        ),
      ),
      'actions' => array(
        'countAll' => array(
          'enabled' => 1,
        ),
        'countNew' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'file' => array(
      'operations' => array(
        'create' => array(
          'enabled' => 1,
        ),
        'retrieve' => array(
          'enabled' => 1,
        ),
        'delete' => array(
          'enabled' => 1,
        ),
        'index' => array(
          'enabled' => 1,
        ),
      ),
      'actions' => array(
        'create_raw' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'node' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => 1,
        ),
        'create' => array(
          'enabled' => 1,
        ),
        'update' => array(
          'enabled' => 1,
        ),
        'delete' => array(
          'enabled' => 1,
        ),
        'index' => array(
          'enabled' => 1,
        ),
      ),
      'relationships' => array(
        'files' => array(
          'enabled' => 1,
        ),
        'comments' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'system' => array(
      'actions' => array(
        'connect' => array(
          'enabled' => 1,
        ),
        'get_variable' => array(
          'enabled' => 1,
        ),
        'set_variable' => array(
          'enabled' => 1,
        ),
        'del_variable' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'taxonomy_term' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => 1,
        ),
        'create' => array(
          'enabled' => 1,
        ),
        'update' => array(
          'enabled' => 1,
        ),
        'delete' => array(
          'enabled' => 1,
        ),
        'index' => array(
          'enabled' => 1,
        ),
      ),
      'actions' => array(
        'selectNodes' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'taxonomy_vocabulary' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => 1,
        ),
        'create' => array(
          'enabled' => 1,
        ),
        'update' => array(
          'enabled' => 1,
        ),
        'delete' => array(
          'enabled' => 1,
        ),
        'index' => array(
          'enabled' => 1,
        ),
      ),
      'actions' => array(
        'getTree' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'user' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => 1,
        ),
        'create' => array(
          'enabled' => 1,
        ),
        'update' => array(
          'enabled' => 1,
        ),
        'delete' => array(
          'enabled' => 1,
        ),
        'index' => array(
          'enabled' => 1,
        ),
      ),
      'actions' => array(
        'login' => array(
          'enabled' => 1,
        ),
        'logout' => array(
          'enabled' => 1,
        ),
        'register' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'search_node' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'search_user' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => 1,
        ),
      ),
    ),
    'views' => array(
      'operations' => array(
        'retrieve' => array(
          'enabled' => 1,
        ),
      ),
    ),
  );
  $endpoint->debug = 1;
  $export['rest_api'] = $endpoint;

  return $export;
}
