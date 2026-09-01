#pragma once
// IWYU pragma private; include "System\Runtime\TraceCore.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/zzzz__TraceCore_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EtwDiagnosticTrace_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventTraceActivity_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__TraceRecord_def.hpp"
#include "System/Runtime/zzzz__TracePayload_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::TraceCore.get_ResourceManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Resources::ResourceManager* (*)()>(&::System::Runtime::TraceCore::get_ResourceManager)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6187d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "get_ResourceManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.get_Culture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Runtime::TraceCore::get_Culture)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6187e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "get_Culture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.AppDomainUnloadIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::TraceCore::AppDomainUnloadIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6187ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "AppDomainUnloadIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.AppDomainUnload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::TraceCore::AppDomainUnload)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6187fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "AppDomainUnload",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(),
                                                                                                      ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledExceptionIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::TraceCore::HandledExceptionIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x61864b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "HandledExceptionIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::StringW, ::System::Exception*)>(
    &::System::Runtime::TraceCore::HandledException)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6186544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::TraceCore*>(),
                         { "HandledException", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.ThrowingExceptionIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::TraceCore::ThrowingExceptionIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6188534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "ThrowingExceptionIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.ThrowingException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::StringW, ::StringW, ::System::Exception*)>(
    &::System::Runtime::TraceCore::ThrowingException)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x61885c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "ThrowingException",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.UnhandledExceptionIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::TraceCore::UnhandledExceptionIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x61887f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "UnhandledExceptionIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.UnhandledException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::StringW, ::System::Exception*)>(
    &::System::Runtime::TraceCore::UnhandledException)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6188880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::TraceCore*>(),
            { "UnhandledException", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogCriticalIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::TraceCore::TraceCodeEventLogCriticalIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6188aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(),
                                                             { "TraceCodeEventLogCriticalIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogCritical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::System::Runtime::Diagnostics::TraceRecord*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogCritical)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x6188b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::TraceCore*>(),
            { "TraceCodeEventLogCritical", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogErrorIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::TraceCore::TraceCodeEventLogErrorIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6188e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "TraceCodeEventLogErrorIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::System::Runtime::Diagnostics::TraceRecord*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogError)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x6188ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::TraceCore*>(),
                         { "TraceCodeEventLogError", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogInfoIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::TraceCore::TraceCodeEventLogInfoIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x618914c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "TraceCodeEventLogInfoIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::System::Runtime::Diagnostics::TraceRecord*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogInfo)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x61891d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::TraceCore*>(),
                         { "TraceCodeEventLogInfo", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogVerboseIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::TraceCore::TraceCodeEventLogVerboseIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6189440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "TraceCodeEventLogVerboseIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogVerbose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::System::Runtime::Diagnostics::TraceRecord*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogVerbose)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x61894cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::TraceCore*>(),
            { "TraceCodeEventLogVerbose", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogWarningIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::TraceCore::TraceCodeEventLogWarningIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6189734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "TraceCodeEventLogWarningIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.TraceCodeEventLogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::System::Runtime::Diagnostics::TraceRecord*)>(
    &::System::Runtime::TraceCore::TraceCodeEventLogWarning)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x61897c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::TraceCore*>(),
            { "TraceCodeEventLogWarning", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledExceptionWarningIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::TraceCore::HandledExceptionWarningIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6185f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "HandledExceptionWarningIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledExceptionWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::StringW, ::System::Exception*)>(
    &::System::Runtime::TraceCore::HandledExceptionWarning)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6185fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::TraceCore*>(),
            { "HandledExceptionWarning", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.ActionItemScheduledIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::TraceCore::ActionItemScheduledIsEnabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6187380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "ActionItemScheduledIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.ActionItemCallbackInvokedIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::TraceCore::ActionItemCallbackInvokedIsEnabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6187324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(),
                                                             { "ActionItemCallbackInvokedIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledExceptionErrorIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::TraceCore::HandledExceptionErrorIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6185c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "HandledExceptionErrorIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledExceptionError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::StringW, ::System::Exception*)>(
    &::System::Runtime::TraceCore::HandledExceptionError)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6185d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::TraceCore*>(),
            { "HandledExceptionError", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledExceptionVerboseIsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*)>(&::System::Runtime::TraceCore::HandledExceptionVerboseIsEnabled)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6186204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "HandledExceptionVerboseIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.HandledExceptionVerbose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, ::StringW, ::System::Exception*)>(
    &::System::Runtime::TraceCore::HandledExceptionVerbose)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6186290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::TraceCore*>(),
            { "HandledExceptionVerbose", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.CreateEventDescriptors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Runtime::TraceCore::CreateEventDescriptors)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6189a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "CreateEventDescriptors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.EnsureEventDescriptors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Runtime::TraceCore::EnsureEventDescriptors)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6189e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "EnsureEventDescriptors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.IsEtwEventEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, int32_t)>(&::System::Runtime::TraceCore::IsEtwEventEnabled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6187f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(),
                                                             { "IsEtwEventEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.WriteEtwEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, int32_t, ::System::Runtime::Diagnostics::EventTraceActivity*, ::StringW, ::StringW,
                                                                ::StringW, ::StringW)>(&::System::Runtime::TraceCore::WriteEtwEvent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6188258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "WriteEtwEvent",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.WriteEtwEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, int32_t, ::System::Runtime::Diagnostics::EventTraceActivity*, ::StringW, ::StringW,
                                                                ::StringW)>(&::System::Runtime::TraceCore::WriteEtwEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6188468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "WriteEtwEvent",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<int32_t>(),
                                                                                                      ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(),
                                                                                                      ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.WriteEtwEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, int32_t, ::System::Runtime::Diagnostics::EventTraceActivity*, ::StringW,
                                                                ::StringW)>(&::System::Runtime::TraceCore::WriteEtwEvent)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6188d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(),
                                                             { "WriteEtwEvent",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceCore.WriteTraceSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Diagnostics::EtwDiagnosticTrace*, int32_t, ::StringW, ::System::Runtime::TracePayload)>(
    &::System::Runtime::TraceCore::WriteTraceSource)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x618839c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "WriteTraceSource",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<int32_t>(),
                                                                                                      ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::TracePayload>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::TraceCore::setStaticF_resourceManager(::System::Resources::ResourceManager* value) {
  ::cordl_internals::setStaticField<::System::Resources::ResourceManager*, "resourceManager", ::System::Runtime::TraceCore*>(std::forward<::System::Resources::ResourceManager*>(value));
}
inline ::System::Resources::ResourceManager* System::Runtime::TraceCore::getStaticF_resourceManager() {
  return ::cordl_internals::getStaticField<::System::Resources::ResourceManager*, "resourceManager", ::System::Runtime::TraceCore*>();
}
inline void System::Runtime::TraceCore::setStaticF_resourceCulture(::System::Globalization::CultureInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "resourceCulture", ::System::Runtime::TraceCore*>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Runtime::TraceCore::getStaticF_resourceCulture() {
  return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "resourceCulture", ::System::Runtime::TraceCore*>();
}
inline void System::Runtime::TraceCore::setStaticF_eventDescriptors(::ArrayW<::System::Runtime::Diagnostics::EventDescriptor> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Runtime::Diagnostics::EventDescriptor>, "eventDescriptors", ::System::Runtime::TraceCore*>(
      std::forward<::ArrayW<::System::Runtime::Diagnostics::EventDescriptor>>(value));
}
inline ::ArrayW<::System::Runtime::Diagnostics::EventDescriptor> System::Runtime::TraceCore::getStaticF_eventDescriptors() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Runtime::Diagnostics::EventDescriptor>, "eventDescriptors", ::System::Runtime::TraceCore*>();
}
inline void System::Runtime::TraceCore::setStaticF_syncLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "syncLock", ::System::Runtime::TraceCore*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Runtime::TraceCore::getStaticF_syncLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "syncLock", ::System::Runtime::TraceCore*>();
}
inline void System::Runtime::TraceCore::setStaticF_eventDescriptorsCreated(bool value) {
  ::cordl_internals::setStaticField<bool, "eventDescriptorsCreated", ::System::Runtime::TraceCore*>(std::forward<bool>(value));
}
inline bool System::Runtime::TraceCore::getStaticF_eventDescriptorsCreated() {
  return ::cordl_internals::getStaticField<bool, "eventDescriptorsCreated", ::System::Runtime::TraceCore*>();
}
inline ::System::Resources::ResourceManager* System::Runtime::TraceCore::get_ResourceManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "get_ResourceManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceManager*>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Runtime::TraceCore::get_Culture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "get_Culture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(nullptr, ___internal_method);
}
inline bool System::Runtime::TraceCore::AppDomainUnloadIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "AppDomainUnloadIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::AppDomainUnload(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW appdomainName, ::StringW processName, ::StringW processId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "AppDomainUnload",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::StringW>(),
                                                                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, appdomainName, processName, processId);
}
inline bool System::Runtime::TraceCore::HandledExceptionIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "HandledExceptionIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::HandledException(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(),
                          { "HandledException", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, param0, exception);
}
inline bool System::Runtime::TraceCore::ThrowingExceptionIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "ThrowingExceptionIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::ThrowingException(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::StringW param1, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "ThrowingException",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::StringW>(),
                                                                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, param0, param1, exception);
}
inline bool System::Runtime::TraceCore::UnhandledExceptionIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "UnhandledExceptionIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::UnhandledException(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::TraceCore*>(),
                       { "UnhandledException", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, param0, exception);
}
inline bool System::Runtime::TraceCore::TraceCodeEventLogCriticalIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "TraceCodeEventLogCriticalIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::TraceCodeEventLogCritical(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::TraceCore*>(),
          { "TraceCodeEventLogCritical", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, traceRecord);
}
inline bool System::Runtime::TraceCore::TraceCodeEventLogErrorIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "TraceCodeEventLogErrorIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::TraceCodeEventLogError(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::TraceCore*>(),
                       { "TraceCodeEventLogError", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, traceRecord);
}
inline bool System::Runtime::TraceCore::TraceCodeEventLogInfoIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "TraceCodeEventLogInfoIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::TraceCodeEventLogInfo(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(),
                          { "TraceCodeEventLogInfo", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, traceRecord);
}
inline bool System::Runtime::TraceCore::TraceCodeEventLogVerboseIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "TraceCodeEventLogVerboseIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::TraceCodeEventLogVerbose(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::TraceCore*>(),
                       { "TraceCodeEventLogVerbose", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, traceRecord);
}
inline bool System::Runtime::TraceCore::TraceCodeEventLogWarningIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "TraceCodeEventLogWarningIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::TraceCodeEventLogWarning(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::System::Runtime::Diagnostics::TraceRecord* traceRecord) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::TraceCore*>(),
                       { "TraceCodeEventLogWarning", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, traceRecord);
}
inline bool System::Runtime::TraceCore::HandledExceptionWarningIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "HandledExceptionWarningIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::HandledExceptionWarning(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::TraceCore*>(),
          { "HandledExceptionWarning", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, param0, exception);
}
inline bool System::Runtime::TraceCore::ActionItemScheduledIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "ActionItemScheduledIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace);
}
inline bool System::Runtime::TraceCore::ActionItemCallbackInvokedIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "ActionItemCallbackInvokedIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace);
}
inline bool System::Runtime::TraceCore::HandledExceptionErrorIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "HandledExceptionErrorIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::HandledExceptionError(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::TraceCore*>(),
          { "HandledExceptionError", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, param0, exception);
}
inline bool System::Runtime::TraceCore::HandledExceptionVerboseIsEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "HandledExceptionVerboseIsEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace);
}
inline void System::Runtime::TraceCore::HandledExceptionVerbose(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, ::StringW param0, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::TraceCore*>(),
          { "HandledExceptionVerbose", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, param0, exception);
}
inline void System::Runtime::TraceCore::CreateEventDescriptors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "CreateEventDescriptors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Runtime::TraceCore::EnsureEventDescriptors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "EnsureEventDescriptors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool System::Runtime::TraceCore::IsEtwEventEnabled(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(),
                                                           { "IsEtwEventEnabled", {}, { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace, eventIndex);
}
inline bool System::Runtime::TraceCore::WriteEtwEvent(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity* eventParam0,
                                                      ::StringW eventParam1, ::StringW eventParam2, ::StringW eventParam3, ::StringW eventParam4) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "WriteEtwEvent",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<int32_t>(),
                                                                                                    ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(), ::i2c::type_of<::StringW>(),
                                                                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace, eventIndex, eventParam0, eventParam1, eventParam2, eventParam3, eventParam4);
}
inline bool System::Runtime::TraceCore::WriteEtwEvent(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity* eventParam0,
                                                      ::StringW eventParam1, ::StringW eventParam2, ::StringW eventParam3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "WriteEtwEvent",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<int32_t>(),
                                                                                                    ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(), ::i2c::type_of<::StringW>(),
                                                                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace, eventIndex, eventParam0, eventParam1, eventParam2, eventParam3);
}
inline bool System::Runtime::TraceCore::WriteEtwEvent(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex, ::System::Runtime::Diagnostics::EventTraceActivity* eventParam0,
                                                      ::StringW eventParam1, ::StringW eventParam2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(),
                                                           { "WriteEtwEvent",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Runtime::Diagnostics::EventTraceActivity*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trace, eventIndex, eventParam0, eventParam1, eventParam2);
}
inline void System::Runtime::TraceCore::WriteTraceSource(::System::Runtime::Diagnostics::EtwDiagnosticTrace* trace, int32_t eventIndex, ::StringW description,
                                                         ::System::Runtime::TracePayload payload) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceCore*>(), { "WriteTraceSource",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(), ::i2c::type_of<int32_t>(),
                                                                                                    ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::TracePayload>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trace, eventIndex, description, payload);
}
// Ctor Parameters []
constexpr ::System::Runtime::TraceCore::TraceCore() {}
