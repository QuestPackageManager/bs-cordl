#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\UniversalRendererResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRendererResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineResources_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererResources.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRendererResources::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererResources::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b6e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererResources.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRendererResources::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b6e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(),
                                                                                           { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererResources.get_copyDepthPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::UniversalRendererResources::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererResources::get_copyDepthPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b6e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(), { "get_copyDepthPS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererResources.set_copyDepthPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererResources::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererResources::set_copyDepthPS)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68b6e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(),
                                                                                           { "set_copyDepthPS", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererResources.get_cameraMotionVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::UniversalRendererResources::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererResources::get_cameraMotionVector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b6ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(), { "get_cameraMotionVector", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererResources.set_cameraMotionVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererResources::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererResources::set_cameraMotionVector)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68b6ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(),
                                                                                           { "set_cameraMotionVector", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererResources.get_stencilDeferredPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::UniversalRendererResources::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererResources::get_stencilDeferredPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b6f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(), { "get_stencilDeferredPS", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererResources.set_stencilDeferredPS
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererResources::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererResources::set_stencilDeferredPS)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68b6f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(),
                                                                                           { "set_stencilDeferredPS", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererResources.get_decalDBufferClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::UniversalRendererResources::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererResources::get_decalDBufferClear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68b6fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(), { "get_decalDBufferClear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererResources.set_decalDBufferClear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererResources::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::Universal::UniversalRendererResources::set_decalDBufferClear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68b6fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(),
                                                                                           { "set_decalDBufferClear", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRendererResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRendererResources::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRendererResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68b7034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_get_m_CopyDepthPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_get_m_CopyDepthPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthPS;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_set_m_CopyDepthPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyDepthPS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_get_m_CameraMotionVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraMotionVector;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_get_m_CameraMotionVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraMotionVector;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_set_m_CameraMotionVector(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraMotionVector = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_get_m_StencilDeferredPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_get_m_StencilDeferredPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredPS;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_set_m_StencilDeferredPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StencilDeferredPS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_get_m_DBufferClear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferClear;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_get_m_DBufferClear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DBufferClear;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRendererResources::__cordl_internal_set_m_DBufferClear(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DBufferClear = value;
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRendererResources::get_version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRendererResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(),
                                                                                         { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::UniversalRendererResources::get_copyDepthPS() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(), { "get_copyDepthPS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererResources::set_copyDepthPS(::UnityEngine::Shader* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(), { "set_copyDepthPS", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::UniversalRendererResources::get_cameraMotionVector() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(), { "get_cameraMotionVector", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererResources::set_cameraMotionVector(::UnityEngine::Shader* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(),
                                                                                         { "set_cameraMotionVector", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::UniversalRendererResources::get_stencilDeferredPS() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(), { "get_stencilDeferredPS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererResources::set_stencilDeferredPS(::UnityEngine::Shader* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(),
                                                                                         { "set_stencilDeferredPS", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::UniversalRendererResources::get_decalDBufferClear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(), { "get_decalDBufferClear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererResources::set_decalDBufferClear(::UnityEngine::Shader* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(),
                                                                                         { "set_decalDBufferClear", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalRendererResources::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRendererResources*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalRendererResources* UnityEngine::Rendering::Universal::UniversalRendererResources::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalRendererResources*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr UnityEngine::Rendering::Universal::UniversalRendererResources::operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* UnityEngine::Rendering::Universal::UniversalRendererResources::i___UnityEngine__Rendering__IRenderPipelineResources() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::Universal::UniversalRendererResources::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*
UnityEngine::Rendering::Universal::UniversalRendererResources::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRendererResources::UniversalRendererResources() {}
