#pragma once
// IWYU pragma private; include "System/EventArgs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__EventArgs_def.hpp"
//  Writing Method size for method: ::System::EventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::EventArgs::*)()>(&::System::EventArgs::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2e264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::EventArgs*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::EventArgs::setStaticF_Empty(::System::EventArgs* value) {
  ::cordl_internals::setStaticField<::System::EventArgs*, "Empty", ::System::EventArgs*>(std::forward<::System::EventArgs*>(value));
}
inline ::System::EventArgs* System::EventArgs::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::EventArgs*, "Empty", ::System::EventArgs*>();
}
inline void System::EventArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::EventArgs*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::EventArgs* System::EventArgs::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::EventArgs*>());
}
// Ctor Parameters []
constexpr ::System::EventArgs::EventArgs() {}
