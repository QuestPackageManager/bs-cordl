#pragma once
// IWYU pragma private; include "Zenject/ZenjectAllowDuringValidationAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Zenject/zzzz__ZenjectAllowDuringValidationAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::ZenjectAllowDuringValidationAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::ZenjectAllowDuringValidationAttribute::*)()>(&::Zenject::ZenjectAllowDuringValidationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3ad7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectAllowDuringValidationAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::ZenjectAllowDuringValidationAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ZenjectAllowDuringValidationAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::ZenjectAllowDuringValidationAttribute* Zenject::ZenjectAllowDuringValidationAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ZenjectAllowDuringValidationAttribute*>());
}
// Ctor Parameters []
constexpr ::Zenject::ZenjectAllowDuringValidationAttribute::ZenjectAllowDuringValidationAttribute() {}
