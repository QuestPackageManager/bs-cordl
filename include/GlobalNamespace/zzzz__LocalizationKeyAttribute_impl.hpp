#pragma once
// IWYU pragma private; include "GlobalNamespace\LocalizationKeyAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizationKeyAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizationKeyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizationKeyAttribute::*)()>(&::GlobalNamespace::LocalizationKeyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x330b464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizationKeyAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalizationKeyAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizationKeyAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalizationKeyAttribute* GlobalNamespace::LocalizationKeyAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalizationKeyAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizationKeyAttribute::LocalizationKeyAttribute() {}
