#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\Internal\CopyDepthPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyDepthPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyDepthPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants::setStaticF__CameraDepthAttachment(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CameraDepthAttachment", ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants::getStaticF__CameraDepthAttachment() {
  return ::cordl_internals::getStaticField<int32_t, "_CameraDepthAttachment", ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants::setStaticF__CameraDepthTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CameraDepthTexture", ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants::getStaticF__CameraDepthTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_CameraDepthTexture", ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants::setStaticF__ZWriteShaderHandle(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ZWriteShaderHandle", ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants::getStaticF__ZWriteShaderHandle() {
  return ::cordl_internals::getStaticField<int32_t, "_ZWriteShaderHandle", ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants::CopyDepthPass_ShaderConstants() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68fc160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_copyDepthMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyDepthMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_copyDepthMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyDepthMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_set_copyDepthMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___copyDepthMaterial = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_msaaSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___msaaSamples;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_msaaSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___msaaSamples;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_set_msaaSamples(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___msaaSamples = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_copyResolvedDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyResolvedDepth;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_copyResolvedDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyResolvedDepth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_set_copyResolvedDepth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___copyResolvedDepth = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_copyToDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyToDepth;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_copyToDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___copyToDepth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_set_copyToDepth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___copyToDepth = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_isDstBackbuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDstBackbuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_get_isDstBackbuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDstBackbuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::__cordl_internal_set_isDstBackbuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDstBackbuffer = value;
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData::CopyDepthPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68fd5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c._Render_b__38_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::_Render_b__38_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x68fd5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>(),
                                                                                           { "<Render>b__38_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c* UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::setStaticF___9__38_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__38_0", ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::getStaticF___9__38_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__38_0", ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::_Render_b__38_0(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* data,
                                                                                            ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>(),
                                                                                         { "<Render>b__38_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c* UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c::CopyDepthPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.get_source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fbf20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "get_source", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.set_source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fbf28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                                                                           { "set_source", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.get_destination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_destination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fbf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "get_destination", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.set_destination
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_destination)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fbf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                                                                           { "set_destination", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.get_MssaSamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_MssaSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fbf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "get_MssaSamples", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.set_MssaSamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_MssaSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fbf48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "set_MssaSamples", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.get_CopyToDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_CopyToDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fbf50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "get_CopyToDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.set_CopyToDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_CopyToDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fbf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "set_CopyToDepth", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.get_CopyToDepthXR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_CopyToDepthXR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fbf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "get_CopyToDepthXR", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.set_CopyToDepthXR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_CopyToDepthXR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fbf68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "set_CopyToDepthXR", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.get_CopyToBackbuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_CopyToBackbuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fbf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "get_CopyToBackbuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.set_CopyToBackbuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_CopyToBackbuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68fbf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "set_CopyToBackbuffer", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Shader*, bool, bool, bool, ::StringW)>(&::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x68fbf80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Shader*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Setup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68fc164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                                             { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68fc174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x68fc1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Execute)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x68fc20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::ExecutePass)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x68fc3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                         { "ExecutePass",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x68fca04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, bool, ::StringW)>(&::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Render)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x68fcac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                                { "Render",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, bool, ::StringW)>(
    &::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Render)> {
  constexpr static std::size_t size = 0x8e8;
  constexpr static std::size_t addrs = 0x68fcbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                            { "Render",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__source_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____source_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__source_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____source_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set__source_k__BackingField(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____source_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__destination_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destination_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__destination_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destination_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set__destination_k__BackingField(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____destination_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__MssaSamples_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MssaSamples_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__MssaSamples_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MssaSamples_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set__MssaSamples_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MssaSamples_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__CopyToDepth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CopyToDepth_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__CopyToDepth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CopyToDepth_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set__CopyToDepth_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CopyToDepth_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__CopyToDepthXR_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CopyToDepthXR_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__CopyToDepthXR_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CopyToDepthXR_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set__CopyToDepthXR_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CopyToDepthXR_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__CopyToBackbuffer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CopyToBackbuffer_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get__CopyToBackbuffer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CopyToBackbuffer_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set__CopyToBackbuffer_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CopyToBackbuffer_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_CopyDepthMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_CopyDepthMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set_m_CopyDepthMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyDepthMaterial = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_CopyResolvedDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyResolvedDepth;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_CopyResolvedDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyResolvedDepth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set_m_CopyResolvedDepth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyResolvedDepth = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_ShouldClear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldClear;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_ShouldClear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShouldClear;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set_m_ShouldClear(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShouldClear = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* const& UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassData = value;
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_source() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "get_source", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_source(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                                                                         { "set_source", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_destination() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "get_destination", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_destination(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                                                                         { "set_destination", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_MssaSamples() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "get_MssaSamples", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_MssaSamples(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "set_MssaSamples", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_CopyToDepth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "get_CopyToDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_CopyToDepth(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "set_CopyToDepth", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_CopyToDepthXR() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "get_CopyToDepthXR", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_CopyToDepthXR(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "set_CopyToDepthXR", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::CopyDepthPass::get_CopyToBackbuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "get_CopyToBackbuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::set_CopyToBackbuffer(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "set_CopyToBackbuffer", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* copyDepthShader, bool shouldClear,
                                                                              bool copyToDepth, bool copyResolvedDepth, ::StringW customPassName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, copyDepthShader, shouldClear, copyToDepth, copyResolvedDepth, customPassName);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Setup(::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                                           { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, destination);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                      ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                    ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* passData,
                                                                                    ::UnityEngine::Rendering::RTHandle* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                       { "ExecutePass",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, passData, source);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                               ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, bool bindAsCameraDepth, ::StringW passName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                              { "Render",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, destination, source, bindAsCameraDepth, passName);
}
inline void UnityEngine::Rendering::Universal::Internal::CopyDepthPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
                                                                               ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                               ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool bindAsCameraDepth, ::StringW passName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(),
                                       { "Render",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, destination, source, resourceData, cameraData, bindAsCameraDepth, passName);
}
inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* UnityEngine::Rendering::Universal::Internal::CopyDepthPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                                          ::UnityEngine::Shader* copyDepthShader, bool shouldClear,
                                                                                                                                          bool copyToDepth, bool copyResolvedDepth,
                                                                                                                                          ::StringW customPassName) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*>(evt, copyDepthShader, shouldClear, copyToDepth, copyResolvedDepth, customPassName));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass::CopyDepthPass() {}
