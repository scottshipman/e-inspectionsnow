<?php
/**
 * @file
 * ein_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ein_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Association Logos';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'association_logos';
  $fe_block_boxes->body = '<div class="footer-logos">
            <div class="logo-item">
                <img class="footer-logo-item" alt="Internachi Certified" src="/sites/all/themes/lexus_zymphonies_theme/images/internachi_certified_logo75.jpg" />
                <span class="logo-caption">#09073107</span>
            </div>
            <div class="logo-item">
                <img class="footer-logo-item" alt="Florida Certified" src="/sites/all/themes/lexus_zymphonies_theme/images/fl-seal75.jpg"  />
                <span class="logo-caption">Lic # HI-575</span>
            </div>
            <div class="logo-item">
                <img class="footer-logo-item" alt="Buyer\'s Choice" src="/sites/all/themes/lexus_zymphonies_theme/images/buyers-choice-logo75.jpg" />
            </div>

        </div>';

  $export['association_logos'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Cities Served';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'cities_served';
  $fe_block_boxes->body = '<h1>Since 1991, E Inspections Now, Inc has been serving the Tampa Bay area, and beyond.<br />
Below is a list of cities we serve across Florida.</h1>
';

  $export['cities_served'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Copywrite';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'copywrite';
  $fe_block_boxes->body = '<div class="full-wrap clearfix" id="copyright">
<div class="copyright">© &nbsp;All Rights Reserved.</div>
</div>
';

  $export['copywrite'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header Phone Number';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'header_phone_number';
  $fe_block_boxes->body = '<p><i class="fa fa-phone"> 727 - 789 - 6700</i></p>
';

  $export['header_phone_number'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home First Bottom';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_first_bottom';
  $fe_block_boxes->body = '<h1><img alt="Building Inspection Services in the Tampa Bay Area" src="/sites/default/files/HomePic.jpg" style="line-height: 20.8px; border-style: solid; border-width: 0px; float: left; height: 337px; margin: 10px; width: 470px;" /></h1>
';

  $export['home_first_bottom'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home Intro';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_intro';
  $fe_block_boxes->body = '<h1>e-InspectionsNow&nbsp;Building Inspection Services</h1>

<p>Your home or building is one of your biggest investments.&nbsp; An inspection helps to assure that your investment is both a sensible and pleasant experience.&nbsp; Being informed and knowledgeable about the condition of your new home or building eases the anxiety associated with purchasing a property. We provide a detailed inspection by certified and licensed inspectors and will convey deficiencies in the property in layman\'s terms.</p>
';

  $export['home_intro'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home Second Bottom';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_second_bottom';
  $fe_block_boxes->body = '<h3 style="line-height: 20.8px;">The purpose?</h3>

<p style="line-height: 20.8px;">An inspection must be done so that you are informed of any major defect or problems with the property before you finalize the purchase. The inspection or the report is not a warranty or guarantee. The inspection will give you an overall view of the conditions of the property so you can make an educated decision if this is the right purchase for you.</p>

<h3>How is it done?</h3>

<p style="line-height: 20.8px;">The inspector carefully examines the structure and systems of the home or building by inspecting readily accessible areas and making visual observations of the property’s condition at the time of the inspection. No destructive, damaging or invasive inspection is made.<br />
When the inspector finishes, you will get a computer presentation with digital photos and have an opportunity to ask about the operation and maintenance of the home. The inspection will take about one hour per 1000 square feet depending on amenities and age of the property.</p>

<h3>Price?</h3>

<p style="line-height: 20.8px;">This is based on the age, and the amount of total square footage.</p>
';

  $export['home_second_bottom'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'HomeBuyer testimonial';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'homebuyer_testimonial';
  $fe_block_boxes->body = '<h1>BECAUSE YOU WANT IT DONE RIGHT !</h1>

You want to hire the most experienced, certified, educated, and detail oriented inspector who can properly convey the condition of the home or structure.&nbsp;<br />
<h3>Experience is priceless.&nbsp;</h3>';

  $export['homebuyer_testimonial'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Left Block ';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'left_block';
  $fe_block_boxes->body = '<p><i class="fa fa-calendar-check-o fa-4">&nbsp;</i></p>

<h2>Schedule an Inspection</h2>

<p>We can help you make an informed decision.</p>

<p><a href="schedule-inspection">Lets get started</a></p>
';

  $export['left_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Login Button';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'login_block';
  $fe_block_boxes->body = '<p><a class="myButton" href="/contact-us" title="Schedule an Inspection">Schedule an Inspection</a> <a class="myButton" href="/user/login" title="Login">Login</a></p>
';

  $export['login_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Middle Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'middle_block';
  $fe_block_boxes->body = '<p><i class="fa fa-home fa-4">&nbsp;</i></p>

<h2>Tips for Homebuyers</h2>

<p>Once you own the property,<br />
you will want to maintain it.<br />
Here are some tips to help.</p>

<p><a href="/homeowner-tips/latest">View Now</a></p>
';

  $export['middle_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'My Report Button';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'my_report';
  $fe_block_boxes->body = '<p><a class="my-button" href="/my-reports" title="Get My reports">Get My Reports</a></p>
';

  $export['my_report'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Add Report Button';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'new_report';
  $fe_block_boxes->body = '<p><a class="myButton" href="/node/add/inspection-report">Create New Report</a></p>
';

  $export['new_report'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Real Estate Bottom Middle';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'reaestate_bottom_middle';
  $fe_block_boxes->body = '<p><img alt="Rea Estate Professionals" src="/sites/default/files/realestate-pro_0.jpg" /></p>
';

  $export['reaestate_bottom_middle'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Real Estate Bottom Left';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'realestate_bottom_left';
  $fe_block_boxes->body = '<h2><span style="color:#FF0000;">PROVIDING SERVICE TO THE TAMPA BAY AREA SINCE 1991</span></h2>

<p>The reason realtors use&nbsp;E Inspections Now, Inc is&nbsp;to&nbsp;eliminate&nbsp;their&nbsp;liability&nbsp;on the deficiencies of the&nbsp;home.&nbsp;E Inspections Now, Inc maintains a special relationship with their agents and customers -&nbsp; &nbsp;We are here to stay, building long term relationships.&nbsp;&nbsp;<strong>&nbsp; &nbsp;</strong></p>

<p>We provide a realistic overview of the home, pointing out deficiencies and highlighting improvements, upgrades and&nbsp;quality construction.&nbsp;&nbsp; Results are presented in a meaningful and instructive manner, prioritized for the buyer concerns.&nbsp;&nbsp;E Inspections Now, Inc brings years of experience to provide you with an accurate assessment of the customer\'s new home.</p>

We have&nbsp;been in business this long&nbsp;because of&nbsp;our inspection process, training&nbsp;and attention to details.<br />
<h3>Experience is priceless.</h3>';

  $export['realestate_bottom_left'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Real Estate Bottom Right';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'realestate_bottom_right';
  $fe_block_boxes->body = '<h2><span style="color:#FF0000;">OUR&nbsp;SERVCES:&nbsp;</span></h2>

<ul>
	<li>Residential&nbsp;inspections&nbsp;</li>
	<li>Condominium inspections</li>
	<li>Commercial building inspections</li>
	<li>Pre- sale listing inspections</li>
	<li>Home maintenance inspection-SA</li>
	<li>Mobile home inspections</li>
	<li>New Construction inspection (in three phases)</li>
	<li>Uniform Mitigation verification inspection</li>
	<li>Four Point inspections</li>
	<li>Roof certification inspection&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</li>
</ul>

<p>We appreciate your referrals. Thank you for your continued support.</p>
';

  $export['realestate_bottom_right'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Real Estate Testimonial';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'realestate_testimonial';
  $fe_block_boxes->body = '<h1>Established in 1991, we are one of the oldest<br />
and most trusted inspection&nbsp;companies in the Tampa Bay area.</h1>
';

  $export['realestate_testimonial'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Right Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'right_block';
  $fe_block_boxes->body = '<p><i class="fa fa-sun-o  fa-4">&nbsp;</i></p>

<h2>Serving Tampa Bay</h2>

<p>We have been around<br />
since 1991, in the Pinellas,<br />
Hillsborough and Pasco area.</p>

<p><a href="cities-served">See Full City List</a></p>
';

  $export['right_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Schedule testimonial';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'schedule_testimonial';
  $fe_block_boxes->body = '<h1>Complete the form to schedule an inspection with e-Inspections Now, inc.</h1>
';

  $export['schedule_testimonial'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Services Bottom Left';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'services_bottom_left';
  $fe_block_boxes->body = '<h1><span style="color:#FF0000;">We Specialize in:</span></h1>

<ul>
	<li>Residential&nbsp;inspections&nbsp;</li>
	<li>Condominium inspections</li>
	<li>Commercial building inspections</li>
	<li>Pre- sale listing inspections</li>
	<li>Home maintenance inspection-SA</li>
	<li>Mobile home inspections</li>
	<li>New Construction inspection (in three phases)</li>
	<li>Uniform Mitigation verification inspection</li>
	<li>Four Point inspections</li>
	<li>Roof certification inspection</li>
</ul>

<p>&nbsp;</p>
';

  $export['services_bottom_left'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Services Bottom Middle';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'services_bottom_middle';
  $fe_block_boxes->body = '<h1><span style="color:#FF0000;">Knowledge, Training,<br />
Experience &amp; Skills</span></h1>

<ul>
	<li>Florida licensed home inspector # HI575</li>
	<li>National Associate of Home Inspectors (NACHI) # 09073107</li>
	<li>Tampa Bay Chapter of Inter NACHI Educational Coordinator</li>
	<li>West Pasco Board of Realtors Affiliate in 2002 and 2003</li>
	<li>Pinellas Realtor Association Affilitae</li>
</ul>
';

  $export['services_bottom_middle'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Services Bottom Right';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'services_bottom_right';
  $fe_block_boxes->body = '<h1><span style="color:#FF0000;">Wind Mitigation &amp; Four Point Inspections</span></h1>

<p>The purpose of the wind mitigation and four point inspection is to identify the upgrades to your home that help determine your insurance premium. Which inspection is needed depends on your insurance carrier.</p>
';

  $export['services_bottom_right'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Services Quote';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'services_quote';
  $fe_block_boxes->body = '<h1><em>"We will help ensure that your new purchase is all that you dreamed it would be"</em></h1>
';

  $export['services_quote'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Established in 1991';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'tagline';
  $fe_block_boxes->body = '<span class="headerAddress"><address>Established in 1991</address></span>
';

  $export['tagline'] = $fe_block_boxes;

  return $export;
}
