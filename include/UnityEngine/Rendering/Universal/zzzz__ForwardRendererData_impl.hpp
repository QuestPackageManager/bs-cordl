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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6655078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blitPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___copyDepthPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___screenSpaceShadowPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___samplingPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stencilDeferredPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fallbackErrorPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fallbackLoadingPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___materialErrorPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___coreBlitPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___coreBlitColorAndDepthPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraMotionVector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectMotionVector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources* UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ForwardRendererData_ShaderResources::ForwardRendererData_ShaderResources() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (
    ::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(&::UnityEngine::Rendering::Universal::ForwardRendererData::Create)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6654c28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.get_opaqueLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::get_opaqueLayerMask)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6654ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                                               "get_opaqueLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.set_opaqueLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::set_opaqueLayerMask)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6654d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(), "set_opaqueLayerMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.get_transparentLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::get_transparentLayerMask)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6654d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                                               "get_transparentLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.set_transparentLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::set_transparentLayerMask)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6654dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(), "set_transparentLayerMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.get_defaultStencilState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::StencilStateData* (
    ::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(&::UnityEngine::Rendering::Universal::ForwardRendererData::get_defaultStencilState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6654e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                                               "get_defaultStencilState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.set_defaultStencilState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData::*)(
    ::UnityEngine::Rendering::Universal::StencilStateData*)>(&::UnityEngine::Rendering::Universal::ForwardRendererData::set_defaultStencilState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6654e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(), "set_defaultStencilState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::StencilStateData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.get_shadowTransparentReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::get_shadowTransparentReceive)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6654eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                                               "get_shadowTransparentReceive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.set_shadowTransparentReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::set_shadowTransparentReceive)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6654ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(), "set_shadowTransparentReceive",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.get_renderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderingMode (::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::get_renderingMode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6654f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                                               "get_renderingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.set_renderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData::*)(
    ::UnityEngine::Rendering::Universal::RenderingMode)>(&::UnityEngine::Rendering::Universal::ForwardRendererData::set_renderingMode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6654f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(), "set_renderingMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.get_accurateGbufferNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::get_accurateGbufferNormals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6654fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                                               "get_accurateGbufferNormals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData.set_accurateGbufferNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::set_accurateGbufferNormals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6655028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(), "set_accurateGbufferNormals",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ForwardRendererData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ForwardRendererData::*)()>(
    &::UnityEngine::Rendering::Universal::ForwardRendererData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6655074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___postProcessData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xrSystemData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultStencilState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer*, false>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::ForwardRendererData::get_opaqueLayerMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                                             "get_opaqueLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData::set_opaqueLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(), "set_opaqueLayerMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::ForwardRendererData::get_transparentLayerMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                                             "get_transparentLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData::set_transparentLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(), "set_transparentLayerMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::StencilStateData* UnityEngine::Rendering::Universal::ForwardRendererData::get_defaultStencilState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                                             "get_defaultStencilState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::StencilStateData*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData::set_defaultStencilState(::UnityEngine::Rendering::Universal::StencilStateData* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(), "set_defaultStencilState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::StencilStateData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ForwardRendererData::get_shadowTransparentReceive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                                             "get_shadowTransparentReceive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData::set_shadowTransparentReceive(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(), "set_shadowTransparentReceive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::RenderingMode UnityEngine::Rendering::Universal::ForwardRendererData::get_renderingMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                                             "get_renderingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData::set_renderingMode(::UnityEngine::Rendering::Universal::RenderingMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(), "set_renderingMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ForwardRendererData::get_accurateGbufferNormals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                                             "get_accurateGbufferNormals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData::set_accurateGbufferNormals(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(), "set_accurateGbufferNormals",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::ForwardRendererData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ForwardRendererData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ForwardRendererData* UnityEngine::Rendering::Universal::ForwardRendererData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ForwardRendererData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ForwardRendererData::ForwardRendererData() {}
