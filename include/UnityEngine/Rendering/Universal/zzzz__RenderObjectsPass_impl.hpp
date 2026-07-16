#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderObjectsPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderQueueType_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderObjectsPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugRendererLists_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderObjectsPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderObjects_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderQueueType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPProfileId_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilOp_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*& UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_get_cameraSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraSettings;
}
constexpr ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* const& UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_get_cameraSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraSettings;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_set_cameraSettings(::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraSettings = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_get_renderPassEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderPassEvent;
}
constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_get_renderPassEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderPassEvent;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_set_renderPassEvent(::UnityEngine::Rendering::Universal::RenderPassEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderPassEvent = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_set_color(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_get_rendererListHdl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererListHdl;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_get_rendererListHdl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererListHdl;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_set_rendererListHdl(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererListHdl = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugRendererLists*& UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_get_debugRendererLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugRendererLists;
}
constexpr ::UnityEngine::Rendering::Universal::DebugRendererLists* const& UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_get_debugRendererLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugRendererLists;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_set_debugRendererLists(::UnityEngine::Rendering::Universal::DebugRendererLists* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugRendererLists = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::UnityEngine::Rendering::RendererList& UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_get_rendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr ::UnityEngine::Rendering::RendererList const& UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_get_rendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::__cordl_internal_set_rendererList(::UnityEngine::Rendering::RendererList value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererList = value;
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData* UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData::RenderObjectsPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass___c::*)()>(&::UnityEngine::Rendering::Universal::RenderObjectsPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689f4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass___c._RecordRenderGraph_b__33_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass___c::*)(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*,
                                                                                                                            ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::RenderObjectsPass___c::_RecordRenderGraph_b__33_0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x689f4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass___c*>(),
                                                                                           { "<RecordRenderGraph>b__33_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::RenderObjectsPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::RenderObjectsPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::RenderObjectsPass___c*, "<>9", ::UnityEngine::Rendering::Universal::RenderObjectsPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::RenderObjectsPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::RenderObjectsPass___c* UnityEngine::Rendering::Universal::RenderObjectsPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::RenderObjectsPass___c*, "<>9", ::UnityEngine::Rendering::Universal::RenderObjectsPass___c*>();
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass___c::setStaticF___9__33_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__33_0", ::UnityEngine::Rendering::Universal::RenderObjectsPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::RenderObjectsPass___c::getStaticF___9__33_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__33_0", ::UnityEngine::Rendering::Universal::RenderObjectsPass___c*>();
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass___c::_RecordRenderGraph_b__33_0(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData* data,
                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass___c*>(),
                                                                                         { "<RecordRenderGraph>b__33_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::RenderObjectsPass___c* UnityEngine::Rendering::Universal::RenderObjectsPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::RenderObjectsPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderObjectsPass___c::RenderObjectsPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.get_overrideMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)()>(
    &::UnityEngine::Rendering::Universal::RenderObjectsPass::get_overrideMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x689cba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "get_overrideMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.set_overrideMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)(::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::RenderObjectsPass::set_overrideMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x689cbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "set_overrideMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.get_overrideMaterialPassIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)()>(
    &::UnityEngine::Rendering::Universal::RenderObjectsPass::get_overrideMaterialPassIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x689cbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "get_overrideMaterialPassIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.set_overrideMaterialPassIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::RenderObjectsPass::set_overrideMaterialPassIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x689cbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "set_overrideMaterialPassIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.get_overrideShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)()>(
    &::UnityEngine::Rendering::Universal::RenderObjectsPass::get_overrideShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x689cbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "get_overrideShader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.set_overrideShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::Universal::RenderObjectsPass::set_overrideShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x689cbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "set_overrideShader", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.get_overrideShaderPassIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)()>(
    &::UnityEngine::Rendering::Universal::RenderObjectsPass::get_overrideShaderPassIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x689cbd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "get_overrideShaderPassIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.set_overrideShaderPassIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::RenderObjectsPass::set_overrideShaderPassIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x689cbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "set_overrideShaderPassIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.SetDetphState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)(bool, ::UnityEngine::Rendering::CompareFunction)>(
    &::UnityEngine::Rendering::Universal::RenderObjectsPass::SetDetphState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x689cbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                                             { "SetDetphState", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.SetDepthState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)(bool, ::UnityEngine::Rendering::CompareFunction)>(
    &::UnityEngine::Rendering::Universal::RenderObjectsPass::SetDepthState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x689cc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                                             { "SetDepthState", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.SetStencilState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)(
    int32_t, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp)>(
    &::UnityEngine::Rendering::Universal::RenderObjectsPass::SetStencilState)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x689cc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                                { "SetStencilState",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)(
    ::StringW, ::UnityEngine::Rendering::Universal::RenderPassEvent, ::ArrayW<::StringW>, ::UnityEngine::Rendering::Universal::RenderQueueType, int32_t,
    ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*)>(&::UnityEngine::Rendering::Universal::RenderObjectsPass::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x689cd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(),
                                                                 ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderQueueType>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)(
    ::UnityEngine::Rendering::Universal::URPProfileId, ::UnityEngine::Rendering::Universal::RenderPassEvent, ::ArrayW<::StringW>, ::UnityEngine::Rendering::Universal::RenderQueueType, int32_t,
    ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*)>(&::UnityEngine::Rendering::Universal::RenderObjectsPass::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x689d1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::Universal::URPProfileId>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(),
                                                    ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderQueueType>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::ArrayW<::StringW>, ::UnityEngine::Rendering::Universal::RenderQueueType, int32_t,
    ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*)>(&::UnityEngine::Rendering::Universal::RenderObjectsPass::Init)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x689ce30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderQueueType>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::RenderObjectsPass::Execute)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x689d2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*, ::UnityEngine::Rendering::RasterCommandBuffer*,
                                                                ::UnityEngine::Rendering::RendererList, bool)>(&::UnityEngine::Rendering::Universal::RenderObjectsPass::ExecutePass)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x689d860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                         { "ExecutePass",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RendererList>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.InitPassData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*,
                                                                                                                        ::by_ref<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*>)>(
    &::UnityEngine::Rendering::Universal::RenderObjectsPass::InitPassData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x689d4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                                                                           { "InitPassData",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.InitRendererLists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::by_ref<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*>,
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, bool)>(&::UnityEngine::Rendering::Universal::RenderObjectsPass::InitRendererLists)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x689d514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                            { "InitRendererLists",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*>>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderObjectsPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderObjectsPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::Universal::RenderObjectsPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0xdc8;
  constexpr static std::size_t addrs = 0x689e6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::RenderQueueType& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_renderQueueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderQueueType;
}
constexpr ::UnityEngine::Rendering::Universal::RenderQueueType const& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_renderQueueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderQueueType;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_set_renderQueueType(::UnityEngine::Rendering::Universal::RenderQueueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderQueueType = value;
}
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_CameraSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraSettings;
}
constexpr ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* const& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_CameraSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraSettings;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_set_m_CameraSettings(::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraSettings = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get__overrideMaterial_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideMaterial_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get__overrideMaterial_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideMaterial_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_set__overrideMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideMaterial_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get__overrideMaterialPassIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideMaterialPassIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get__overrideMaterialPassIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideMaterialPassIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_set__overrideMaterialPassIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideMaterialPassIndex_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get__overrideShader_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideShader_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get__overrideShader_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideShader_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_set__overrideShader_k__BackingField(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideShader_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get__overrideShaderPassIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideShaderPassIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get__overrideShaderPassIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideShaderPassIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_set__overrideShaderPassIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideShaderPassIndex_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_ShaderTagIdList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_ShaderTagIdList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShaderTagIdList = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData* const& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassData = value;
}
constexpr ::UnityEngine::Rendering::RenderStateBlock& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_RenderStateBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderStateBlock;
}
constexpr ::UnityEngine::Rendering::RenderStateBlock const& UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_RenderStateBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderStateBlock;
}
constexpr void UnityEngine::Rendering::Universal::RenderObjectsPass::__cordl_internal_set_m_RenderStateBlock(::UnityEngine::Rendering::RenderStateBlock value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderStateBlock = value;
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::RenderObjectsPass::get_overrideMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "get_overrideMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::set_overrideMaterial(::UnityEngine::Material* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "set_overrideMaterial", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::RenderObjectsPass::get_overrideMaterialPassIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "get_overrideMaterialPassIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::set_overrideMaterialPassIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "set_overrideMaterialPassIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::Universal::RenderObjectsPass::get_overrideShader() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "get_overrideShader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::set_overrideShader(::UnityEngine::Shader* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "set_overrideShader", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::RenderObjectsPass::get_overrideShaderPassIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "get_overrideShaderPassIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::set_overrideShaderPassIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), { "set_overrideShaderPassIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::SetDetphState(bool writeEnabled, ::UnityEngine::Rendering::CompareFunction function) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                                           { "SetDetphState", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writeEnabled, function);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::SetDepthState(bool writeEnabled, ::UnityEngine::Rendering::CompareFunction function) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                                           { "SetDepthState", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writeEnabled, function);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::SetStencilState(int32_t reference, ::UnityEngine::Rendering::CompareFunction compareFunction,
                                                                                  ::UnityEngine::Rendering::StencilOp passOp, ::UnityEngine::Rendering::StencilOp failOp,
                                                                                  ::UnityEngine::Rendering::StencilOp zFailOp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                              { "SetStencilState",
                                                {},
                                                { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::CompareFunction>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::StencilOp>(), ::i2c::type_of<::UnityEngine::Rendering::StencilOp>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reference, compareFunction, passOp, failOp, zFailOp);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::_ctor(::StringW profilerTag, ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::ArrayW<::StringW> shaderTags,
                                                                        ::UnityEngine::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
                                                                        ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(),
                                                               ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderQueueType>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profilerTag, renderPassEvent, shaderTags, renderQueueType, layerMask, cameraSettings);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::_ctor(::UnityEngine::Rendering::Universal::URPProfileId profileId,
                                                                        ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::ArrayW<::StringW> shaderTags,
                                                                        ::UnityEngine::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
                                                                        ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::Universal::URPProfileId>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(),
                                                  ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderQueueType>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, profileId, renderPassEvent, shaderTags, renderQueueType, layerMask, cameraSettings);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::Init(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::ArrayW<::StringW> shaderTags,
                                                                       ::UnityEngine::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
                                                                       ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderQueueType>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderPassEvent, shaderTags, renderQueueType, layerMask, cameraSettings);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                          ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::ExecutePass(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData* passData,
                                                                              ::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RendererList rendererList,
                                                                              bool isYFlipped) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                              { "ExecutePass",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RendererList>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, passData, cmd, rendererList, isYFlipped);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::InitPassData(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                               ::by_ref<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*> passData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                                                                                         { "InitPassData",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, passData);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::InitRendererLists(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                    ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                    ::by_ref<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*> passData,
                                                                                    ::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool useRenderGraph) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(),
                          { "InitRendererLists",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*>>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderingData, lightData, passData, context, renderGraph, useRenderGraph);
}
inline void UnityEngine::Rendering::Universal::RenderObjectsPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                    ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline ::UnityEngine::Rendering::Universal::RenderObjectsPass*
UnityEngine::Rendering::Universal::RenderObjectsPass::New_ctor(::StringW profilerTag, ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::ArrayW<::StringW> shaderTags,
                                                               ::UnityEngine::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
                                                               ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(profilerTag, renderPassEvent, shaderTags, renderQueueType, layerMask, cameraSettings));
}
inline ::UnityEngine::Rendering::Universal::RenderObjectsPass*
UnityEngine::Rendering::Universal::RenderObjectsPass::New_ctor(::UnityEngine::Rendering::Universal::URPProfileId profileId, ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent,
                                                               ::ArrayW<::StringW> shaderTags, ::UnityEngine::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
                                                               ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::RenderObjectsPass*>(profileId, renderPassEvent, shaderTags, renderQueueType, layerMask, cameraSettings));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderObjectsPass::RenderObjectsPass() {}
