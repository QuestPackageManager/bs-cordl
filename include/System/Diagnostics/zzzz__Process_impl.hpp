#pragma once
#include "System/ComponentModel/zzzz__Component_impl.hpp"
#include "System/Diagnostics/zzzz__Process_impl.hpp"
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
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::__Process__StreamReadMode::__Process__StreamReadMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::__Process__StreamReadMode::__Process__StreamReadMode() {}
constexpr ::System::Diagnostics::__Process__StreamReadMode System::Diagnostics::__Process__StreamReadMode::undefined{ static_cast<int32_t>(0x0) };
constexpr ::System::Diagnostics::__Process__StreamReadMode System::Diagnostics::__Process__StreamReadMode::syncMode{ static_cast<int32_t>(0x1) };
constexpr ::System::Diagnostics::__Process__StreamReadMode System::Diagnostics::__Process__StreamReadMode::asyncMode{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::__Process__State::__Process__State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::__Process__State::__Process__State() {}
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::HaveId{ static_cast<int32_t>(0x1) };
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::IsLocal{ static_cast<int32_t>(0x2) };
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::IsNt{ static_cast<int32_t>(0x4) };
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::HaveProcessInfo{ static_cast<int32_t>(0x8) };
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::Exited{ static_cast<int32_t>(0x10) };
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::Associated{ static_cast<int32_t>(0x20) };
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::IsWin2k{ static_cast<int32_t>(0x40) };
constexpr ::System::Diagnostics::__Process__State System::Diagnostics::__Process__State::HaveNtProcessInfo{ static_cast<int32_t>(0xc) };
// Ctor Parameters [CppParam { name: "process_handle", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "pid", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "envVariables", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "UserName", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "Domain", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Password", ty: "void*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "LoadUserProfile", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::__Process__ProcInfo::__Process__ProcInfo(void* process_handle, int32_t pid, ::ArrayW<::StringW, ::Array<::StringW>*> envVariables, ::StringW UserName,
                                                                          ::StringW Domain, void* Password, bool LoadUserProfile) noexcept {
  this->process_handle = process_handle;
  this->pid = pid;
  this->envVariables = envVariables;
  this->UserName = UserName;
  this->Domain = Domain;
  this->Password = Password;
  this->LoadUserProfile = LoadUserProfile;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::__Process__ProcInfo::__Process__ProcInfo() {}
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296ec58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::StringW, bool, int32_t, ::System::Diagnostics::ProcessInfo*)>(
    &::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x296ece0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Associated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Associated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x296ed7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_Associated",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_ExitCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_ExitCode)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x296ed9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_ExitCode",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_HasExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_HasExited)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x296f000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_HasExited",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessTimes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::ProcessThreadTimes* (::System::Diagnostics::Process::*)()>(
    &::System::Diagnostics::Process::GetProcessTimes)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x296fa68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessTimes",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Handle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x296fd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_Handle",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_Id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_Id)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x296cdcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_Id",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_StartInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::ProcessStartInfo* (::System::Diagnostics::Process::*)()>(
    &::System::Diagnostics::Process::get_StartInfo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x296fe24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_StartInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.set_StartInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::System::Diagnostics::ProcessStartInfo*)>(
    &::System::Diagnostics::Process::set_StartInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x296ff14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "set_StartInfo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_SynchronizingObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ISynchronizeInvoke* (::System::Diagnostics::Process::*)()>(
    &::System::Diagnostics::Process::get_SynchronizingObject)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x296ff74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                                                                               "get_SynchronizingObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_TotalProcessorTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_TotalProcessorTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2970114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_TotalProcessorTime",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_StandardOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StreamReader* (::System::Diagnostics::Process::*)()>(
    &::System::Diagnostics::Process::get_StandardOutput)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2970140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_StandardOutput",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_StandardError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::StreamReader* (::System::Diagnostics::Process::*)()>(
    &::System::Diagnostics::Process::get_StandardError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x29701dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_StandardError",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ReleaseProcessHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(
    &::System::Diagnostics::Process::ReleaseProcessHandle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2970278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ReleaseProcessHandle", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CompletionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::System::Object*, bool)>(
    &::System::Diagnostics::Process::CompletionCallback)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29702a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "CompletionCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(bool)>(&::System::Diagnostics::Process::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x29703cc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Close)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x297041c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "Close",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.EnsureState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::System::Diagnostics::__Process__State)>(
    &::System::Diagnostics::Process::EnsureState)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x296eec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "EnsureState", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::__Process__State>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.EnsureWatchingForExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::EnsureWatchingForExit)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2970588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "EnsureWatchingForExit",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessById
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Process* (*)(int32_t)>(&::System::Diagnostics::Process::GetProcessById)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x29707bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessById", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetCurrentProcess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Process* (*)()>(&::System::Diagnostics::Process::GetCurrentProcess)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x296cd44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetCurrentProcess",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.OnExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::OnExited)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x29709dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "OnExited",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle* (::System::Diagnostics::Process::*)(int32_t, bool)>(
    &::System::Diagnostics::Process::GetProcessHandle)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x296f370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessHandle", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle* (::System::Diagnostics::Process::*)(int32_t)>(
    &::System::Diagnostics::Process::GetProcessHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2970c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessHandle", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.OpenProcessHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::SafeHandles::SafeProcessHandle* (::System::Diagnostics::Process::*)(int32_t)>(
    &::System::Diagnostics::Process::OpenProcessHandle)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x296fd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "OpenProcessHandle", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Refresh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2970574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "Refresh",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.SetProcessHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(
    &::System::Diagnostics::Process::SetProcessHandle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2970c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "SetProcessHandle", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.SetProcessId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(int32_t)>(&::System::Diagnostics::Process::SetProcessId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2970c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "SetProcessId", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::Start)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2970c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StopWatchingForExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::StopWatchingForExit)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x29702b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "StopWatchingForExit",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::ToString)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2972540;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, int32_t)>(
    &::System::Diagnostics::Process::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x29726ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ProcessName_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(void*)>(&::System::Diagnostics::Process::ProcessName_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x297273c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ProcessName_icall", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ProcessName_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(
    &::System::Diagnostics::Process::ProcessName_internal)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2972740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ProcessName_internal", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_ProcessName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::get_ProcessName)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x296cde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_ProcessName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcess_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(int32_t)>(&::System::Diagnostics::Process::GetProcess_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2972820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcess_internal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.GetProcessById
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Process* (*)(int32_t, ::StringW)>(&::System::Diagnostics::Process::GetProcessById)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2970804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessById", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.IsLocalMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Diagnostics::Process::IsLocalMachine)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2972824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "IsLocalMachine", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.ShellExecuteEx_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Diagnostics::ProcessStartInfo*, ByRef<::System::Diagnostics::__Process__ProcInfo>)>(
    &::System::Diagnostics::Process::ShellExecuteEx_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29728b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ShellExecuteEx_internal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CreateProcess_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Diagnostics::ProcessStartInfo*, void*, void*, void*, ByRef<::System::Diagnostics::__Process__ProcInfo>)>(&::System::Diagnostics::Process::CreateProcess_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29728b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "CreateProcess_internal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StartWithShellExecuteEx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)(::System::Diagnostics::ProcessStartInfo*)>(
    &::System::Diagnostics::Process::StartWithShellExecuteEx)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x2970da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "StartWithShellExecuteEx", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.CreatePipe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<void*>, ByRef<void*>, bool)>(&::System::Diagnostics::Process::CreatePipe)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2972a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "CreatePipe", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.get_IsWindows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Diagnostics::Process::get_IsWindows)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2972bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_IsWindows",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.StartWithCreateProcess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Diagnostics::Process::*)(::System::Diagnostics::ProcessStartInfo*)>(
    &::System::Diagnostics::Process::StartWithCreateProcess)> {
  constexpr static std::size_t size = 0x13d8;
  constexpr static std::size_t addrs = 0x2971168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "StartWithCreateProcess", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.FillUserInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Diagnostics::ProcessStartInfo*, ByRef<::System::Diagnostics::__Process__ProcInfo>)>(
    &::System::Diagnostics::Process::FillUserInfo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2972910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "FillUserInfo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Process.RaiseOnExited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::Process::*)()>(&::System::Diagnostics::Process::RaiseOnExited)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x296f988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "RaiseOnExited",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& System::Diagnostics::Process::__get_haveProcessId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveProcessId;
}
constexpr bool const& System::Diagnostics::Process::__get_haveProcessId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveProcessId;
}
constexpr void System::Diagnostics::Process::__set_haveProcessId(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveProcessId = value;
}
constexpr int32_t& System::Diagnostics::Process::__get_processId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processId;
}
constexpr int32_t const& System::Diagnostics::Process::__get_processId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processId;
}
constexpr void System::Diagnostics::Process::__set_processId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processId = value;
}
constexpr bool& System::Diagnostics::Process::__get_haveProcessHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveProcessHandle;
}
constexpr bool const& System::Diagnostics::Process::__get_haveProcessHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveProcessHandle;
}
constexpr void System::Diagnostics::Process::__set_haveProcessHandle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveProcessHandle = value;
}
constexpr ::Microsoft::Win32::SafeHandles::SafeProcessHandle*& System::Diagnostics::Process::__get_m_processHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_processHandle;
}
constexpr ::cordl_internals::to_const_pointer<::Microsoft::Win32::SafeHandles::SafeProcessHandle*> const& System::Diagnostics::Process::__get_m_processHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_processHandle;
}
constexpr void System::Diagnostics::Process::__set_m_processHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_processHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Diagnostics::Process::__get_isRemoteMachine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRemoteMachine;
}
constexpr bool const& System::Diagnostics::Process::__get_isRemoteMachine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRemoteMachine;
}
constexpr void System::Diagnostics::Process::__set_isRemoteMachine(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRemoteMachine = value;
}
constexpr ::StringW& System::Diagnostics::Process::__get_machineName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___machineName;
}
constexpr ::StringW const& System::Diagnostics::Process::__get_machineName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___machineName;
}
constexpr void System::Diagnostics::Process::__set_machineName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___machineName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Diagnostics::Process::__get_m_processAccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_processAccess;
}
constexpr int32_t const& System::Diagnostics::Process::__get_m_processAccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_processAccess;
}
constexpr void System::Diagnostics::Process::__set_m_processAccess(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_processAccess = value;
}
constexpr ::System::Diagnostics::ProcessThreadCollection*& System::Diagnostics::Process::__get_threads() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threads;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::ProcessThreadCollection*> const& System::Diagnostics::Process::__get_threads() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threads;
}
constexpr void System::Diagnostics::Process::__set_threads(::System::Diagnostics::ProcessThreadCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___threads)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Diagnostics::ProcessModuleCollection*& System::Diagnostics::Process::__get_modules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modules;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::ProcessModuleCollection*> const& System::Diagnostics::Process::__get_modules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modules;
}
constexpr void System::Diagnostics::Process::__set_modules(::System::Diagnostics::ProcessModuleCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___modules)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Diagnostics::Process::__get_haveWorkingSetLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveWorkingSetLimits;
}
constexpr bool const& System::Diagnostics::Process::__get_haveWorkingSetLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveWorkingSetLimits;
}
constexpr void System::Diagnostics::Process::__set_haveWorkingSetLimits(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveWorkingSetLimits = value;
}
constexpr bool& System::Diagnostics::Process::__get_havePriorityClass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___havePriorityClass;
}
constexpr bool const& System::Diagnostics::Process::__get_havePriorityClass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___havePriorityClass;
}
constexpr void System::Diagnostics::Process::__set_havePriorityClass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___havePriorityClass = value;
}
constexpr ::System::Diagnostics::ProcessStartInfo*& System::Diagnostics::Process::__get_startInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::ProcessStartInfo*> const& System::Diagnostics::Process::__get_startInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startInfo;
}
constexpr void System::Diagnostics::Process::__set_startInfo(::System::Diagnostics::ProcessStartInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Diagnostics::Process::__get_watchForExit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___watchForExit;
}
constexpr bool const& System::Diagnostics::Process::__get_watchForExit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___watchForExit;
}
constexpr void System::Diagnostics::Process::__set_watchForExit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___watchForExit = value;
}
constexpr bool& System::Diagnostics::Process::__get_watchingForExit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___watchingForExit;
}
constexpr bool const& System::Diagnostics::Process::__get_watchingForExit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___watchingForExit;
}
constexpr void System::Diagnostics::Process::__set_watchingForExit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___watchingForExit = value;
}
constexpr ::System::EventHandler*& System::Diagnostics::Process::__get_onExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onExited;
}
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler*> const& System::Diagnostics::Process::__get_onExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onExited;
}
constexpr void System::Diagnostics::Process::__set_onExited(::System::EventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onExited)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Diagnostics::Process::__get_exited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exited;
}
constexpr bool const& System::Diagnostics::Process::__get_exited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exited;
}
constexpr void System::Diagnostics::Process::__set_exited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exited = value;
}
constexpr int32_t& System::Diagnostics::Process::__get_exitCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitCode;
}
constexpr int32_t const& System::Diagnostics::Process::__get_exitCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exitCode;
}
constexpr void System::Diagnostics::Process::__set_exitCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exitCode = value;
}
constexpr bool& System::Diagnostics::Process::__get_signaled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signaled;
}
constexpr bool const& System::Diagnostics::Process::__get_signaled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___signaled;
}
constexpr void System::Diagnostics::Process::__set_signaled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___signaled = value;
}
constexpr bool& System::Diagnostics::Process::__get_haveExitTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveExitTime;
}
constexpr bool const& System::Diagnostics::Process::__get_haveExitTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveExitTime;
}
constexpr void System::Diagnostics::Process::__set_haveExitTime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveExitTime = value;
}
constexpr bool& System::Diagnostics::Process::__get_raisedOnExited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raisedOnExited;
}
constexpr bool const& System::Diagnostics::Process::__get_raisedOnExited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___raisedOnExited;
}
constexpr void System::Diagnostics::Process::__set_raisedOnExited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___raisedOnExited = value;
}
constexpr ::System::Threading::RegisteredWaitHandle*& System::Diagnostics::Process::__get_registeredWaitHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registeredWaitHandle;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::RegisteredWaitHandle*> const& System::Diagnostics::Process::__get_registeredWaitHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registeredWaitHandle;
}
constexpr void System::Diagnostics::Process::__set_registeredWaitHandle(::System::Threading::RegisteredWaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___registeredWaitHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::WaitHandle*& System::Diagnostics::Process::__get_waitHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waitHandle;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::WaitHandle*> const& System::Diagnostics::Process::__get_waitHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waitHandle;
}
constexpr void System::Diagnostics::Process::__set_waitHandle(::System::Threading::WaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___waitHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::ISynchronizeInvoke*& System::Diagnostics::Process::__get_synchronizingObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synchronizingObject;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ISynchronizeInvoke*> const& System::Diagnostics::Process::__get_synchronizingObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___synchronizingObject;
}
constexpr void System::Diagnostics::Process::__set_synchronizingObject(::System::ComponentModel::ISynchronizeInvoke* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___synchronizingObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::StreamReader*& System::Diagnostics::Process::__get_standardOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardOutput;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& System::Diagnostics::Process::__get_standardOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardOutput;
}
constexpr void System::Diagnostics::Process::__set_standardOutput(::System::IO::StreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___standardOutput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::StreamWriter*& System::Diagnostics::Process::__get_standardInput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardInput;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamWriter*> const& System::Diagnostics::Process::__get_standardInput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardInput;
}
constexpr void System::Diagnostics::Process::__set_standardInput(::System::IO::StreamWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___standardInput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::StreamReader*& System::Diagnostics::Process::__get_standardError() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardError;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& System::Diagnostics::Process::__get_standardError() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___standardError;
}
constexpr void System::Diagnostics::Process::__set_standardError(::System::IO::StreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___standardError)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Diagnostics::Process::__get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Diagnostics::Process::__get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Diagnostics::Process::__set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::System::Diagnostics::__Process__StreamReadMode& System::Diagnostics::Process::__get_outputStreamReadMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputStreamReadMode;
}
constexpr ::System::Diagnostics::__Process__StreamReadMode const& System::Diagnostics::Process::__get_outputStreamReadMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputStreamReadMode;
}
constexpr void System::Diagnostics::Process::__set_outputStreamReadMode(::System::Diagnostics::__Process__StreamReadMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outputStreamReadMode = value;
}
constexpr ::System::Diagnostics::__Process__StreamReadMode& System::Diagnostics::Process::__get_errorStreamReadMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorStreamReadMode;
}
constexpr ::System::Diagnostics::__Process__StreamReadMode const& System::Diagnostics::Process::__get_errorStreamReadMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorStreamReadMode;
}
constexpr void System::Diagnostics::Process::__set_errorStreamReadMode(::System::Diagnostics::__Process__StreamReadMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorStreamReadMode = value;
}
constexpr ::System::Diagnostics::__Process__StreamReadMode& System::Diagnostics::Process::__get_inputStreamReadMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputStreamReadMode;
}
constexpr ::System::Diagnostics::__Process__StreamReadMode const& System::Diagnostics::Process::__get_inputStreamReadMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inputStreamReadMode;
}
constexpr void System::Diagnostics::Process::__set_inputStreamReadMode(::System::Diagnostics::__Process__StreamReadMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inputStreamReadMode = value;
}
constexpr ::System::Diagnostics::AsyncStreamReader*& System::Diagnostics::Process::__get_output() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___output;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::AsyncStreamReader*> const& System::Diagnostics::Process::__get_output() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___output;
}
constexpr void System::Diagnostics::Process::__set_output(::System::Diagnostics::AsyncStreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___output)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Diagnostics::AsyncStreamReader*& System::Diagnostics::Process::__get_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::AsyncStreamReader*> const& System::Diagnostics::Process::__get_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr void System::Diagnostics::Process::__set_error(::System::Diagnostics::AsyncStreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___error)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Diagnostics::Process::__get_process_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___process_name;
}
constexpr ::StringW const& System::Diagnostics::Process::__get_process_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___process_name;
}
constexpr void System::Diagnostics::Process::__set_process_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___process_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::Process*>());
}
inline void System::Diagnostics::Process::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::New_ctor(::StringW machineName, bool isRemoteMachine, int32_t processId, ::System::Diagnostics::ProcessInfo* processInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::Process*>(machineName, isRemoteMachine, processId, processInfo));
}
inline void System::Diagnostics::Process::_ctor(::StringW machineName, bool isRemoteMachine, int32_t processId, ::System::Diagnostics::ProcessInfo* processInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, machineName, isRemoteMachine, processId, processInfo);
}
inline bool System::Diagnostics::Process::get_Associated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_Associated",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Diagnostics::Process::get_ExitCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_ExitCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Diagnostics::Process::get_HasExited() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_HasExited",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Diagnostics::ProcessThreadTimes* System::Diagnostics::Process::GetProcessTimes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessTimes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::ProcessThreadTimes*, false>(this, ___internal_method);
}
inline void* System::Diagnostics::Process::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_Handle",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method);
}
inline int32_t System::Diagnostics::Process::get_Id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_Id",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Diagnostics::ProcessStartInfo* System::Diagnostics::Process::get_StartInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_StartInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::ProcessStartInfo*, false>(this, ___internal_method);
}
inline void System::Diagnostics::Process::set_StartInfo(::System::Diagnostics::ProcessStartInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "set_StartInfo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::ComponentModel::ISynchronizeInvoke* System::Diagnostics::Process::get_SynchronizingObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_SynchronizingObject",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ISynchronizeInvoke*, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::Diagnostics::Process::get_TotalProcessorTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_TotalProcessorTime",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::System::IO::StreamReader* System::Diagnostics::Process::get_StandardOutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_StandardOutput",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::StreamReader*, false>(this, ___internal_method);
}
inline ::System::IO::StreamReader* System::Diagnostics::Process::get_StandardError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_StandardError",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::StreamReader*, false>(this, ___internal_method);
}
inline void System::Diagnostics::Process::ReleaseProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ReleaseProcessHandle", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline void System::Diagnostics::Process::CompletionCallback(::System::Object* context, bool wasSignaled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "CompletionCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, wasSignaled);
}
inline void System::Diagnostics::Process::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Diagnostics::Process::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "Close",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Diagnostics::Process::EnsureState(::System::Diagnostics::__Process__State state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "EnsureState", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::__Process__State>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void System::Diagnostics::Process::EnsureWatchingForExit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "EnsureWatchingForExit",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::GetProcessById(int32_t processId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessById", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*, false>(nullptr, ___internal_method, processId);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::GetCurrentProcess() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetCurrentProcess",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*, false>(nullptr, ___internal_method);
}
inline void System::Diagnostics::Process::OnExited() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "OnExited",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* System::Diagnostics::Process::GetProcessHandle(int32_t access, bool throwIfExited) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessHandle", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, false>(this, ___internal_method, access, throwIfExited);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* System::Diagnostics::Process::GetProcessHandle(int32_t access) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessHandle", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, false>(this, ___internal_method, access);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* System::Diagnostics::Process::OpenProcessHandle(int32_t access) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "OpenProcessHandle", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, false>(this, ___internal_method, access);
}
inline void System::Diagnostics::Process::Refresh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "Refresh",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Diagnostics::Process::SetProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "SetProcessHandle", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, processHandle);
}
inline void System::Diagnostics::Process::SetProcessId(int32_t processId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "SetProcessId", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, processId);
}
inline bool System::Diagnostics::Process::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Diagnostics::Process::StopWatchingForExit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "StopWatchingForExit",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Diagnostics::Process::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::New_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, int32_t id) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::Process*>(handle, id));
}
inline void System::Diagnostics::Process::_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle, id);
}
inline ::StringW System::Diagnostics::Process::ProcessName_icall(void* handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ProcessName_icall", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, handle);
}
inline ::StringW System::Diagnostics::Process::ProcessName_internal(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ProcessName_internal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, handle);
}
inline ::StringW System::Diagnostics::Process::get_ProcessName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_ProcessName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void* System::Diagnostics::Process::GetProcess_internal(int32_t pid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcess_internal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, pid);
}
inline ::System::Diagnostics::Process* System::Diagnostics::Process::GetProcessById(int32_t processId, ::StringW machineName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "GetProcessById", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::Process*, false>(nullptr, ___internal_method, processId, machineName);
}
inline bool System::Diagnostics::Process::IsLocalMachine(::StringW machineName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "IsLocalMachine", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, machineName);
}
inline bool System::Diagnostics::Process::ShellExecuteEx_internal(::System::Diagnostics::ProcessStartInfo* startInfo, ByRef<::System::Diagnostics::__Process__ProcInfo> procInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "ShellExecuteEx_internal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, startInfo, procInfo);
}
inline bool System::Diagnostics::Process::CreateProcess_internal(::System::Diagnostics::ProcessStartInfo* startInfo, void* stdin, void* stdout, void* stderr,
                                                                 ByRef<::System::Diagnostics::__Process__ProcInfo> procInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "CreateProcess_internal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, startInfo, stdin, stdout, stderr, procInfo);
}
inline bool System::Diagnostics::Process::StartWithShellExecuteEx(::System::Diagnostics::ProcessStartInfo* startInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "StartWithShellExecuteEx", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, startInfo);
}
inline void System::Diagnostics::Process::CreatePipe(ByRef<void*> read, ByRef<void*> write, bool writeDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "CreatePipe", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, read, write, writeDirection);
}
inline bool System::Diagnostics::Process::get_IsWindows() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "get_IsWindows",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Diagnostics::Process::StartWithCreateProcess(::System::Diagnostics::ProcessStartInfo* startInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "StartWithCreateProcess", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, startInfo);
}
inline void System::Diagnostics::Process::FillUserInfo(::System::Diagnostics::ProcessStartInfo* startInfo, ByRef<::System::Diagnostics::__Process__ProcInfo> procInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "FillUserInfo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::ProcessStartInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Diagnostics::__Process__ProcInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, startInfo, procInfo);
}
inline void System::Diagnostics::Process::RaiseOnExited() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Process*>::get(), "RaiseOnExited",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Process::Process() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
