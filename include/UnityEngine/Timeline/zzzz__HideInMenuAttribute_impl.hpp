#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/HideInMenuAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__HideInMenuAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::HideInMenuAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::HideInMenuAttribute::*)()>(&::UnityEngine::Timeline::HideInMenuAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c5c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::HideInMenuAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::HideInMenuAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::HideInMenuAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::HideInMenuAttribute* UnityEngine::Timeline::HideInMenuAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::HideInMenuAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::HideInMenuAttribute::HideInMenuAttribute() {}
