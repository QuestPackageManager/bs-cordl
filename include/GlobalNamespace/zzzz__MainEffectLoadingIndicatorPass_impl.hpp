#pragma once
// IWYU pragma private; include "GlobalNamespace\MainEffectLoadingIndicatorPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__MainEffectLoadingIndicatorPass_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectLoadingIndicatorPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::*)()>(&::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f45858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_get_spinnerMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spinnerMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_get_spinnerMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spinnerMaterial;
}
constexpr void GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_set_spinnerMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spinnerMaterial = value;
}
constexpr float_t& GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_get_secSinceShown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secSinceShown;
}
constexpr float_t const& GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_get_secSinceShown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secSinceShown;
}
constexpr void GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_set_secSinceShown(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___secSinceShown = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_get_positionWS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionWS;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_get_positionWS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionWS;
}
constexpr void GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_set_positionWS(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionWS = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_get_rightWS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightWS;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_get_rightWS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightWS;
}
constexpr void GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_set_rightWS(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rightWS = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_get_upWS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upWS;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_get_upWS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upWS;
}
constexpr void GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::__cordl_internal_set_upWS(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___upWS = value;
}
inline void GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData* GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData::MainEffectLoadingIndicatorPass_PassData() {}
//  Writing Method size for method: ::GlobalNamespace::MainEffectLoadingIndicatorPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectLoadingIndicatorPass___c::*)()>(&::GlobalNamespace::MainEffectLoadingIndicatorPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f458b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectLoadingIndicatorPass___c._RecordRenderGraph_b__18_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectLoadingIndicatorPass___c::*)(::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*,
                                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::GlobalNamespace::MainEffectLoadingIndicatorPass___c::_RecordRenderGraph_b__18_0)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5f458b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass___c*>(),
                            { "<RecordRenderGraph>b__18_0",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MainEffectLoadingIndicatorPass___c::setStaticF___9(::GlobalNamespace::MainEffectLoadingIndicatorPass___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MainEffectLoadingIndicatorPass___c*, "<>9", ::GlobalNamespace::MainEffectLoadingIndicatorPass___c*>(
      std::forward<::GlobalNamespace::MainEffectLoadingIndicatorPass___c*>(value));
}
inline ::GlobalNamespace::MainEffectLoadingIndicatorPass___c* GlobalNamespace::MainEffectLoadingIndicatorPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MainEffectLoadingIndicatorPass___c*, "<>9", ::GlobalNamespace::MainEffectLoadingIndicatorPass___c*>();
}
inline void GlobalNamespace::MainEffectLoadingIndicatorPass___c::setStaticF___9__18_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__18_0", ::GlobalNamespace::MainEffectLoadingIndicatorPass___c*>(
      std::forward<
          ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(
          value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
GlobalNamespace::MainEffectLoadingIndicatorPass___c::getStaticF___9__18_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__18_0", ::GlobalNamespace::MainEffectLoadingIndicatorPass___c*>();
}
inline void GlobalNamespace::MainEffectLoadingIndicatorPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectLoadingIndicatorPass___c::_RecordRenderGraph_b__18_0(::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData* data,
                                                                                            ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass___c*>(),
                          { "<RecordRenderGraph>b__18_0",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::MainEffectLoadingIndicatorPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::MainEffectLoadingIndicatorPass___c* GlobalNamespace::MainEffectLoadingIndicatorPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectLoadingIndicatorPass___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectLoadingIndicatorPass___c::MainEffectLoadingIndicatorPass___c() {}
//  Writing Method size for method: ::GlobalNamespace::MainEffectLoadingIndicatorPass.get_secSinceShown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MainEffectLoadingIndicatorPass::*)()>(&::GlobalNamespace::MainEffectLoadingIndicatorPass::get_secSinceShown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f450bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass*>(), { "get_secSinceShown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectLoadingIndicatorPass.set_secSinceShown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectLoadingIndicatorPass::*)(float_t)>(&::GlobalNamespace::MainEffectLoadingIndicatorPass::set_secSinceShown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f450c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass*>(), { "set_secSinceShown", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectLoadingIndicatorPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectLoadingIndicatorPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Shader*, ::UnityEngine::Texture2D*)>(&::GlobalNamespace::MainEffectLoadingIndicatorPass::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f43638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass*>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectLoadingIndicatorPass.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectLoadingIndicatorPass::*)()>(&::GlobalNamespace::MainEffectLoadingIndicatorPass::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f434f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainEffectLoadingIndicatorPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainEffectLoadingIndicatorPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::MainEffectLoadingIndicatorPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x5f450cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass*>(), { ::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::MainEffectLoadingIndicatorPass::__cordl_internal_get__spinnerMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spinnerMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::MainEffectLoadingIndicatorPass::__cordl_internal_get__spinnerMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spinnerMaterial;
}
constexpr void GlobalNamespace::MainEffectLoadingIndicatorPass::__cordl_internal_set__spinnerMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spinnerMaterial = value;
}
constexpr float_t& GlobalNamespace::MainEffectLoadingIndicatorPass::__cordl_internal_get__secSinceShown_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secSinceShown_k__BackingField;
}
constexpr float_t const& GlobalNamespace::MainEffectLoadingIndicatorPass::__cordl_internal_get__secSinceShown_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secSinceShown_k__BackingField;
}
constexpr void GlobalNamespace::MainEffectLoadingIndicatorPass::__cordl_internal_set__secSinceShown_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____secSinceShown_k__BackingField = value;
}
inline void GlobalNamespace::MainEffectLoadingIndicatorPass::setStaticF_kSecSinceShownId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kSecSinceShownId", ::GlobalNamespace::MainEffectLoadingIndicatorPass*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MainEffectLoadingIndicatorPass::getStaticF_kSecSinceShownId() {
  return ::cordl_internals::getStaticField<int32_t, "kSecSinceShownId", ::GlobalNamespace::MainEffectLoadingIndicatorPass*>();
}
inline void GlobalNamespace::MainEffectLoadingIndicatorPass::setStaticF_kMainTexId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kMainTexId", ::GlobalNamespace::MainEffectLoadingIndicatorPass*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MainEffectLoadingIndicatorPass::getStaticF_kMainTexId() {
  return ::cordl_internals::getStaticField<int32_t, "kMainTexId", ::GlobalNamespace::MainEffectLoadingIndicatorPass*>();
}
inline void GlobalNamespace::MainEffectLoadingIndicatorPass::setStaticF_kPositionWSId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kPositionWSId", ::GlobalNamespace::MainEffectLoadingIndicatorPass*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MainEffectLoadingIndicatorPass::getStaticF_kPositionWSId() {
  return ::cordl_internals::getStaticField<int32_t, "kPositionWSId", ::GlobalNamespace::MainEffectLoadingIndicatorPass*>();
}
inline void GlobalNamespace::MainEffectLoadingIndicatorPass::setStaticF_kRightWSId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kRightWSId", ::GlobalNamespace::MainEffectLoadingIndicatorPass*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MainEffectLoadingIndicatorPass::getStaticF_kRightWSId() {
  return ::cordl_internals::getStaticField<int32_t, "kRightWSId", ::GlobalNamespace::MainEffectLoadingIndicatorPass*>();
}
inline void GlobalNamespace::MainEffectLoadingIndicatorPass::setStaticF_kUpWSId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kUpWSId", ::GlobalNamespace::MainEffectLoadingIndicatorPass*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MainEffectLoadingIndicatorPass::getStaticF_kUpWSId() {
  return ::cordl_internals::getStaticField<int32_t, "kUpWSId", ::GlobalNamespace::MainEffectLoadingIndicatorPass*>();
}
inline float_t GlobalNamespace::MainEffectLoadingIndicatorPass::get_secSinceShown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass*>(), { "get_secSinceShown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectLoadingIndicatorPass::set_secSinceShown(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass*>(), { "set_secSinceShown", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MainEffectLoadingIndicatorPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* shader, ::UnityEngine::Texture2D* spinnerTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, shader, spinnerTexture);
}
inline void GlobalNamespace::MainEffectLoadingIndicatorPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainEffectLoadingIndicatorPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                               ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MainEffectLoadingIndicatorPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline ::GlobalNamespace::MainEffectLoadingIndicatorPass* GlobalNamespace::MainEffectLoadingIndicatorPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                    ::UnityEngine::Shader* shader, ::UnityEngine::Texture2D* spinnerTexture) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainEffectLoadingIndicatorPass*>(evt, shader, spinnerTexture));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainEffectLoadingIndicatorPass::MainEffectLoadingIndicatorPass() {}
