/*
  ==============================================================================

    CefContext.h
    Created: 17 Jul 2016 7:00:06pm
    Author:  Peter J Slack

  ==============================================================================
*/

#ifndef CEFCONTEXT_H_INCLUDED
#define CEFCONTEXT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class CefContext
{

public:
    
    static CefContext * getCefContextInstance();
    

    ~CefContext();
    
private: 
    
    static CefContext * myInstance;
    
    CefContext();

};



#endif  // CEFCONTEXT_H_INCLUDED
