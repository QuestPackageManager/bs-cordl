#pragma once
// IWYU pragma private; include "System/Runtime/TraceCore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/zzzz__TraceCore_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EtwDiagnosticTrace_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventTraceActivity_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__TraceRecord_def.hpp"
#include "System/Runtime/zzzz__TracePayload_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::TraceCore.get_ResourceManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::ResourceManager* (*)()>(&::System::Runtime::TraceCore::get_ResourceManager)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5f6b620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "get_ResourceManager",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.get_Culture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Runtime::TraceCore::get_Culture)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f6b760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "get_Culture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.AppDomainUnloadIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::TraceCore::AppDomainUnloadIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f6b7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "AppDomainUnloadIsEnabled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.AppDomainUnload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::TraceCore::AppDomainUnload)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5f6b908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "AppDomainUnload", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledExceptionIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::TraceCore::HandledExceptionIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f69dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledExceptionIsEnabled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::StringW, ::System::Exception*)>(
    &::System::Runtime::TraceCore::HandledException)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5f69e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.ThrowingExceptionIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::TraceCore::ThrowingExceptionIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f6be50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "ThrowingExceptionIsEnabled", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.ThrowingException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::StringW, ::StringW, ::System::Exception*)>(
    &::System::Runtime::TraceCore::ThrowingException)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5f6bedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "ThrowingException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.UnhandledExceptionIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::TraceCore::UnhandledExceptionIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f6c110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "UnhandledExceptionIsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.UnhandledException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::StringW, ::System::Exception*)>(
    &::System::Runtime::TraceCore::UnhandledException)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5f6c19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "UnhandledException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogCriticalIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogCriticalIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f6c3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogCriticalIsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogCritical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::System::Runtime::Diagnostics::TraceRecord*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogCritical)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5f6c450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogCritical", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogErrorIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogErrorIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f6c774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogErrorIsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::System::Runtime::Diagnostics::TraceRecord*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogError)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5f6c800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogError", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogInfoIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogInfoIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f6ca68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogInfoIsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::System::Runtime::Diagnostics::TraceRecord*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogInfo)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5f6caf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogInfo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogVerboseIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogVerboseIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f6cd5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogVerboseIsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogVerbose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::System::Runtime::Diagnostics::TraceRecord*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogVerbose)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5f6cde8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogVerbose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogWarningIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogWarningIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f6d050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogWarningIsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::System::Runtime::Diagnostics::TraceRecord*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogWarning)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5f6d0dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogWarning", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledExceptionWarningIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::TraceCore::HandledExceptionWarningIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f6986c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledExceptionWarningIsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledExceptionWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::StringW, ::System::Exception*)>(
    &::System::Runtime::TraceCore::HandledExceptionWarning)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5f698f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledExceptionWarning", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.ActionItemScheduledIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::TraceCore::ActionItemScheduledIsEnabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f6ac9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "ActionItemScheduledIsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.ActionItemCallbackInvokedIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::TraceCore::ActionItemCallbackInvokedIsEnabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f6ac40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "ActionItemCallbackInvokedIsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledExceptionErrorIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::TraceCore::HandledExceptionErrorIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f695b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledExceptionErrorIsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledExceptionError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::StringW, ::System::Exception*)>(
    &::System::Runtime::TraceCore::HandledExceptionError)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5f69644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledExceptionError", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledExceptionVerboseIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(
    &::System::Runtime::TraceCore::HandledExceptionVerboseIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f69b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledExceptionVerboseIsEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledExceptionVerbose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::StringW, ::System::Exception*)>(
    &::System::Runtime::TraceCore::HandledExceptionVerbose)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5f69bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledExceptionVerbose", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.CreateEventDescriptors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Runtime::TraceCore::CreateEventDescriptors)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5f6d344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "CreateEventDescriptors",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.EnsureEventDescriptors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Runtime::TraceCore::EnsureEventDescriptors)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5f6d71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "EnsureEventDescriptors",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.IsEtwEventEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, int32_t)>(
    &::System::Runtime::TraceCore::IsEtwEventEnabled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f6b848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "IsEtwEventEnabled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.WriteEtwEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, int32_t, ::System::Runtime::Diagnostics::EventTraceActivity*, ::StringW, ::StringW, ::StringW, ::StringW)>(
        &::System::Runtime::TraceCore::WriteEtwEvent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f6bb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "WriteEtwEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.WriteEtwEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, int32_t, ::System::Runtime::Diagnostics::EventTraceActivity*, ::StringW, ::StringW, ::StringW)>(
        &::System::Runtime::TraceCore::WriteEtwEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f6bd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "WriteEtwEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.WriteEtwEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::System::Runtime::Diagnostics::EtwDiagnosticTrace*, int32_t, ::System::Runtime::Diagnostics::EventTraceActivity*, ::StringW, ::StringW)>(&::System::Runtime::TraceCore::WriteEtwEvent)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f6c6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "WriteEtwEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.WriteTraceSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, int32_t, ::StringW, ::System::Runtime::TracePayload)>(
    &::System::Runtime::TraceCore::WriteTraceSource)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f6bcb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "WriteTraceSource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TracePayload>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::TraceCore::setStaticF_resourceManager(::System::Resources::ResourceManager* value) {
  ::cordl_internals::setStaticField<::System::Resources::ResourceManager*, "resourceManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get>(
      std::forward<::System::Resources::ResourceManager*>(value));
}
inline ::System::Resources::ResourceManager* System::Runtime::TraceCore::getStaticF_resourceManager() {
  return ::cordl_internals::getStaticField<::System::Resources::ResourceManager*, "resourceManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get>();
}
inline void System::Runtime::TraceCore::setStaticF_resourceCulture(::System::Globalization::CultureInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "resourceCulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get>(
      std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Runtime::TraceCore::getStaticF_resourceCulture() {
  return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "resourceCulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get>();
}
inline void System::Runtime::TraceCore::setStaticF_eventDescriptors(::ArrayW<::System::Runtime::Diagnostics::EventDescriptor, ::Array<::System::Runtime::Diagnostics::EventDescriptor>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Runtime::Diagnostics::EventDescriptor, ::Array<::System::Runtime::Diagnostics::EventDescriptor>*>, "eventDescriptors",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get>(
      std::forward<::ArrayW<::System::Runtime::Diagnostics::EventDescriptor, ::Array<::System::Runtime::Diagnostics::EventDescriptor>*>>(value));
}
inline ::ArrayW<::System::Runtime::Diagnostics::EventDescriptor, ::Array<::System::Runtime::Diagnostics::EventDescriptor>*> System::Runtime::TraceCore::getStaticF_eventDescriptors() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Runtime::Diagnostics::EventDescriptor, ::Array<::System::Runtime::Diagnostics::EventDescriptor>*>, "eventDescriptors",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get>();
}
inline void System::Runtime::TraceCore::setStaticF_syncLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "syncLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Runtime::TraceCore::getStaticF_syncLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "syncLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get>();
}
inline void System::Runtime::TraceCore::setStaticF_eventDescriptorsCreated(bool value) {
  ::cordl_internals::setStaticField<bool, "eventDescriptorsCreated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get>(std::forward<bool>(value));
}
inline bool System::Runtime::TraceCore::getStaticF_eventDescriptorsCreated() {
  return ::cordl_internals::getStaticField<bool, "eventDescriptorsCreated", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get>();
}
inline ::System::Resources::ResourceManager* System::Runtime::TraceCore::get_ResourceManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "get_ResourceManager",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceManager*, false>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Runtime::TraceCore::get_Culture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "get_Culture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method);
}
inline bool System::Runtime::TraceCore::AppDomainUnloadIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "AppDomainUnloadIsEnabled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::AppDomainUnload(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW appdomainName, ::StringW processName, ::StringW processId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "AppDomainUnload", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trace, appdomainName, processName, processId);
}
inline bool System::Runtime::TraceCore::HandledExceptionIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledExceptionIsEnabled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::HandledException(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledException", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trace, param0, exception);
}
inline bool System::Runtime::TraceCore::ThrowingExceptionIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "ThrowingExceptionIsEnabled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::ThrowingException(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::StringW param1, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "ThrowingException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trace, param0, param1, exception);
}
inline bool System::Runtime::TraceCore::UnhandledExceptionIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "UnhandledExceptionIsEnabled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::UnhandledException(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "UnhandledException", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trace, param0, exception);
}
inline bool System::Runtime::TraceCore::TraceCodeEventLogCriticalIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogCriticalIsEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::TraceCodeEventLogCritical(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogCritical", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trace, traceRecord);
}
inline bool System::Runtime::TraceCore::TraceCodeEventLogErrorIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogErrorIsEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::TraceCodeEventLogError(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogError", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trace, traceRecord);
}
inline bool System::Runtime::TraceCore::TraceCodeEventLogInfoIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogInfoIsEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::TraceCodeEventLogInfo(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogInfo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trace, traceRecord);
}
inline bool System::Runtime::TraceCore::TraceCodeEventLogVerboseIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogVerboseIsEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::TraceCodeEventLogVerbose(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogVerbose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trace, traceRecord);
}
inline bool System::Runtime::TraceCore::TraceCodeEventLogWarningIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogWarningIsEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::TraceCodeEventLogWarning(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "TraceCodeEventLogWarning", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::TraceRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trace, traceRecord);
}
inline bool System::Runtime::TraceCore::HandledExceptionWarningIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledExceptionWarningIsEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::HandledExceptionWarning(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledExceptionWarning", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trace, param0, exception);
}
inline bool System::Runtime::TraceCore::ActionItemScheduledIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "ActionItemScheduledIsEnabled", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace);
}
inline bool System::Runtime::TraceCore::ActionItemCallbackInvokedIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "ActionItemCallbackInvokedIsEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace);
}
inline bool System::Runtime::TraceCore::HandledExceptionErrorIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledExceptionErrorIsEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::HandledExceptionError(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledExceptionError", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trace, param0, exception);
}
inline bool System::Runtime::TraceCore::HandledExceptionVerboseIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledExceptionVerboseIsEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::HandledExceptionVerbose(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "HandledExceptionVerbose", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trace, param0, exception);
}
inline void System::Runtime::TraceCore::CreateEventDescriptors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "CreateEventDescriptors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::Runtime::TraceCore::EnsureEventDescriptors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "EnsureEventDescriptors",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool System::Runtime::TraceCore::IsEtwEventEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "IsEtwEventEnabled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace, eventIndex);
}
inline bool System::Runtime::TraceCore::WriteEtwEvent(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity* eventParam0,
                                                      ::StringW eventParam1, ::StringW eventParam2, ::StringW eventParam3, ::StringW eventParam4) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "WriteEtwEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace, eventIndex, eventParam0, eventParam1, eventParam2, eventParam3, eventParam4);
}
inline bool System::Runtime::TraceCore::WriteEtwEvent(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity* eventParam0,
                                                      ::StringW eventParam1, ::StringW eventParam2, ::StringW eventParam3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "WriteEtwEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace, eventIndex, eventParam0, eventParam1, eventParam2, eventParam3);
}
inline bool System::Runtime::TraceCore::WriteEtwEvent(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity* eventParam0,
                                                      ::StringW eventParam1, ::StringW eventParam2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "WriteEtwEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EventTraceActivity*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trace, eventIndex, eventParam0, eventParam1, eventParam2);
}
inline void System::Runtime::TraceCore::WriteTraceSource(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex, ::StringW description,
                                                         ::System::Runtime::TracePayload payload) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::TraceCore*>::get(), "WriteTraceSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::TracePayload>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trace, eventIndex, description, payload);
}
// Ctor Parameters []
constexpr ::System::Runtime::TraceCore::TraceCore() {}
