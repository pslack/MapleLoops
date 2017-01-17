/*
==============================================================================

CefContextJob.cpp
Created: 17 Jul 2016 6:35:15pm
Author:  Peter J Slack

==============================================================================
*/

#include "include/cef_app.h"
#include "simple_handler.h"
#include "include/wrapper/cef_helpers.h"
#include "CefMapleLoopsApp.h"
#include "CefContextJob.h"
#include "Globals.h"
#include "CefBrowserObject.h"

#ifdef JUCE_WIN32
#include <Windows.h>

#if defined(CEF_USE_SANDBOX)
// The cef_sandbox.lib static library is currently built with VS2013. It may not
// link successfully with other VS versions.
#pragma comment(lib, "cef_sandbox.lib")
#endif

#endif

std::deque<CefBrowserObject *> CefContextJob::browserLaunchRequest;

void * launchBrowserOnMainThread(void * browserObject)
{
	return nullptr;
}


CefContextJob::CefContextJob() : ThreadPoolJob("Maple Loops Cef Context")
{
	sleepTime.store(1);
}

void CefContextJob::launchBrowser(CefBrowserObject * browserApp)
{
	browserLaunchRequest.push_front(browserApp);


}

ThreadPoolJob::JobStatus CefContextJob::runJob()
{

#ifdef JUCE_WIN32

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
	CefMainArgs main_args(GetModuleHandle(NULL));

	// Specify CEF global settings here.
	CefSettings settings;

#if !defined(CEF_USE_SANDBOX)
	settings.no_sandbox = true;
#endif

	//we'll run the message loop on a separate thread
	//
	settings.multi_threaded_message_loop = false;
	
	CefMapleLoopsApp * myApp = new CefMapleLoopsApp();
	

	// SimpleApp implements application-level callbacks for the browser process.
	// It will create the first browser instance in OnContextInitialized() after
	// CEF has initialized.
	CefRefPtr<CefMapleLoopsApp> app(myApp);

	// Specify the path for the sub-process executable.
	//TODO: fix this to get installed app base
	CefString(&settings.browser_subprocess_path).FromASCII("C:\\Users\\Isaac\\Documents\\MapleLoops\\MapleProcess\\Builds\\VisualStudio2013\\x64\\Debug\\MapleProcess.exe");


	bool isCef = false;
	// Initialize CEF.
	if(isCef=CefInitialize(main_args, settings, app.get(), sandbox_info))
	{
		DBG("CEF Initialized successfully");
		MessageManager::broadcastMessage(CEF_MESSAGE_LOOP_UP_NOTIFICATION);
	}
	else
	{
		DBG("CEF Failed Initialization");
	}

	while (!shouldExit() && isCef){
		Thread::sleep(sleepTime.load());
		if (!browserLaunchRequest.empty())
		{	
			
			if (myApp->isContextInitialized){
				CefBrowserObject * myBrowser = browserLaunchRequest.back();
				browserLaunchRequest.pop_back();
				



				// Information used when creating the native window.
				CefWindowInfo window_info;

				CefBrowserSettings browser_settings;

#if defined(OS_WIN)
				// On Windows we need to specify certain flags that will be passed to
				// CreateWindowEx().

				if (myBrowser->getWindowHandle() != nullptr)
				{
					RECT rcClient;
					GetClientRect((HWND)myBrowser->getWindowHandle(), &rcClient);
					window_info.SetAsChild((HWND)myBrowser->getWindowHandle(), rcClient);
				}
				else
				{
					window_info.SetAsPopup(NULL, "cefsimple");
				}
#endif


				std::string url;
				//TODO:: let's make a landing page that makes sense for this device
				url = "http://www.pjslack.com/100day/day14/";

				// Create the first browser window.
				CefBrowserHost::CreateBrowser(window_info, SimpleHandler::GetInstance(), url, browser_settings, NULL);

			}


		}
		CefDoMessageLoopWork();
	}

	//CefShutdown();
	DBG("Cef shutdown ");

#endif

	return ThreadPoolJob::jobHasFinished;
}
