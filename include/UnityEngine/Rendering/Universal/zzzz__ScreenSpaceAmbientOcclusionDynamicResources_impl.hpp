#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionDynamicResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionDynamicResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineResources_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources.get_BlueNoise256Textures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Texture2D>> (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::get_BlueNoise256Textures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources*>(), { "get_BlueNoise256Textures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources.set_BlueNoise256Textures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::*)(::ArrayW<::UnityEngine::Texture2D*>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::set_BlueNoise256Textures)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6ce9208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources*>(),
                                                                                           { "set_BlueNoise256Textures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources.get_isAvailableInPlayerBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources*>(), { "get_isAvailableInPlayerBuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ce9288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::__cordl_internal_get_m_BlueNoise256Textures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlueNoise256Textures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::__cordl_internal_get_m_BlueNoise256Textures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlueNoise256Textures;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::__cordl_internal_set_m_BlueNoise256Textures(::ArrayW<::UnityW<::UnityEngine::Texture2D>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlueNoise256Textures = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
inline ::ArrayW<::UnityW<::UnityEngine::Texture2D>> UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::get_BlueNoise256Textures() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources*>(), { "get_BlueNoise256Textures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Texture2D>>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::set_BlueNoise256Textures(::ArrayW<::UnityEngine::Texture2D*> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources*>(),
                                                                                         { "set_BlueNoise256Textures", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Texture2D*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::get_isAvailableInPlayerBuild() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources*>(), { "get_isAvailableInPlayerBuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::get_version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources* UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources*
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::i___UnityEngine__Rendering__IRenderPipelineResources() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionDynamicResources::ScreenSpaceAmbientOcclusionDynamicResources() {}
