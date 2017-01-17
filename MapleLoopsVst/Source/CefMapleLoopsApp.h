/*
  ==============================================================================

    CefMapleLoopsApp.h
    Created: 18 Jul 2016 5:03:12pm
    Author:  Isaac

  ==============================================================================
*/

#ifndef CEFMAPLELOOPSAPP_H_INCLUDED
#define CEFMAPLELOOPSAPP_H_INCLUDED



#include "include/cef_app.h"

// Implement application-level callbacks for the browser process.
class CefMapleLoopsApp : public CefApp,
                  public CefBrowserProcessHandler {
 public:
  CefMapleLoopsApp();

  // CefApp methods:
  virtual CefRefPtr<CefBrowserProcessHandler> GetBrowserProcessHandler()
      OVERRIDE { return this; }

  // CefBrowserProcessHandler methods:
  virtual void OnContextInitialized() OVERRIDE;
  bool isContextInitialized;

 private:

  // Include the default reference counting implementation.
  IMPLEMENT_REFCOUNTING(CefMapleLoopsApp);
};


#endif  // CEFMAPLELOOPSAPP_H_INCLUDED
