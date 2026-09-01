#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DecalSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechniqueOption_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DBufferSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScreenSpaceSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DecalSettings::*)()>(&::UnityEngine::Rendering::Universal::DecalSettings::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68adb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalTechniqueOption& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_technique() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___technique;
}
constexpr ::UnityEngine::Rendering::Universal::DecalTechniqueOption const& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_technique() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___technique;
}
constexpr void UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_set_technique(::UnityEngine::Rendering::Universal::DecalTechniqueOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___technique = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_maxDrawDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDrawDistance;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_maxDrawDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDrawDistance;
}
constexpr void UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_set_maxDrawDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxDrawDistance = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_decalLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalLayers;
}
constexpr bool const& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_decalLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decalLayers;
}
constexpr void UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_set_decalLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decalLayers = value;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferSettings*& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_dBufferSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dBufferSettings;
}
constexpr ::UnityEngine::Rendering::Universal::DBufferSettings* const& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_dBufferSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dBufferSettings;
}
constexpr void UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_set_dBufferSettings(::UnityEngine::Rendering::Universal::DBufferSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dBufferSettings = value;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_screenSpaceSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSpaceSettings;
}
constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_get_screenSpaceSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSpaceSettings;
}
constexpr void UnityEngine::Rendering::Universal::DecalSettings::__cordl_internal_set_screenSpaceSettings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenSpaceSettings = value;
}
inline void UnityEngine::Rendering::Universal::DecalSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DecalSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DecalSettings* UnityEngine::Rendering::Universal::DecalSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DecalSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalSettings::DecalSettings() {}
