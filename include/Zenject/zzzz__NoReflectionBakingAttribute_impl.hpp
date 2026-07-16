#pragma once
// IWYU pragma private; include "Zenject/NoReflectionBakingAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Zenject/zzzz__NoReflectionBakingAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::NoReflectionBakingAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::NoReflectionBakingAttribute::*)()>(&::Zenject::NoReflectionBakingAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3ad78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoReflectionBakingAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::NoReflectionBakingAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::NoReflectionBakingAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::NoReflectionBakingAttribute* Zenject::NoReflectionBakingAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::NoReflectionBakingAttribute*>());
}
// Ctor Parameters []
constexpr ::Zenject::NoReflectionBakingAttribute::NoReflectionBakingAttribute() {}
