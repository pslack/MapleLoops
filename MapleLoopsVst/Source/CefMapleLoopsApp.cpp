/*
  ==============================================================================

    CefMapleLoopsApp.cpp
    Created: 18 Jul 2016 5:03:12pm
    Author:  Isaac

  ==============================================================================
*/

#include "CefMapleLoopsApp.h"

#include <string>
#include "simple_handler.h"
#include "include/cef_browser.h"
#include "include/cef_command_line.h"
#include "include/wrapper/cef_helpers.h"

CefMapleLoopsApp::CefMapleLoopsApp() 
{

}

void CefMapleLoopsApp::OnContextInitialized() {
  CEF_REQUIRE_UI_THREAD();



  // SimpleHandler implements browser-level callbacks.
  //this actually instances a static singleton TODO:fix this shit
  CefRefPtr<SimpleHandler> handler(new SimpleHandler());

  isContextInitialized = true;

}
