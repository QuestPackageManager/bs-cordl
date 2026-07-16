#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ForwardRendererData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TileSize_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ForwardRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ForwardRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StencilStateData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRSystemData_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x686f7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_blitPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blitPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_blitPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blitPS;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_set_blitPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blitPS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_copyDepthPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyDepthPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_copyDepthPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyDepthPS;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_set_copyDepthPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___copyDepthPS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_screenSpaceShadowPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSpaceShadowPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_screenSpaceShadowPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSpaceShadowPS;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_set_screenSpaceShadowPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenSpaceShadowPS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_samplingPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samplingPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_samplingPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samplingPS;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_set_samplingPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___samplingPS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_stencilDeferredPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilDeferredPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_stencilDeferredPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilDeferredPS;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_set_stencilDeferredPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stencilDeferredPS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_fallbackErrorPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackErrorPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_fallbackErrorPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackErrorPS;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_set_fallbackErrorPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fallbackErrorPS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_fallbackLoadingPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackLoadingPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_fallbackLoadingPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fallbackLoadingPS;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_set_fallbackLoadingPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fallbackLoadingPS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_materialErrorPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialErrorPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_materialErrorPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialErrorPS;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_set_materialErrorPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___materialErrorPS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_coreBlitPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreBlitPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_coreBlitPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreBlitPS;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_set_coreBlitPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___coreBlitPS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_coreBlitColorAndDepthPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreBlitColorAndDepthPS;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_coreBlitColorAndDepthPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___coreBlitColorAndDepthPS;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_set_coreBlitColorAndDepthPS(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___coreBlitColorAndDepthPS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_cameraMotionVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraMotionVector;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_cameraMotionVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraMotionVector;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_set_cameraMotionVector(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraMotionVector = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_objectMotionVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectMotionVector;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_get_objectMotionVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectMotionVector;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::__cordl_internal_set_objectMotionVector(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectMotionVector = value;
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources* UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::ForwardRendererData_ShaderResources() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::Create)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x686f374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.get_opaqueLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::get_opaqueLayerMask)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x686f430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "get_opaqueLayerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.set_opaqueLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::set_opaqueLayerMask)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x686f47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "set_opaqueLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.get_transparentLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::get_transparentLayerMask)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x686f4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "get_transparentLayerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.set_transparentLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::set_transparentLayerMask)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x686f514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(),
                                                                                           { "set_transparentLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.get_defaultStencilState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::StencilStateData* (::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::get_defaultStencilState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x686f560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "get_defaultStencilState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.set_defaultStencilState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData::*)(::UnityEngine::Rendering::Universal::StencilStateData*)>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::set_defaultStencilState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x686f5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(),
                                                             { "set_defaultStencilState", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::StencilStateData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.get_shadowTransparentReceive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::get_shadowTransparentReceive)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x686f5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "get_shadowTransparentReceive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.set_shadowTransparentReceive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::set_shadowTransparentReceive)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x686f644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "set_shadowTransparentReceive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.get_renderingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::RenderingMode (::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::get_renderingMode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x686f690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "get_renderingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.set_renderingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData::*)(::UnityEngine::Rendering::Universal::RenderingMode)>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::set_renderingMode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x686f6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(),
                                                                                           { "set_renderingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.get_accurateGbufferNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::get_accurateGbufferNormals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x686f728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "get_accurateGbufferNormals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.set_accurateGbufferNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::set_accurateGbufferNormals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x686f774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "set_accurateGbufferNormals", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(&::UnityEngine::Rendering::Universal::ForwardRendererData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x686f7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources*& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_shaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaders;
}
constexpr ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources* const& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_shaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaders;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_set_shaders(::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shaders = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_postProcessData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postProcessData;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_postProcessData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___postProcessData;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_set_postProcessData(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___postProcessData = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData>& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_xrSystemData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrSystemData;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> const& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_xrSystemData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrSystemData;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_set_xrSystemData(::UnityW<::UnityEngine::Rendering::Universal::XRSystemData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xrSystemData = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_OpaqueLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpaqueLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_OpaqueLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpaqueLayerMask;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_set_m_OpaqueLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpaqueLayerMask = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_TransparentLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransparentLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_TransparentLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransparentLayerMask;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_set_m_TransparentLayerMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransparentLayerMask = value;
}
constexpr ::UnityEngine::Rendering::Universal::StencilStateData*& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_DefaultStencilState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStencilState;
}
constexpr ::UnityEngine::Rendering::Universal::StencilStateData* const& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_DefaultStencilState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStencilState;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_set_m_DefaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultStencilState = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_ShadowTransparentReceive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowTransparentReceive;
}
constexpr bool const& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_ShadowTransparentReceive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowTransparentReceive;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_set_m_ShadowTransparentReceive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowTransparentReceive = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingMode& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_RenderingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingMode;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingMode const& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_RenderingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingMode;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_set_m_RenderingMode(::UnityEngine::Rendering::Universal::RenderingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderingMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_DepthPrimingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrimingMode;
}
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode const& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_DepthPrimingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrimingMode;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_set_m_DepthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthPrimingMode = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_AccurateGbufferNormals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccurateGbufferNormals;
}
constexpr bool const& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_AccurateGbufferNormals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AccurateGbufferNormals;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_set_m_AccurateGbufferNormals(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AccurateGbufferNormals = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_ClusteredRendering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClusteredRendering;
}
constexpr bool const& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_ClusteredRendering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClusteredRendering;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_set_m_ClusteredRendering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClusteredRendering = value;
}
constexpr ::UnityEngine::Rendering::Universal::TileSize& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_TileSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileSize;
}
constexpr ::UnityEngine::Rendering::Universal::TileSize const& UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_get_m_TileSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileSize;
}
constexpr void UnityEngine::Rendering::Universal::ForwardRendererData::__cordl_internal_set_m_TileSize(::UnityEngine::Rendering::Universal::TileSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TileSize = value;
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::ForwardRendererData::Create() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::ForwardRendererData::get_opaqueLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "get_opaqueLayerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData::set_opaqueLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "set_opaqueLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::ForwardRendererData::get_transparentLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "get_transparentLayerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData::set_transparentLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(),
                                                                                         { "set_transparentLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::StencilStateData* UnityEngine::Rendering::Universal::ForwardRendererData::get_defaultStencilState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "get_defaultStencilState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::StencilStateData*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData::set_defaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(),
                                                           { "set_defaultStencilState", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::StencilStateData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ForwardRendererData::get_shadowTransparentReceive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "get_shadowTransparentReceive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData::set_shadowTransparentReceive(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "set_shadowTransparentReceive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::RenderingMode UnityEngine::Rendering::Universal::ForwardRendererData::get_renderingMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "get_renderingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData::set_renderingMode(::UnityEngine::Rendering::Universal::RenderingMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(),
                                                                                         { "set_renderingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ForwardRendererData::get_accurateGbufferNormals() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "get_accurateGbufferNormals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData::set_accurateGbufferNormals(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { "set_accurateGbufferNormals", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ForwardRendererData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ForwardRendererData* UnityEngine::Rendering::Universal::ForwardRendererData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ForwardRendererData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ForwardRendererData::ForwardRendererData() {}
