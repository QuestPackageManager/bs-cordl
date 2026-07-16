#pragma once
// IWYU pragma private; include "System/Diagnostics/DebuggerStepThroughAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggerStepThroughAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DebuggerStepThroughAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::DebuggerStepThroughAttribute::*)()>(&::System::Diagnostics::DebuggerStepThroughAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bde7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DebuggerStepThroughAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Diagnostics::DebuggerStepThroughAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DebuggerStepThroughAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Diagnostics::DebuggerStepThroughAttribute* System::Diagnostics::DebuggerStepThroughAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::DebuggerStepThroughAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DebuggerStepThroughAttribute::DebuggerStepThroughAttribute() {}
