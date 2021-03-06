// Copyright (c) 2022 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=3302f28c60da03b9f5ba5fa110523b353765d1a3$
//

#include "libcef_dll/ctocpp/browser_process_handler_ctocpp.h"
#include "libcef_dll/cpptoc/command_line_cpptoc.h"
#include "libcef_dll/ctocpp/client_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefBrowserProcessHandlerCToCpp::OnContextInitialized() {
  cef_browser_process_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_context_initialized))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->on_context_initialized(_struct);
}

NO_SANITIZE("cfi-icall")
void CefBrowserProcessHandlerCToCpp::OnBeforeChildProcessLaunch(
    CefRefPtr<CefCommandLine> command_line) {
  cef_browser_process_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_before_child_process_launch))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: command_line; type: refptr_diff
  DCHECK(command_line.get());
  if (!command_line.get())
    return;

  // Execute
  _struct->on_before_child_process_launch(
      _struct, CefCommandLineCppToC::Wrap(command_line));
}

NO_SANITIZE("cfi-icall")
void CefBrowserProcessHandlerCToCpp::OnScheduleMessagePumpWork(int64 delay_ms) {
  cef_browser_process_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_schedule_message_pump_work))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->on_schedule_message_pump_work(_struct, delay_ms);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefClient> CefBrowserProcessHandlerCToCpp::GetDefaultClient() {
  cef_browser_process_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_default_client))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_client_t* _retval = _struct->get_default_client(_struct);

  // Return type: refptr_same
  return CefClientCToCpp::Wrap(_retval);
}

// CONSTRUCTOR - Do not edit by hand.

CefBrowserProcessHandlerCToCpp::CefBrowserProcessHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefBrowserProcessHandlerCToCpp::~CefBrowserProcessHandlerCToCpp() {}

template <>
cef_browser_process_handler_t* CefCToCppRefCounted<
    CefBrowserProcessHandlerCToCpp,
    CefBrowserProcessHandler,
    cef_browser_process_handler_t>::UnwrapDerived(CefWrapperType type,
                                                  CefBrowserProcessHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefBrowserProcessHandlerCToCpp,
                        CefBrowserProcessHandler,
                        cef_browser_process_handler_t>::kWrapperType =
        WT_BROWSER_PROCESS_HANDLER;
