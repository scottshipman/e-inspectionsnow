<?php
/**
 * @file
 * ein_global.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ein_global_default_rules_configuration() {
  $items = array();
  $items['rules_remove_expired_reports'] = entity_import('rules_config', '{ "rules_remove_expired_reports" : {
      "LABEL" : "Remove Expired Reports",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "node_expire" ],
      "ON" : { "node_expired" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "inspection_report" : "inspection_report" } }
          }
        }
      ],
      "DO" : [ { "entity_delete" : { "data" : [ "node" ] } } ]
    }
  }');
  $items['rules_send_new_report_email'] = entity_import('rules_config', '{ "rules_send_new_report_email" : {
      "LABEL" : "Send New Report Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--inspection_report" : { "bundle" : "inspection_report" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "inspection_report" : "inspection_report" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[node:field-client:mail]",
            "subject" : "A New Inspection Report is available for Download at [site:name]",
            "message" : "[node:field-client:field-full-name]\\r\\n\\r\\nAn Inspection report is available for download at [site:name] by clicking this link:[site:login-url] . Instructions for logging in have been sent to this email address as a separate email.\\r\\n\\r\\nIf you have any trouble viewing this report or did not receive the instructions to log in, please contact us online at [site:url]\\/contact-us, or call 727-789-6700 for immediate assistance.\\r\\n\\r\\nSincerely,\\r\\nThe e-InspectionsNow Team",
            "from" : "[site:mail]",
            "language" : [ "" ]
          }
        },
        { "entity_query" : {
            "USING" : {
              "type" : "user",
              "property" : "name",
              "value" : [ "node:field-client:field-full-name" ]
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        }
      ]
    }
  }');
  return $items;
}
