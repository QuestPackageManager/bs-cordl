#pragma once
// IWYU pragma private; include "GlobalNamespace\PlanarMirrorInitializePass.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "GlobalNamespace/zzzz__PlanarMirrorInitializePass_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererSO_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorInitializePass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorInitializePass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::GlobalNamespace::MirrorRendererSO*)>(&::GlobalNamespace::PlanarMirrorInitializePass::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f48dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorInitializePass*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::GlobalNamespace::MirrorRendererSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorInitializePass.SetReflectedMatricesLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorInitializePass::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::GlobalNamespace::PlanarMirrorInitializePass::SetReflectedMatricesLeft)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f485d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorInitializePass*>(),
                                                             { "SetReflectedMatricesLeft", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorInitializePass.SetReflectedMatricesRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorInitializePass::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::GlobalNamespace::PlanarMirrorInitializePass::SetReflectedMatricesRight)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f48898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorInitializePass*>(),
                                                             { "SetReflectedMatricesRight", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlanarMirrorInitializePass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlanarMirrorInitializePass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::PlanarMirrorInitializePass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5f48e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorInitializePass*>(), { ::i2c::class_of<::GlobalNamespace::PlanarMirrorInitializePass*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_get__mirrorRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_get__mirrorRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRenderer;
}
constexpr void GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirrorRenderer = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_get__reflectedViewLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectedViewLeft;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_get__reflectedViewLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectedViewLeft;
}
constexpr void GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_set__reflectedViewLeft(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectedViewLeft = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_get__reflectedProjLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectedProjLeft;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_get__reflectedProjLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectedProjLeft;
}
constexpr void GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_set__reflectedProjLeft(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectedProjLeft = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_get__reflectedViewRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectedViewRight;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_get__reflectedViewRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectedViewRight;
}
constexpr void GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_set__reflectedViewRight(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectedViewRight = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_get__reflectedProjRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectedProjRight;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_get__reflectedProjRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectedProjRight;
}
constexpr void GlobalNamespace::PlanarMirrorInitializePass::__cordl_internal_set__reflectedProjRight(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectedProjRight = value;
}
inline void GlobalNamespace::PlanarMirrorInitializePass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::GlobalNamespace::MirrorRendererSO* mirrorRenderer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorInitializePass*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::GlobalNamespace::MirrorRendererSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderPassEvent, mirrorRenderer);
}
inline void GlobalNamespace::PlanarMirrorInitializePass::SetReflectedMatricesLeft(::UnityEngine::Matrix4x4 reflectedViewLeft, ::UnityEngine::Matrix4x4 reflectedProjLeft) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorInitializePass*>(),
                                                           { "SetReflectedMatricesLeft", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reflectedViewLeft, reflectedProjLeft);
}
inline void GlobalNamespace::PlanarMirrorInitializePass::SetReflectedMatricesRight(::UnityEngine::Matrix4x4 reflectedViewRight, ::UnityEngine::Matrix4x4 reflectedProjRight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlanarMirrorInitializePass*>(),
                                                           { "SetReflectedMatricesRight", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reflectedViewRight, reflectedProjRight);
}
inline void GlobalNamespace::PlanarMirrorInitializePass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                           ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlanarMirrorInitializePass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline ::GlobalNamespace::PlanarMirrorInitializePass* GlobalNamespace::PlanarMirrorInitializePass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent,
                                                                                                            ::GlobalNamespace::MirrorRendererSO* mirrorRenderer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlanarMirrorInitializePass*>(renderPassEvent, mirrorRenderer));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlanarMirrorInitializePass::PlanarMirrorInitializePass() {}
