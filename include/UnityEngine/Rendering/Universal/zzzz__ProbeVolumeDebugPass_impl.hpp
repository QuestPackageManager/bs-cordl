#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ProbeVolumeDebugPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ProbeVolumeDebugPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ComputeGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ProbeVolumeDebugPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::*)()>(
    &::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cdb268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_computeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computeShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_computeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___computeShader;
}
constexpr void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_set_computeShader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___computeShader = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_resultBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultBuffer;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle const& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_resultBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resultBuffer;
}
constexpr void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_set_resultBuffer(::UnityEngine::Rendering::RenderGraphModule::BufferHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resultBuffer = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_clickCoordinates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clickCoordinates;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_clickCoordinates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clickCoordinates;
}
constexpr void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_set_clickCoordinates(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clickCoordinates = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_depthBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthBuffer;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_depthBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthBuffer;
}
constexpr void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_set_depthBuffer(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthBuffer = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_normalBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalBuffer;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_get_normalBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalBuffer;
}
constexpr void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::__cordl_internal_set_normalBuffer(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalBuffer = value;
}
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData* UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData::ProbeVolumeDebugPass_WriteApvData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cdb2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c._Render_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::*)(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*,
                                                                                                                               ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::_Render_b__3_0)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6cdb2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>(),
                                                                                           { "<Render>b__3_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*, "<>9", ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c* UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*, "<>9", ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>();
}
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::setStaticF___9__3_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*,
                                    "<>9__3_0", ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*,
                                           "<>9__3_0", ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>();
}
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::_Render_b__3_0(::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData* data,
                                                                                        ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>(),
                                                                                         { "<Render>b__3_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass_WriteApvData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c* UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass___c::ProbeVolumeDebugPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::ComputeShader*)>(&::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6cdabd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::Render)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x6cdac78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>(),
                            { "Render",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::__cordl_internal_get_m_ComputeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComputeShader;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::__cordl_internal_get_m_ComputeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ComputeShader;
}
constexpr void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::__cordl_internal_set_m_ComputeShader(::UnityW<::UnityEngine::ComputeShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ComputeShader = value;
}
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::ComputeShader* computeShader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::ComputeShader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, computeShader);
}
inline void UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                            ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                            ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthPyramidBuffer,
                                                                            ::UnityEngine::Rendering::RenderGraphModule::TextureHandle normalBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>(),
                          { "Render",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, depthPyramidBuffer, normalBuffer);
}
inline ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass* UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                                    ::UnityEngine::ComputeShader* computeShader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass*>(evt, computeShader));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ProbeVolumeDebugPass::ProbeVolumeDebugPass() {}
