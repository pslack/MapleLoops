/*
  ==============================================================================

    CefContext.cpp
    Created: 17 Jul 2016 7:00:06pm
    Author:  Peter J Slack

  ==============================================================================
*/

#include "include/cef_app.h"
#include "CefContext.h"



CefContext *  CefContext::myInstance=NULL;


CefContext::CefContext()
{
	DBG("Launched CefContext Singleton");
}

CefContext::~CefContext()
{
	if (myInstance != NULL)
	{
		DBG("Killed CefContext Singleton");
		CefShutdown();
		delete myInstance;
	}
}


CefContext * CefContext::getCefContextInstance()
{
    if(myInstance != NULL)
        return myInstance;
        
    myInstance = new CefContext();  
    return myInstance;

}
    
