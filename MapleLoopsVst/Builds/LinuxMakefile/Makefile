# Automatically generated makefile, created by the Introjucer
# Don't edit this file! Your changes will be overwritten when you re-save the Introjucer project!

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifndef CONFIG
  CONFIG=Debug
endif

ifeq ($(CONFIG),Debug)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Debug
  OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  CPPFLAGS := $(DEPFLAGS) -D "LINUX=1" -D "DEBUG=1" -D "_DEBUG=1" -D "JUCER_LINUX_MAKE_6D53C8B4=1" -D "JUCE_APP_VERSION=1.0.0" -D "JUCE_APP_VERSION_HEX=0x10000" -I /usr/include -I /usr/include/freetype2 -I ~/SDKs/VST3\ SDK -I ../../JuceLibraryCode -I ../../JuceLibraryCode/modules
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -g -ggdb -fPIC -O0
  CXXFLAGS += $(CFLAGS) -std=c++11
  LDFLAGS += $(TARGET_ARCH) -L$(BINDIR) -L$(LIBDIR) -Wl,--no-undefined -shared -L/usr/X11R6/lib/ -lGL -lX11 -lXext -lXinerama -lasound -ldl -lfreetype -lpthread -lrt 

  TARGET := MapleLoops.so
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(OUTDIR)/$(TARGET) $(OBJDIR)
endif

ifeq ($(CONFIG),Release)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Release
  OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  CPPFLAGS := $(DEPFLAGS) -D "LINUX=1" -D "NDEBUG=1" -D "JUCER_LINUX_MAKE_6D53C8B4=1" -D "JUCE_APP_VERSION=1.0.0" -D "JUCE_APP_VERSION_HEX=0x10000" -I /usr/include -I /usr/include/freetype2 -I ~/SDKs/VST3\ SDK -I ../../JuceLibraryCode -I ../../JuceLibraryCode/modules
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -fPIC -O3
  CXXFLAGS += $(CFLAGS) -std=c++11
  LDFLAGS += $(TARGET_ARCH) -L$(BINDIR) -L$(LIBDIR) -Wl,--no-undefined -shared -fvisibility=hidden -L/usr/X11R6/lib/ -lGL -lX11 -lXext -lXinerama -lasound -ldl -lfreetype -lpthread -lrt 

  TARGET := MapleLoops.so
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(OUTDIR)/$(TARGET) $(OBJDIR)
endif

