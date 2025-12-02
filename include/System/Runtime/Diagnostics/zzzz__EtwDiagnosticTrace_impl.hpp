#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/EtwDiagnosticTrace.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (*)()>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool::Take)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f71c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool*>::get(), "Take",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool.Return
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool::Return)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f749a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool*>::get(), "Return", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
inline void
System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool::setStaticF_freeStringBuilders(::System::Collections::Concurrent::ConcurrentQueue_1<::System::Text::StringBuilder*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::System::Text::StringBuilder*>*, "freeStringBuilders",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool*>::get>(
      std::forward<::System::Collections::Concurrent::ConcurrentQueue_1<::System::Text::StringBuilder*>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentQueue_1<::System::Text::StringBuilder*>* System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool::getStaticF_freeStringBuilders() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentQueue_1<::System::Text::StringBuilder*>*, "freeStringBuilders",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool*>::get>();
}
inline ::System::Text::StringBuilder* System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool::Take() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool*>::get(), "Take",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(nullptr, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool::Return(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool*>::get(), "Return", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb);
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::EtwDiagnosticTrace_StringBuilderPool::EtwDiagnosticTrace_StringBuilderPool() {}
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(::StringW, ::System::Guid)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::_ctor)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5f6a374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.get_DefaultEtwProviderId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)()>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::get_DefaultEtwProviderId)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f71218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                               "get_DefaultEtwProviderId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.get_EtwProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Diagnostics::EtwProvider* (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::get_EtwProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f71274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                               "get_EtwProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.get_IsEtwProviderEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::get_IsEtwProviderEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f6d86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                               "get_IsEtwProviderEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.get_RefreshState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::get_RefreshState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f6a70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                               "get_RefreshState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.set_RefreshState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(::System::Action*)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::set_RefreshState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f6a724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "set_RefreshState",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.get_EtwTracingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::get_EtwTracingEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f71208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                               "get_EtwTracingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.SetEnd2EndActivityTracingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(bool)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::SetEnd2EndActivityTracingEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f6acf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "SetEnd2EndActivityTracingEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.ShouldTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(::System::Runtime::TraceEventLevel)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::ShouldTrace)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f7127c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.ShouldTraceToEtw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(::System::Runtime::TraceEventLevel)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::ShouldTraceToEtw)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f712d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "ShouldTraceToEtw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TraceEventLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.WriteTraceSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(
    ::ByRef<::System::Runtime::Diagnostics::EventDescriptor>, ::StringW, ::System::Runtime::TracePayload)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteTraceSource)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5f6dca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "WriteTraceSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TracePayload>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.BuildTrace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ByRef<::System::Runtime::Diagnostics::EventDescriptor>, ::StringW, ::System::Runtime::TracePayload,
                                                                                                ::StringW)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::BuildTrace)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x5f7153c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "BuildTrace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TracePayload>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.GenerateLegacyTraceCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::System::Runtime::Diagnostics::EventDescriptor>, ::ByRef<::StringW>, ::ByRef<int32_t>)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::GenerateLegacyTraceCode)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5f712fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "GenerateLegacyTraceCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.GenerateMsdnTraceCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::GenerateMsdnTraceCode)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f71eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "GenerateMsdnTraceCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.LookupChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Runtime::TraceChannel)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::LookupChannel)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5f71d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "LookupChannel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TraceChannel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.GetSerializedPayload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::TracePayload (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(
    ::System::Object*, ::System::Runtime::Diagnostics::TraceRecord*, ::System::Exception*)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::GetSerializedPayload)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f6bb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "GetSerializedPayload", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.GetSerializedPayload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::TracePayload (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(
    ::System::Object*, ::System::Runtime::Diagnostics::TraceRecord*, ::System::Exception*, bool)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::GetSerializedPayload)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x5f71f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "GetSerializedPayload", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.IsEtwEventEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(
    ::ByRef<::System::Runtime::Diagnostics::EventDescriptor>, bool)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::IsEtwEventEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f6d88c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "IsEtwEventEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.CreateTraceSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::CreateTraceSource)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f70c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                               "CreateTraceSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.CreateEtwProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(::System::Guid)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::CreateEtwProvider)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5f70ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "CreateEtwProvider",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.OnShutdownTracing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::OnShutdownTracing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f7290c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.ShutdownTraceSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::ShutdownTraceSource)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5f72924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                               "ShutdownTraceSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.ShutdownEtwProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::ShutdownEtwProvider)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f72b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                               "ShutdownEtwProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.IsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)()>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::IsEnabled)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f72c04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.TraceEventLogEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(
    ::System::Diagnostics::TraceEventType, ::System::Runtime::Diagnostics::TraceRecord*)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::TraceEventLogEvent)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5f72cdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.OnUnhandledException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Diagnostics::EtwDiagnosticTrace::*)(::System::Exception*)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::OnUnhandledException)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f72ec4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.ExceptionToTraceString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Exception*, int32_t)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::ExceptionToTraceString)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x5f7251c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                               "ExceptionToTraceString", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.WriteExceptionToTraceString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::XmlTextWriter*, ::System::Exception*, int32_t, int32_t)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteExceptionToTraceString)> {
  constexpr static std::size_t size = 0xa70;
  constexpr static std::size_t addrs = 0x5f72f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "WriteExceptionToTraceString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTextWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.GetInnerException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Exception*, int32_t, int32_t)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::GetInnerException)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x5f74524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "GetInnerException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.GetExceptionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Exception*)>(&::System::Runtime::Diagnostics::EtwDiagnosticTrace::GetExceptionData)> {
  constexpr static std::size_t size = 0x9dc;
  constexpr static std::size_t addrs = 0x5f73b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "GetExceptionData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.WriteStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Xml::XmlTextWriter*, ::StringW, ::ByRef<int32_t>)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteStartElement)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f739f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "WriteStartElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTextWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::EtwDiagnosticTrace.WriteXmlElementString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Xml::XmlTextWriter*, ::StringW, ::StringW, ::ByRef<int32_t>)>(
    &::System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteXmlElementString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f73a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "WriteXmlElementString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTextWriter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___etwProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<::System::Guid, "ImmutableDefaultEtwProviderId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get>(
      std::forward<::System::Guid>(value));
}
inline ::System::Guid System::Runtime::Diagnostics::EtwDiagnosticTrace::getStaticF_ImmutableDefaultEtwProviderId() {
  return ::cordl_internals::getStaticField<::System::Guid, "ImmutableDefaultEtwProviderId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get>();
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::setStaticF_defaultEtwProviderId(::System::Guid value) {
  ::cordl_internals::setStaticField<::System::Guid, "defaultEtwProviderId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get>(
      std::forward<::System::Guid>(value));
}
inline ::System::Guid System::Runtime::Diagnostics::EtwDiagnosticTrace::getStaticF_defaultEtwProviderId() {
  return ::cordl_internals::getStaticField<::System::Guid, "defaultEtwProviderId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get>();
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::setStaticF_etwProviderCache(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "etwProviderCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Diagnostics::EtwDiagnosticTrace::getStaticF_etwProviderCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "etwProviderCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get>();
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::setStaticF_isVistaOrGreater(bool value) {
  ::cordl_internals::setStaticField<bool, "isVistaOrGreater", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get>(
      std::forward<bool>(value));
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::getStaticF_isVistaOrGreater() {
  return ::cordl_internals::getStaticField<bool, "isVistaOrGreater", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get>();
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::setStaticF_traceAnnotation(::System::Func_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::StringW>*, "traceAnnotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get>(
      std::forward<::System::Func_1<::StringW>*>(value));
}
inline ::System::Func_1<::StringW>* System::Runtime::Diagnostics::EtwDiagnosticTrace::getStaticF_traceAnnotation() {
  return ::cordl_internals::getStaticField<::System::Func_1<::StringW>*, "traceAnnotation",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get>();
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::setStaticF_transferEventDescriptor(::System::Runtime::Diagnostics::EventDescriptor value) {
  ::cordl_internals::setStaticField<::System::Runtime::Diagnostics::EventDescriptor, "transferEventDescriptor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get>(
      std::forward<::System::Runtime::Diagnostics::EventDescriptor>(value));
}
inline ::System::Runtime::Diagnostics::EventDescriptor System::Runtime::Diagnostics::EtwDiagnosticTrace::getStaticF_transferEventDescriptor() {
  return ::cordl_internals::getStaticField<::System::Runtime::Diagnostics::EventDescriptor, "transferEventDescriptor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get>();
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::_ctor(::StringW traceSourceName, ::System::Guid etwProviderId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, traceSourceName, etwProviderId);
}
inline ::System::Guid System::Runtime::Diagnostics::EtwDiagnosticTrace::get_DefaultEtwProviderId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                             "get_DefaultEtwProviderId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(nullptr, ___internal_method);
}
inline ::System::Runtime::Diagnostics::EtwProvider* System::Runtime::Diagnostics::EtwDiagnosticTrace::get_EtwProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                             "get_EtwProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Diagnostics::EtwProvider*, false>(this, ___internal_method);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::get_IsEtwProviderEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                             "get_IsEtwProviderEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Action* System::Runtime::Diagnostics::EtwDiagnosticTrace::get_RefreshState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                             "get_RefreshState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::set_RefreshState(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "set_RefreshState",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::get_EtwTracingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                             "get_EtwTracingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::SetEnd2EndActivityTracingEnabled(bool isEnd2EndTracingEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "SetEnd2EndActivityTracingEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isEnd2EndTracingEnabled);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::ShouldTrace(::System::Runtime::TraceEventLevel level) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, level);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::ShouldTraceToEtw(::System::Runtime::TraceEventLevel level) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "ShouldTraceToEtw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TraceEventLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, level);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteTraceSource(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::StringW description,
                                                                               ::System::Runtime::TracePayload payload) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "WriteTraceSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TracePayload>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventDescriptor, description, payload);
}
inline ::StringW System::Runtime::Diagnostics::EtwDiagnosticTrace::BuildTrace(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::StringW description,
                                                                              ::System::Runtime::TracePayload payload, ::StringW msdnTraceCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "BuildTrace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TracePayload>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, eventDescriptor, description, payload, msdnTraceCode);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::GenerateLegacyTraceCode(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, ::ByRef<::StringW> msdnTraceCode,
                                                                                      ::ByRef<int32_t> legacyEventId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "GenerateLegacyTraceCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventDescriptor, msdnTraceCode, legacyEventId);
}
inline ::StringW System::Runtime::Diagnostics::EtwDiagnosticTrace::GenerateMsdnTraceCode(::StringW traceSource, ::StringW traceCodeString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "GenerateMsdnTraceCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, traceSource, traceCodeString);
}
inline ::StringW System::Runtime::Diagnostics::EtwDiagnosticTrace::LookupChannel(::System::Runtime::TraceChannel traceChannel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "LookupChannel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TraceChannel>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, traceChannel);
}
inline ::System::Runtime::TracePayload System::Runtime::Diagnostics::EtwDiagnosticTrace::GetSerializedPayload(::System::Object* source, ::System::Runtime::Diagnostics::TraceRecord* traceRecord,
                                                                                                              ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "GetSerializedPayload", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::TracePayload, false>(this, ___internal_method, source, traceRecord, exception);
}
inline ::System::Runtime::TracePayload System::Runtime::Diagnostics::EtwDiagnosticTrace::GetSerializedPayload(::System::Object* source, ::System::Runtime::Diagnostics::TraceRecord* traceRecord,
                                                                                                              ::System::Exception* exception, bool getServiceReference) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "GetSerializedPayload", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::TracePayload, false>(this, ___internal_method, source, traceRecord, exception, getServiceReference);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::IsEtwEventEnabled(::ByRef<::System::Runtime::Diagnostics::EventDescriptor> eventDescriptor, bool fullCheck) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "IsEtwEventEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Runtime::Diagnostics::EventDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventDescriptor, fullCheck);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::CreateTraceSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                             "CreateTraceSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::CreateEtwProvider(::System::Guid etwProviderId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "CreateEtwProvider",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, etwProviderId);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::OnShutdownTracing() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::ShutdownTraceSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                             "ShutdownTraceSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::ShutdownEtwProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                             "ShutdownEtwProvider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::IsEnabled() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::TraceEventLogEvent(::System::Diagnostics::TraceEventType type, ::System::Runtime::Diagnostics::TraceRecord* traceRecord) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, traceRecord);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::OnUnhandledException(::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline ::StringW System::Runtime::Diagnostics::EtwDiagnosticTrace::ExceptionToTraceString(::System::Exception* exception, int32_t maxTraceStringLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                             "ExceptionToTraceString", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, exception, maxTraceStringLength);
}
inline void System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteExceptionToTraceString(::System::Xml::XmlTextWriter* xml, ::System::Exception* exception, int32_t remainingLength,
                                                                                          int32_t remainingAllowedRecursionDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "WriteExceptionToTraceString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTextWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xml, exception, remainingLength, remainingAllowedRecursionDepth);
}
inline ::StringW System::Runtime::Diagnostics::EtwDiagnosticTrace::GetInnerException(::System::Exception* exception, int32_t remainingLength, int32_t remainingAllowedRecursionDepth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "GetInnerException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, exception, remainingLength, remainingAllowedRecursionDepth);
}
inline ::StringW System::Runtime::Diagnostics::EtwDiagnosticTrace::GetExceptionData(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "GetExceptionData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, exception);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteStartElement(::System::Xml::XmlTextWriter* xml, ::StringW localName, ::ByRef<int32_t> remainingLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "WriteStartElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTextWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, xml, localName, remainingLength);
}
inline bool System::Runtime::Diagnostics::EtwDiagnosticTrace::WriteXmlElementString(::System::Xml::XmlTextWriter* xml, ::StringW localName, ::StringW value, ::ByRef<int32_t> remainingLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), "WriteXmlElementString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTextWriter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, xml, localName, value, remainingLength);
}
inline ::System::Runtime::Diagnostics::EtwDiagnosticTrace* System::Runtime::Diagnostics::EtwDiagnosticTrace::New_ctor(::StringW traceSourceName, ::System::Guid etwProviderId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(traceSourceName, etwProviderId));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::EtwDiagnosticTrace::EtwDiagnosticTrace() {}
