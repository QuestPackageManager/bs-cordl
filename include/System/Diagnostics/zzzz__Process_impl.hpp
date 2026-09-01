#pragma once
// IWYU pragma private; include "System\Diagnostics\Process.hpp"
#include "System/ComponentModel/zzzz__Component_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Diagnostics/zzzz__Process_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeProcessHandle_def.hpp"
#include "System/ComponentModel/zzzz__ISynchronizeInvoke_def.hpp"
#include "System/Diagnostics/zzzz__AsyncStreamReader_def.hpp"
#include "System/Diagnostics/zzzz__ProcessInfo_def.hpp"
#include "System/Diagnostics/zzzz__ProcessModuleCollection_def.hpp"
#include "System/Diagnostics/zzzz__ProcessStartInfo_def.hpp"
#include "System/Diagnostics/zzzz__ProcessThreadCollection_def.hpp"
#include "System/Diagnostics/zzzz__ProcessThreadTimes_def.hpp"
#include "System/Diagnostics/zzzz__Process_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__StreamWriter_def.hpp"
#include "System/Threading/zzzz__RegisteredWaitHandle_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::Process_StreamReadMode::Process_StreamReadMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Process_StreamReadMode::Process_StreamReadMode() {}
constexpr ::System::Diagnostics::Process_StreamReadMode System::Diagnostics::Process_StreamReadMode::undefined{ static_cast<int32_t>(0x0) };
constexpr ::System::Diagnostics::Process_StreamReadMode System::Diagnostics::Process_StreamReadMode::syncMode{ static_cast<int32_t>(0x1) };
constexpr ::System::Diagnostics::Process_StreamReadMode System::Diagnostics::Process_StreamReadMode::asyncMode{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::Process_State::Process_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Process_State::Process_State() {}
constexpr ::System::Diagnostics::Process_State System::Diagnostics::Process_State::HaveId{ static_cast<int32_t>(0x1) };
constexpr ::System::Diagnostics::Process_State System::Diagnostics::Process_State::IsLocal{ static_cast<int32_t>(0x2) };
constexpr ::System::Diagnostics::Process_State System::Diagnostics::Process_State::IsNt{ static_cast<int32_t>(0x4) };
constexpr ::System::Diagnostics::Process_State System::Diagnostics::Process_State::HaveProcessInfo{ static_cast<int32_t>(0x8) };
constexpr ::System::Diagnostics::Process_State System::Diagnostics::Process_State::Exited{ static_cast<int32_t>(0x10) };
constexpr ::System::Diagnostics::Process_State System::Diagnostics::Process_State::Associated{ static_cast<int32_t>(0x20) };
constexpr ::System::Diagnostics::Process_State System::Diagnostics::Process_State::IsWin2k{ static_cast<int32_t>(0x40) };
constexpr ::System::Diagnostics::Process_State System::Diagnostics::Process_State::HaveNtProcessInfo{ static_cast<int32_t>(0xc) };
// Ctor Parameters [CppParam { name: "process_handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "pid", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "envVariables", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "UserName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Domain", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "Password", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "LoadUserProfile", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::Process_ProcInfo::Process_ProcInfo(::System::IntPtr process_handle, int32_t pid, ::ArrayW<::StringW> envVariables, ::StringW UserName, ::StringW Domain,
                                                                    ::System::IntPtr Password, bool LoadUserProfile) noexcept {
  this->process_handle = process_handle;
  this->pid = pid;
  this->envVariables = envVariables;
  this->UserName = UserName;
  this->Domain = Domain;
  this->Password = Password;
  this->LoadUserProfile = LoadUserProfile;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Process_ProcInfo::Process_ProcInfo() {}
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x639bba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)(::StringW, bool, int32_t, ::System::Diagnostics::ProcessInfo*)>(
    &::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x639bc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Diagnostics::ProcessInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Associated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Associated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x639bcc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_Associated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_ExitCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_ExitCode)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x639bce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_ExitCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_HasExited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_HasExited)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x639bf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_HasExited", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessTimes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::ProcessThreadTimes* (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::GetProcessTimes)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x639c5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "GetProcessTimes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Handle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x639c850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Id)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x639856c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_StartInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::ProcessStartInfo* (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_StartInfo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x639c934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_StartInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.set_StartInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)(::System::Diagnostics::ProcessStartInfo*)>(&::System::Diagnostics::Process::set_StartInfo)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x639ca1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "set_StartInfo", {}, { ::i2c::type_of<::System::Diagnostics::ProcessStartInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_SynchronizingObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::ISynchronizeInvoke* (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_SynchronizingObject)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x639ca74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_SynchronizingObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_TotalProcessorTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_TotalProcessorTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x639cc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_TotalProcessorTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_StandardOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::StreamReader* (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_StandardOutput)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x639cc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_StandardOutput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_StandardError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::StreamReader* (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_StandardError)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x639ccc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_StandardError", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ReleaseProcessHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(
    &::System::Diagnostics::Process::ReleaseProcessHandle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x639cd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(),
                                                                                           { "ReleaseProcessHandle", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CompletionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)(::System::Object*, bool)>(&::System::Diagnostics::Process::CompletionCallback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x639cd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "CompletionCallback", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)(bool)>(&::System::Diagnostics::Process::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x639ceac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { ::i2c::class_of<::System::Diagnostics::Process*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Close)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x639cef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.EnsureState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)(::System::Diagnostics::Process_State)>(&::System::Diagnostics::Process::EnsureState)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x639be20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "EnsureState", {}, { ::i2c::type_of<::System::Diagnostics::Process_State>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.EnsureWatchingForExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::EnsureWatchingForExit)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x639d06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "EnsureWatchingForExit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessById
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::Process* (*)(int32_t)>(&::System::Diagnostics::Process::GetProcessById)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x639d234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "GetProcessById", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetCurrentProcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::Process* (*)()>(&::System::Diagnostics::Process::GetCurrentProcess)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63984e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "GetCurrentProcess", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.OnExited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::OnExited)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x639d434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "OnExited", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle* (::System::Diagnostics::Process::*)(int32_t, bool)>(
    &::System::Diagnostics::Process::GetProcessHandle)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x639c1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "GetProcessHandle", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle* (::System::Diagnostics::Process::*)(int32_t)>(
    &::System::Diagnostics::Process::GetProcessHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639d678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "GetProcessHandle", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.OpenProcessHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle* (::System::Diagnostics::Process::*)(int32_t)>(
    &::System::Diagnostics::Process::OpenProcessHandle)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x639c880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "OpenProcessHandle", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Refresh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x639d058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.SetProcessHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(
    &::System::Diagnostics::Process::SetProcessHandle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x639d680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "SetProcessHandle", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.SetProcessId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)(int32_t)>(&::System::Diagnostics::Process::SetProcessId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x639d69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "SetProcessId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Start)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x639d6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::Process* (*)(::System::Diagnostics::ProcessStartInfo*)>(&::System::Diagnostics::Process::Start)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x639e9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "Start", {}, { ::i2c::type_of<::System::Diagnostics::ProcessStartInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StopWatchingForExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::StopWatchingForExit)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x639cd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "StopWatchingForExit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::ToString)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x639ea5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { ::i2c::class_of<::System::Diagnostics::Process*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.WaitForExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::Process::*)(int32_t)>(&::System::Diagnostics::Process::WaitForExit)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x639ebe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "WaitForExit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.WaitForExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::WaitForExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639edc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "WaitForExit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, int32_t)>(
    &::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x639edcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ProcessName_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::System::Diagnostics::Process::ProcessName_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x639ee54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "ProcessName_icall", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ProcessName_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(&::System::Diagnostics::Process::ProcessName_internal)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x639ee58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(),
                                                                                           { "ProcessName_internal", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_ProcessName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_ProcessName)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6398588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_ProcessName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcess_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::System::Diagnostics::Process::GetProcess_internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639ef38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "GetProcess_internal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessById
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::Process* (*)(int32_t, ::StringW)>(&::System::Diagnostics::Process::GetProcessById)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x639d280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "GetProcessById", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.IsLocalMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Diagnostics::Process::IsLocalMachine)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x639ef40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "IsLocalMachine", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ShellExecuteEx_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Diagnostics::ProcessStartInfo*, ::by_ref<::System::Diagnostics::Process_ProcInfo>)>(
    &::System::Diagnostics::Process::ShellExecuteEx_internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639efc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(),
                            { "ShellExecuteEx_internal", {}, { ::i2c::type_of<::System::Diagnostics::ProcessStartInfo*>(), ::i2c::type_of<::by_ref<::System::Diagnostics::Process_ProcInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CreateProcess_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Diagnostics::ProcessStartInfo*, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr,
                                                                ::by_ref<::System::Diagnostics::Process_ProcInfo>)>(&::System::Diagnostics::Process::CreateProcess_internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639efd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(),
                                                             { "CreateProcess_internal",
                                                               {},
                                                               { ::i2c::type_of<::System::Diagnostics::ProcessStartInfo*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                                 ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Diagnostics::Process_ProcInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StartWithShellExecuteEx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::Process::*)(::System::Diagnostics::ProcessStartInfo*)>(&::System::Diagnostics::Process::StartWithShellExecuteEx)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x639d784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "StartWithShellExecuteEx", {}, { ::i2c::type_of<::System::Diagnostics::ProcessStartInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CreatePipe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>, ::by_ref<::System::IntPtr>, bool)>(&::System::Diagnostics::Process::CreatePipe)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x639f0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(),
                                                { "CreatePipe", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_IsWindows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Diagnostics::Process::get_IsWindows)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x639f264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_IsWindows", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StartWithCreateProcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Diagnostics::Process::*)(::System::Diagnostics::ProcessStartInfo*)>(&::System::Diagnostics::Process::StartWithCreateProcess)> {
  constexpr static std::size_t size = 0x1018;
  constexpr static std::size_t addrs = 0x639d988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "StartWithCreateProcess", {}, { ::i2c::type_of<::System::Diagnostics::ProcessStartInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.FillUserInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Diagnostics::ProcessStartInfo*, ::by_ref<::System::Diagnostics::Process_ProcInfo>)>(
    &::System::Diagnostics::Process::FillUserInfo)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x639eff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(),
                                         { "FillUserInfo", {}, { ::i2c::type_of<::System::Diagnostics::ProcessStartInfo*>(), ::i2c::type_of<::by_ref<::System::Diagnostics::Process_ProcInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.RaiseOnExited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::RaiseOnExited)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x639c4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "RaiseOnExited", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_haveProcessId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveProcessId;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_haveProcessId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveProcessId;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_haveProcessId(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveProcessId = value;
}
constexpr int32_t& System::Diagnostics::Process::__cordl_internal_get_processId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processId;
}
constexpr int32_t const& System::Diagnostics::Process::__cordl_internal_get_processId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processId;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_processId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processId = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_haveProcessHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveProcessHandle;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_haveProcessHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveProcessHandle;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_haveProcessHandle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveProcessHandle = value;
}
constexpr ::Microsoft::Win32::SafeHandles::SafeProcessHandle*& System::Diagnostics::Process::__cordl_internal_get_m_processHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_processHandle;
}
constexpr ::Microsoft::Win32::SafeHandles::SafeProcessHandle* const& System::Diagnostics::Process::__cordl_internal_get_m_processHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_processHandle;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_m_processHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_processHandle = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_isRemoteMachine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRemoteMachine;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_isRemoteMachine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRemoteMachine;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_isRemoteMachine(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRemoteMachine = value;
}
constexpr ::StringW& System::Diagnostics::Process::__cordl_internal_get_machineName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___machineName;
}
constexpr ::StringW const& System::Diagnostics::Process::__cordl_internal_get_machineName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___machineName;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_machineName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___machineName = value;
}
constexpr int32_t& System::Diagnostics::Process::__cordl_internal_get_m_processAccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_processAccess;
}
constexpr int32_t const& System::Diagnostics::Process::__cordl_internal_get_m_processAccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_processAccess;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_m_processAccess(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_processAccess = value;
}
constexpr ::System::Diagnostics::ProcessThreadCollection*& System::Diagnostics::Process::__cordl_internal_get_threads() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threads;
}
constexpr ::System::Diagnostics::ProcessThreadCollection* const& System::Diagnostics::Process::__cordl_internal_get_threads() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threads;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_threads(::System::Diagnostics::ProcessThreadCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___threads = value;
}
constexpr ::System::Diagnostics::ProcessModuleCollection*& System::Diagnostics::Process::__cordl_internal_get_modules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modules;
}
constexpr ::System::Diagnostics::ProcessModuleCollection* const& System::Diagnostics::Process::__cordl_internal_get_modules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modules;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_modules(::System::Diagnostics::ProcessModuleCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modules = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_haveWorkingSetLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveWorkingSetLimits;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_haveWorkingSetLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveWorkingSetLimits;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_haveWorkingSetLimits(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveWorkingSetLimits = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_havePriorityClass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___havePriorityClass;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_havePriorityClass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___havePriorityClass;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_havePriorityClass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___havePriorityClass = value;
}
constexpr ::System::Diagnostics::ProcessStartInfo*& System::Diagnostics::Process::__cordl_internal_get_startInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startInfo;
}
constexpr ::System::Diagnostics::ProcessStartInfo* const& System::Diagnostics::Process::__cordl_internal_get_startInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startInfo;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_startInfo(::System::Diagnostics::ProcessStartInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startInfo = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_watchForExit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___watchForExit;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_watchForExit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___watchForExit;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_watchForExit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___watchForExit = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_watchingForExit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___watchingForExit;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_watchingForExit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___watchingForExit;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_watchingForExit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___watchingForExit = value;
}
constexpr ::System::EventHandler*& System::Diagnostics::Process::__cordl_internal_get_onExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onExited;
}
constexpr ::System::EventHandler* const& System::Diagnostics::Process::__cordl_internal_get_onExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onExited;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_onExited(::System::EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onExited = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_exited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exited;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_exited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exited;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_exited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exited = value;
}
constexpr int32_t& System::Diagnostics::Process::__cordl_internal_get_exitCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitCode;
}
constexpr int32_t const& System::Diagnostics::Process::__cordl_internal_get_exitCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitCode;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_exitCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exitCode = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_signaled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signaled;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_signaled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signaled;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_signaled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signaled = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_haveExitTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveExitTime;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_haveExitTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveExitTime;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_haveExitTime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveExitTime = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_raisedOnExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raisedOnExited;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_raisedOnExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raisedOnExited;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_raisedOnExited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raisedOnExited = value;
}
constexpr ::System::Threading::RegisteredWaitHandle*& System::Diagnostics::Process::__cordl_internal_get_registeredWaitHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registeredWaitHandle;
}
constexpr ::System::Threading::RegisteredWaitHandle* const& System::Diagnostics::Process::__cordl_internal_get_registeredWaitHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registeredWaitHandle;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_registeredWaitHandle(::System::Threading::RegisteredWaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___registeredWaitHandle = value;
}
constexpr ::System::Threading::WaitHandle*& System::Diagnostics::Process::__cordl_internal_get_waitHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waitHandle;
}
constexpr ::System::Threading::WaitHandle* const& System::Diagnostics::Process::__cordl_internal_get_waitHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waitHandle;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_waitHandle(::System::Threading::WaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___waitHandle = value;
}
constexpr ::System::ComponentModel::ISynchronizeInvoke*& System::Diagnostics::Process::__cordl_internal_get_synchronizingObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synchronizingObject;
}
constexpr ::System::ComponentModel::ISynchronizeInvoke* const& System::Diagnostics::Process::__cordl_internal_get_synchronizingObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synchronizingObject;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_synchronizingObject(::System::ComponentModel::ISynchronizeInvoke* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___synchronizingObject = value;
}
constexpr ::System::IO::StreamReader*& System::Diagnostics::Process::__cordl_internal_get_standardOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardOutput;
}
constexpr ::System::IO::StreamReader* const& System::Diagnostics::Process::__cordl_internal_get_standardOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardOutput;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_standardOutput(::System::IO::StreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___standardOutput = value;
}
constexpr ::System::IO::StreamWriter*& System::Diagnostics::Process::__cordl_internal_get_standardInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardInput;
}
constexpr ::System::IO::StreamWriter* const& System::Diagnostics::Process::__cordl_internal_get_standardInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardInput;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_standardInput(::System::IO::StreamWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___standardInput = value;
}
constexpr ::System::IO::StreamReader*& System::Diagnostics::Process::__cordl_internal_get_standardError() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardError;
}
constexpr ::System::IO::StreamReader* const& System::Diagnostics::Process::__cordl_internal_get_standardError() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardError;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_standardError(::System::IO::StreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___standardError = value;
}
constexpr bool& System::Diagnostics::Process::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Diagnostics::Process::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::System::Diagnostics::Process_StreamReadMode& System::Diagnostics::Process::__cordl_internal_get_outputStreamReadMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputStreamReadMode;
}
constexpr ::System::Diagnostics::Process_StreamReadMode const& System::Diagnostics::Process::__cordl_internal_get_outputStreamReadMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputStreamReadMode;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_outputStreamReadMode(::System::Diagnostics::Process_StreamReadMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outputStreamReadMode = value;
}
constexpr ::System::Diagnostics::Process_StreamReadMode& System::Diagnostics::Process::__cordl_internal_get_errorStreamReadMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorStreamReadMode;
}
constexpr ::System::Diagnostics::Process_StreamReadMode const& System::Diagnostics::Process::__cordl_internal_get_errorStreamReadMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorStreamReadMode;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_errorStreamReadMode(::System::Diagnostics::Process_StreamReadMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorStreamReadMode = value;
}
constexpr ::System::Diagnostics::Process_StreamReadMode& System::Diagnostics::Process::__cordl_internal_get_inputStreamReadMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputStreamReadMode;
}
constexpr ::System::Diagnostics::Process_StreamReadMode const& System::Diagnostics::Process::__cordl_internal_get_inputStreamReadMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputStreamReadMode;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_inputStreamReadMode(::System::Diagnostics::Process_StreamReadMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputStreamReadMode = value;
}
constexpr ::System::Diagnostics::AsyncStreamReader*& System::Diagnostics::Process::__cordl_internal_get_output() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___output;
}
constexpr ::System::Diagnostics::AsyncStreamReader* const& System::Diagnostics::Process::__cordl_internal_get_output() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___output;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_output(::System::Diagnostics::AsyncStreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___output = value;
}
constexpr ::System::Diagnostics::AsyncStreamReader*& System::Diagnostics::Process::__cordl_internal_get_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr ::System::Diagnostics::AsyncStreamReader* const& System::Diagnostics::Process::__cordl_internal_get_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_error(::System::Diagnostics::AsyncStreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___error = value;
}
constexpr ::StringW& System::Diagnostics::Process::__cordl_internal_get_process_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___process_name;
}
constexpr ::StringW const& System::Diagnostics::Process::__cordl_internal_get_process_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___process_name;
}
constexpr void System::Diagnostics::Process::__cordl_internal_set_process_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___process_name = value;
}
inline void System::Diagnostics::Process::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::Process::_ctor(::StringW machineName, bool isRemoteMachine, int32_t processId, ::System::Diagnostics::ProcessInfo* processInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Diagnostics::ProcessInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, machineName, isRemoteMachine, processId, processInfo);
}
inline bool System::Diagnostics::Process::get_Associated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_Associated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Diagnostics::Process::get_ExitCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_ExitCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Diagnostics::Process::get_HasExited() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_HasExited", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Diagnostics::ProcessThreadTimes* System::Diagnostics::Process::GetProcessTimes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "GetProcessTimes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::ProcessThreadTimes*>(this, ___internal_method);
}
inline ::System::IntPtr System::Diagnostics::Process::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline int32_t System::Diagnostics::Process::get_Id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Diagnostics::ProcessStartInfo* System::Diagnostics::Process::get_StartInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_StartInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::ProcessStartInfo*>(this, ___internal_method);
}
inline void System::Diagnostics::Process::set_StartInfo(::System::Diagnostics::ProcessStartInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "set_StartInfo", {}, { ::i2c::type_of<::System::Diagnostics::ProcessStartInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::ComponentModel::ISynchronizeInvoke* System::Diagnostics::Process::get_SynchronizingObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_SynchronizingObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISynchronizeInvoke*>(this, ___internal_method);
}
inline ::System::TimeSpan System::Diagnostics::Process::get_TotalProcessorTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_TotalProcessorTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::IO::StreamReader* System::Diagnostics::Process::get_StandardOutput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_StandardOutput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::StreamReader*>(this, ___internal_method);
}
inline ::System::IO::StreamReader* System::Diagnostics::Process::get_StandardError() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_StandardError", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::StreamReader*>(this, ___internal_method);
}
inline void System::Diagnostics::Process::ReleaseProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "ReleaseProcessHandle", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void System::Diagnostics::Process::CompletionCallback(::System::Object* context, bool wasSignaled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "CompletionCallback", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, wasSignaled);
}
inline void System::Diagnostics::Process::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::Process*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Diagnostics::Process::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::Process::EnsureState(::System::Diagnostics::Process_State state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "EnsureState", {}, { ::i2c::type_of<::System::Diagnostics::Process_State>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void System::Diagnostics::Process::EnsureWatchingForExit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "EnsureWatchingForExit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::GetProcessById(int32_t processId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "GetProcessById", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*>(nullptr, ___internal_method, processId);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::GetCurrentProcess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "GetCurrentProcess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*>(nullptr, ___internal_method);
}
inline void System::Diagnostics::Process::OnExited() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "OnExited", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* System::Diagnostics::Process::GetProcessHandle(int32_t access, bool throwIfExited) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "GetProcessHandle", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(this, ___internal_method, access, throwIfExited);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* System::Diagnostics::Process::GetProcessHandle(int32_t access) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "GetProcessHandle", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(this, ___internal_method, access);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* System::Diagnostics::Process::OpenProcessHandle(int32_t access) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "OpenProcessHandle", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(this, ___internal_method, access);
}
inline void System::Diagnostics::Process::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::Process::SetProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "SetProcessHandle", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, processHandle);
}
inline void System::Diagnostics::Process::SetProcessId(int32_t processId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "SetProcessId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, processId);
}
inline bool System::Diagnostics::Process::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::Start(::System::Diagnostics::ProcessStartInfo* startInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "Start", {}, { ::i2c::type_of<::System::Diagnostics::ProcessStartInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*>(nullptr, ___internal_method, startInfo);
}
inline void System::Diagnostics::Process::StopWatchingForExit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "StopWatchingForExit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::Process::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Diagnostics::Process*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Diagnostics::Process::WaitForExit(int32_t milliseconds) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "WaitForExit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, milliseconds);
}
inline void System::Diagnostics::Process::WaitForExit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "WaitForExit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Diagnostics::Process::_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { ".ctor", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle, id);
}
inline ::StringW System::Diagnostics::Process::ProcessName_icall(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "ProcessName_icall", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, handle);
}
inline ::StringW System::Diagnostics::Process::ProcessName_internal(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "ProcessName_internal", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, handle);
}
inline ::StringW System::Diagnostics::Process::get_ProcessName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_ProcessName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IntPtr System::Diagnostics::Process::GetProcess_internal(int32_t pid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "GetProcess_internal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, pid);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::GetProcessById(int32_t processId, ::StringW machineName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "GetProcessById", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*>(nullptr, ___internal_method, processId, machineName);
}
inline bool System::Diagnostics::Process::IsLocalMachine(::StringW machineName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "IsLocalMachine", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, machineName);
}
inline bool System::Diagnostics::Process::ShellExecuteEx_internal(::System::Diagnostics::ProcessStartInfo* startInfo, ::by_ref<::System::Diagnostics::Process_ProcInfo> procInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(),
                          { "ShellExecuteEx_internal", {}, { ::i2c::type_of<::System::Diagnostics::ProcessStartInfo*>(), ::i2c::type_of<::by_ref<::System::Diagnostics::Process_ProcInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, startInfo, procInfo);
}
inline bool System::Diagnostics::Process::CreateProcess_internal(::System::Diagnostics::ProcessStartInfo* startInfo, ::System::IntPtr stdin, ::System::IntPtr stdout, ::System::IntPtr stderr,
                                                                 ::by_ref<::System::Diagnostics::Process_ProcInfo> procInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(),
                                                           { "CreateProcess_internal",
                                                             {},
                                                             { ::i2c::type_of<::System::Diagnostics::ProcessStartInfo*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(),
                                                               ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::Diagnostics::Process_ProcInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, startInfo, stdin, stdout, stderr, procInfo);
}
inline bool System::Diagnostics::Process::StartWithShellExecuteEx(::System::Diagnostics::ProcessStartInfo* startInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "StartWithShellExecuteEx", {}, { ::i2c::type_of<::System::Diagnostics::ProcessStartInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, startInfo);
}
inline void System::Diagnostics::Process::CreatePipe(::by_ref<::System::IntPtr> read, ::by_ref<::System::IntPtr> write, bool writeDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(),
                                              { "CreatePipe", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<::by_ref<::System::IntPtr>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, read, write, writeDirection);
}
inline bool System::Diagnostics::Process::get_IsWindows() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "get_IsWindows", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Diagnostics::Process::StartWithCreateProcess(::System::Diagnostics::ProcessStartInfo* startInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "StartWithCreateProcess", {}, { ::i2c::type_of<::System::Diagnostics::ProcessStartInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, startInfo);
}
inline void System::Diagnostics::Process::FillUserInfo(::System::Diagnostics::ProcessStartInfo* startInfo, ::by_ref<::System::Diagnostics::Process_ProcInfo> procInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(),
                                       { "FillUserInfo", {}, { ::i2c::type_of<::System::Diagnostics::ProcessStartInfo*>(), ::i2c::type_of<::by_ref<::System::Diagnostics::Process_ProcInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startInfo, procInfo);
}
inline void System::Diagnostics::Process::RaiseOnExited() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::Process*>(), { "RaiseOnExited", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::Process*>());
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::New_ctor(::StringW machineName, bool isRemoteMachine, int32_t processId, ::System::Diagnostics::ProcessInfo* processInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::Process*>(machineName, isRemoteMachine, processId, processInfo));
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::New_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, int32_t id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::Process*>(handle, id));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Process::Process() {}
