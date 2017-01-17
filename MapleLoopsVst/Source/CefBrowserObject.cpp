/*
  ==============================================================================

    CefBrowserObject.cpp
    Created: 17 Jul 2016 1:14:56pm
    Author:  Peter J Slack

  ==============================================================================
*/
#include "simple_app.h"
#include "CefBrowserObject.h"
#ifdef JUCE_WIN32
#include "Windows.h"
#endif
CefBrowserObject::CefBrowserObject(void * nativeHandle)
{
	DBG("Cef Browser Up");
	nativeWindowHandle = nativeHandle;
}

void * CefBrowserObject::getWindowHandle()
{
	return nativeWindowHandle;
}

CefBrowserObject::~CefBrowserObject()
{
	DBG("Cef Browser Down");
}

