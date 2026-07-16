#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/XRDepthMotionPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRDepthMotionPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRDepthMotionPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x68a3b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_objMotionRendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objMotionRendererList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_objMotionRendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objMotionRendererList;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_set_objMotionRendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objMotionRendererList = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_previousViewProjectionStereo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousViewProjectionStereo;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_previousViewProjectionStereo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousViewProjectionStereo;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_set_previousViewProjectionStereo(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previousViewProjectionStereo = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_viewProjectionStereo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewProjectionStereo;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_viewProjectionStereo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewProjectionStereo;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_set_viewProjectionStereo(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewProjectionStereo = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_xrMotionVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrMotionVector;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_get_xrMotionVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrMotionVector;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::__cordl_internal_set_xrMotionVector(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xrMotionVector = value;
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData::XRDepthMotionPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::*)()>(
    &::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68a49c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0._Render_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::*)(
    ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::_Render_b__0)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x68a4e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0*>(),
                                                                                           { "<Render>b__0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*& UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::__cordl_internal_get_passData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passData;
}
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* const& UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::__cordl_internal_get_passData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passData;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::__cordl_internal_set_passData(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passData = value;
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::_Render_b__0(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* data,
                                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0*>(),
                                                                                         { "<Render>b__0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0* UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass___c__DisplayClass17_0::XRDepthMotionPass___c__DisplayClass17_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::Universal::XRDepthMotionPass::_ctor)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x68a38d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.GetObjectMotionDrawingSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DrawingSettings (*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::XRDepthMotionPass::GetObjectMotionDrawingSettings)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x68a3c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(),
                                                                                           { "GetObjectMotionDrawingSettings", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.InitObjectMotionRendererLists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>, ::by_ref<::UnityEngine::Rendering::CullingResults>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
    ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::XRDepthMotionPass::InitObjectMotionRendererLists)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x68a3df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(),
                            { "InitObjectMotionRendererLists",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.InitPassData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)(::by_ref<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>,
                                                                                                                        ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::XRDepthMotionPass::InitPassData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x68a3fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(),
                                                                                           { "InitPassData",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.ImportXRMotionColorAndDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
        &::UnityEngine::Rendering::Universal::XRDepthMotionPass::ImportXRMotionColorAndDepth)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x68a4024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(),
                            { "ImportXRMotionColorAndDepth",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::Universal::XRDepthMotionPass::Render)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x68a42c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(),
                            { "Render", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.ResetMotionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)()>(&::UnityEngine::Rendering::Universal::XRDepthMotionPass::ResetMotionData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x68a3b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(), { "ResetMotionData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)(::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>)>(
    &::UnityEngine::Rendering::Universal::XRDepthMotionPass::Update)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x68a49c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(),
                                                             { "Update", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XRDepthMotionPass.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XRDepthMotionPass::*)()>(&::UnityEngine::Rendering::Universal::XRDepthMotionPass::Dispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68a4d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassData = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_XRMotionVectorColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRMotionVectorColor;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_XRMotionVectorColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRMotionVectorColor;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_m_XRMotionVectorColor(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_XRMotionVectorColor = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_xrMotionVectorColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrMotionVectorColor;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_xrMotionVectorColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrMotionVectorColor;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_xrMotionVectorColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xrMotionVectorColor = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_XRMotionVectorDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRMotionVectorDepth;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_XRMotionVectorDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRMotionVectorDepth;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_m_XRMotionVectorDepth(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_XRMotionVectorDepth = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_xrMotionVectorDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrMotionVectorDepth;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_xrMotionVectorDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xrMotionVectorDepth;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_xrMotionVectorDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xrMotionVectorDepth = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_ViewProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewProjection;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_ViewProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ViewProjection;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_m_ViewProjection(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ViewProjection = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_PreviousViewProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousViewProjection;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_PreviousViewProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousViewProjection;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_m_PreviousViewProjection(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousViewProjection = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_LastFrameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFrameIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_LastFrameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LastFrameIndex;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_m_LastFrameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LastFrameIndex = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_XRMotionVectorMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRMotionVectorMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_get_m_XRMotionVectorMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRMotionVectorMaterial;
}
constexpr void UnityEngine::Rendering::Universal::XRDepthMotionPass::__cordl_internal_set_m_XRMotionVectorMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_XRMotionVectorMaterial = value;
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::setStaticF_k_MotionOnlyShaderTagId(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "k_MotionOnlyShaderTagId", ::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::XRDepthMotionPass::getStaticF_k_MotionOnlyShaderTagId() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "k_MotionOnlyShaderTagId", ::UnityEngine::Rendering::Universal::XRDepthMotionPass*>();
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* xrMotionVector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, xrMotionVector);
}
inline ::UnityEngine::Rendering::DrawingSettings UnityEngine::Rendering::Universal::XRDepthMotionPass::GetObjectMotionDrawingSettings(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(),
                                                                                         { "GetObjectMotionDrawingSettings", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DrawingSettings>(nullptr, ___internal_method, camera);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::InitObjectMotionRendererLists(::by_ref<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*> passData,
                                                                                                ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(),
                          { "InitObjectMotionRendererLists",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passData, cullResults, renderGraph, camera);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::InitPassData(::by_ref<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*> passData,
                                                                               ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(),
                                                                                         { "InitPassData",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::XRDepthMotionPass_PassData*>>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, passData, cameraData);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::ImportXRMotionColorAndDepth(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                              ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(),
                          { "ImportXRMotionColorAndDepth",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(),
                          { "Render", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::ResetMotionData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(), { "ResetMotionData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::Update(::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(),
                                                                                         { "Update", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::XRDepthMotionPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::XRDepthMotionPass* UnityEngine::Rendering::Universal::XRDepthMotionPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                              ::UnityEngine::Shader* xrMotionVector) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::XRDepthMotionPass*>(evt, xrMotionVector));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass::XRDepthMotionPass() {}
