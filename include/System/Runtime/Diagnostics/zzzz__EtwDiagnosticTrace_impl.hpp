#pragma once
// IWYU pragma private; include "System\Runtime\Diagnostics\EtwDiagnosticTrace.hpp"
#include "System/Runtime/Diagnostics/zzzz__DiagnosticTraceBase_impl.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Diagnostics/zzzz__EtwDiagnosticTrace_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EtwDiagnosticTrace_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EtwProvider_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__TraceRecord_def.hpp"
#include "System/Runtime/zzzz__TraceChannel_def.hpp"
#include "System/Runtime/zzzz__TraceEventLevel_def.hpp"
#include "System/Runtime/zzzz__TracePayload_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/zzzz__XmlTextWriter_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool.Take
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)()>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool::Take)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x618e370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool*>(), { "Take", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool.Return
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool::Return)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x619108c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool*>(),
                                                                                           { "Return", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
inline void
System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool::setStaticF_freeStringBuilders(::System::Collections::Concurrent::ConcurrentQueue_1<::System::Text::StringBuilder*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::System::Text::StringBuilder*>*, "freeStringBuilders",
                                    ::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool*>(
      std::forward<::System::Collections::Concurrent::ConcurrentQueue_1<::System::Text::StringBuilder*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Text::StringBuilder*>* System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool::getStaticF_freeStringBuilders() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::System::Text::StringBuilder*>*, "freeStringBuilders",
                                           ::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool*>();
}
inline ::System::Text::StringBuilder* System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool::Take() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool*>(), { "Take", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool::Return(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool*>(),
                                                                                         { "Return", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb);
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool::EtwDiagnosticTrace_StringBuilderPool() {}
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(::StringW, ::System::Guid)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::_ctor)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x6186a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.get_DefaultEtwProviderId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)()>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::get_DefaultEtwProviderId)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x618d8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "get_DefaultEtwProviderId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.get_EtwProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Diagnostics::EtwProvider* (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::get_EtwProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618d958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "get_EtwProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.get_IsEtwProviderEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::get_IsEtwProviderEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6189f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "get_IsEtwProviderEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.get_RefreshState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::get_RefreshState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6186df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "get_RefreshState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.set_RefreshState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(::System::Action*)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::set_RefreshState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6186e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "set_RefreshState", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.get_EtwTracingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::get_EtwTracingEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x618d8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "get_EtwTracingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.SetEnd2EndActivityTracingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(bool)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::SetEnd2EndActivityTracingEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61873dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "SetEnd2EndActivityTracingEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.ShouldTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(::System::Runtime::TraceEventLevel)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::ShouldTrace)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x618d960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.ShouldTraceToEtw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(::System::Runtime::TraceEventLevel)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::ShouldTraceToEtw)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x618d9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                                                           { "ShouldTraceToEtw", {}, { ::i2c::type_of<::System::Runtime::TraceEventLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.WriteTraceSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(
    ::by_ref<::System::Runtime::Diagnostics::EventDescriptor>, ::StringW, ::System::Runtime::TracePayload)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteTraceSource)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x618a38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                            { "WriteTraceSource",
                              {},
                              { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::TracePayload>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.BuildTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::System::Runtime::Diagnostics::EventDescriptor>, ::StringW, ::System::Runtime::TracePayload, ::StringW)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::BuildTrace)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x618dc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                                                           { "BuildTrace",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::System::Runtime::TracePayload>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.GenerateLegacyTraceCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Runtime::Diagnostics::EventDescriptor>, ::by_ref<::StringW>, ::by_ref<int32_t>)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::GenerateLegacyTraceCode)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x618d9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                            { "GenerateLegacyTraceCode",
                              {},
                              { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.GenerateMsdnTraceCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::GenerateMsdnTraceCode)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x618e598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                                                           { "GenerateMsdnTraceCode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.LookupChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Runtime::TraceChannel)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::LookupChannel)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x618e438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "LookupChannel", {}, { ::i2c::type_of<::System::Runtime::TraceChannel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.GetSerializedPayload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::TracePayload (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(
    ::System::Object*, ::System::Runtime::Diagnostics::TraceRecord*, ::System::Exception*)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::GetSerializedPayload)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6188220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
            { "GetSerializedPayload", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.GetSerializedPayload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::TracePayload (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(
    ::System::Object*, ::System::Runtime::Diagnostics::TraceRecord*, ::System::Exception*, bool)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::GetSerializedPayload)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x618e67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                                                           { "GetSerializedPayload",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>(),
                                                                                               ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.IsEtwEventEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(::by_ref<::System::Runtime::Diagnostics::EventDescriptor>, bool)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::IsEtwEventEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6189f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                             { "IsEtwEventEnabled", {}, { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.CreateTraceSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::CreateTraceSource)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x618d2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "CreateTraceSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.CreateEtwProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(::System::Guid)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::CreateEtwProvider)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x618d5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "CreateEtwProvider", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.OnShutdownTracing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::OnShutdownTracing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x618eff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.ShutdownTraceSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::ShutdownTraceSource)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x618f008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "ShutdownTraceSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.ShutdownEtwProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::ShutdownEtwProvider)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x618f224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "ShutdownEtwProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::IsEnabled)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x618f2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.TraceEventLogEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(
    ::System::Diagnostics::TraceEventType, ::System::Runtime::Diagnostics::TraceRecord*)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::TraceEventLogEvent)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x618f3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.OnUnhandledException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(::System::Exception*)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::OnUnhandledException)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x618f5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.ExceptionToTraceString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Exception*, int32_t)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::ExceptionToTraceString)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x618ec00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                                                           { "ExceptionToTraceString", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.WriteExceptionToTraceString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::XmlTextWriter*, ::System::Exception*, int32_t, int32_t)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteExceptionToTraceString)> {
  constexpr static std::size_t size = 0xa70;
  constexpr static std::size_t addrs = 0x618f66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
            { "WriteExceptionToTraceString", {}, { ::i2c::type_of<::System::Xml::XmlTextWriter*>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.GetInnerException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Exception*, int32_t, int32_t)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::GetInnerException)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x6190c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                             { "GetInnerException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.GetExceptionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Exception*)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::GetExceptionData)> {
  constexpr static std::size_t size = 0x9dc;
  constexpr static std::size_t addrs = 0x619022c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "GetExceptionData", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.WriteStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlTextWriter*, ::StringW, ::by_ref<int32_t>)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteStartElement)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61900dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                { "WriteStartElement", {}, { ::i2c::type_of<::System::Xml::XmlTextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.WriteXmlElementString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::XmlTextWriter*, ::StringW, ::StringW, ::by_ref<int32_t>)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteXmlElementString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6190144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
            { "WriteXmlElementString", {}, { ::i2c::type_of<::System::Xml::XmlTextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Diagnostics::EtwProvider*& System::Runtime::Diagnostics::EtwDiagnosticTrace::__cordl_internal_get_etwProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___etwProvider;
}
constexpr ::System::Runtime::Diagnostics::EtwProvider* const& System::Runtime::Diagnostics::EtwDiagnosticTrace::__cordl_internal_get_etwProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___etwProvider;
}
constexpr void System::Runtime::Diagnostics::EtwDiagnosticTrace::__cordl_internal_set_etwProvider(::System::Runtime::Diagnostics::EtwProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___etwProvider = value;
}
constexpr ::System::Guid& System::Runtime::Diagnostics::EtwDiagnosticTrace::__cordl_internal_get_etwProviderId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___etwProviderId;
}
constexpr ::System::Guid const& System::Runtime::Diagnostics::EtwDiagnosticTrace::__cordl_internal_get_etwProviderId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___etwProviderId;
}
constexpr void System::Runtime::Diagnostics::EtwDiagnosticTrace::__cordl_internal_set_etwProviderId(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___etwProviderId = value;
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::setStaticF_ImmutableDefaultEtwProviderId(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "ImmutableDefaultEtwProviderId", ::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid System::Runtime::Diagnostics::EtwDiagnosticTrace::getStaticF_ImmutableDefaultEtwProviderId() {
  return ::cordl_internals::getStaticField<::System::Guid, "ImmutableDefaultEtwProviderId", ::System::Runtime::Diagnostics::EtwDiagnosticTrace*>();
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::setStaticF_defaultEtwProviderId(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "defaultEtwProviderId", ::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid System::Runtime::Diagnostics::EtwDiagnosticTrace::getStaticF_defaultEtwProviderId() {
  return ::cordl_internals::getStaticField<::System::Guid, "defaultEtwProviderId", ::System::Runtime::Diagnostics::EtwDiagnosticTrace*>();
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::setStaticF_etwProviderCache(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "etwProviderCache", ::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Diagnostics::EtwDiagnosticTrace::getStaticF_etwProviderCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "etwProviderCache", ::System::Runtime::Diagnostics::EtwDiagnosticTrace*>();
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::setStaticF_isVistaOrGreater(bool value) {
  ::cordl_internals::setStaticField<bool, "isVistaOrGreater", ::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(std::forward<bool>(value));
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::getStaticF_isVistaOrGreater() {
  return ::cordl_internals::getStaticField<bool, "isVistaOrGreater", ::System::Runtime::Diagnostics::EtwDiagnosticTrace*>();
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::setStaticF_traceAnnotation(::System::Func_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::StringW>*, "traceAnnotation", ::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(std::forward<::System::Func_1<::StringW>*>(value));
}
inline ::System::Func_1<::StringW>* System::Runtime::Diagnostics::EtwDiagnosticTrace::getStaticF_traceAnnotation() {
  return ::cordl_internals::getStaticField<::System::Func_1<::StringW>*, "traceAnnotation", ::System::Runtime::Diagnostics::EtwDiagnosticTrace*>();
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::setStaticF_transferEventDescriptor(::System::Runtime::Diagnostics::EventDescriptor value) {
  ::cordl_internals::setStaticField<::System::Runtime::Diagnostics::EventDescriptor, "transferEventDescriptor", ::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(
      std::forward<::System::Runtime::Diagnostics::EventDescriptor>(value));
}
inline ::System::Runtime::Diagnostics::EventDescriptor System::Runtime::Diagnostics::EtwDiagnosticTrace::getStaticF_transferEventDescriptor() {
  return ::cordl_internals::getStaticField<::System::Runtime::Diagnostics::EventDescriptor, "transferEventDescriptor", ::System::Runtime::Diagnostics::EtwDiagnosticTrace*>();
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::_ctor(::StringW traceSourceName, ::System::Guid etwProviderId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, traceSourceName, etwProviderId);
}
inline ::System::Guid System::Runtime::Diagnostics::EtwDiagnosticTrace::get_DefaultEtwProviderId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "get_DefaultEtwProviderId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method);
}
inline ::System::Runtime::Diagnostics::EtwProvider* System::Runtime::Diagnostics::EtwDiagnosticTrace::get_EtwProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "get_EtwProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Diagnostics::EtwProvider*>(this, ___internal_method);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::get_IsEtwProviderEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "get_IsEtwProviderEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Action* System::Runtime::Diagnostics::EtwDiagnosticTrace::get_RefreshState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "get_RefreshState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::set_RefreshState(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "set_RefreshState", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::get_EtwTracingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "get_EtwTracingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::SetEnd2EndActivityTracingEnabled(bool isEnd2EndTracingEnabled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "SetEnd2EndActivityTracingEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEnd2EndTracingEnabled);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::ShouldTrace(::System::Runtime::TraceEventLevel level) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, level);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::ShouldTraceToEtw(::System::Runtime::TraceEventLevel level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "ShouldTraceToEtw", {}, { ::i2c::type_of<::System::Runtime::TraceEventLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, level);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteTraceSource(::by_ref<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::StringW description,
                                                                               ::System::Runtime::TracePayload payload) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                          { "WriteTraceSource",
                            {},
                            { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::TracePayload>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventDescriptor, description, payload);
}
inline ::StringW System::Runtime::Diagnostics::EtwDiagnosticTrace::BuildTrace(::by_ref<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::StringW description,
                                                                              ::System::Runtime::TracePayload payload, ::StringW msdnTraceCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                                                         { "BuildTrace",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::StringW>(),
                                                                                             ::i2c::type_of<::System::Runtime::TracePayload>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, eventDescriptor, description, payload, msdnTraceCode);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::GenerateLegacyTraceCode(::by_ref<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::by_ref<::StringW> msdnTraceCode,
                                                                                      ::by_ref<int32_t> legacyEventId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                          { "GenerateLegacyTraceCode",
                            {},
                            { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventDescriptor, msdnTraceCode, legacyEventId);
}
inline ::StringW System::Runtime::Diagnostics::EtwDiagnosticTrace::GenerateMsdnTraceCode(::StringW traceSource, ::StringW traceCodeString) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                                                         { "GenerateMsdnTraceCode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, traceSource, traceCodeString);
}
inline ::StringW System::Runtime::Diagnostics::EtwDiagnosticTrace::LookupChannel(::System::Runtime::TraceChannel traceChannel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "LookupChannel", {}, { ::i2c::type_of<::System::Runtime::TraceChannel>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, traceChannel);
}
inline ::System::Runtime::TracePayload System::Runtime::Diagnostics::EtwDiagnosticTrace::GetSerializedPayload(::System::Object* source, ::System::Runtime::Diagnostics::TraceRecord* traceRecord,
                                                                                                              ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
          { "GetSerializedPayload", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::TracePayload>(this, ___internal_method, source, traceRecord, exception);
}
inline ::System::Runtime::TracePayload System::Runtime::Diagnostics::EtwDiagnosticTrace::GetSerializedPayload(::System::Object* source, ::System::Runtime::Diagnostics::TraceRecord* traceRecord,
                                                                                                              ::System::Exception* exception, bool getServiceReference) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                                                         { "GetSerializedPayload",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>(),
                                                                                             ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::TracePayload>(this, ___internal_method, source, traceRecord, exception, getServiceReference);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::IsEtwEventEnabled(::by_ref<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, bool fullCheck) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                           { "IsEtwEventEnabled", {}, { ::i2c::type_of<::by_ref<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventDescriptor, fullCheck);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::CreateTraceSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "CreateTraceSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::CreateEtwProvider(::System::Guid etwProviderId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "CreateEtwProvider", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, etwProviderId);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::OnShutdownTracing() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::ShutdownTraceSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "ShutdownTraceSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::ShutdownEtwProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "ShutdownEtwProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::IsEnabled() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::TraceEventLogEvent(::System::Diagnostics::TraceEventType type, ::System::Runtime::Diagnostics::TraceRecord* traceRecord) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, traceRecord);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::OnUnhandledException(::System::Exception* exception) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline ::StringW System::Runtime::Diagnostics::EtwDiagnosticTrace::ExceptionToTraceString(::System::Exception* exception, int32_t maxTraceStringLength) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                                                         { "ExceptionToTraceString", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, exception, maxTraceStringLength);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteExceptionToTraceString(::System::Xml::XmlTextWriter* xml, ::System::Exception* exception, int32_t remainingLength,
                                                                                          int32_t remainingAllowedRecursionDepth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
          { "WriteExceptionToTraceString", {}, { ::i2c::type_of<::System::Xml::XmlTextWriter*>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xml, exception, remainingLength, remainingAllowedRecursionDepth);
}
inline ::StringW System::Runtime::Diagnostics::EtwDiagnosticTrace::GetInnerException(::System::Exception* exception, int32_t remainingLength, int32_t remainingAllowedRecursionDepth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                           { "GetInnerException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, exception, remainingLength, remainingAllowedRecursionDepth);
}
inline ::StringW System::Runtime::Diagnostics::EtwDiagnosticTrace::GetExceptionData(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), { "GetExceptionData", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, exception);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteStartElement(::System::Xml::XmlTextWriter* xml, ::StringW localName, ::by_ref<int32_t> remainingLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                              { "WriteStartElement", {}, { ::i2c::type_of<::System::Xml::XmlTextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, xml, localName, remainingLength);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteXmlElementString(::System::Xml::XmlTextWriter* xml, ::StringW localName, ::StringW value, ::by_ref<int32_t> remainingLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
          { "WriteXmlElementString", {}, { ::i2c::type_of<::System::Xml::XmlTextWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, xml, localName, value, remainingLength);
}
inline ::System::Runtime::Diagnostics::EtwDiagnosticTrace* System::Runtime::Diagnostics::EtwDiagnosticTrace::New_ctor(::StringW traceSourceName, ::System::Guid etwProviderId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(traceSourceName, etwProviderId));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::EtwDiagnosticTrace::EtwDiagnosticTrace() {}