OBJECTS := \
  $(OBJDIR)/CefMapleLoopsHandler_c650c915.o \
  $(OBJDIR)/CefMapleLoopsApp_cb39236c.o \
  $(OBJDIR)/CefContext_971570d4.o \
  $(OBJDIR)/CefContextJob_a4dbc953.o \
  $(OBJDIR)/CefBrowserObject_420d17ac.o \
  $(OBJDIR)/client_app_delegates_renderer_288b73c0.o \
  $(OBJDIR)/client_app_renderer_6c1f3671.o \
  $(OBJDIR)/client_renderer_d1a7398f.o \
  $(OBJDIR)/performance_test_96cc0a95.o \
  $(OBJDIR)/performance_test_tests_91cbacf3.o \
  $(OBJDIR)/cefclient_win_9723de96.o \
  $(OBJDIR)/client_app_778abcd1.o \
  $(OBJDIR)/client_app_delegates_common_a8101fb0.o \
  $(OBJDIR)/client_app_other_e5b136e0.o \
  $(OBJDIR)/client_switches_708603e8.o \
  $(OBJDIR)/scheme_test_common_bb317c40.o \
  $(OBJDIR)/binding_test_1758f87c.o \
  $(OBJDIR)/browser_window_148c4717.o \
  $(OBJDIR)/browser_window_osr_win_6b800903.o \
  $(OBJDIR)/browser_window_std_win_979e3318.o \
  $(OBJDIR)/bytes_write_handler_e1b6d8b3.o \
  $(OBJDIR)/client_app_browser_a3ebd7dd.o \
  $(OBJDIR)/client_app_delegates_browser_1f142c6e.o \
  $(OBJDIR)/client_handler_31a1a81d.o \
  $(OBJDIR)/client_handler_osr_efc7d3ee.o \
  $(OBJDIR)/client_handler_std_f6a2f0b9.o \
  $(OBJDIR)/dialog_test_b6043bc0.o \
  $(OBJDIR)/geometry_util_130ea8ba.o \
  $(OBJDIR)/main_context_5f47262a.o \
  $(OBJDIR)/main_context_impl_6bd7ae13.o \
  $(OBJDIR)/main_context_impl_win_8015f756.o \
  $(OBJDIR)/main_message_loop_2237bd67.o \
  $(OBJDIR)/main_message_loop_multithreaded_win_2cd98927.o \
  $(OBJDIR)/main_message_loop_std_d8395103.o \
  $(OBJDIR)/osr_dragdrop_win_cc15fe82.o \
  $(OBJDIR)/osr_renderer_31e9889f.o \
  $(OBJDIR)/osr_window_win_c5785115.o \
  $(OBJDIR)/preferences_test_d887e95a.o \
  $(OBJDIR)/resource_util_win_972c7819.o \
  $(OBJDIR)/response_filter_test_f240cb18.o \
  $(OBJDIR)/root_window_893e6c7c.o \
  $(OBJDIR)/root_window_manager_60d8a94e.o \
  $(OBJDIR)/root_window_win_f5b5593f.o \
  $(OBJDIR)/scheme_test_6d6fc71d.o \
  $(OBJDIR)/temp_window_win_2da50cb1.o \
  $(OBJDIR)/test_runner_245b88ec.o \
  $(OBJDIR)/urlrequest_test_62a91338.o \
  $(OBJDIR)/util_win_3dff33f4.o \
  $(OBJDIR)/window_test_7aa0f268.o \
  $(OBJDIR)/window_test_win_c54b092b.o \
  $(OBJDIR)/cefsimple_win_8bb05d14.o \
  $(OBJDIR)/simple_app_9291517d.o \
  $(OBJDIR)/simple_handler_aad186a6.o \
  $(OBJDIR)/simple_handler_win_3be04ac3.o \
  $(OBJDIR)/PluginProcessor_a059e380.o \
  $(OBJDIR)/PluginEditor_94d4fb09.o \
  $(OBJDIR)/BinaryData_ce4232d4.o \
  $(OBJDIR)/juce_audio_basics_2442e4ea.o \
  $(OBJDIR)/juce_audio_devices_a4c8a728.o \
  $(OBJDIR)/juce_audio_formats_d349f0c8.o \
  $(OBJDIR)/juce_audio_processors_44a134a2.o \
  $(OBJDIR)/juce_core_aff681cc.o \
  $(OBJDIR)/juce_cryptography_25c7e826.o \
  $(OBJDIR)/juce_data_structures_bdd6d488.o \
  $(OBJDIR)/juce_events_79b2840.o \
  $(OBJDIR)/juce_graphics_c8f1e7a4.o \
  $(OBJDIR)/juce_gui_basics_a630dd20.o \
  $(OBJDIR)/juce_gui_extra_7767d6a8.o \
  $(OBJDIR)/juce_opengl_c7e3506c.o \
  $(OBJDIR)/juce_PluginUtilities_e2e19a34.o \
  $(OBJDIR)/juce_video_184321c8.o \
  $(OBJDIR)/juce_VST_Wrapper_bb62e93d.o \
  $(OBJDIR)/juce_VST3_Wrapper_77e7c73b.o \

.PHONY: clean

$(OUTDIR)/$(TARGET): $(OBJECTS) $(RESOURCES)
	@echo Linking MapleLoops
	-@mkdir -p $(BINDIR)
	-@mkdir -p $(LIBDIR)
	-@mkdir -p $(OUTDIR)
	@$(BLDCMD)

clean:
	@echo Cleaning MapleLoops
	@$(CLEANCMD)

strip:
	@echo Stripping MapleLoops
	-@strip --strip-unneeded $(OUTDIR)/$(TARGET)

