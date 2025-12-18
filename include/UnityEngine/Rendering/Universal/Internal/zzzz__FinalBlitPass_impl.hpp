#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/FinalBlitPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__FinalBlitPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__FinalBlitPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitPassNames::FinalBlitPass_BlitPassNames() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType::FinalBlitPass_BlitType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType::FinalBlitPass_BlitType() {}
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType::Core{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType::HDR{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType::Count{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }, CppParam { name: "nearestSamplerPass", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "bilinearSamplerPass", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData::FinalBlitPass_BlitMaterialData(::UnityW<::UnityEngine::Material> material, int32_t nearestSamplerPass,
                                                                                                                        int32_t bilinearSamplerPass) noexcept {
  this->material = material;
  this->nearestSamplerPass = nearestSamplerPass;
  this->bilinearSamplerPass = bilinearSamplerPass;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData::FinalBlitPass_BlitMaterialData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x674b9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr void UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destination = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_sourceID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceID;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_sourceID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceID;
}
constexpr void UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_set_sourceID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceID = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_hdrOutputLuminanceParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdrOutputLuminanceParams;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_hdrOutputLuminanceParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdrOutputLuminanceParams;
}
constexpr void UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_set_hdrOutputLuminanceParams(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hdrOutputLuminanceParams = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_requireSrgbConversion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requireSrgbConversion;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_requireSrgbConversion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requireSrgbConversion;
}
constexpr void UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_set_requireSrgbConversion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requireSrgbConversion = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_enableAlphaOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaOutput;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_enableAlphaOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaOutput;
}
constexpr void UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_set_enableAlphaOutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableAlphaOutput = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_blitMaterialData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blitMaterialData;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData const&
UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_blitMaterialData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blitMaterialData;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_set_blitMaterialData(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blitMaterialData = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData* UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData::FinalBlitPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x674d3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c._Render_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c::_Render_b__17_0)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x674d3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c*>::get(), "<Render>b__17_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c* UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c::setStaticF___9__17_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__17_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c::_Render_b__17_0(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData* data,
                                                                                            ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c*>::get(), "<Render>b__17_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c* UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass___c::FinalBlitPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Material*, ::UnityEngine::Material*)>(&::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::_ctor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x674b7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x674b9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::*)(
    ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::Rendering::Universal::RenderTargetHandle)>(&::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::Setup)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x674b9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::*)(
    ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x674ba2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass.SetupHDROutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::ColorGamut, ::UnityEngine::Material*, ::UnityEngine::Rendering::HDROutputUtils_Operation, ::UnityEngine::Vector4, bool)>(
        &::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::SetupHDROutput)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x674ba34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), "SetupHDROutput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::HDROutputUtils_Operation>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x674bb70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::Execute)> {
  constexpr static std::size_t size = 0x9dc;
  constexpr static std::size_t addrs = 0x674bc44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass.ExecutePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*, ::UnityEngine::Rendering::RTHandle*,
                         ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::ExecutePass)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x674c6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass.InitPassData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::ByRef<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*>,
    ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType, bool)>(&::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::InitPassData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x674c620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), "InitPassData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::Render)> {
  constexpr static std::size_t size = 0xa04;
  constexpr static std::size_t addrs = 0x674c8dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::FinalBlitPass::__cordl_internal_get_m_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::FinalBlitPass::__cordl_internal_get_m_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
constexpr void UnityEngine::Rendering::Universal::Internal::FinalBlitPass::__cordl_internal_set_m_Source(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*& UnityEngine::Rendering::Universal::Internal::FinalBlitPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData* const& UnityEngine::Rendering::Universal::Internal::FinalBlitPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::FinalBlitPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData, ::Array<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData>*>&
UnityEngine::Rendering::Universal::Internal::FinalBlitPass::__cordl_internal_get_m_BlitMaterialData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitMaterialData;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData, ::Array<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData>*> const&
UnityEngine::Rendering::Universal::Internal::FinalBlitPass::__cordl_internal_get_m_BlitMaterialData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitMaterialData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::FinalBlitPass::__cordl_internal_set_m_BlitMaterialData(
    ::ArrayW<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData, ::Array<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitMaterialData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BlitMaterialData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass::setStaticF_s_CameraDepthTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraDepthTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::FinalBlitPass::getStaticF_s_CameraDepthTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraDepthTextureID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* blitMaterial,
                                                                              ::UnityEngine::Material* blitHDRMaterial) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, blitMaterial, blitHDRMaterial);
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass::Setup(::UnityEngine::RenderTextureDescriptor baseDescriptor,
                                                                              ::UnityEngine::Rendering::Universal::RenderTargetHandle colorHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderTargetHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseDescriptor, colorHandle);
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass::Setup(::UnityEngine::RenderTextureDescriptor baseDescriptor, ::UnityEngine::Rendering::RTHandle* colorHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseDescriptor, colorHandle);
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass::SetupHDROutput(::UnityEngine::ColorGamut hdrDisplayColorGamut, ::UnityEngine::Material* material,
                                                                                       ::UnityEngine::Rendering::HDROutputUtils_Operation hdrOperation, ::UnityEngine::Vector4 hdrOutputParameters,
                                                                                       bool rendersOverlayUI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), "SetupHDROutput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ColorGamut>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::HDROutputUtils_Operation>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hdrDisplayColorGamut, material, hdrOperation, hdrOutputParameters, rendersOverlayUI);
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                      ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass::ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                    ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData* data,
                                                                                    ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                                                                    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), "ExecutePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, data, source, destination, cameraData);
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass::InitPassData(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                     ::ByRef<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*> passData,
                                                                                     ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType blitType, bool enableAlphaOutput) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), "InitPassData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_PassData*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass_BlitType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraData, passData, blitType, enableAlphaOutput);
}
inline void UnityEngine::Rendering::Universal::Internal::FinalBlitPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                               ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                               ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                               ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> src,
                                                                               ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> dest,
                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureHandle overlayUITexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData, cameraData, src, dest, overlayUITexture);
}
inline ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* UnityEngine::Rendering::Universal::Internal::FinalBlitPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                                                                          ::UnityEngine::Material* blitMaterial,
                                                                                                                                          ::UnityEngine::Material* blitHDRMaterial) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*>(evt, blitMaterial, blitHDRMaterial));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass::FinalBlitPass() {}
