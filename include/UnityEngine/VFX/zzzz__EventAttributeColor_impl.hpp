#pragma once
// IWYU pragma private; include "UnityEngine/VFX/EventAttributeColor.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeVector3_impl.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeColor_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::EventAttributeColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::EventAttributeColor::*)()>(&::UnityEngine::VFX::EventAttributeColor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69cda38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeColor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::EventAttributeColor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeColor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::EventAttributeColor* UnityEngine::VFX::EventAttributeColor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::EventAttributeColor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::EventAttributeColor::EventAttributeColor() {}
