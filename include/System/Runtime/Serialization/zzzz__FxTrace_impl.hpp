#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\FxTrace.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__FxTrace_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EtwDiagnosticTrace_def.hpp"
#include "System/Runtime/Diagnostics/zzzz__EventDescriptor_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::FxTrace.get_Trace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Diagnostics::EtwDiagnosticTrace* (*)()>(&::System::Runtime::Serialization::FxTrace::get_Trace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x617c38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FxTrace*>(), { "get_Trace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FxTrace.IsEventEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Runtime::Serialization::FxTrace::IsEventEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x617c394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FxTrace*>(), { "IsEventEnabled", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FxTrace.UpdateEventDefinitions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::Runtime::Diagnostics::EventDescriptor>, ::ArrayW<uint16_t>)>(
    &::System::Runtime::Serialization::FxTrace::UpdateEventDefinitions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x617c39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FxTrace*>(),
                                         { "UpdateEventDefinitions", {}, { ::i2c::type_of<::ArrayW<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::ArrayW<uint16_t>>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::FxTrace::setStaticF_ShouldTraceError(bool value) {
  ::cordl_internals::setStaticField<bool, "ShouldTraceError", ::System::Runtime::Serialization::FxTrace*>(std::forward<bool>(value));
}
inline bool System::Runtime::Serialization::FxTrace::getStaticF_ShouldTraceError() {
  return ::cordl_internals::getStaticField<bool, "ShouldTraceError", ::System::Runtime::Serialization::FxTrace*>();
}
inline void System::Runtime::Serialization::FxTrace::setStaticF_ShouldTraceVerbose(bool value) {
  ::cordl_internals::setStaticField<bool, "ShouldTraceVerbose", ::System::Runtime::Serialization::FxTrace*>(std::forward<bool>(value));
}
inline bool System::Runtime::Serialization::FxTrace::getStaticF_ShouldTraceVerbose() {
  return ::cordl_internals::getStaticField<bool, "ShouldTraceVerbose", ::System::Runtime::Serialization::FxTrace*>();
}
inline ::System::Runtime::Diagnostics::EtwDiagnosticTrace* System::Runtime::Serialization::FxTrace::get_Trace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FxTrace*>(), { "get_Trace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Diagnostics::EtwDiagnosticTrace*>(nullptr, ___internal_method);
}
inline bool System::Runtime::Serialization::FxTrace::IsEventEnabled(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FxTrace*>(), { "IsEventEnabled", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, index);
}
inline void System::Runtime::Serialization::FxTrace::UpdateEventDefinitions(::ArrayW<::System::Runtime::Diagnostics::EventDescriptor> ed, ::ArrayW<uint16_t> events) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::FxTrace*>(),
                                       { "UpdateEventDefinitions", {}, { ::i2c::type_of<::ArrayW<::System::Runtime::Diagnostics::EventDescriptor>>(), ::i2c::type_of<::ArrayW<uint16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ed, events);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::FxTrace::FxTrace() {}
