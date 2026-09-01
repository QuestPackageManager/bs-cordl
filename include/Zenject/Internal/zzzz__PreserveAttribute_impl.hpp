#pragma once
// IWYU pragma private; include "Zenject\Internal\PreserveAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Zenject/Internal/zzzz__PreserveAttribute_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::PreserveAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::Internal::PreserveAttribute::*)()>(&::Zenject::Internal::PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3d73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::PreserveAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::Internal::PreserveAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::Internal::PreserveAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::Internal::PreserveAttribute* Zenject::Internal::PreserveAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::Internal::PreserveAttribute*>());
}
// Ctor Parameters []
constexpr ::Zenject::Internal::PreserveAttribute::PreserveAttribute() {}
