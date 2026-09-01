#pragma once
// IWYU pragma private; include "Zenject\InjectLocalAttribute.hpp"
#include "Zenject/zzzz__InjectAttributeBase_impl.hpp"
#include "Zenject/zzzz__InjectLocalAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::InjectLocalAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InjectLocalAttribute::*)()>(&::Zenject::InjectLocalAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e3d778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectLocalAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::InjectLocalAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectLocalAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::InjectLocalAttribute* Zenject::InjectLocalAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InjectLocalAttribute*>());
}
// Ctor Parameters []
constexpr ::Zenject::InjectLocalAttribute::InjectLocalAttribute() {}
