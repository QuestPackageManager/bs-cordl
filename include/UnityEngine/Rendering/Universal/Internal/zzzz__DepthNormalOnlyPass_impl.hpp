#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DepthNormalOnlyPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DepthNormalOnlyPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DepthNormalOnlyPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererListParams_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68f8a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_get_cameraDepthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraDepthTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_get_cameraDepthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraDepthTexture;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_set_cameraDepthTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraDepthTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_get_cameraNormalsTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraNormalsTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_get_cameraNormalsTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraNormalsTexture;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_set_cameraNormalsTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraNormalsTexture = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_get_enableRenderingLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableRenderingLayers;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_get_enableRenderingLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableRenderingLayers;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_set_enableRenderingLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableRenderingLayers = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_get_maskSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maskSize;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_get_maskSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maskSize;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_set_maskSize(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maskSize = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_get_rendererList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_get_rendererList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rendererList;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::__cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rendererList = value;
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData* UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData::DepthNormalOnlyPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68fa188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c._Render_b__42_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c::_Render_b__42_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x68fa18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c*>(),
                                                                                           { "<Render>b__42_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c* UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c::setStaticF___9__42_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__42_0", ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c::getStaticF___9__42_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__42_0", ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c::_Render_b__42_0(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData* data,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c*>(),
                                                                                         { "<Render>b__42_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c* UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c::DepthNormalOnlyPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.get_shaderTagIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* (
    ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)()>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_shaderTagIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f88d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "get_shaderTagIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.set_shaderTagIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*)>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_shaderTagIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f88dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                             { "set_shaderTagIds", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.get_depthHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_depthHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f88e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "get_depthHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.set_depthHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_depthHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f88ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                                                           { "set_depthHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.get_normalHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_normalHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f88f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "get_normalHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.set_normalHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_normalHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f88fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                                                           { "set_normalHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.get_renderingLayersHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_renderingLayersHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f8904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "get_renderingLayersHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.set_renderingLayersHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_renderingLayersHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f890c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                                                           { "set_renderingLayersHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.get_enableRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_enableRenderingLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f8914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "get_enableRenderingLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.set_enableRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_enableRenderingLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f891c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "set_enableRenderingLayers", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.get_renderingLayersMaskSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_renderingLayersMaskSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f8924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "get_renderingLayersMaskSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.set_renderingLayersMaskSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_renderingLayersMaskSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68f892c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                             { "set_renderingLayersMaskSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x68f8934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::RenderQueueRange>(),
                                                                 ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.GetGraphicsFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::GetGraphicsFormat)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x68f8a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "GetGraphicsFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::Setup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68f8b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                             { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::Setup)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68f8b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
            { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x68f8b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*,
                                                                ::UnityEngine::Rendering::RendererList)>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::ExecutePass)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x68f8d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                                                           { "ExecutePass",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::Execute)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x68f8e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x68f9218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.InitRendererListParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RendererListParams (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::InitRendererListParams)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x68f90a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                                                           { "InitRendererListParams",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, uint32_t, bool, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::Render)> {
  constexpr static std::size_t size = 0xbd0;
  constexpr static std::size_t addrs = 0x68f92dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                            { "Render",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*&
UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__shaderTagIds_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderTagIds_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const&
UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__shaderTagIds_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shaderTagIds_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set__shaderTagIds_k__BackingField(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shaderTagIds_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__depthHandle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthHandle_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__depthHandle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthHandle_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set__depthHandle_k__BackingField(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____depthHandle_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__normalHandle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalHandle_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__normalHandle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalHandle_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set__normalHandle_k__BackingField(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalHandle_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__renderingLayersHandle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderingLayersHandle_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__renderingLayersHandle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderingLayersHandle_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set__renderingLayersHandle_k__BackingField(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderingLayersHandle_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__enableRenderingLayers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableRenderingLayers_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__enableRenderingLayers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableRenderingLayers_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set__enableRenderingLayers_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableRenderingLayers_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize&
UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__renderingLayersMaskSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderingLayersMaskSize_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const&
UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get__renderingLayersMaskSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderingLayersMaskSize_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set__renderingLayersMaskSize_k__BackingField(
    ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderingLayersMaskSize_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*& UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData* const&
UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassData = value;
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::setStaticF_k_DepthNormals(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "k_DepthNormals",
                                    ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::getStaticF_k_DepthNormals() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "k_DepthNormals",
                                           ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::setStaticF_k_ColorAttachment1(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::RTHandle*>, "k_ColorAttachment1", ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::RTHandle*> UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::getStaticF_k_ColorAttachment1() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::RTHandle*>, "k_ColorAttachment1", ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::setStaticF_k_ColorAttachment2(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::RTHandle*>, "k_ColorAttachment2", ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::RTHandle*> UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::getStaticF_k_ColorAttachment2() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::RTHandle*>, "k_ColorAttachment2", ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::setStaticF_s_CameraDepthTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraDepthTextureID", ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::getStaticF_s_CameraDepthTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraDepthTextureID", ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::setStaticF_s_CameraNormalsTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraNormalsTextureID", ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::getStaticF_s_CameraNormalsTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraNormalsTextureID", ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::setStaticF_s_CameraRenderingLayersTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraRenderingLayersTextureID", ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::getStaticF_s_CameraRenderingLayersTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraRenderingLayersTextureID", ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>();
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_shaderTagIds() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "get_shaderTagIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_shaderTagIds(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                           { "set_shaderTagIds", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_depthHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "get_depthHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_depthHandle(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                                                         { "set_depthHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_normalHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "get_normalHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_normalHandle(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                                                         { "set_normalHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_renderingLayersHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "get_renderingLayersHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_renderingLayersHandle(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                                                         { "set_renderingLayersHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_enableRenderingLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "get_enableRenderingLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_enableRenderingLayers(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "set_enableRenderingLayers", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::get_renderingLayersMaskSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "get_renderingLayersMaskSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::set_renderingLayersMaskSize(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                           { "set_renderingLayersMaskSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                    ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::RenderQueueRange>(),
                                                               ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, renderQueueRange, layerMask);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::GetGraphicsFormat() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), { "GetGraphicsFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::Setup(::UnityEngine::Rendering::RTHandle* depthHandle, ::UnityEngine::Rendering::RTHandle* normalHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                           { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depthHandle, normalHandle);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::Setup(::UnityEngine::Rendering::RTHandle* depthHandle, ::UnityEngine::Rendering::RTHandle* normalHandle,
                                                                                    ::UnityEngine::Rendering::RTHandle* decalLayerHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
          { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depthHandle, normalHandle, decalLayerHandle);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                            ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                          ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData* passData,
                                                                                          ::UnityEngine::Rendering::RendererList rendererList) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                                                                         { "ExecutePass",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RendererList>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, passData, rendererList);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                      ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::RendererListParams
UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::InitRendererListParams(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                         ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                         ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                                       { "InitRendererListParams",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererListParams>(this, ___internal_method, renderingData, cameraData, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                     ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraNormalsTexture,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraDepthTexture,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle renderingLayersTexture, uint32_t batchLayerMask,
                                                                                     bool setGlobalDepth, bool setGlobalTextures) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(),
                          { "Render",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, cameraNormalsTexture, cameraDepthTexture, renderingLayersTexture, batchLayerMask, setGlobalDepth,
                                                   setGlobalTextures);
}
inline ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*
UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
                                                                           ::UnityEngine::LayerMask layerMask) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*>(evt, renderQueueRange, layerMask));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass::DepthNormalOnlyPass() {}
