#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DecalScreenSpaceSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalNormalBlend_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::*)()>(
    &::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68adb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalNormalBlend& UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::__cordl_internal_get_normalBlend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalBlend;
}
constexpr ::UnityEngine::Rendering::Universal::DecalNormalBlend const& UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::__cordl_internal_get_normalBlend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalBlend;
}
constexpr void UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::__cordl_internal_set_normalBlend(::UnityEngine::Rendering::Universal::DecalNormalBlend value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalBlend = value;
}
inline void UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings::DecalScreenSpaceSettings() {}
