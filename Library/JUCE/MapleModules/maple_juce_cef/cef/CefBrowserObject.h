/*
  ==============================================================================

    CefJobThread.h
    Created: 17 Jul 2016 1:14:56pm
    Author:  Isaac

  ==============================================================================
*/

#ifndef CEFBROWSEROBJECT_H_INCLUDED
#define CEFBROWSEROBJECT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
class SimpleApp;

class CefBrowserObject
{
public:
	CefBrowserObject(void * nativeHandle);

	~CefBrowserObject();
	void * getWindowHandle();

private:
	ScopedPointer<SimpleApp> myApp;
	void * nativeWindowHandle;

};


#endif  // CEFBROWSEROBJECT_H_INCLUDED
