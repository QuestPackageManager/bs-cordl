#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ClearTargetsPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTClearFlags_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ClearTargetsPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ClearTargetsPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTClearFlags_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68d302c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::__cordl_internal_set_color(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::__cordl_internal_get_depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::__cordl_internal_get_depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depth;
}
constexpr void UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::__cordl_internal_set_depth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depth = value;
}
constexpr ::UnityEngine::Rendering::RTClearFlags& UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::__cordl_internal_get_clearFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearFlags;
}
constexpr ::UnityEngine::Rendering::RTClearFlags const& UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::__cordl_internal_get_clearFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearFlags;
}
constexpr void UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::__cordl_internal_set_clearFlags(::UnityEngine::Rendering::RTClearFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearFlags = value;
}
constexpr ::UnityEngine::Color& UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::__cordl_internal_get_clearColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::__cordl_internal_get_clearColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearColor;
}
constexpr void UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::__cordl_internal_set_clearColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearColor = value;
}
inline void UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData* UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData::ClearTargetsPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClearTargetsPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ClearTargetsPass___c::*)()>(&::UnityEngine::Rendering::Universal::ClearTargetsPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68d3084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ClearTargetsPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClearTargetsPass___c._Render_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ClearTargetsPass___c::*)(::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*,
                                                                                                                           ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::ClearTargetsPass___c::_Render_b__3_0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x68d3088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ClearTargetsPass___c*>(),
                                                                                           { "<Render>b__3_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ClearTargetsPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::ClearTargetsPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::ClearTargetsPass___c*, "<>9", ::UnityEngine::Rendering::Universal::ClearTargetsPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::ClearTargetsPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::ClearTargetsPass___c* UnityEngine::Rendering::Universal::ClearTargetsPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::ClearTargetsPass___c*, "<>9", ::UnityEngine::Rendering::Universal::ClearTargetsPass___c*>();
}
inline void UnityEngine::Rendering::Universal::ClearTargetsPass___c::setStaticF___9__3_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__3_0", ::UnityEngine::Rendering::Universal::ClearTargetsPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::ClearTargetsPass___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__3_0", ::UnityEngine::Rendering::Universal::ClearTargetsPass___c*>();
}
inline void UnityEngine::Rendering::Universal::ClearTargetsPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ClearTargetsPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ClearTargetsPass___c::_Render_b__3_0(::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData* data,
                                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ClearTargetsPass___c*>(),
                                                                                         { "<Render>b__3_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::ClearTargetsPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::ClearTargetsPass___c* UnityEngine::Rendering::Universal::ClearTargetsPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ClearTargetsPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ClearTargetsPass___c::ClearTargetsPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClearTargetsPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::ClearTargetsPass::Render)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x68d2e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ClearTargetsPass*>(),
                            { "Render",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClearTargetsPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RTClearFlags, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::Universal::ClearTargetsPass::Render)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x68d0e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ClearTargetsPass*>(),
                                         { "Render",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RTClearFlags>(),
                                             ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ClearTargetsPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ClearTargetsPass::*)()>(&::UnityEngine::Rendering::Universal::ClearTargetsPass::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68d2f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ClearTargetsPass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ClearTargetsPass::setStaticF_s_ClearProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_ClearProfilingSampler", ::UnityEngine::Rendering::Universal::ClearTargetsPass*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ClearTargetsPass::getStaticF_s_ClearProfilingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_ClearProfilingSampler", ::UnityEngine::Rendering::Universal::ClearTargetsPass*>();
}
inline void UnityEngine::Rendering::Universal::ClearTargetsPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph,
                                                                        ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorHandle,
                                                                        ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthHandle,
                                                                        ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ClearTargetsPass*>(),
                          { "Render",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graph, colorHandle, depthHandle, cameraData);
}
inline void UnityEngine::Rendering::Universal::ClearTargetsPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph,
                                                                        ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorHandle,
                                                                        ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthHandle, ::UnityEngine::Rendering::RTClearFlags clearFlags,
                                                                        ::UnityEngine::Color clearColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ClearTargetsPass*>(),
                                       { "Render",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RTClearFlags>(),
                                           ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, graph, colorHandle, depthHandle, clearFlags, clearColor);
}
inline void UnityEngine::Rendering::Universal::ClearTargetsPass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ClearTargetsPass*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ClearTargetsPass* UnityEngine::Rendering::Universal::ClearTargetsPass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ClearTargetsPass*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ClearTargetsPass::ClearTargetsPass() {}
