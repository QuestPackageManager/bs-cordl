#pragma once
// IWYU pragma private; include "Zenject\InjectAttribute.hpp"
#include "Zenject/zzzz__InjectAttributeBase_impl.hpp"
#include "Zenject/zzzz__InjectAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::InjectAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::InjectAttribute::*)()>(&::Zenject::InjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3d774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::InjectAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::InjectAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::InjectAttribute* Zenject::InjectAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::InjectAttribute*>());
}
// Ctor Parameters []
constexpr ::Zenject::InjectAttribute::InjectAttribute() {}
