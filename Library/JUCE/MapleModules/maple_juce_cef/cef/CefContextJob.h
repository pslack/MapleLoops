/*
  ==============================================================================

    CefContextJob.h
    Created: 17 Jul 2016 6:35:15pm
    Author:  Isaac

  ==============================================================================
*/

#ifndef CEFCONTEXTJOB_H_INCLUDED
#define CEFCONTEXTJOB_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include <atomic>
#include <deque>

class CefBrowserObject;

class CefContextJob : public ThreadPoolJob
{
public:
	CefContextJob();

	~CefContextJob(){}
    JobStatus runJob();

	static void launchBrowser(CefBrowserObject * browserApp);

private:
	std::atomic_int sleepTime;
	static std::deque<CefBrowserObject *> browserLaunchRequest;
};



#endif  // CEFCONTEXTJOB_H_INCLUDED
