#pragma once
// IWYU pragma private; include "System/FlagsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__FlagsAttribute_def.hpp"
//  Writing Method size for method: ::System::FlagsAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::FlagsAttribute::*)()>(&::System::FlagsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c2e530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::FlagsAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::FlagsAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::FlagsAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::FlagsAttribute* System::FlagsAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::FlagsAttribute*>());
}
// Ctor Parameters []
constexpr ::System::FlagsAttribute::FlagsAttribute() {}
