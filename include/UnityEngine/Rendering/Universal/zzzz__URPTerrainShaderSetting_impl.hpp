#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPTerrainShaderSetting.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPTerrainShaderSetting_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPTerrainShaderSetting_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version::URPTerrainShaderSetting_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version::URPTerrainShaderSetting_Version() {}
constexpr ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version::Initial{ static_cast<int32_t>(0x0) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::URPTerrainShaderSetting::*)()>(
    &::UnityEngine::Rendering::Universal::URPTerrainShaderSetting::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cf14fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPTerrainShaderSetting*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting.get_includeTerrainShaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::URPTerrainShaderSetting::*)()>(
    &::UnityEngine::Rendering::Universal::URPTerrainShaderSetting::get_includeTerrainShaders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cf1504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPTerrainShaderSetting*>(), { "get_includeTerrainShaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting.set_includeTerrainShaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::URPTerrainShaderSetting::*)(bool)>(
    &::UnityEngine::Rendering::Universal::URPTerrainShaderSetting::set_includeTerrainShaders)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6cf150c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPTerrainShaderSetting*>(), { "set_includeTerrainShaders", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::URPTerrainShaderSetting::*)()>(
    &::UnityEngine::Rendering::Universal::URPTerrainShaderSetting::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6cf157c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPTerrainShaderSetting*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version& UnityEngine::Rendering::Universal::URPTerrainShaderSetting::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version const& UnityEngine::Rendering::Universal::URPTerrainShaderSetting::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::Universal::URPTerrainShaderSetting::__cordl_internal_set_m_Version(::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr bool& UnityEngine::Rendering::Universal::URPTerrainShaderSetting::__cordl_internal_get_m_IncludeTerrainShaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IncludeTerrainShaders;
}
constexpr bool const& UnityEngine::Rendering::Universal::URPTerrainShaderSetting::__cordl_internal_get_m_IncludeTerrainShaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IncludeTerrainShaders;
}
constexpr void UnityEngine::Rendering::Universal::URPTerrainShaderSetting::__cordl_internal_set_m_IncludeTerrainShaders(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IncludeTerrainShaders = value;
}
inline int32_t UnityEngine::Rendering::Universal::URPTerrainShaderSetting::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPTerrainShaderSetting*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::URPTerrainShaderSetting::get_includeTerrainShaders() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPTerrainShaderSetting*>(), { "get_includeTerrainShaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::URPTerrainShaderSetting::set_includeTerrainShaders(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPTerrainShaderSetting*>(), { "set_includeTerrainShaders", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::URPTerrainShaderSetting::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::URPTerrainShaderSetting*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting* UnityEngine::Rendering::Universal::URPTerrainShaderSetting::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::URPTerrainShaderSetting*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::Universal::URPTerrainShaderSetting::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*
UnityEngine::Rendering::Universal::URPTerrainShaderSetting::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting::URPTerrainShaderSetting() {}
