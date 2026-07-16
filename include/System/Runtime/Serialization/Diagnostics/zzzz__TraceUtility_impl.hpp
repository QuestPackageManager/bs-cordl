#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Diagnostics/TraceUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Diagnostics/zzzz__TraceUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__TraceRecord_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Diagnostics::TraceUtility.Trace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Diagnostics::TraceEventType, int32_t, ::StringW)>(&::System::Runtime::Serialization::Diagnostics::TraceUtility::Trace)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x617e378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Diagnostics::TraceUtility*>(),
                                                             { "Trace", {}, { ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Diagnostics::TraceUtility.Trace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Diagnostics::TraceEventType, int32_t, ::StringW, ::System::Runtime::Diagnostics::TraceRecord*)>(
    &::System::Runtime::Serialization::Diagnostics::TraceUtility::Trace)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x617e3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Diagnostics::TraceUtility*>(),
                                                                                           { "Trace",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Diagnostics::TraceUtility.Trace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Diagnostics::TraceEventType, int32_t, ::StringW, ::System::Runtime::Diagnostics::TraceRecord*, ::System::Exception*)>(
    &::System::Runtime::Serialization::Diagnostics::TraceUtility::Trace)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x617e470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Diagnostics::TraceUtility*>(),
                                                             { "Trace",
                                                               {},
                                                               { ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::Diagnostics::TraceUtility::setStaticF_traceCodes(::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*, "traceCodes", ::System::Runtime::Serialization::Diagnostics::TraceUtility*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>* System::Runtime::Serialization::Diagnostics::TraceUtility::getStaticF_traceCodes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::StringW>*, "traceCodes", ::System::Runtime::Serialization::Diagnostics::TraceUtility*>();
}
inline void System::Runtime::Serialization::Diagnostics::TraceUtility::Trace(::System::Diagnostics::TraceEventType severity, int32_t traceCode, ::StringW traceDescription) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Diagnostics::TraceUtility*>(),
                                                           { "Trace", {}, { ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, severity, traceCode, traceDescription);
}
inline void System::Runtime::Serialization::Diagnostics::TraceUtility::Trace(::System::Diagnostics::TraceEventType severity, int32_t traceCode, ::StringW traceDescription,
                                                                             ::System::Runtime::Diagnostics::TraceRecord* record) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Diagnostics::TraceUtility*>(),
                                                                                         { "Trace",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, severity, traceCode, traceDescription, record);
}
inline void System::Runtime::Serialization::Diagnostics::TraceUtility::Trace(::System::Diagnostics::TraceEventType severity, int32_t traceCode, ::StringW traceDescription,
                                                                             ::System::Runtime::Diagnostics::TraceRecord* record, ::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Diagnostics::TraceUtility*>(),
                                                           { "Trace",
                                                             {},
                                                             { ::i2c::type_of<::System::Diagnostics::TraceEventType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Runtime::Diagnostics::TraceRecord*>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, severity, traceCode, traceDescription, record, exception);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Diagnostics::TraceUtility::TraceUtility() {}
