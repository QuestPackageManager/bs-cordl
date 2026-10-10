#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/XROcclusionMeshPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XROcclusionMeshPass_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XROcclusionMeshPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ca5b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Rendering::XRPass*& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_xr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_xr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr void UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xr = value;
}
constexpr bool& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_isActiveTargetBackBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveTargetBackBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_isActiveTargetBackBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveTargetBackBuffer;
}
constexpr void UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_set_isActiveTargetBackBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActiveTargetBackBuffer = value;
}
constexpr bool& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_shouldYFlip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldYFlip;
}
constexpr bool const& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_shouldYFlip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldYFlip;
}
constexpr void UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_set_shouldYFlip(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldYFlip = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_cameraColorAttachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraColorAttachment;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_get_cameraColorAttachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraColorAttachment;
}
constexpr void UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::__cordl_internal_set_cameraColorAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraColorAttachment = value;
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData::XROcclusionMeshPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0::*)()>(
    &::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ca5ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0._Render_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0::*)(
    ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0::_Render_b__0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6ca5b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0*>(),
                                                                                           { "<Render>b__0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*& UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0::__cordl_internal_get_passData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passData;
}
constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* const& UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0::__cordl_internal_get_passData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passData;
}
constexpr void UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0::__cordl_internal_set_passData(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passData = value;
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0::_Render_b__0(::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* data,
                                                                                                      ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0*>(),
                                                                                         { "<Render>b__0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0* UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass___c__DisplayClass5_0::XROcclusionMeshPass___c__DisplayClass5_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XROcclusionMeshPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XROcclusionMeshPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::XROcclusionMeshPass::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6ca5338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XROcclusionMeshPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XROcclusionMeshPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent)>(
    &::UnityEngine::Rendering::Universal::XROcclusionMeshPass::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6ca533c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XROcclusionMeshPass.ExecutePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*)>(
    &::UnityEngine::Rendering::Universal::XROcclusionMeshPass::ExecutePass)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6ca53dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>(),
            { "ExecutePass", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::XROcclusionMeshPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::XROcclusionMeshPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>)>(&::UnityEngine::Rendering::Universal::XROcclusionMeshPass::Render)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x6ca5468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>(),
                                                { "Render",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::XROcclusionMeshPass::__cordl_internal_get_m_IsActiveTargetBackBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsActiveTargetBackBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::XROcclusionMeshPass::__cordl_internal_get_m_IsActiveTargetBackBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsActiveTargetBackBuffer;
}
constexpr void UnityEngine::Rendering::Universal::XROcclusionMeshPass::__cordl_internal_set_m_IsActiveTargetBackBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsActiveTargetBackBuffer = value;
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                            ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                ::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>(),
          { "ExecutePass", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass_PassData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, data);
}
inline void UnityEngine::Rendering::Universal::XROcclusionMeshPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                           /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> cameraColorAttachment,
                                                                           /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> cameraDepthAttachment) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>(),
                                              { "Render",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, cameraColorAttachment, cameraDepthAttachment);
}
inline ::UnityEngine::Rendering::Universal::XROcclusionMeshPass* UnityEngine::Rendering::Universal::XROcclusionMeshPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::XROcclusionMeshPass*>(evt));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass::XROcclusionMeshPass() {}
