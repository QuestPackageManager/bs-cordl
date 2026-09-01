#pragma once
// IWYU pragma private; include "System\Diagnostics\DebuggerBrowsableAttribute.hpp"
#include "System/Diagnostics/zzzz__DebuggerBrowsableState_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggerBrowsableAttribute_def.hpp"
#include "System/Diagnostics/zzzz__DebuggerBrowsableState_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DebuggerBrowsableAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::DebuggerBrowsableAttribute::*)(::System::Diagnostics::DebuggerBrowsableState)>(
    &::System::Diagnostics::DebuggerBrowsableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5be0ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DebuggerBrowsableAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Diagnostics::DebuggerBrowsableState>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Diagnostics::DebuggerBrowsableState& System::Diagnostics::DebuggerBrowsableAttribute::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::System::Diagnostics::DebuggerBrowsableState const& System::Diagnostics::DebuggerBrowsableAttribute::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::Diagnostics::DebuggerBrowsableAttribute::__cordl_internal_set_state(::System::Diagnostics::DebuggerBrowsableState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
inline void System::Diagnostics::DebuggerBrowsableAttribute::_ctor(::System::Diagnostics::DebuggerBrowsableState state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::DebuggerBrowsableAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Diagnostics::DebuggerBrowsableState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::Diagnostics::DebuggerBrowsableAttribute* System::Diagnostics::DebuggerBrowsableAttribute::New_ctor(::System::Diagnostics::DebuggerBrowsableState state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::DebuggerBrowsableAttribute*>(state));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DebuggerBrowsableAttribute::DebuggerBrowsableAttribute() {}
