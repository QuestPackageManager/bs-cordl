#pragma once
// IWYU pragma private; include "System/Runtime/TraceLevelHelper.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/zzzz__TraceLevelHelper_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/Runtime/zzzz__TraceEventLevel_def.hpp"
#include "System/Runtime/zzzz__TraceEventOpcode_def.hpp"
//  Writing Method size for method: ::System::Runtime::TraceLevelHelper.GetTraceEventType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::TraceEventType (*)(::System::Runtime::TraceEventLevel)>(&::System::Runtime::TraceLevelHelper::GetTraceEventType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61821b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceLevelHelper*>(), { "GetTraceEventType", {}, { ::i2c::type_of<::System::Runtime::TraceEventLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::TraceLevelHelper.LookupSeverity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Runtime::TraceEventLevel, ::System::Runtime::TraceEventOpcode)>(&::System::Runtime::TraceLevelHelper::LookupSeverity)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6182238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceLevelHelper*>(),
                                                { "LookupSeverity", {}, { ::i2c::type_of<::System::Runtime::TraceEventLevel>(), ::i2c::type_of<::System::Runtime::TraceEventOpcode>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::TraceLevelHelper::setStaticF_EtwLevelToTraceEventType(::ArrayW<::System::Diagnostics::TraceEventType> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Diagnostics::TraceEventType>, "EtwLevelToTraceEventType", ::System::Runtime::TraceLevelHelper*>(
      std::forward<::ArrayW<::System::Diagnostics::TraceEventType>>(value));
}
inline ::ArrayW<::System::Diagnostics::TraceEventType> System::Runtime::TraceLevelHelper::getStaticF_EtwLevelToTraceEventType() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Diagnostics::TraceEventType>, "EtwLevelToTraceEventType", ::System::Runtime::TraceLevelHelper*>();
}
inline ::System::Diagnostics::TraceEventType System::Runtime::TraceLevelHelper::GetTraceEventType(::System::Runtime::TraceEventLevel level) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceLevelHelper*>(), { "GetTraceEventType", {}, { ::i2c::type_of<::System::Runtime::TraceEventLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceEventType>(nullptr, ___internal_method, level);
}
inline ::StringW System::Runtime::TraceLevelHelper::LookupSeverity(::System::Runtime::TraceEventLevel level, ::System::Runtime::TraceEventOpcode opcode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::TraceLevelHelper*>(),
                                                           { "LookupSeverity", {}, { ::i2c::type_of<::System::Runtime::TraceEventLevel>(), ::i2c::type_of<::System::Runtime::TraceEventOpcode>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, level, opcode);
}
// Ctor Parameters []
constexpr ::System::Runtime::TraceLevelHelper::TraceLevelHelper() {}
