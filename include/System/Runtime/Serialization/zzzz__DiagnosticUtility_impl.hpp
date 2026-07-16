#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/DiagnosticUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DiagnosticUtility_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/Runtime/Serialization/zzzz__DiagnosticUtility_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::DiagnosticUtility_DiagnosticTrace.TraceEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Object*>)>(&::System::Runtime::Serialization::DiagnosticUtility_DiagnosticTrace::TraceEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6176a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DiagnosticUtility_DiagnosticTrace*>(),
                                                                                           { "TraceEvent", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::DiagnosticUtility_DiagnosticTrace::TraceEvent(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DiagnosticUtility_DiagnosticTrace*>(),
                                                                                         { "TraceEvent", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DiagnosticUtility_DiagnosticTrace::DiagnosticUtility_DiagnosticTrace() {}
//  Writing Method size for method: ::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility.ThrowHelperError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Exception*)>(&::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility::ThrowHelperError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x616d854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility*>(),
                                                                                           { "ThrowHelperError", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility.ThrowHelperCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Exception*)>(&::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility::ThrowHelperCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6176a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility*>(),
                                                                                           { "ThrowHelperCallback", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility.ThrowHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Exception*, ::System::Diagnostics::TraceEventType)>(
    &::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility::ThrowHelper)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6176a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility*>(),
                                                             { "ThrowHelper", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Diagnostics::TraceEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility.ThrowHelperArgumentNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility::ThrowHelperArgumentNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6172eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility*>(),
                                                                                           { "ThrowHelperArgumentNull", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility.ThrowHelperFatal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::System::Exception*)>(
    &::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility::ThrowHelperFatal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6176b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility*>(),
                                                                                           { "ThrowHelperFatal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline ::System::Exception* System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility::ThrowHelperError(::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility*>(),
                                                                                         { "ThrowHelperError", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, e);
}
inline ::System::Exception* System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility::ThrowHelperCallback(::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility*>(),
                                                                                         { "ThrowHelperCallback", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, e);
}
inline ::System::Exception* System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility::ThrowHelper(::System::Exception* e, ::System::Diagnostics::TraceEventType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility*>(),
                                                           { "ThrowHelper", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Diagnostics::TraceEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, e, type);
}
inline ::System::Exception* System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility::ThrowHelperArgumentNull(::StringW arg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility*>(), { "ThrowHelperArgumentNull", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, arg);
}
inline ::System::Exception* System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility::ThrowHelperFatal(::StringW msg, ::System::Exception* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility*>(),
                                                                                         { "ThrowHelperFatal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, msg, e);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DiagnosticUtility_ExceptionUtility::DiagnosticUtility_ExceptionUtility() {}
inline void System::Runtime::Serialization::DiagnosticUtility::setStaticF_ShouldTraceError(bool value) {
  ::cordl_internals::setStaticField<bool, "ShouldTraceError", ::System::Runtime::Serialization::DiagnosticUtility*>(std::forward<bool>(value));
}
inline bool System::Runtime::Serialization::DiagnosticUtility::getStaticF_ShouldTraceError() {
  return ::cordl_internals::getStaticField<bool, "ShouldTraceError", ::System::Runtime::Serialization::DiagnosticUtility*>();
}
inline void System::Runtime::Serialization::DiagnosticUtility::setStaticF_ShouldTraceWarning(bool value) {
  ::cordl_internals::setStaticField<bool, "ShouldTraceWarning", ::System::Runtime::Serialization::DiagnosticUtility*>(std::forward<bool>(value));
}
inline bool System::Runtime::Serialization::DiagnosticUtility::getStaticF_ShouldTraceWarning() {
  return ::cordl_internals::getStaticField<bool, "ShouldTraceWarning", ::System::Runtime::Serialization::DiagnosticUtility*>();
}
inline void System::Runtime::Serialization::DiagnosticUtility::setStaticF_ShouldTraceInformation(bool value) {
  ::cordl_internals::setStaticField<bool, "ShouldTraceInformation", ::System::Runtime::Serialization::DiagnosticUtility*>(std::forward<bool>(value));
}
inline bool System::Runtime::Serialization::DiagnosticUtility::getStaticF_ShouldTraceInformation() {
  return ::cordl_internals::getStaticField<bool, "ShouldTraceInformation", ::System::Runtime::Serialization::DiagnosticUtility*>();
}
inline void System::Runtime::Serialization::DiagnosticUtility::setStaticF_ShouldTraceVerbose(bool value) {
  ::cordl_internals::setStaticField<bool, "ShouldTraceVerbose", ::System::Runtime::Serialization::DiagnosticUtility*>(std::forward<bool>(value));
}
inline bool System::Runtime::Serialization::DiagnosticUtility::getStaticF_ShouldTraceVerbose() {
  return ::cordl_internals::getStaticField<bool, "ShouldTraceVerbose", ::System::Runtime::Serialization::DiagnosticUtility*>();
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DiagnosticUtility::DiagnosticUtility() {}
