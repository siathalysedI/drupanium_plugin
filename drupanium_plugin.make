; drush make --no-core -y --contrib-destination=. drupanium_plugin.make

core = 7.x
api = 2

; Regular modules, nothing special here
projects[features][subdir] = "drupanium"
projects[ctools][subdir] = "drupanium"
projects[services][subdir] = "drupanium"
projects[flag][subdir] = "drupanium"
projects[flag_service][subdir] = "drupanium"
projects[views][subdir] = "drupanium"
projects[services_views][subdir] = "drupanium"
projects[strongarm][subdir] = "drupanium"

projects[services_search][type] = module
projects[services_search][subdir] = drupanium
projects[services_search][download][type] = "git"
projects[services_search][download][url] = "http://git.drupal.org/sandbox/zoo33/1261762.git"

; Custom Modules and Features
;projects[drupanium_plugin][type] = module
;projects[drupanium_plugin][subdir] = drupanium
;projects[drupanium_plugin][download][type] = "git"
;projects[drupanium_plugin][download][url] = "git://github.com/drupanium/drupanium_plugin.git"