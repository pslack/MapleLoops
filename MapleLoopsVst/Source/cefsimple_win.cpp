// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#include <windows.h>

#include "simple_app.h"
#include "include/cef_sandbox_win.h"


// When generating projects with CMake the CEF_USE_SANDBOX value will be defined
// automatically if using the required compiler version. Pass -DUSE_SANDBOX=OFF
// to the CMake command-line to disable use of the sandbox.
// Uncomment this line to manually enable sandbox support.
// #define CEF_USE_SANDBOX 1

#if defined(CEF_USE_SANDBOX)
// The cef_sandbox.lib static library is currently built with VS2013. It may not
// link successfully with other VS versions.
#pragma comment(lib, "cef_sandbox.lib")
#endif


// Entry point function for all processes.
SimpleApp * runMain(HINSTANCE hInstance, HWND parentWindow) {
  
  // Enable High-DPI support on Windows 7 or newer.
  CefEnableHighDPISupport();

  void* sandbox_info = NULL;

#if defined(CEF_USE_SANDBOX)
  // Manage the life span of the sandbox information object. This is necessary
  // for sandbox support on Windows. See cef_sandbox_win.h for complete details.
  CefScopedSandboxInfo scoped_sandbox;
  sandbox_info = scoped_sandbox.sandbox_info();
#endif

  // Provide CEF with command-line arguments.
  CefMainArgs main_args(hInstance);

  // CEF applications have multiple sub-processes (render, plugin, GPU, etc)
  // that share the same executable. This function checks the command-line and,
  // if this is a sub-process, executes the appropriate logic.
  int exit_code = CefExecuteProcess(main_args, NULL, sandbox_info);
  if (exit_code >= 0) {
    // The sub-process has completed so return here.
    return nullptr;
  }

  // Specify CEF global settings here.
  CefSettings settings;

#if !defined(CEF_USE_SANDBOX)
  settings.no_sandbox = true;
#endif

  //we'll run the message loop on a separate thread
  //
  settings.multi_threaded_message_loop = true;

  SimpleApp * myApp = new SimpleApp();
  myApp->nativeWindowHandle = parentWindow;

  // SimpleApp implements application-level callbacks for the browser process.
  // It will create the first browser instance in OnContextInitialized() after
  // CEF has initialized.
  CefRefPtr<SimpleApp> app(myApp);



  // Initialize CEF.
  CefInitialize(main_args, settings, app.get(), sandbox_info);


  return myApp;
}

void shutdown()
{
	// Shut down CEF.
	CefShutdown();

}

