<?php
/**
 * @file
 * our_seasons_block.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function our_seasons_block_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Make every moment count! Variety shows keep audiences on the edge of their seats with daring dance stunts, magical mayhem and comical choruses.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Make every moment count! Variety shows keep audiences on the edge of their seats with daring dance stunts, magical mayhem and comical choruses.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'ds_switch\' => \'\',
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'257\',
            \'uid\' => \'1\',
            \'filename\' => \'VARIETY-GENRE\',
            \'uri\' => \'public://ctp-season7.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'672101\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942746\',
            \'type\' => \'image\',
            \'uuid\' => \'843e7dbb-f864-425c-9f3c-ead82b1b84aa\',
            \'field_file_image_alt_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'Variety 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'Variety 2017-18\',
                ),
              ),
            ),
            \'field_file_image_title_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'Centrepointe Theatres Presents...Variety 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'Centrepointe Theatres Presents...Variety 2017-18\',
                ),
              ),
            ),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'257\',
                    \'revision_id\' => \'257\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942746\',
                    \'changed\' => \'1503942746\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
              \'und\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'alt\' => \'Variety 2017-18\',
            \'title\' => \'Centrepointe Theatres Presents...Variety 2017-18\',
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'what-s-on?genre[]=20\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'294\',
            \'uid\' => \'1\',
            \'filename\' => \'286x196-variety-thumb.jpg\',
            \'uri\' => \'public://ctp-season7_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'672101\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942776\',
            \'type\' => \'image\',
            \'uuid\' => \'b9ec8ee7-f27d-4950-8d54-b5bf85f8a0fc\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'294\',
                    \'revision_id\' => \'294\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942776\',
                    \'changed\' => \'1503942776\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
            \'alt\' => NULL,
            \'title\' => NULL,
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'tadmin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'238\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Variety\',
      \'tnid\' => \'384\',
      \'translate\' => \'0\',
      \'translations\' => (object) array(
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'type\' => \'our_seasons_block\',
      \'uid\' => \'238\',
      \'uuid\' => \'742a8ae0-86af-435c-b142-b67fe7dffe39\',
      \'vid\' => NULL,
      \'vuuid\' => \'1be65c0e-e1b6-4174-8b8e-75523934d7ce\',
      \'workbench_access\' => array(),
    ),
  (object) array(
      \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Create treasured lifelong memories of afternoons together full of song and dance, and spend some quality time with the little ones in your life. Beloved bedtime books leave the page for the stage! Create a tradition of time together that will last a lifetime.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Create treasured lifelong memories of afternoons together full of song and dance, and spend some quality time with the little ones in your life. Beloved bedtime books leave the page for the stage! Create a tradition of time together that will last a lifetime.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'ds_switch\' => \'\',
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'256\',
            \'uid\' => \'1\',
            \'filename\' => \'c-2.0_family_new.jpg\',
            \'uri\' => \'public://ctp-season8.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'625347\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942857\',
            \'type\' => \'image\',
            \'uuid\' => \'c61d7637-e406-4a70-9fb9-276b5bd45d9d\',
            \'field_file_image_alt_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'FAMILY 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'FAMILY 2017-18\',
                ),
              ),
            ),
            \'field_file_image_title_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'Centrepointe Theatres Presents FAMILY 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'Centrepointe Theatres Presents FAMILY 2017-18\',
                ),
              ),
            ),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'256\',
                    \'revision_id\' => \'256\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942857\',
                    \'changed\' => \'1503942857\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
              \'und\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'alt\' => \'FAMILY 2017-18\',
            \'title\' => \'Centrepointe Theatres Presents FAMILY 2017-18\',
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'what-s-on?genre[]=23\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'293\',
            \'uid\' => \'1\',
            \'filename\' => \'286x196-family-thumb.jpg\',
            \'uri\' => \'public://ctp-season8_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'625347\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942882\',
            \'type\' => \'image\',
            \'uuid\' => \'ee5f7d8c-ff61-4bd8-ae63-e4d057c14d5f\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'293\',
                    \'revision_id\' => \'293\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942882\',
                    \'changed\' => \'1503942882\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
              \'und\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
            \'alt\' => NULL,
            \'title\' => NULL,
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'tadmin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'238\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Family\',
      \'tnid\' => \'383\',
      \'translate\' => \'0\',
      \'translations\' => (object) array(
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'type\' => \'our_seasons_block\',
      \'uid\' => \'238\',
      \'uuid\' => \'7f84b07c-fc70-4ca7-8a56-66cc8be7350e\',
      \'vid\' => NULL,
      \'vuuid\' => \'acb85cb4-7ece-413d-ba71-2477aa8ac9fe\',
      \'workbench_access\' => array(),
    ),
  (object) array(
      \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Remember the rush of your very first concert? Or perhaps the excitement of watching your favourite local band at the coffee house? Music is the thread that unites experiences; bring back your favourite memories and connect with those that matter most. Grab a friend or treat your sweetheart to an evening where you can both enjoy the moment.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Remember the rush of your very first concert? Or perhaps the excitement of watching your favourite local band at the coffee house? Music is the thread that unites experiences; bring back your favourite memories and connect with those that matter most. Grab a friend or treat your sweetheart to an evening where you can both enjoy the moment.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'ds_switch\' => \'\',
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'255\',
            \'uid\' => \'1\',
            \'filename\' => \'MUSIC-GENRE\',
            \'uri\' => \'public://ctp-season9.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'264462\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942940\',
            \'type\' => \'image\',
            \'uuid\' => \'0c4a643c-782d-456c-9587-e5d7bb22e820\',
            \'field_file_image_alt_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'MUSIC 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'MUSIC 2017-18\',
                ),
              ),
            ),
            \'field_file_image_title_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'Centrepointe Theatres Presents MUSIC 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'Centrepointe Theatres Presents MUSIC 2017-18\',
                ),
              ),
            ),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'255\',
                    \'revision_id\' => \'255\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942940\',
                    \'changed\' => \'1503942940\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
              \'und\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'alt\' => \'MUSIC 2017-18\',
            \'title\' => \'Centrepointe Theatres Presents MUSIC 2017-18\',
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'what-s-on?genre[]=21&date=4\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'292\',
            \'uid\' => \'1\',
            \'filename\' => \'286x196-music-thumb.jpg\',
            \'uri\' => \'public://ctp-season9_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'264462\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942960\',
            \'type\' => \'image\',
            \'uuid\' => \'3a35c951-c1e3-4102-b7af-0a33589c9b63\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'292\',
                    \'revision_id\' => \'292\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942960\',
                    \'changed\' => \'1503942960\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
              \'und\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
            \'alt\' => NULL,
            \'title\' => NULL,
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'tadmin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'238\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Music\',
      \'tnid\' => \'382\',
      \'translate\' => \'0\',
      \'translations\' => (object) array(
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'type\' => \'our_seasons_block\',
      \'uid\' => \'238\',
      \'uuid\' => \'a644c3b4-59c3-4edf-9b83-e7fc991bde00\',
      \'vid\' => NULL,
      \'vuuid\' => \'a91d4c56-d1b1-4963-bf55-d9fe5e60ce18\',
      \'workbench_access\' => array(),
    ),
  (object) array(
      \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
      \'body\' => array(),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'ds_switch\' => \'\',
      \'field_display_title\' => array(),
      \'field_layout\' => array(),
      \'field_main_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'319\',
            \'uid\' => \'255\',
            \'filename\' => \'CTP1718.jpg\',
            \'uri\' => \'public://ctp-season3.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'282863\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503941810\',
            \'type\' => \'image\',
            \'uuid\' => \'09412bc8-c361-4200-a69b-9fd56df1d67e\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'319\',
                    \'revision_id\' => \'319\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503941810\',
                    \'changed\' => \'1503941810\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
              \'und\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'metadata\' => array(
              \'height\' => 504,
              \'width\' => 1231,
            ),
            \'height\' => \'504\',
            \'width\' => \'1231\',
            \'alt\' => NULL,
            \'title\' => NULL,
          ),
        ),
      ),
      \'field_page_sub_text\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>In this day and age, entertainment comes on demand through our televisions, tablets and telephones, yet many of us feel like something’s missing – something real. Take a break from binge-watching your silver screen favourites and bring back the good ol’ days by grabbing a friend, inviting a grandparent or treating a sweetheart to a live show. Look for a laugh that isn’t online with our hilarious comedy series, or watch music come to life in front of your eyes and make sure to share a special afternoon with the little ones in your life when beloved bedtime books leave the page for the stage. The 2016-2017 lineup is full of comedy, variety, music and family shows that remind us why going out trumps staying in, every time.</p>\\r\\n",
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>In this day and age, entertainment comes on demand through our televisions, tablets and telephones, yet many of us feel like something’s missing – something real. Take a break from binge-watching your silver screen favourites and bring back the good ol’ days by grabbing a friend, inviting a grandparent or treating a sweetheart to a live show. Look for a laugh that isn’t online with our hilarious comedy series, or watch music come to life in front of your eyes and make sure to share a special afternoon with the little ones in your life when beloved bedtime books leave the page for the stage. The 2016-2017 lineup is full of comedy, variety, music and family shows that remind us why going out trumps staying in, every time.</p>\\n",
          ),
        ),
      ),
      \'field_you_may_be_also_interested\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'32\',
          ),
          array(
            \'target_id\' => \'33\',
          ),
          array(
            \'target_id\' => \'53\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(
        1077 => (object) array(
            \'menu_name\' => \'main-menu\',
            \'mlid\' => \'1077\',
            \'plid\' => \'0\',
            \'link_path\' => \'node/31\',
            \'router_path\' => \'node/%\',
            \'link_title\' => \'Our Season\',
            \'options\' => \'a:3:{s:9:"node_type";s:4:"page";s:5:"alter";b:1;s:10:"identifier";s:28:"main-menu_our-season:node/31";}\',
            \'module\' => \'menu\',
            \'hidden\' => \'0\',
            \'external\' => \'0\',
            \'has_children\' => \'0\',
            \'expanded\' => \'0\',
            \'weight\' => \'-46\',
            \'depth\' => \'1\',
            \'customized\' => \'1\',
            \'p1\' => \'1077\',
            \'p2\' => \'0\',
            \'p3\' => \'0\',
            \'p4\' => \'0\',
            \'p5\' => \'0\',
            \'p6\' => \'0\',
            \'p7\' => \'0\',
            \'p8\' => \'0\',
            \'p9\' => \'0\',
            \'updated\' => \'0\',
            \'language\' => \'en\',
            \'i18n_tsid\' => \'1\',
          ),
      ),
      \'name\' => \'tadmin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'238\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Our Season\',
      \'tnid\' => \'31\',
      \'translate\' => \'0\',
      \'translations\' => (object) array(
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'type\' => \'page\',
      \'uid\' => \'238\',
      \'uuid\' => \'ac9c9011-5df9-4d02-a7f5-dde7925f2861\',
      \'vid\' => NULL,
      \'vuuid\' => \'03b4f5b3-0143-4983-b0a7-781a397ff786\',
      \'workbench_access\' => array(),
    ),
  (object) array(
      \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>You can’t beat the hum of the crowd at a comedy show. The energy that comes from shared laughter is irreplaceable, so step away from the hour-long taped special, and gather your group for a laugh that isn’t online. Our hilarious comedy series makes for lively nights out whether you’re on a date, with old friends, or treating a parent to an evening of fun.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>You can’t beat the hum of the crowd at a comedy show. The energy that comes from shared laughter is irreplaceable, so step away from the hour-long taped special, and gather your group for a laugh that isn’t online. Our hilarious comedy series makes for lively nights out whether you’re on a date, with old friends, or treating a parent to an evening of fun.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'ds_switch\' => \'\',
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'475\',
            \'uid\' => \'255\',
            \'filename\' => \'Comedy-Genre.jpg\',
            \'uri\' => \'public://ctp-season6_1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'351255\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942670\',
            \'type\' => \'image\',
            \'uuid\' => \'773c51e7-110f-4a38-aba7-e6f4129e4a2d\',
            \'field_file_image_alt_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'Comedy 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'Comedy 2017-18\',
                ),
              ),
            ),
            \'field_file_image_title_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'CTP Comedy 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'CTP Comedy 2017-18\',
                ),
              ),
            ),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'475\',
                    \'revision_id\' => \'475\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942630\',
                    \'changed\' => \'1503942630\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'alt\' => \'Comedy 2017-18\',
            \'title\' => \'CTP Comedy 2017-18\',
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'what-s-on?genre[]=22\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'290\',
            \'uid\' => \'1\',
            \'filename\' => \'286x196-comedy-thumb.jpg\',
            \'uri\' => \'public://ctp-season6_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'351255\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942545\',
            \'type\' => \'image\',
            \'uuid\' => \'818ebbc8-58bb-4628-a3b7-907cea065bd8\',
            \'field_file_image_alt_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'Comédie\',
                  \'format\' => NULL,
                  \'safe_value\' => \'Comédie\',
                ),
              ),
            ),
            \'field_file_image_title_text\' => array(),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'290\',
                    \'revision_id\' => \'290\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942545\',
                    \'changed\' => \'1503942545\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
              \'und\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'alt\' => \'Comédie\',
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
            \'title\' => NULL,
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'tadmin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'238\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Comedy\',
      \'tnid\' => \'381\',
      \'translate\' => \'0\',
      \'translations\' => (object) array(
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'type\' => \'our_seasons_block\',
      \'uid\' => \'238\',
      \'uuid\' => \'f1244392-ba59-4b3d-87be-ff3d1f04c09b\',
      \'vid\' => NULL,
      \'vuuid\' => \'4134624c-2825-4d59-8deb-c8ac96c0fe42\',
      \'workbench_access\' => array(),
    ),
  (object) array(
      \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Rien ne vaut l’ambiance d’un spectacle d’humour. Après tout, quoi de plus revigorant que le rire partagé? Au diable donc les DVD : venez vous bidonner en personne! Que vous souhaitiez sortir en couple, passer un bon moment avec de vieux amis ou gâter un proche, vous pouvez compter sur notre hilarant programme d’humour pour vivre une soirée mémorable!</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Rien ne vaut l’ambiance d’un spectacle d’humour. Après tout, quoi de plus revigorant que le rire partagé? Au diable donc les DVD : venez vous bidonner en personne! Que vous souhaitiez sortir en couple, passer un bon moment avec de vieux amis ou gâter un proche, vous pouvez compter sur notre hilarant programme d’humour pour vivre une soirée mémorable!</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'ds_switch\' => \'\',
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'254\',
            \'uid\' => \'1\',
            \'filename\' => \'COMEDY-GENRE\',
            \'uri\' => \'public://ctp-season6.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'351255\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942597\',
            \'type\' => \'image\',
            \'uuid\' => \'e55c427f-d032-491d-91f2-33f2d94c8db3\',
            \'field_file_image_alt_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'Comedy 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'Comedy 2017-18\',
                ),
              ),
            ),
            \'field_file_image_title_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'Centrepointe Theatres Presents Comedy 2017-2018\',
                  \'format\' => NULL,
                  \'safe_value\' => \'Centrepointe Theatres Presents Comedy 2017-2018\',
                ),
              ),
            ),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'254\',
                    \'revision_id\' => \'254\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942597\',
                    \'changed\' => \'1503942597\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
              \'und\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'alt\' => \'Comedy 2017-18\',
            \'title\' => \'Centrepointe Theatres Presents Comedy 2017-2018\',
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'what-s-on?genre[]=22\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'290\',
            \'uid\' => \'1\',
            \'filename\' => \'286x196-comedy-thumb.jpg\',
            \'uri\' => \'public://ctp-season6_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'351255\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942545\',
            \'type\' => \'image\',
            \'uuid\' => \'818ebbc8-58bb-4628-a3b7-907cea065bd8\',
            \'field_file_image_alt_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'Comédie\',
                  \'format\' => NULL,
                  \'safe_value\' => \'Comédie\',
                ),
              ),
            ),
            \'field_file_image_title_text\' => array(),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'290\',
                    \'revision_id\' => \'290\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942545\',
                    \'changed\' => \'1503942545\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
              \'und\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'alt\' => \'Comédie\',
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
            \'title\' => NULL,
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'tadmin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'238\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Comédie\',
      \'tnid\' => \'381\',
      \'translate\' => \'0\',
      \'translations\' => (object) array(
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'type\' => \'our_seasons_block\',
      \'uid\' => \'238\',
      \'uuid\' => \'0e2f6aa7-6324-49c1-9fcb-b1972e59b481\',
      \'vid\' => NULL,
      \'vuuid\' => \'c1c15a5d-e10a-4666-b32a-51e30b8d909e\',
      \'workbench_access\' => array(),
    ),
  (object) array(
      \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Acrobaties, magie, humour : nos spectacles de variété ont de quoi vous tenir en haleine!&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Acrobaties, magie, humour : nos spectacles de variété ont de quoi vous tenir en haleine! </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'ds_switch\' => \'\',
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'257\',
            \'uid\' => \'1\',
            \'filename\' => \'VARIETY-GENRE\',
            \'uri\' => \'public://ctp-season7.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'672101\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942746\',
            \'type\' => \'image\',
            \'uuid\' => \'843e7dbb-f864-425c-9f3c-ead82b1b84aa\',
            \'field_file_image_alt_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'Variety 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'Variety 2017-18\',
                ),
              ),
            ),
            \'field_file_image_title_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'Centrepointe Theatres Presents...Variety 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'Centrepointe Theatres Presents...Variety 2017-18\',
                ),
              ),
            ),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'257\',
                    \'revision_id\' => \'257\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942746\',
                    \'changed\' => \'1503942746\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
              \'und\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'alt\' => \'Variety 2017-18\',
            \'title\' => \'Centrepointe Theatres Presents...Variety 2017-18\',
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'what-s-on?genre[]=20\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'294\',
            \'uid\' => \'1\',
            \'filename\' => \'286x196-variety-thumb.jpg\',
            \'uri\' => \'public://ctp-season7_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'672101\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942776\',
            \'type\' => \'image\',
            \'uuid\' => \'b9ec8ee7-f27d-4950-8d54-b5bf85f8a0fc\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'294\',
                    \'revision_id\' => \'294\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942776\',
                    \'changed\' => \'1503942776\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
            \'alt\' => NULL,
            \'title\' => NULL,
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'tadmin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'238\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'VARIÉTÉS\',
      \'tnid\' => \'384\',
      \'translate\' => \'0\',
      \'translations\' => (object) array(
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'type\' => \'our_seasons_block\',
      \'uid\' => \'238\',
      \'uuid\' => \'43ab60dd-4734-4851-b18a-9da0a48a5c8d\',
      \'vid\' => NULL,
      \'vuuid\' => \'6f2e1cd3-bc4f-422a-8b64-a18eacb8022d\',
      \'workbench_access\' => array(),
    ),
  (object) array(
      \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Un après-midi de musique et de danse, voilà une excellente occasion de vivre un moment inoubliable avec les enfants! Vous pouvez par exemple les amener voir les histoires tant adorées, ou encore prendre une pause durant la période tumultueuse des Fêtes pour vivre avec eux la magie de Noël.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Un après-midi de musique et de danse, voilà une excellente occasion de vivre un moment inoubliable avec les enfants! Vous pouvez par exemple les amener voir les histoires tant adorées, ou encore prendre une pause durant la période tumultueuse des Fêtes pour vivre avec eux la magie de Noël.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'ds_switch\' => \'\',
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'256\',
            \'uid\' => \'1\',
            \'filename\' => \'c-2.0_family_new.jpg\',
            \'uri\' => \'public://ctp-season8.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'625347\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942857\',
            \'type\' => \'image\',
            \'uuid\' => \'c61d7637-e406-4a70-9fb9-276b5bd45d9d\',
            \'field_file_image_alt_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'FAMILY 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'FAMILY 2017-18\',
                ),
              ),
            ),
            \'field_file_image_title_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'Centrepointe Theatres Presents FAMILY 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'Centrepointe Theatres Presents FAMILY 2017-18\',
                ),
              ),
            ),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'256\',
                    \'revision_id\' => \'256\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942857\',
                    \'changed\' => \'1503942857\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
              \'und\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'alt\' => \'FAMILY 2017-18\',
            \'title\' => \'Centrepointe Theatres Presents FAMILY 2017-18\',
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'what-s-on?genre[]=23\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'293\',
            \'uid\' => \'1\',
            \'filename\' => \'286x196-family-thumb.jpg\',
            \'uri\' => \'public://ctp-season8_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'625347\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942882\',
            \'type\' => \'image\',
            \'uuid\' => \'ee5f7d8c-ff61-4bd8-ae63-e4d057c14d5f\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'293\',
                    \'revision_id\' => \'293\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942882\',
                    \'changed\' => \'1503942882\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
              \'und\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
            \'alt\' => NULL,
            \'title\' => NULL,
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'tadmin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'238\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Famille\',
      \'tnid\' => \'383\',
      \'translate\' => \'0\',
      \'translations\' => (object) array(
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'type\' => \'our_seasons_block\',
      \'uid\' => \'238\',
      \'uuid\' => \'df7e598c-b9bf-4842-9702-c3d2ec6b0511\',
      \'vid\' => NULL,
      \'vuuid\' => \'3a2881af-2ef2-46b5-8a19-30f4e7c51484\',
      \'workbench_access\' => array(),
    ),
  (object) array(
      \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Vous vous rappelez l’effervescence de votre tout premier concert? Ou encore combien vous étiez fébrile à l’idée de voir votre groupe local préféré se produire dans un café? Ces expériences et bien d’autres ont un point en commun : la musique. Alors, que diriez-vous de revivre vos souvenirs préférés en bonne compagnie? Entre amis ou en amoureux, venez passer une soirée inoubliable.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Vous vous rappelez l’effervescence de votre tout premier concert? Ou encore combien vous étiez fébrile à l’idée de voir votre groupe local préféré se produire dans un café? Ces expériences et bien d’autres ont un point en commun : la musique. Alors, que diriez-vous de revivre vos souvenirs préférés en bonne compagnie? Entre amis ou en amoureux, venez passer une soirée inoubliable.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'comment\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'ds_switch\' => \'\',
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'255\',
            \'uid\' => \'1\',
            \'filename\' => \'MUSIC-GENRE\',
            \'uri\' => \'public://ctp-season9.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'264462\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942940\',
            \'type\' => \'image\',
            \'uuid\' => \'0c4a643c-782d-456c-9587-e5d7bb22e820\',
            \'field_file_image_alt_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'MUSIC 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'MUSIC 2017-18\',
                ),
              ),
            ),
            \'field_file_image_title_text\' => array(
              \'en\' => array(
                array(
                  \'value\' => \'Centrepointe Theatres Presents MUSIC 2017-18\',
                  \'format\' => NULL,
                  \'safe_value\' => \'Centrepointe Theatres Presents MUSIC 2017-18\',
                ),
              ),
            ),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'255\',
                    \'revision_id\' => \'255\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942940\',
                    \'changed\' => \'1503942940\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
              \'und\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'alt\' => \'MUSIC 2017-18\',
            \'title\' => \'Centrepointe Theatres Presents MUSIC 2017-18\',
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'what-s-on?genre[]=21&date=4\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'292\',
            \'uid\' => \'1\',
            \'filename\' => \'286x196-music-thumb.jpg\',
            \'uri\' => \'public://ctp-season9_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'264462\',
            \'status\' => \'1\',
            \'timestamp\' => \'1503942960\',
            \'type\' => \'image\',
            \'uuid\' => \'3a35c951-c1e3-4102-b7af-0a33589c9b63\',
            \'field_file_image_alt_text\' => array(),
            \'field_file_image_title_text\' => array(),
            \'field_file_image_credit\' => array(),
            \'translations\' => (object) array(
                \'original\' => \'en\',
                \'data\' => array(
                  \'en\' => array(
                    \'entity_type\' => \'file\',
                    \'entity_id\' => \'292\',
                    \'revision_id\' => \'292\',
                    \'language\' => \'en\',
                    \'source\' => \'\',
                    \'uid\' => \'255\',
                    \'status\' => \'1\',
                    \'translate\' => \'0\',
                    \'created\' => \'1503942960\',
                    \'changed\' => \'1503942960\',
                  ),
                ),
              ),
            \'_drafty_revision_requested\' => \'FIELD_LOAD_CURRENT\',
            \'metatags\' => array(
              \'en\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
              \'und\' => array(
                \'title\' => array(
                  \'value\' => \'[current-page:title] | [current-page:pager][site:name]\',
                  \'default\' => \'[current-page:title] | [current-page:pager][site:name]\',
                ),
                \'description\' => array(
                  \'value\' => \'\',
                ),
                \'abstract\' => array(
                  \'value\' => \'\',
                ),
                \'keywords\' => array(
                  \'value\' => \'\',
                ),
                \'robots\' => array(
                  \'value\' => array(
                    \'index\' => 0,
                    \'follow\' => 0,
                    \'noindex\' => 0,
                    \'nofollow\' => 0,
                    \'noarchive\' => 0,
                    \'nosnippet\' => 0,
                    \'noodp\' => 0,
                    \'noydir\' => 0,
                    \'noimageindex\' => 0,
                    \'notranslate\' => 0,
                  ),
                ),
                \'news_keywords\' => array(
                  \'value\' => \'\',
                ),
                \'standout\' => array(
                  \'value\' => \'\',
                ),
                \'rating\' => array(
                  \'value\' => \'\',
                ),
                \'referrer\' => array(
                  \'value\' => \'\',
                ),
                \'rights\' => array(
                  \'value\' => \'\',
                ),
                \'image_src\' => array(
                  \'value\' => \'\',
                ),
                \'canonical\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'shortlink\' => array(
                  \'value\' => \'[current-page:url:unaliased]\',
                  \'default\' => \'[current-page:url:unaliased]\',
                ),
                \'publisher\' => array(
                  \'value\' => \'\',
                ),
                \'author\' => array(
                  \'value\' => \'\',
                ),
                \'original-source\' => array(
                  \'value\' => \'\',
                ),
                \'prev\' => array(
                  \'value\' => \'\',
                ),
                \'next\' => array(
                  \'value\' => \'\',
                ),
                \'content-language\' => array(
                  \'value\' => \'\',
                ),
                \'geo.position\' => array(
                  \'value\' => \'\',
                ),
                \'geo.placename\' => array(
                  \'value\' => \'\',
                ),
                \'geo.region\' => array(
                  \'value\' => \'\',
                ),
                \'icbm\' => array(
                  \'value\' => \'\',
                ),
                \'refresh\' => array(
                  \'value\' => \'\',
                ),
                \'revisit-after\' => array(
                  \'value\' => \'\',
                  \'period\' => \'\',
                ),
                \'pragma\' => array(
                  \'value\' => \'\',
                ),
                \'cache-control\' => array(
                  \'value\' => \'\',
                ),
                \'expires\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:package\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:class\' => array(
                  \'value\' => \'\',
                ),
                \'al:android:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ios:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:ipad:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_store_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:iphone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_phone:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'al:windows_universal:app_name\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:url\' => array(
                  \'value\' => \'\',
                ),
                \'al:web:should_fallback\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'dcterms.creator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.subject\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.description\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.publisher\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.contributor\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.date\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.type\' => array(
                  \'value\' => \'Text\',
                  \'default\' => \'Text\',
                ),
                \'dcterms.format\' => array(
                  \'value\' => \'text/html\',
                  \'default\' => \'text/html\',
                ),
                \'dcterms.identifier\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'dcterms.source\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.language\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.relation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.coverage\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.abstract\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accessRights\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPeriodicity\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.accrualPolicy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.alternative\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.audience\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.available\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.bibliographicCitation\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.conformsTo\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.created\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateAccepted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateCopyrighted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.dateSubmitted\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.educationLevel\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.extent\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasFormat\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasPart\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.hasVersion\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.instructionalMethod\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isFormatOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isPartOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReferencedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isReplacedBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isRequiredBy\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.isVersionOf\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.issued\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.license\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.mediator\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.medium\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.modified\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.provenance\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.references\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.replaces\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.requires\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.rightsHolder\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.spatial\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.tableOfContents\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.temporal\' => array(
                  \'value\' => \'\',
                ),
                \'dcterms.valid\' => array(
                  \'value\' => \'\',
                ),
                \'fb:admins\' => array(
                  \'value\' => \'\',
                ),
                \'fb:app_id\' => array(
                  \'value\' => \'\',
                ),
                \'fb:pages\' => array(
                  \'value\' => \'\',
                ),
                \'itemtype\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:name\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'itemprop:description\' => array(
                  \'value\' => \'\',
                ),
                \'itemprop:image\' => array(
                  \'value\' => \'\',
                ),
                \'theme-color\' => array(
                  \'value\' => \'\',
                ),
                \'MobileOptimized\' => array(
                  \'value\' => \'\',
                ),
                \'HandheldFriendly\' => array(
                  \'value\' => \'\',
                ),
                \'viewport\' => array(
                  \'value\' => \'\',
                ),
                \'cleartype\' => array(
                  \'value\' => \'\',
                ),
                \'apple-itunes-app\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-capable\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-status-bar-style\' => array(
                  \'value\' => \'\',
                ),
                \'apple-mobile-web-app-title\' => array(
                  \'value\' => \'\',
                ),
                \'format-detection\' => array(
                  \'value\' => \'\',
                ),
                \'ios-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-app-link-alternative\' => array(
                  \'value\' => \'\',
                ),
                \'android-manifest\' => array(
                  \'value\' => \'\',
                ),
                \'x-ua-compatible\' => array(
                  \'value\' => \'\',
                ),
                \'application-name\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainApiCalls\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-allowDomainMetaTags\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-badge\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-config\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-navbutton-color\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-notification\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square150x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square310x310logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-square70x70logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-wide310x150logo\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-starturl\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-task-separator\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tilecolor\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tileimage\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-tooltip\' => array(
                  \'value\' => \'\',
                ),
                \'msapplication-window\' => array(
                  \'value\' => \'\',
                ),
                \'og:type\' => array(
                  \'value\' => \'article\',
                  \'default\' => \'article\',
                ),
                \'og:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'og:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'og:determiner\' => array(
                  \'value\' => \'\',
                ),
                \'og:description\' => array(
                  \'value\' => \'\',
                ),
                \'og:updated_time\' => array(
                  \'value\' => \'\',
                ),
                \'og:see_also\' => array(
                  \'value\' => \'\',
                ),
                \'og:image\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:type\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:latitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:longitude\' => array(
                  \'value\' => \'\',
                ),
                \'og:street_address\' => array(
                  \'value\' => \'\',
                ),
                \'og:locality\' => array(
                  \'value\' => \'\',
                ),
                \'og:region\' => array(
                  \'value\' => \'\',
                ),
                \'og:postal_code\' => array(
                  \'value\' => \'\',
                ),
                \'og:country_name\' => array(
                  \'value\' => \'\',
                ),
                \'og:email\' => array(
                  \'value\' => \'\',
                ),
                \'og:phone_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:fax_number\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale\' => array(
                  \'value\' => \'\',
                ),
                \'og:locale:alternate\' => array(
                  \'value\' => \'\',
                ),
                \'article:author\' => array(
                  \'value\' => \'\',
                ),
                \'article:publisher\' => array(
                  \'value\' => \'\',
                ),
                \'article:section\' => array(
                  \'value\' => \'\',
                ),
                \'article:tag\' => array(
                  \'value\' => \'\',
                ),
                \'article:published_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:modified_time\' => array(
                  \'value\' => \'\',
                ),
                \'article:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'profile:first_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:last_name\' => array(
                  \'value\' => \'\',
                ),
                \'profile:username\' => array(
                  \'value\' => \'\',
                ),
                \'profile:gender\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:audio:type\' => array(
                  \'value\' => \'\',
                ),
                \'book:author\' => array(
                  \'value\' => \'\',
                ),
                \'book:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'book:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'book:tag\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:secure_url\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:width\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:height\' => array(
                  \'value\' => \'\',
                ),
                \'og:video:type\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor\' => array(
                  \'value\' => \'\',
                ),
                \'video:actor:role\' => array(
                  \'value\' => \'\',
                ),
                \'video:director\' => array(
                  \'value\' => \'\',
                ),
                \'video:writer\' => array(
                  \'value\' => \'\',
                ),
                \'video:duration\' => array(
                  \'value\' => \'\',
                ),
                \'video:release_date\' => array(
                  \'value\' => \'\',
                ),
                \'video:tag\' => array(
                  \'value\' => \'\',
                ),
                \'video:series\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:price:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:availability\' => array(
                  \'value\' => \'\',
                ),
                \'product:brand\' => array(
                  \'value\' => \'\',
                ),
                \'product:upc\' => array(
                  \'value\' => \'\',
                ),
                \'product:ean\' => array(
                  \'value\' => \'\',
                ),
                \'product:isbn\' => array(
                  \'value\' => \'\',
                ),
                \'product:plural_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_title\' => array(
                  \'value\' => \'\',
                ),
                \'product:retailer_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:mfr_part_no\' => array(
                  \'value\' => \'\',
                ),
                \'product:size\' => array(
                  \'value\' => \'\',
                ),
                \'product:product_link\' => array(
                  \'value\' => \'\',
                ),
                \'product:category\' => array(
                  \'value\' => \'\',
                ),
                \'product:color\' => array(
                  \'value\' => \'\',
                ),
                \'product:material\' => array(
                  \'value\' => \'\',
                ),
                \'product:pattern\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:amount\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_cost:currency\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:value\' => array(
                  \'value\' => \'\',
                ),
                \'product:shipping_weight:units\' => array(
                  \'value\' => \'\',
                ),
                \'product:expiration_time\' => array(
                  \'value\' => \'\',
                ),
                \'product:condition\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:card\' => array(
                  \'value\' => \'summary\',
                  \'default\' => \'summary\',
                ),
                \'twitter:creator\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:creator:id\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:url\' => array(
                  \'value\' => \'[current-page:url:absolute]\',
                  \'default\' => \'[current-page:url:absolute]\',
                ),
                \'twitter:title\' => array(
                  \'value\' => \'[current-page:title]\',
                  \'default\' => \'[current-page:title]\',
                ),
                \'twitter:description\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image:alt\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image0\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:image3\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:width\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:height\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:player:stream:content_type\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:country\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:iphone\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:ipad\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:name:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:id:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:app:url:googleplay\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data1\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:label2\' => array(
                  \'value\' => \'\',
                ),
                \'twitter:data2\' => array(
                  \'value\' => \'\',
                ),
              ),
            ),
            \'path\' => array(
              \'pathauto\' => \'1\',
            ),
            \'metadata\' => array(
              \'height\' => 600,
              \'width\' => 1142,
            ),
            \'height\' => \'600\',
            \'width\' => \'1142\',
            \'alt\' => NULL,
            \'title\' => NULL,
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'fr\',
      \'last_comment_timestamp\' => NULL,
      \'log\' => \'\',
      \'menu\' => NULL,
      \'menu_node_links\' => array(),
      \'name\' => \'tadmin\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'238\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Musique\',
      \'tnid\' => \'382\',
      \'translate\' => \'0\',
      \'translations\' => (object) array(
          \'original\' => NULL,
          \'data\' => array(),
        ),
      \'type\' => \'our_seasons_block\',
      \'uid\' => \'238\',
      \'uuid\' => \'f8e1958a-f958-48d8-b547-0166739d99ed\',
      \'vid\' => NULL,
      \'vuuid\' => \'cfba95cc-8fd2-4aed-b583-883bc8702e17\',
      \'workbench_access\' => array(),
    ),
)',
);
  return $node_export;
}
