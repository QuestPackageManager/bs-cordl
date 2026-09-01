#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\NotKeyableAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__NotKeyableAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::NotKeyableAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::NotKeyableAttribute::*)()>(&::UnityEngine::Timeline::NotKeyableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69cb408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::NotKeyableAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::NotKeyableAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::NotKeyableAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::NotKeyableAttribute* UnityEngine::Timeline::NotKeyableAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::NotKeyableAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::NotKeyableAttribute::NotKeyableAttribute() {}