$(OBJDIR)/CefMapleLoopsHandler_c650c915.o: ../../Source/CefMapleLoopsHandler.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling CefMapleLoopsHandler.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/CefMapleLoopsApp_cb39236c.o: ../../Source/CefMapleLoopsApp.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling CefMapleLoopsApp.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/CefContext_971570d4.o: ../../Source/CefContext.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling CefContext.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/CefContextJob_a4dbc953.o: ../../Source/CefContextJob.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling CefContextJob.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/CefBrowserObject_420d17ac.o: ../../Source/CefBrowserObject.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling CefBrowserObject.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/client_app_delegates_renderer_288b73c0.o: ../../Source/renderer/client_app_delegates_renderer.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling client_app_delegates_renderer.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/client_app_renderer_6c1f3671.o: ../../Source/renderer/client_app_renderer.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling client_app_renderer.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/client_renderer_d1a7398f.o: ../../Source/renderer/client_renderer.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling client_renderer.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/performance_test_96cc0a95.o: ../../Source/renderer/performance_test.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling performance_test.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/performance_test_tests_91cbacf3.o: ../../Source/renderer/performance_test_tests.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling performance_test_tests.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cefclient_win_9723de96.o: ../../Source/cefclient_win.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cefclient_win.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/client_app_778abcd1.o: ../../Source/common/client_app.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling client_app.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/client_app_delegates_common_a8101fb0.o: ../../Source/common/client_app_delegates_common.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling client_app_delegates_common.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/client_app_other_e5b136e0.o: ../../Source/common/client_app_other.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling client_app_other.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/client_switches_708603e8.o: ../../Source/common/client_switches.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling client_switches.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/scheme_test_common_bb317c40.o: ../../Source/common/scheme_test_common.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling scheme_test_common.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/binding_test_1758f87c.o: ../../Source/browser/binding_test.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling binding_test.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/browser_window_148c4717.o: ../../Source/browser/browser_window.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling browser_window.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/browser_window_osr_win_6b800903.o: ../../Source/browser/browser_window_osr_win.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling browser_window_osr_win.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/browser_window_std_win_979e3318.o: ../../Source/browser/browser_window_std_win.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling browser_window_std_win.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/bytes_write_handler_e1b6d8b3.o: ../../Source/browser/bytes_write_handler.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling bytes_write_handler.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/client_app_browser_a3ebd7dd.o: ../../Source/browser/client_app_browser.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling client_app_browser.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/client_app_delegates_browser_1f142c6e.o: ../../Source/browser/client_app_delegates_browser.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling client_app_delegates_browser.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/client_handler_31a1a81d.o: ../../Source/browser/client_handler.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling client_handler.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/client_handler_osr_efc7d3ee.o: ../../Source/browser/client_handler_osr.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling client_handler_osr.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/client_handler_std_f6a2f0b9.o: ../../Source/browser/client_handler_std.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling client_handler_std.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/dialog_test_b6043bc0.o: ../../Source/browser/dialog_test.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling dialog_test.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/geometry_util_130ea8ba.o: ../../Source/browser/geometry_util.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling geometry_util.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/main_context_5f47262a.o: ../../Source/browser/main_context.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling main_context.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/main_context_impl_6bd7ae13.o: ../../Source/browser/main_context_impl.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling main_context_impl.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/main_context_impl_win_8015f756.o: ../../Source/browser/main_context_impl_win.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling main_context_impl_win.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/main_message_loop_2237bd67.o: ../../Source/browser/main_message_loop.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling main_message_loop.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/main_message_loop_multithreaded_win_2cd98927.o: ../../Source/browser/main_message_loop_multithreaded_win.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling main_message_loop_multithreaded_win.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/main_message_loop_std_d8395103.o: ../../Source/browser/main_message_loop_std.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling main_message_loop_std.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/osr_dragdrop_win_cc15fe82.o: ../../Source/browser/osr_dragdrop_win.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling osr_dragdrop_win.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/osr_renderer_31e9889f.o: ../../Source/browser/osr_renderer.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling osr_renderer.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/osr_window_win_c5785115.o: ../../Source/browser/osr_window_win.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling osr_window_win.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/preferences_test_d887e95a.o: ../../Source/browser/preferences_test.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling preferences_test.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/resource_util_win_972c7819.o: ../../Source/browser/resource_util_win.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling resource_util_win.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/response_filter_test_f240cb18.o: ../../Source/browser/response_filter_test.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling response_filter_test.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/root_window_893e6c7c.o: ../../Source/browser/root_window.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling root_window.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/root_window_manager_60d8a94e.o: ../../Source/browser/root_window_manager.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling root_window_manager.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/root_window_win_f5b5593f.o: ../../Source/browser/root_window_win.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling root_window_win.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/scheme_test_6d6fc71d.o: ../../Source/browser/scheme_test.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling scheme_test.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/temp_window_win_2da50cb1.o: ../../Source/browser/temp_window_win.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling temp_window_win.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/test_runner_245b88ec.o: ../../Source/browser/test_runner.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling test_runner.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/urlrequest_test_62a91338.o: ../../Source/browser/urlrequest_test.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling urlrequest_test.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/util_win_3dff33f4.o: ../../Source/browser/util_win.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling util_win.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/window_test_7aa0f268.o: ../../Source/browser/window_test.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling window_test.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/window_test_win_c54b092b.o: ../../Source/browser/window_test_win.cc
	-@mkdir -p $(OBJDIR)
	@echo "Compiling window_test_win.cc"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cefsimple_win_8bb05d14.o: ../../Source/cefsimple_win.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cefsimple_win.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/simple_app_9291517d.o: ../../Source/simple_app.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling simple_app.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/simple_handler_aad186a6.o: ../../Source/simple_handler.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling simple_handler.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/simple_handler_win_3be04ac3.o: ../../Source/simple_handler_win.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling simple_handler_win.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PluginProcessor_a059e380.o: ../../Source/PluginProcessor.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PluginProcessor.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PluginEditor_94d4fb09.o: ../../Source/PluginEditor.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PluginEditor.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/BinaryData_ce4232d4.o: ../../JuceLibraryCode/BinaryData.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling BinaryData.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_basics_2442e4ea.o: ../../JuceLibraryCode/modules/juce_audio_basics/juce_audio_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_devices_a4c8a728.o: ../../JuceLibraryCode/modules/juce_audio_devices/juce_audio_devices.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_devices.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_formats_d349f0c8.o: ../../JuceLibraryCode/modules/juce_audio_formats/juce_audio_formats.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_formats.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_processors_44a134a2.o: ../../JuceLibraryCode/modules/juce_audio_processors/juce_audio_processors.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_processors.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_core_aff681cc.o: ../../JuceLibraryCode/modules/juce_core/juce_core.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_core.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_cryptography_25c7e826.o: ../../JuceLibraryCode/modules/juce_cryptography/juce_cryptography.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_cryptography.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_data_structures_bdd6d488.o: ../../JuceLibraryCode/modules/juce_data_structures/juce_data_structures.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_data_structures.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_events_79b2840.o: ../../JuceLibraryCode/modules/juce_events/juce_events.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_events.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_graphics_c8f1e7a4.o: ../../JuceLibraryCode/modules/juce_graphics/juce_graphics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_graphics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_basics_a630dd20.o: ../../JuceLibraryCode/modules/juce_gui_basics/juce_gui_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_extra_7767d6a8.o: ../../JuceLibraryCode/modules/juce_gui_extra/juce_gui_extra.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_extra.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_opengl_c7e3506c.o: ../../JuceLibraryCode/modules/juce_opengl/juce_opengl.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_opengl.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_PluginUtilities_e2e19a34.o: ../../JuceLibraryCode/modules/juce_audio_plugin_client/utility/juce_PluginUtilities.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_PluginUtilities.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_video_184321c8.o: ../../JuceLibraryCode/modules/juce_video/juce_video.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_video.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_VST_Wrapper_bb62e93d.o: ../../JuceLibraryCode/modules/juce_audio_plugin_client/VST/juce_VST_Wrapper.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_VST_Wrapper.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_VST3_Wrapper_77e7c73b.o: ../../JuceLibraryCode/modules/juce_audio_plugin_client/VST3/juce_VST3_Wrapper.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_VST3_Wrapper.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

-include $(OBJECTS:%.o=%.d)
