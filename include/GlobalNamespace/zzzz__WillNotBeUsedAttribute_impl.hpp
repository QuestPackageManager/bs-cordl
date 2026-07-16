#pragma once
// IWYU pragma private; include "GlobalNamespace/WillNotBeUsedAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__WillNotBeUsedAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WillNotBeUsedAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WillNotBeUsedAttribute::*)()>(&::GlobalNamespace::WillNotBeUsedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3309944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WillNotBeUsedAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WillNotBeUsedAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::WillNotBeUsedAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WillNotBeUsedAttribute* GlobalNamespace::WillNotBeUsedAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WillNotBeUsedAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WillNotBeUsedAttribute::WillNotBeUsedAttribute() {}
