#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionPersistentResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionPersistentResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineResources_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources.get_Shader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::get_Shader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce9174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources*>(), { "get_Shader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources.set_Shader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::set_Shader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6ce917c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources*>(),
                                                                                           { "set_Shader", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources.get_isAvailableInPlayerBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce91ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources*>(), { "get_isAvailableInPlayerBuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ce91f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ce91fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::__cordl_internal_get_m_Shader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::__cordl_internal_get_m_Shader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shader;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::__cordl_internal_set_m_Shader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Shader = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::get_Shader() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources*>(), { "get_Shader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::set_Shader(::UnityEngine::Shader* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources*>(),
                                                                                         { "set_Shader", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::get_isAvailableInPlayerBuild() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources*>(), { "get_isAvailableInPlayerBuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::get_version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources* UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources*
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::i___UnityEngine__Rendering__IRenderPipelineResources() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPersistentResources::ScreenSpaceAmbientOcclusionPersistentResources() {}
