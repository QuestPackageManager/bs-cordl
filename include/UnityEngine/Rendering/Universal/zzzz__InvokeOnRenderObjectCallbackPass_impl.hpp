#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/InvokeOnRenderObjectCallbackPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__InvokeOnRenderObjectCallbackPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__InvokeOnRenderObjectCallbackPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cc4bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData::__cordl_internal_get_colorTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorTarget;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData::__cordl_internal_get_colorTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorTarget;
}
constexpr void UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData::__cordl_internal_set_colorTarget(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorTarget = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData::__cordl_internal_get_depthTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTarget;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData::__cordl_internal_get_depthTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTarget;
}
constexpr void UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData::__cordl_internal_set_depthTarget(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthTarget = value;
}
inline void UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData* UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData::InvokeOnRenderObjectCallbackPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cc4c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c._Render_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c::*)(
    ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c::_Render_b__2_0)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6cc4c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c*>(),
                                                                                           { "<Render>b__2_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c*, "<>9", ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c* UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c*, "<>9",
                                           ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c*>();
}
inline void UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c::setStaticF___9__2_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__2_0", ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__2_0", ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c*>();
}
inline void UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c::_Render_b__2_0(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData* data,
                                                                                                    ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c*>(),
                                                                                         { "<Render>b__2_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass_PassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c* UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass___c::InvokeOnRenderObjectCallbackPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::*)(::UnityEngine::Rendering::Universal::RenderPassEvent)>(
    &::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6cc46b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::Render)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x6cc4754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*>(),
                                         { "Render",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                        ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorTarget,
                                                                                        ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*>(),
                                       { "Render",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, colorTarget, depthTarget);
}
inline ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*
UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*>(evt));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass::InvokeOnRenderObjectCallbackPass() {}
