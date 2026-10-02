#pragma once
// IWYU pragma private; include "GlobalNamespace/OnTilePostProcessPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__OnTilePostProcessPass_def.hpp"
#include "GlobalNamespace/zzzz__OnTilePostProcessPass_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorAdjustments_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorLookup_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__FilmGrain_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Tonemapping_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Vignette_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses::OnTilePostProcessPass_UberShaderPasses(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses::OnTilePostProcessPass_UberShaderPasses() {}
constexpr ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses GlobalNamespace::OnTilePostProcessPass_UberShaderPasses::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses GlobalNamespace::OnTilePostProcessPass_UberShaderPasses::MSAASoftwareResolve{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses GlobalNamespace::OnTilePostProcessPass_UberShaderPasses::TextureRead{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses GlobalNamespace::OnTilePostProcessPass_UberShaderPasses::NormalVisMesh{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses GlobalNamespace::OnTilePostProcessPass_UberShaderPasses::MSAASoftwareResolveVisMesh{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses GlobalNamespace::OnTilePostProcessPass_UberShaderPasses::TextureReadVisMesh{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessPass_PassData::*)()>(&::GlobalNamespace::OnTilePostProcessPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c73f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass_PassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr void GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destination = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_lutTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_lutTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutTexture;
}
constexpr void GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_set_lutTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lutTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_userLutTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userLutTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_userLutTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userLutTexture;
}
constexpr void GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_set_userLutTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userLutTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_shaderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderPass;
}
constexpr ::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses const& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_shaderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shaderPass;
}
constexpr void GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_set_shaderPass(::GlobalNamespace::OnTilePostProcessPass_UberShaderPasses value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shaderPass = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_scaleBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleBias;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_scaleBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleBias;
}
constexpr void GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_set_scaleBias(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scaleBias = value;
}
constexpr bool& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_useXRVisibilityMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useXRVisibilityMesh;
}
constexpr bool const& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_useXRVisibilityMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useXRVisibilityMesh;
}
constexpr void GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_set_useXRVisibilityMesh(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useXRVisibilityMesh = value;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass*& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_xr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_xr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr void GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xr = value;
}
constexpr int32_t& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_msaaSamples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___msaaSamples;
}
constexpr int32_t const& GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_get_msaaSamples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___msaaSamples;
}
constexpr void GlobalNamespace::OnTilePostProcessPass_PassData::__cordl_internal_set_msaaSamples(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___msaaSamples = value;
}
inline void GlobalNamespace::OnTilePostProcessPass_PassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass_PassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OnTilePostProcessPass_PassData* GlobalNamespace::OnTilePostProcessPass_PassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnTilePostProcessPass_PassData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnTilePostProcessPass_PassData::OnTilePostProcessPass_PassData() {}
inline void GlobalNamespace::OnTilePostProcessPass_ShaderConstants::setStaticF__Vignette_Params1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Vignette_Params1", ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OnTilePostProcessPass_ShaderConstants::getStaticF__Vignette_Params1() {
  return ::cordl_internals::getStaticField<int32_t, "_Vignette_Params1", ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*>();
}
inline void GlobalNamespace::OnTilePostProcessPass_ShaderConstants::setStaticF__Vignette_Params2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Vignette_Params2", ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OnTilePostProcessPass_ShaderConstants::getStaticF__Vignette_Params2() {
  return ::cordl_internals::getStaticField<int32_t, "_Vignette_Params2", ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*>();
}
inline void GlobalNamespace::OnTilePostProcessPass_ShaderConstants::setStaticF__Vignette_ParamsXR(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Vignette_ParamsXR", ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OnTilePostProcessPass_ShaderConstants::getStaticF__Vignette_ParamsXR() {
  return ::cordl_internals::getStaticField<int32_t, "_Vignette_ParamsXR", ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*>();
}
inline void GlobalNamespace::OnTilePostProcessPass_ShaderConstants::setStaticF__Lut_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Lut_Params", ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OnTilePostProcessPass_ShaderConstants::getStaticF__Lut_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Lut_Params", ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*>();
}
inline void GlobalNamespace::OnTilePostProcessPass_ShaderConstants::setStaticF__UserLut_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_UserLut_Params", ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OnTilePostProcessPass_ShaderConstants::getStaticF__UserLut_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_UserLut_Params", ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*>();
}
inline void GlobalNamespace::OnTilePostProcessPass_ShaderConstants::setStaticF__InternalLut(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InternalLut", ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OnTilePostProcessPass_ShaderConstants::getStaticF__InternalLut() {
  return ::cordl_internals::getStaticField<int32_t, "_InternalLut", ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*>();
}
inline void GlobalNamespace::OnTilePostProcessPass_ShaderConstants::setStaticF__UserLut(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_UserLut", ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OnTilePostProcessPass_ShaderConstants::getStaticF__UserLut() {
  return ::cordl_internals::getStaticField<int32_t, "_UserLut", ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants*>();
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnTilePostProcessPass_ShaderConstants::OnTilePostProcessPass_ShaderConstants() {}
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessPass___c::*)()>(&::GlobalNamespace::OnTilePostProcessPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6c74174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessPass___c._RecordRenderGraph_b__13_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessPass___c::*)(
    ::GlobalNamespace::OnTilePostProcessPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::GlobalNamespace::OnTilePostProcessPass___c::_RecordRenderGraph_b__13_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6c74178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass___c*>(),
                            { "<RecordRenderGraph>b__13_0",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::OnTilePostProcessPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OnTilePostProcessPass___c::setStaticF___9(::GlobalNamespace::OnTilePostProcessPass___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OnTilePostProcessPass___c*, "<>9", ::GlobalNamespace::OnTilePostProcessPass___c*>(
      std::forward<::GlobalNamespace::OnTilePostProcessPass___c*>(value));
}
inline ::GlobalNamespace::OnTilePostProcessPass___c* GlobalNamespace::OnTilePostProcessPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OnTilePostProcessPass___c*, "<>9", ::GlobalNamespace::OnTilePostProcessPass___c*>();
}
inline void GlobalNamespace::OnTilePostProcessPass___c::setStaticF___9__13_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OnTilePostProcessPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OnTilePostProcessPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__13_0",
      ::GlobalNamespace::OnTilePostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OnTilePostProcessPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(
          value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OnTilePostProcessPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
GlobalNamespace::OnTilePostProcessPass___c::getStaticF___9__13_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::OnTilePostProcessPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__13_0",
      ::GlobalNamespace::OnTilePostProcessPass___c*>();
}
inline void GlobalNamespace::OnTilePostProcessPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OnTilePostProcessPass___c::_RecordRenderGraph_b__13_0(::GlobalNamespace::OnTilePostProcessPass_PassData* data,
                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass___c*>(),
                          { "<RecordRenderGraph>b__13_0",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::OnTilePostProcessPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::GlobalNamespace::OnTilePostProcessPass___c* GlobalNamespace::OnTilePostProcessPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnTilePostProcessPass___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnTilePostProcessPass___c::OnTilePostProcessPass___c() {}
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessPass::*)(::UnityEngine::Rendering::Universal::PostProcessData*)>(
    &::GlobalNamespace::OnTilePostProcessPass::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c71d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessPass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessPass::*)(::by_ref<::UnityEngine::Material*>)>(&::GlobalNamespace::OnTilePostProcessPass::Setup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c720b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(), { "Setup", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessPass.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessPass::*)()>(&::GlobalNamespace::OnTilePostProcessPass::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6c720e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::GlobalNamespace::OnTilePostProcessPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0xf20;
  constexpr static std::size_t addrs = 0x6c72158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(), { ::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessPass.ExecuteFBFetchPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OnTilePostProcessPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::GlobalNamespace::OnTilePostProcessPass::ExecuteFBFetchPass)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x6c739a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(),
                            { "ExecuteFBFetchPass",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::OnTilePostProcessPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessPass.TryGetCachedUserLutTextureHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::GlobalNamespace::OnTilePostProcessPass::*)(
    ::UnityEngine::Rendering::Universal::ColorLookup*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::GlobalNamespace::OnTilePostProcessPass::TryGetCachedUserLutTextureHandle)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6c737a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(),
                                         { "TryGetCachedUserLutTextureHandle",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::ColorLookup*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessPass.SetupLut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessPass::*)(::UnityEngine::Material*, ::UnityEngine::Rendering::Universal::ColorLookup*,
                                                                                                          ::UnityEngine::Rendering::Universal::ColorAdjustments*, int32_t)>(
    &::GlobalNamespace::OnTilePostProcessPass::SetupLut)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6c732a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(),
                                                             { "SetupLut",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ColorLookup*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::ColorAdjustments*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessPass.SetupVignette
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessPass::*)(::UnityEngine::Material*, ::UnityEngine::Experimental::Rendering::XRPass*, int32_t, int32_t,
                                                                                                          ::UnityEngine::Rendering::Universal::Vignette*)>(
    &::GlobalNamespace::OnTilePostProcessPass::SetupVignette)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6c73078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(),
                                                             { "SetupVignette",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Vignette*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessPass.SetupTonemapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessPass::*)(::UnityEngine::Material*, ::UnityEngine::Rendering::Universal::Tonemapping*, bool)>(
    &::GlobalNamespace::OnTilePostProcessPass::SetupTonemapping)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6c734e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(),
                            { "SetupTonemapping", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Tonemapping*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessPass.SetupGrain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessPass::*)(
    ::UnityEngine::Material*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::FilmGrain*, ::UnityEngine::Rendering::Universal::PostProcessData*)>(
    &::GlobalNamespace::OnTilePostProcessPass::SetupGrain)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6c73640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(),
                                                { "SetupGrain",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::FilmGrain*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnTilePostProcessPass.SetupDithering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnTilePostProcessPass::*)(::UnityEngine::Material*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
                                                                                                          ::UnityEngine::Rendering::Universal::PostProcessData*)>(
    &::GlobalNamespace::OnTilePostProcessPass::SetupDithering)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c736fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(),
                                                             { "SetupDithering",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OnTilePostProcessPass::__cordl_internal_get_m_UseMultisampleShaderResolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseMultisampleShaderResolve;
}
constexpr bool const& GlobalNamespace::OnTilePostProcessPass::__cordl_internal_get_m_UseMultisampleShaderResolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseMultisampleShaderResolve;
}
constexpr void GlobalNamespace::OnTilePostProcessPass::__cordl_internal_set_m_UseMultisampleShaderResolve(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseMultisampleShaderResolve = value;
}
constexpr bool& GlobalNamespace::OnTilePostProcessPass::__cordl_internal_get_m_UseTextureReadFallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseTextureReadFallback;
}
constexpr bool const& GlobalNamespace::OnTilePostProcessPass::__cordl_internal_get_m_UseTextureReadFallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseTextureReadFallback;
}
constexpr void GlobalNamespace::OnTilePostProcessPass::__cordl_internal_set_m_UseTextureReadFallback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseTextureReadFallback = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& GlobalNamespace::OnTilePostProcessPass::__cordl_internal_get_m_UserLut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserLut;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& GlobalNamespace::OnTilePostProcessPass::__cordl_internal_get_m_UserLut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserLut;
}
constexpr void GlobalNamespace::OnTilePostProcessPass::__cordl_internal_set_m_UserLut(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UserLut = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OnTilePostProcessPass::__cordl_internal_get_m_OnTileUberMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTileUberMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OnTilePostProcessPass::__cordl_internal_get_m_OnTileUberMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTileUberMaterial;
}
constexpr void GlobalNamespace::OnTilePostProcessPass::__cordl_internal_set_m_OnTileUberMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnTileUberMaterial = value;
}
constexpr int32_t& GlobalNamespace::OnTilePostProcessPass::__cordl_internal_get_m_DitheringTextureIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DitheringTextureIndex;
}
constexpr int32_t const& GlobalNamespace::OnTilePostProcessPass::__cordl_internal_get_m_DitheringTextureIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DitheringTextureIndex;
}
constexpr void GlobalNamespace::OnTilePostProcessPass::__cordl_internal_set_m_DitheringTextureIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DitheringTextureIndex = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& GlobalNamespace::OnTilePostProcessPass::__cordl_internal_get_m_PostProcessData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostProcessData;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& GlobalNamespace::OnTilePostProcessPass::__cordl_internal_get_m_PostProcessData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostProcessData;
}
constexpr void GlobalNamespace::OnTilePostProcessPass::__cordl_internal_set_m_PostProcessData(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PostProcessData = value;
}
inline void GlobalNamespace::OnTilePostProcessPass::setStaticF_s_BlitScaleBias(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_BlitScaleBias", ::GlobalNamespace::OnTilePostProcessPass*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OnTilePostProcessPass::getStaticF_s_BlitScaleBias() {
  return ::cordl_internals::getStaticField<int32_t, "s_BlitScaleBias", ::GlobalNamespace::OnTilePostProcessPass*>();
}
inline void GlobalNamespace::OnTilePostProcessPass::setStaticF_s_BlitTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_BlitTexture", ::GlobalNamespace::OnTilePostProcessPass*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OnTilePostProcessPass::getStaticF_s_BlitTexture() {
  return ::cordl_internals::getStaticField<int32_t, "s_BlitTexture", ::GlobalNamespace::OnTilePostProcessPass*>();
}
inline void GlobalNamespace::OnTilePostProcessPass::_ctor(::UnityEngine::Rendering::Universal::PostProcessData* postProcessData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, postProcessData);
}
inline void GlobalNamespace::OnTilePostProcessPass::Setup(::by_ref<::UnityEngine::Material*> onTileUberMaterial) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(), { "Setup", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onTileUberMaterial);
}
inline void GlobalNamespace::OnTilePostProcessPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OnTilePostProcessPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void GlobalNamespace::OnTilePostProcessPass::ExecuteFBFetchPass(::GlobalNamespace::OnTilePostProcessPass_PassData* data,
                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(),
          { "ExecuteFBFetchPass", {}, { ::i2c::type_of<::GlobalNamespace::OnTilePostProcessPass_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
GlobalNamespace::OnTilePostProcessPass::TryGetCachedUserLutTextureHandle(::UnityEngine::Rendering::Universal::ColorLookup* colorLookup,
                                                                         ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(),
                                       { "TryGetCachedUserLutTextureHandle",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::Universal::ColorLookup*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, colorLookup, renderGraph);
}
inline void GlobalNamespace::OnTilePostProcessPass::SetupLut(::UnityEngine::Material* material, ::UnityEngine::Rendering::Universal::ColorLookup* colorLookup,
                                                             ::UnityEngine::Rendering::Universal::ColorAdjustments* colorAdjustments, int32_t lutSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(),
                                                           { "SetupLut",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ColorLookup*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::ColorAdjustments*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, colorLookup, colorAdjustments, lutSize);
}
inline void GlobalNamespace::OnTilePostProcessPass::SetupVignette(::UnityEngine::Material* material, ::UnityEngine::Experimental::Rendering::XRPass* xrPass, int32_t width, int32_t height,
                                                                  ::UnityEngine::Rendering::Universal::Vignette* vignette) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(),
                                                           { "SetupVignette",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Vignette*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, xrPass, width, height, vignette);
}
inline void GlobalNamespace::OnTilePostProcessPass::SetupTonemapping(::UnityEngine::Material* onTileUberMaterial, ::UnityEngine::Rendering::Universal::Tonemapping* tonemapping, bool isHdrGrading) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(),
                          { "SetupTonemapping", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::Tonemapping*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onTileUberMaterial, tonemapping, isHdrGrading);
}
inline void GlobalNamespace::OnTilePostProcessPass::SetupGrain(::UnityEngine::Material* onTileUberMaterial, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                               ::UnityEngine::Rendering::Universal::FilmGrain* filmgrain, ::UnityEngine::Rendering::Universal::PostProcessData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(),
                                              { "SetupGrain",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::FilmGrain*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onTileUberMaterial, cameraData, filmgrain, data);
}
inline void GlobalNamespace::OnTilePostProcessPass::SetupDithering(::UnityEngine::Material* onTileUberMaterial, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                   ::UnityEngine::Rendering::Universal::PostProcessData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OnTilePostProcessPass*>(),
                                                           { "SetupDithering",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onTileUberMaterial, cameraData, data);
}
inline ::GlobalNamespace::OnTilePostProcessPass* GlobalNamespace::OnTilePostProcessPass::New_ctor(::UnityEngine::Rendering::Universal::PostProcessData* postProcessData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnTilePostProcessPass*>(postProcessData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnTilePostProcessPass::OnTilePostProcessPass() {}
