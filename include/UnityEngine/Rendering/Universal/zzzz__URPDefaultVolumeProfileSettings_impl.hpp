#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPDefaultVolumeProfileSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPDefaultVolumeProfileSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPDefaultVolumeProfileSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDefaultVolumeProfileSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version::URPDefaultVolumeProfileSettings_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version::URPDefaultVolumeProfileSettings_Version() {}
constexpr ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version::Initial{ static_cast<int32_t>(0x0) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::*)()>(
    &::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b4a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings.get_volumeProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeProfile> (::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::*)()>(
    &::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::get_volumeProfile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b4a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>(), { "get_volumeProfile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings.set_volumeProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::set_volumeProfile)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68b4a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>(),
                                                                                           { "set_volumeProfile", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::*)()>(
    &::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68b4ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version& UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version const&
UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::__cordl_internal_set_m_Version(::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::__cordl_internal_get_m_VolumeProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeProfile;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::__cordl_internal_get_m_VolumeProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VolumeProfile;
}
constexpr void UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::__cordl_internal_set_m_VolumeProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VolumeProfile = value;
}
inline int32_t UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::get_version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::get_volumeProfile() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>(), { "get_volumeProfile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeProfile>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::set_volumeProfile(::UnityEngine::Rendering::VolumeProfile* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>(),
                                                                                         { "set_volumeProfile", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings* UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDefaultVolumeProfileSettings"
constexpr UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::operator ::UnityEngine::Rendering::IDefaultVolumeProfileSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDefaultVolumeProfileSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDefaultVolumeProfileSettings"
constexpr ::UnityEngine::Rendering::IDefaultVolumeProfileSettings*
UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::i___UnityEngine__Rendering__IDefaultVolumeProfileSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IDefaultVolumeProfileSettings*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*
UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::URPDefaultVolumeProfileSettings::URPDefaultVolumeProfileSettings() {}
