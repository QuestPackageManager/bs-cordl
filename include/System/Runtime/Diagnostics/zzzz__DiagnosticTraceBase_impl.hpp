#pragma once
// IWYU pragma private; include "System\Runtime\Diagnostics\DiagnosticTraceBase.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::StringW)>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x618b3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_LastFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::get_LastFailure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618b464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_LastFailure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.set_LastFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::DateTime)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::set_LastFailure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618b46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "set_LastFailure", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.UnsafeRemoveDefaultTraceListener
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Diagnostics::TraceSource*)>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::UnsafeRemoveDefaultTraceListener)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x618b474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                                                           { "UnsafeRemoveDefaultTraceListener", {}, { ::i2c::type_of<::System::Diagnostics::TraceSource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_TraceSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::TraceSource* (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::get_TraceSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618b4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_TraceSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.SetTraceSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Diagnostics::TraceSource*)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::SetTraceSource)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x618b4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                                                           { "SetTraceSource", {}, { ::i2c::type_of<::System::Diagnostics::TraceSource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_HaveListeners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::get_HaveListeners)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618b590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_HaveListeners", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.FixLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::SourceLevels (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Diagnostics::SourceLevels)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::FixLevel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x618b598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "FixLevel", {}, { ::i2c::type_of<::System::Diagnostics::SourceLevels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.OnSetLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Diagnostics::SourceLevels)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::OnSetLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x618b5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.SetLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Diagnostics::SourceLevels)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::SetLevel)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x618b5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "SetLevel", {}, { ::i2c::type_of<::System::Diagnostics::SourceLevels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_Level
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::SourceLevels (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::get_Level)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x618b6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_Level", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_EventSourceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::get_EventSourceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618b744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_EventSourceName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.set_EventSourceName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::StringW)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::set_EventSourceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618b74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "set_EventSourceName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_TracingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::get_TracingEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x618b754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_TracingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_ProcessName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::get_ProcessName)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x618b774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_ProcessName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_ProcessId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::get_ProcessId)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x618b8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_ProcessId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.ShouldTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Runtime::TraceEventLevel)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::ShouldTrace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x618b9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.ShouldTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Diagnostics::TraceEventType)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::ShouldTrace)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x618b9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "ShouldTrace", {}, { ::i2c::type_of<::System::Diagnostics::TraceEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.ShouldTraceToTraceSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Runtime::TraceEventLevel)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::ShouldTraceToTraceSource)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x618832c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                                                           { "ShouldTraceToTraceSource", {}, { ::i2c::type_of<::System::Runtime::TraceEventLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.XmlEncode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::XmlEncode)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x618ba18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "XmlEncode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.AddDomainEventHandlersForCleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::AddDomainEventHandlersForCleanup)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x618bba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "AddDomainEventHandlersForCleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.ExitOrUnloadEventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Object*, ::System::EventArgs*)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::ExitOrUnloadEventHandler)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x618bd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                             { "ExitOrUnloadEventHandler", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.OnUnhandledException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Exception*)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::OnUnhandledException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.UnhandledExceptionHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::System::Object*, ::System::UnhandledExceptionEventArgs*)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::UnhandledExceptionHandler)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x618be30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                             { "UnhandledExceptionHandler", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::UnhandledExceptionEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.CreateSourceString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::CreateSourceString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x618bedc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "CreateSourceString", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.CreateDefaultSourceString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::CreateDefaultSourceString)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x618bfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "CreateDefaultSourceString", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.StackTraceString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Exception*)>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::StackTraceString)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x618c110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "StackTraceString", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.LogTraceFailure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(::StringW, ::System::Exception*)>(
    &::System::Runtime::Diagnostics::DiagnosticTraceBase::LogTraceFailure)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x618c394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                                                           { "LogTraceFailure", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.OnShutdownTracing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::OnShutdownTracing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.ShutdownTracing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::ShutdownTracing)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x618bd5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "ShutdownTracing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.get_CalledShutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::get_CalledShutdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618cca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_CalledShutdown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)()>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::IsEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DiagnosticTraceBase.TraceEventLogEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DiagnosticTraceBase::*)(
    ::System::Diagnostics::TraceEventType, ::System::Runtime::Diagnostics::TraceRecord*)>(&::System::Runtime::Diagnostics::DiagnosticTraceBase::TraceEventLogEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), 9 }));
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
  this->___thisLock = value;
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
  this->___TraceSourceName = value;
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
  this->___traceSource = value;
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
  this->___eventSourceName = value;
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
  ::cordl_internals::setStaticField<::StringW, "AppDomainFriendlyName", ::System::Runtime::Diagnostics::DiagnosticTraceBase*>(std::forward<::StringW>(value));
}
inline ::StringW System::Runtime::Diagnostics::DiagnosticTraceBase::getStaticF_AppDomainFriendlyName() {
  return ::cordl_internals::getStaticField<::StringW, "AppDomainFriendlyName", ::System::Runtime::Diagnostics::DiagnosticTraceBase*>();
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::_ctor(::StringW traceSourceName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, traceSourceName);
}
inline ::System::DateTime System::Runtime::Diagnostics::DiagnosticTraceBase::get_LastFailure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_LastFailure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::set_LastFailure(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "set_LastFailure", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::UnsafeRemoveDefaultTraceListener(::System::Diagnostics::TraceSource* traceSource) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                                                         { "UnsafeRemoveDefaultTraceListener", {}, { ::i2c::type_of<::System::Diagnostics::TraceSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, traceSource);
}
inline ::System::Diagnostics::TraceSource* System::Runtime::Diagnostics::DiagnosticTraceBase::get_TraceSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_TraceSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceSource*>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::SetTraceSource(::System::Diagnostics::TraceSource* traceSource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "SetTraceSource", {}, { ::i2c::type_of<::System::Diagnostics::TraceSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, traceSource);
}
inline bool System::Runtime::Diagnostics::DiagnosticTraceBase::get_HaveListeners() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_HaveListeners", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Diagnostics::SourceLevels System::Runtime::Diagnostics::DiagnosticTraceBase::FixLevel(::System::Diagnostics::SourceLevels level) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "FixLevel", {}, { ::i2c::type_of<::System::Diagnostics::SourceLevels>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::SourceLevels>(this, ___internal_method, level);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::OnSetLevel(::System::Diagnostics::SourceLevels level) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::SetLevel(::System::Diagnostics::SourceLevels level) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "SetLevel", {}, { ::i2c::type_of<::System::Diagnostics::SourceLevels>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline ::System::Diagnostics::SourceLevels System::Runtime::Diagnostics::DiagnosticTraceBase::get_Level() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_Level", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::SourceLevels>(this, ___internal_method);
}
inline ::StringW System::Runtime::Diagnostics::DiagnosticTraceBase::get_EventSourceName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_EventSourceName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::set_EventSourceName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "set_EventSourceName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Diagnostics::DiagnosticTraceBase::get_TracingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_TracingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Runtime::Diagnostics::DiagnosticTraceBase::get_ProcessName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_ProcessName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t System::Runtime::Diagnostics::DiagnosticTraceBase::get_ProcessId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_ProcessId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool System::Runtime::Diagnostics::DiagnosticTraceBase::ShouldTrace(::System::Runtime::TraceEventLevel level) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, level);
}
inline bool System::Runtime::Diagnostics::DiagnosticTraceBase::ShouldTrace(::System::Diagnostics::TraceEventType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "ShouldTrace", {}, { ::i2c::type_of<::System::Diagnostics::TraceEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline bool System::Runtime::Diagnostics::DiagnosticTraceBase::ShouldTraceToTraceSource(::System::Runtime::TraceEventLevel level) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                                                         { "ShouldTraceToTraceSource", {}, { ::i2c::type_of<::System::Runtime::TraceEventLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, level);
}
inline ::StringW System::Runtime::Diagnostics::DiagnosticTraceBase::XmlEncode(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "XmlEncode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::AddDomainEventHandlersForCleanup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "AddDomainEventHandlersForCleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::ExitOrUnloadEventHandler(::System::Object* sender, ::System::EventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                           { "ExitOrUnloadEventHandler", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::OnUnhandledException(::System::Exception* exception) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::UnhandledExceptionHandler(::System::Object* sender, ::System::UnhandledExceptionEventArgs* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                           { "UnhandledExceptionHandler", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::UnhandledExceptionEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, args);
}
inline ::StringW System::Runtime::Diagnostics::DiagnosticTraceBase::CreateSourceString(::System::Object* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "CreateSourceString", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, source);
}
inline ::StringW System::Runtime::Diagnostics::DiagnosticTraceBase::CreateDefaultSourceString(::System::Object* source) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "CreateDefaultSourceString", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, source);
}
inline ::StringW System::Runtime::Diagnostics::DiagnosticTraceBase::StackTraceString(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "StackTraceString", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, exception);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::LogTraceFailure(::StringW traceString, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(),
                                                                                         { "LogTraceFailure", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, traceString, exception);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::OnShutdownTracing() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::ShutdownTracing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "ShutdownTracing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Runtime::Diagnostics::DiagnosticTraceBase::get_CalledShutdown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), { "get_CalledShutdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Diagnostics::DiagnosticTraceBase::IsEnabled() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::DiagnosticTraceBase::TraceEventLogEvent(::System::Diagnostics::TraceEventType type, ::System::Runtime::Diagnostics::TraceRecord* traceRecord) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, traceRecord);
}
inline ::System::Runtime::Diagnostics::DiagnosticTraceBase* System::Runtime::Diagnostics::DiagnosticTraceBase::New_ctor(::StringW traceSourceName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Diagnostics::DiagnosticTraceBase*>(traceSourceName));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::DiagnosticTraceBase::DiagnosticTraceBase() {}
