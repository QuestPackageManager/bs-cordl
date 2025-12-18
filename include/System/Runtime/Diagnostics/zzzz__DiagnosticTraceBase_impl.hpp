#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/DiagnosticTraceBase.hpp"
#include "System/Diagnostics/zzzz__SourceLevels_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Diagnostics/zzzz__DiagnosticTraceBase_def.hpp"
#include "System/Diagnostics/zzzz__SourceLevels_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/Diagnostics/zzzz__TraceSource_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__TraceRecord_def.hpp"
#include "System/Runtime/zzzz__TraceEventLevel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UnhandledExceptionEventArgs_def.hpp"
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::StringW)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5fd6868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_LastFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::get_LastFailure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd690c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                               "get_LastFailure", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.set_LastFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::DateTime)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::set_LastFailure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd6914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "set_LastFailure",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.UnsafeRemoveDefaultTraceListener
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Diagnostics::TraceSource*)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::UnsafeRemoveDefaultTraceListener)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fd691c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "UnsafeRemoveDefaultTraceListener",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_TraceSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceSource* (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::get_TraceSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd6984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                               "get_TraceSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.SetTraceSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Diagnostics::TraceSource*)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::SetTraceSource)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fd698c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "SetTraceSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_HaveListeners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::get_HaveListeners)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd6a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                               "get_HaveListeners", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.FixLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::SourceLevels (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(
    ::System::Diagnostics::SourceLevels)>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::FixLevel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5fd6a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "FixLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::SourceLevels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.OnSetLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Diagnostics::SourceLevels)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::OnSetLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd6a80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.SetLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Diagnostics::SourceLevels)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::SetLevel)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5fd6a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "SetLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::SourceLevels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_Level
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::SourceLevels (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::get_Level)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fd6b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                               "get_Level", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_EventSourceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::get_EventSourceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd6bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                               "get_EventSourceName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.set_EventSourceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::StringW)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::set_EventSourceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd6bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "set_EventSourceName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_TracingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::get_TracingEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fd6bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                               "get_TracingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_ProcessName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::get_ProcessName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5fd6c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                               "get_ProcessName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_ProcessId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::get_ProcessId)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5fd6d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                               "get_ProcessId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.ShouldTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Runtime::TraceEventLevel)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::ShouldTrace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd6e80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.ShouldTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Diagnostics::TraceEventType)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::ShouldTrace)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5fd6e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "ShouldTrace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.ShouldTraceToTraceSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Runtime::TraceEventLevel)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::ShouldTraceToTraceSource)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fd37d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "ShouldTraceToTraceSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TraceEventLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.XmlEncode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::XmlEncode)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5fd6ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "XmlEncode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.AddDomainEventHandlersForCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::AddDomainEventHandlersForCleanup)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5fd7048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                 "AddDomainEventHandlersForCleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.ExitOrUnloadEventHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Object*, ::System::EventArgs*)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::ExitOrUnloadEventHandler)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd7200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "ExitOrUnloadEventHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.OnUnhandledException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Exception*)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::OnUnhandledException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.UnhandledExceptionHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(
    ::System::Object*, ::System::UnhandledExceptionEventArgs*)>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::UnhandledExceptionHandler)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fd72d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "UnhandledExceptionHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UnhandledExceptionEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.CreateSourceString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*)>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::CreateSourceString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5fd7384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "CreateSourceString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.CreateDefaultSourceString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*)>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::CreateDefaultSourceString)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5fd7468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "CreateDefaultSourceString",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.StackTraceString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Exception*)>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::StackTraceString)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5fd75b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "StackTraceString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.LogTraceFailure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::StringW, ::System::Exception*)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::LogTraceFailure)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x5fd783c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "LogTraceFailure", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.OnShutdownTracing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::OnShutdownTracing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.ShutdownTracing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::ShutdownTracing)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5fd7204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                               "ShutdownTracing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_CalledShutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::get_CalledShutdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd8148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                               "get_CalledShutdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.IsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::IsEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.TraceEventLogEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(
    ::System::Diagnostics::TraceEventType, ::System::Runtime::Diagnostics::TraceRecord*)>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::TraceEventLogEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_thisLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisLock;
}
constexpr ::System::Object* const& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_thisLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thisLock;
}
constexpr void System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_set_thisLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___thisLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_tracingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracingEnabled;
}
constexpr bool const& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_tracingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tracingEnabled;
}
constexpr void System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_set_tracingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tracingEnabled = value;
}
constexpr bool& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_calledShutdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calledShutdown;
}
constexpr bool const& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_calledShutdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___calledShutdown;
}
constexpr void System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_set_calledShutdown(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___calledShutdown = value;
}
constexpr bool& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_haveListeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveListeners;
}
constexpr bool const& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_haveListeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___haveListeners;
}
constexpr void System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_set_haveListeners(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___haveListeners = value;
}
constexpr ::System::Diagnostics::SourceLevels& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level;
}
constexpr ::System::Diagnostics::SourceLevels const& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___level;
}
constexpr void System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_set_level(::System::Diagnostics::SourceLevels value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___level = value;
}
constexpr ::StringW& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_TraceSourceName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TraceSourceName;
}
constexpr ::StringW const& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_TraceSourceName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TraceSourceName;
}
constexpr void System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_set_TraceSourceName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TraceSourceName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Diagnostics::TraceSource*& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_traceSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___traceSource;
}
constexpr ::System::Diagnostics::TraceSource* const& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_traceSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___traceSource;
}
constexpr void System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_set_traceSource(::System::Diagnostics::TraceSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___traceSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_eventSourceName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventSourceName;
}
constexpr ::StringW const& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get_eventSourceName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventSourceName;
}
constexpr void System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_set_eventSourceName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___eventSourceName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get__LastFailure_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastFailure_k__BackingField;
}
constexpr ::System::DateTime const& System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_get__LastFailure_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastFailure_k__BackingField;
}
constexpr void System::Runtime::Diagnostics::DiagnosticTraceBase::__cordl_internal_set__LastFailure_k__BackingField(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastFailure_k__BackingField = value;
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::setStaticF_AppDomainFriendlyName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "AppDomainFriendlyName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Diagnostics::DiagnosticTraceBase::getStaticF_AppDomainFriendlyName() {
  return ::cordl_internals::getStaticField<::StringW, "AppDomainFriendlyName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get>();
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::_ctor(::StringW traceSourceName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, traceSourceName);
}
inline ::System::DateTime System::Runtime::Diagnostics::DiagnosticTraceBase::get_LastFailure() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                             "get_LastFailure", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::set_LastFailure(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "set_LastFailure",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::UnsafeRemoveDefaultTraceListener(::System::Diagnostics::TraceSource* traceSource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "UnsafeRemoveDefaultTraceListener", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, traceSource);
}
inline ::System::Diagnostics::TraceSource* System::Runtime::Diagnostics::DiagnosticTraceBase::get_TraceSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                             "get_TraceSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceSource*, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::SetTraceSource(::System::Diagnostics::TraceSource* traceSource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "SetTraceSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, traceSource);
}
inline bool System::Runtime::Diagnostics::DiagnosticTraceBase::get_HaveListeners() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                             "get_HaveListeners", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Diagnostics::SourceLevels System::Runtime::Diagnostics::DiagnosticTraceBase::FixLevel(::System::Diagnostics::SourceLevels level) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "FixLevel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::SourceLevels>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::SourceLevels, false>(this, ___internal_method, level);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::OnSetLevel(::System::Diagnostics::SourceLevels level) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::SetLevel(::System::Diagnostics::SourceLevels level) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "SetLevel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::SourceLevels>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level);
}
inline ::System::Diagnostics::SourceLevels System::Runtime::Diagnostics::DiagnosticTraceBase::get_Level() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                             "get_Level", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::SourceLevels, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Diagnostics::DiagnosticTraceBase::get_EventSourceName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                             "get_EventSourceName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::set_EventSourceName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "set_EventSourceName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Runtime::Diagnostics::DiagnosticTraceBase::get_TracingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                             "get_TracingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Runtime::Diagnostics::DiagnosticTraceBase::get_ProcessName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                             "get_ProcessName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline int32_t System::Runtime::Diagnostics::DiagnosticTraceBase::get_ProcessId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                             "get_ProcessId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool System::Runtime::Diagnostics::DiagnosticTraceBase::ShouldTrace(::System::Runtime::TraceEventLevel level) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, level);
}
inline bool System::Runtime::Diagnostics::DiagnosticTraceBase::ShouldTrace(::System::Diagnostics::TraceEventType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "ShouldTrace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline bool System::Runtime::Diagnostics::DiagnosticTraceBase::ShouldTraceToTraceSource(::System::Runtime::TraceEventLevel level) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "ShouldTraceToTraceSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TraceEventLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, level);
}
inline ::StringW System::Runtime::Diagnostics::DiagnosticTraceBase::XmlEncode(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "XmlEncode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, text);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::AddDomainEventHandlersForCleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                             "AddDomainEventHandlersForCleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::ExitOrUnloadEventHandler(::System::Object* sender, ::System::EventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "ExitOrUnloadEventHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::OnUnhandledException(::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::UnhandledExceptionHandler(::System::Object* sender, ::System::UnhandledExceptionEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "UnhandledExceptionHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::UnhandledExceptionEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, args);
}
inline ::StringW System::Runtime::Diagnostics::DiagnosticTraceBase::CreateSourceString(::System::Object* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "CreateSourceString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, source);
}
inline ::StringW System::Runtime::Diagnostics::DiagnosticTraceBase::CreateDefaultSourceString(::System::Object* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "CreateDefaultSourceString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, source);
}
inline ::StringW System::Runtime::Diagnostics::DiagnosticTraceBase::StackTraceString(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "StackTraceString",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, exception);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::LogTraceFailure(::StringW traceString, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), "LogTraceFailure", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, traceString, exception);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::OnShutdownTracing() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::ShutdownTracing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                             "ShutdownTracing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Diagnostics::DiagnosticTraceBase::get_CalledShutdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(),
                                                                             "get_CalledShutdown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Diagnostics::DiagnosticTraceBase::IsEnabled() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::TraceEventLogEvent(::System::Diagnostics::TraceEventType type, ::System::Runtime::Diagnostics::TraceRecord* traceRecord) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::DiagnosticTraceBase*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, traceRecord);
}
inline ::System::Runtime::Diagnostics::DiagnosticTraceBase* System::Runtime::Diagnostics::DiagnosticTraceBase::New_ctor(::StringW traceSourceName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(traceSourceName));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::DiagnosticTraceBase::DiagnosticTraceBase() {}
