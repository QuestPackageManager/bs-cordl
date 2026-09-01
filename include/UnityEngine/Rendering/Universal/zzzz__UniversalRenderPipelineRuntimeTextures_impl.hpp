#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\UniversalRenderPipelineRuntimeTextures.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipelineRuntimeTextures_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineResources_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b7588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b7590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(),
                                                                                           { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures.get_blueNoise64LTex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::get_blueNoise64LTex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b7598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(), { "get_blueNoise64LTex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures.set_blueNoise64LTex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::*)(::UnityEngine::Texture2D*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::set_blueNoise64LTex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68b75a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(),
                                                                                           { "set_blueNoise64LTex", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures.get_bayerMatrixTex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::get_bayerMatrixTex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b7610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(), { "get_bayerMatrixTex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures.set_bayerMatrixTex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::*)(::UnityEngine::Texture2D*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::set_bayerMatrixTex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68b7618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(),
                                                                                           { "set_bayerMatrixTex", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures.get_debugFontTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::get_debugFontTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b7688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(), { "get_debugFontTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures.set_debugFontTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::*)(::UnityEngine::Texture2D*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::set_debugFontTexture)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68b7690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(),
                                                                                           { "set_debugFontTexture", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68b7700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::__cordl_internal_get_m_BlueNoise64LTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlueNoise64LTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::__cordl_internal_get_m_BlueNoise64LTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlueNoise64LTex;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::__cordl_internal_set_m_BlueNoise64LTex(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlueNoise64LTex = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::__cordl_internal_get_m_BayerMatrixTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BayerMatrixTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::__cordl_internal_get_m_BayerMatrixTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BayerMatrixTex;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::__cordl_internal_set_m_BayerMatrixTex(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BayerMatrixTex = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::__cordl_internal_get_m_DebugFontTex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFontTex;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::__cordl_internal_get_m_DebugFontTex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFontTex;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::__cordl_internal_set_m_DebugFontTex(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugFontTex = value;
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::get_version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(),
                                                                                         { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::get_blueNoise64LTex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(), { "get_blueNoise64LTex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::set_blueNoise64LTex(::UnityEngine::Texture2D* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(),
                                                                                         { "set_blueNoise64LTex", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::get_bayerMatrixTex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(), { "get_bayerMatrixTex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::set_bayerMatrixTex(::UnityEngine::Texture2D* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(),
                                                                                         { "set_bayerMatrixTex", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture2D> UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::get_debugFontTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(), { "get_debugFontTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::set_debugFontTexture(::UnityEngine::Texture2D* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(),
                                                                                         { "set_debugFontTexture", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources*
UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::i___UnityEngine__Rendering__IRenderPipelineResources() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*
UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures::UniversalRenderPipelineRuntimeTextures() {}
