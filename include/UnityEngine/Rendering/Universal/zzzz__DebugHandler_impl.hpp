#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugHandler_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsLighting_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsMaterial_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsRendering_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugFullScreenMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugHandler_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugRendererLists_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRDebugViewPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipelineDebugDisplaySettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipelineRuntimeTextures_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsQuery_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x662df4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_isFinalPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFinalPass;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_isFinalPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFinalPass;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_set_isFinalPass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isFinalPass = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_resolveFinalTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolveFinalTarget;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_resolveFinalTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolveFinalTarget;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_set_resolveFinalTarget(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resolveFinalTarget = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_isActiveForCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveForCamera;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_isActiveForCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveForCamera;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_set_isActiveForCamera(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActiveForCamera = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_hasDebugRenderTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDebugRenderTarget;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_hasDebugRenderTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDebugRenderTarget;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_set_hasDebugRenderTarget(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasDebugRenderTarget = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_debugRenderTargetHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugRenderTargetHandle;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_debugRenderTargetHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugRenderTargetHandle;
}
constexpr void
UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_set_debugRenderTargetHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugRenderTargetHandle = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_debugTexturePropertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugTexturePropertyId;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_debugTexturePropertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugTexturePropertyId;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_set_debugTexturePropertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugTexturePropertyId = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_debugRenderTargetPixelRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugRenderTargetPixelRect;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_debugRenderTargetPixelRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugRenderTargetPixelRect;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_set_debugRenderTargetPixelRect(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugRenderTargetPixelRect = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_debugRenderTargetSupportsStereo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugRenderTargetSupportsStereo;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_debugRenderTargetSupportsStereo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugRenderTargetSupportsStereo;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_set_debugRenderTargetSupportsStereo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugRenderTargetSupportsStereo = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_debugRenderTargetRangeRemap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugRenderTargetRangeRemap;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_debugRenderTargetRangeRemap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugRenderTargetRangeRemap;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_set_debugRenderTargetRangeRemap(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugRenderTargetRangeRemap = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_debugFontTextureHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugFontTextureHandle;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_debugFontTextureHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugFontTextureHandle;
}
constexpr void
UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_set_debugFontTextureHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___debugFontTextureHandle = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_renderingSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingSettings;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* const&
UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_get_renderingSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingSettings;
}
constexpr void
UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::__cordl_internal_set_renderingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___renderingSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData::DebugHandler_DebugFinalValidationPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x662df48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::__cordl_internal_get_isActiveForCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveForCamera;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::__cordl_internal_get_isActiveForCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveForCamera;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::__cordl_internal_set_isActiveForCamera(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActiveForCamera = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::__cordl_internal_get_materialSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialSettings;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* const& UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::__cordl_internal_get_materialSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialSettings;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::__cordl_internal_set_materialSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___materialSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::__cordl_internal_get_renderingSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingSettings;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* const&
UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::__cordl_internal_get_renderingSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingSettings;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::__cordl_internal_set_renderingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___renderingSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*& UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::__cordl_internal_get_lightingSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightingSettings;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* const& UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::__cordl_internal_get_lightingSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightingSettings;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::__cordl_internal_set_lightingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightingSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData::DebugHandler_DebugSetupPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler___c::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6631178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler___c._UpdateShaderGlobalPropertiesForFinalValidationPass_b__101_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler___c::*)(
    ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::DebugHandler___c::_UpdateShaderGlobalPropertiesForFinalValidationPass_b__101_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x663117c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler___c*>::get(), "<UpdateShaderGlobalPropertiesForFinalValidationPass>b__101_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler___c._Setup_b__106_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler___c::*)(
    ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::DebugHandler___c::_Setup_b__106_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66311e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler___c*>::get(), "<Setup>b__106_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DebugHandler___c::setStaticF___9(::UnityEngine::Rendering::Universal::DebugHandler___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::DebugHandler___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::DebugHandler___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::DebugHandler___c* UnityEngine::Rendering::Universal::DebugHandler___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::DebugHandler___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler___c::setStaticF___9__101_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__101_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::DebugHandler___c::getStaticF___9__101_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__101_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler___c::setStaticF___9__106_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__106_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::DebugHandler___c::getStaticF___9__106_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__106_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
UnityEngine::Rendering::Universal::DebugHandler___c::_UpdateShaderGlobalPropertiesForFinalValidationPass_b__101_0(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* data,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler___c*>::get(), "<UpdateShaderGlobalPropertiesForFinalValidationPass>b__101_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::DebugHandler___c::_Setup_b__106_0(::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* data,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler___c*>::get(), "<Setup>b__106_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::DebugHandler___c* UnityEngine::Rendering::Universal::DebugHandler___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DebugHandler___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugHandler___c::DebugHandler___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_LightingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* (
    ::UnityEngine::Rendering::Universal::DebugHandler::*)()>(&::UnityEngine::Rendering::Universal::DebugHandler::get_LightingSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x662d9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "get_LightingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_MaterialSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* (
    ::UnityEngine::Rendering::Universal::DebugHandler::*)()>(&::UnityEngine::Rendering::Universal::DebugHandler::get_MaterialSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x662d9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "get_MaterialSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_RenderingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* (
    ::UnityEngine::Rendering::Universal::DebugHandler::*)()>(&::UnityEngine::Rendering::Universal::DebugHandler::get_RenderingSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x662d9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "get_RenderingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_AreAnySettingsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugHandler::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler::get_AreAnySettingsActive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x662d9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "get_AreAnySettingsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_IsPostProcessingAllowed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugHandler::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler::get_IsPostProcessingAllowed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x662da18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "get_IsPostProcessingAllowed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_IsLightingActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugHandler::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler::get_IsLightingActive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x662da34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "get_IsLightingActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_IsActiveModeUnsupportedForDeferred
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugHandler::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler::get_IsActiveModeUnsupportedForDeferred)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x662da50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                 "get_IsActiveModeUnsupportedForDeferred", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.TryGetScreenClearColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugHandler::*)(::ByRef<::UnityEngine::Color>)>(
    &::UnityEngine::Rendering::Universal::DebugHandler::TryGetScreenClearColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x662dac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "TryGetScreenClearColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_ReplacementMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::DebugHandler::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler::get_ReplacementMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662dae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "get_ReplacementMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_DebugDisplaySettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings* (
    ::UnityEngine::Rendering::Universal::DebugHandler::*)()>(&::UnityEngine::Rendering::Universal::DebugHandler::get_DebugDisplaySettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662dae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "get_DebugDisplaySettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_DebugScreenColorHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::RTHandle*> (::UnityEngine::Rendering::Universal::DebugHandler::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler::get_DebugScreenColorHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662daf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "get_DebugScreenColorHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_DebugScreenDepthHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::RTHandle*> (::UnityEngine::Rendering::Universal::DebugHandler::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler::get_DebugScreenDepthHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662daf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "get_DebugScreenDepthHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_hdrDebugViewPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::HDRDebugViewPass* (::UnityEngine::Rendering::Universal::DebugHandler::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler::get_hdrDebugViewPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662db00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "get_hdrDebugViewPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.HDRDebugViewIsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugHandler::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugHandler::HDRDebugViewIsActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x662db08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "HDRDebugViewIsActive",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.WriteToDebugScreenTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugHandler::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugHandler::WriteToDebugScreenTexture)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x662db38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "WriteToDebugScreenTexture",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_IsScreenClearNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugHandler::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler::get_IsScreenClearNeeded)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x662db3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "get_IsScreenClearNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_IsRenderPassSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugHandler::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler::get_IsRenderPassSupported)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x662db74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "get_IsRenderPassSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.get_stpDebugViewIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DebugHandler::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler::get_stpDebugViewIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x662dba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "get_stpDebugViewIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler::_ctor)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x662dbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x662df50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.IsActiveForCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugHandler::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugHandler::IsActiveForCamera)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x662e010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "IsActiveForCamera",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.TryGetFullscreenDebugMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugHandler::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::DebugFullScreenMode>)>(&::UnityEngine::Rendering::Universal::DebugHandler::TryGetFullscreenDebugMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x662e038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "TryGetFullscreenDebugMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::DebugFullScreenMode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.TryGetFullscreenDebugMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugHandler::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::DebugFullScreenMode>, ::ByRef<int32_t>)>(&::UnityEngine::Rendering::Universal::DebugHandler::TryGetFullscreenDebugMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x662e050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "TryGetFullscreenDebugMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::DebugFullScreenMode>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.ConfigureColorDescriptorForDebugScreen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::RenderTextureDescriptor>, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::DebugHandler::ConfigureColorDescriptorForDebugScreen)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x662e08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "ConfigureColorDescriptorForDebugScreen",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.ConfigureDepthDescriptorForDebugScreen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::Experimental::Rendering::GraphicsFormat, int32_t, int32_t)>(
        &::UnityEngine::Rendering::Universal::DebugHandler::ConfigureDepthDescriptorForDebugScreen)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x662e0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "ConfigureDepthDescriptorForDebugScreen",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.SetupShaderProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler::*)(::UnityEngine::Rendering::RasterCommandBuffer*, int32_t)>(
    &::UnityEngine::Rendering::Universal::DebugHandler::SetupShaderProperties)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x662e0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "SetupShaderProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.SetDebugRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler::*)(
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rect, bool, ::UnityEngine::Vector4)>(&::UnityEngine::Rendering::Universal::DebugHandler::SetDebugRenderTarget)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x662e66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "SetDebugRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.ResetDebugRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler::*)()>(
    &::UnityEngine::Rendering::Universal::DebugHandler::ResetDebugRenderTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x662e690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                               "ResetDebugRenderTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.InitDebugFinalValidationPassData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* (
    ::UnityEngine::Rendering::Universal::DebugHandler::*)(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
                                                          bool)>(&::UnityEngine::Rendering::Universal::DebugHandler::InitDebugFinalValidationPassData)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x662e698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "InitDebugFinalValidationPassData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.UpdateShaderGlobalPropertiesForFinalValidationPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*)>(
        &::UnityEngine::Rendering::Universal::DebugHandler::UpdateShaderGlobalPropertiesForFinalValidationPass)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x662e884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "UpdateShaderGlobalPropertiesForFinalValidationPass",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.UpdateShaderGlobalPropertiesForFinalValidationPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, bool)>(
        &::UnityEngine::Rendering::Universal::DebugHandler::UpdateShaderGlobalPropertiesForFinalValidationPass)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x662ebb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                    "UpdateShaderGlobalPropertiesForFinalValidationPass", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.UpdateShaderGlobalPropertiesForFinalValidationPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, bool)>(
    &::UnityEngine::Rendering::Universal::DebugHandler::UpdateShaderGlobalPropertiesForFinalValidationPass)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x662ed60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                    "UpdateShaderGlobalPropertiesForFinalValidationPass", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.InitDebugSetupPassData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* (
    ::UnityEngine::Rendering::Universal::DebugHandler::*)(::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*, bool)>(
    &::UnityEngine::Rendering::Universal::DebugHandler::InitDebugSetupPassData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x662f5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "InitDebugSetupPassData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*)>(&::UnityEngine::Rendering::Universal::DebugHandler::Setup)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x662f644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler::*)(::UnityEngine::Rendering::CommandBuffer*, bool)>(
    &::UnityEngine::Rendering::Universal::DebugHandler::Setup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x662fa54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, bool)>(&::UnityEngine::Rendering::Universal::DebugHandler::Setup)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x662fa58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugHandler::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::Universal::DebugHandler::Render)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x662fe58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.CreateRendererListsWithDebugRenderState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugRendererLists* (
    ::UnityEngine::Rendering::Universal::DebugHandler::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::CullingResults>,
                                                          ::ByRef<::UnityEngine::Rendering::DrawingSettings>, ::ByRef<::UnityEngine::Rendering::FilteringSettings>,
                                                          ::ByRef<::UnityEngine::Rendering::RenderStateBlock>)>(
    &::UnityEngine::Rendering::Universal::DebugHandler::CreateRendererListsWithDebugRenderState)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x662ff24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "CreateRendererListsWithDebugRenderState",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugHandler.CreateRendererListsWithDebugRenderState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugRendererLists* (
    ::UnityEngine::Rendering::Universal::DebugHandler::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::ByRef<::UnityEngine::Rendering::CullingResults>,
                                                          ::ByRef<::UnityEngine::Rendering::DrawingSettings>, ::ByRef<::UnityEngine::Rendering::FilteringSettings>,
                                                          ::ByRef<::UnityEngine::Rendering::RenderStateBlock>)>(
    &::UnityEngine::Rendering::Universal::DebugHandler::CreateRendererListsWithDebugRenderState)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x66304b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "CreateRendererListsWithDebugRenderState",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_s_DebugSetupPassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_DebugSetupPassData;
}
constexpr ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* const& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_s_DebugSetupPassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_DebugSetupPassData;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_s_DebugSetupPassData(::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___s_DebugSetupPassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_s_DebugFinalValidationPassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_DebugFinalValidationPassData;
}
constexpr ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* const&
UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_s_DebugFinalValidationPassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s_DebugFinalValidationPassData;
}
constexpr void
UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_s_DebugFinalValidationPassData(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___s_DebugFinalValidationPassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_ReplacementMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReplacementMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_ReplacementMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReplacementMaterial;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_m_ReplacementMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ReplacementMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_HDRDebugViewMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HDRDebugViewMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_HDRDebugViewMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HDRDebugViewMaterial;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_m_HDRDebugViewMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HDRDebugViewMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass*& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_HDRDebugViewPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HDRDebugViewPass;
}
constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass* const& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_HDRDebugViewPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HDRDebugViewPass;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_m_HDRDebugViewPass(::UnityEngine::Rendering::Universal::HDRDebugViewPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HDRDebugViewPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugScreenColorHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugScreenColorHandle;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugScreenColorHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugScreenColorHandle;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_m_DebugScreenColorHandle(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugScreenColorHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugScreenDepthHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugScreenDepthHandle;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugScreenDepthHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugScreenDepthHandle;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_m_DebugScreenDepthHandle(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugScreenDepthHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_RuntimeTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimeTextures;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* const& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_RuntimeTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimeTextures;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_m_RuntimeTextures(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RuntimeTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_HasDebugRenderTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasDebugRenderTarget;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_HasDebugRenderTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasDebugRenderTarget;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_m_HasDebugRenderTarget(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasDebugRenderTarget = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugRenderTargetSupportsStereo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugRenderTargetSupportsStereo;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugRenderTargetSupportsStereo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugRenderTargetSupportsStereo;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_m_DebugRenderTargetSupportsStereo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugRenderTargetSupportsStereo = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugRenderTargetPixelRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugRenderTargetPixelRect;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugRenderTargetPixelRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugRenderTargetPixelRect;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_m_DebugRenderTargetPixelRect(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugRenderTargetPixelRect = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugRenderTargetRangeRemap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugRenderTargetRangeRemap;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugRenderTargetRangeRemap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugRenderTargetRangeRemap;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_m_DebugRenderTargetRangeRemap(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugRenderTargetRangeRemap = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugRenderTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugRenderTarget;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugRenderTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugRenderTarget;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_m_DebugRenderTarget(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugRenderTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugFontTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFontTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugFontTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugFontTexture;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_m_DebugFontTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugFontTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_debugDisplayConstant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_debugDisplayConstant;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_debugDisplayConstant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_debugDisplayConstant;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_m_debugDisplayConstant(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_debugDisplayConstant)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*& UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugDisplaySettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugDisplaySettings;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings* const&
UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_get_m_DebugDisplaySettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugDisplaySettings;
}
constexpr void UnityEngine::Rendering::Universal::DebugHandler::__cordl_internal_set_m_DebugDisplaySettings(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugDisplaySettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugColorInvalidModePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugColorInvalidModePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugColorInvalidModePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugColorInvalidModePropertyId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugCurrentRealTimeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugCurrentRealTimeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugCurrentRealTimeId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugCurrentRealTimeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugColorPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugColorPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugColorPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugColorPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugTexturePropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugTexturePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugTexturePropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugTexturePropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugFontId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugFontId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugFontId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugFontId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugTextureNoStereoPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugTextureNoStereoPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugTextureNoStereoPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugTextureNoStereoPropertyId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugTextureDisplayRect(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugTextureDisplayRect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugTextureDisplayRect() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugTextureDisplayRect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugRenderTargetSupportsStereo(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugRenderTargetSupportsStereo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugRenderTargetSupportsStereo() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugRenderTargetSupportsStereo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugRenderTargetRangeRemap(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugRenderTargetRangeRemap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugRenderTargetRangeRemap() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugRenderTargetRangeRemap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugMaterialModeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugMaterialModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugMaterialModeId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugMaterialModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugVertexAttributeModeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugVertexAttributeModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugVertexAttributeModeId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugVertexAttributeModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugMaterialValidationModeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugMaterialValidationModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugMaterialValidationModeId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugMaterialValidationModeId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugMipInfoModeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugMipInfoModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugMipInfoModeId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugMipInfoModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugMipMapStatusModeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugMipMapStatusModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugMipMapStatusModeId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugMipMapStatusModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugMipMapShowStatusCodeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugMipMapShowStatusCodeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugMipMapShowStatusCodeId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugMipMapShowStatusCodeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugMipMapOpacityId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugMipMapOpacityId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugMipMapOpacityId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugMipMapOpacityId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugMipMapRecentlyUpdatedCooldownId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugMipMapRecentlyUpdatedCooldownId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugMipMapRecentlyUpdatedCooldownId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugMipMapRecentlyUpdatedCooldownId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugMipMapTerrainTextureModeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugMipMapTerrainTextureModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugMipMapTerrainTextureModeId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugMipMapTerrainTextureModeId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugSceneOverrideModeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugSceneOverrideModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugSceneOverrideModeId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugSceneOverrideModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugFullScreenModeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugFullScreenModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugFullScreenModeId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugFullScreenModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugValidationModeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugValidationModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugValidationModeId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugValidationModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugValidateBelowMinThresholdColorPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugValidateBelowMinThresholdColorPropertyId",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugValidateBelowMinThresholdColorPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugValidateBelowMinThresholdColorPropertyId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugValidateAboveMaxThresholdColorPropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugValidateAboveMaxThresholdColorPropertyId",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugValidateAboveMaxThresholdColorPropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugValidateAboveMaxThresholdColorPropertyId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugMaxPixelCost(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugMaxPixelCost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugMaxPixelCost() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugMaxPixelCost", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugLightingModeId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugLightingModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugLightingModeId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugLightingModeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugLightingFeatureFlagsId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugLightingFeatureFlagsId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugLightingFeatureFlagsId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugLightingFeatureFlagsId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugValidateAlbedoMinLuminanceId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugValidateAlbedoMinLuminanceId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugValidateAlbedoMinLuminanceId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugValidateAlbedoMinLuminanceId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugValidateAlbedoMaxLuminanceId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugValidateAlbedoMaxLuminanceId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugValidateAlbedoMaxLuminanceId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugValidateAlbedoMaxLuminanceId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugValidateAlbedoSaturationToleranceId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugValidateAlbedoSaturationToleranceId",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugValidateAlbedoSaturationToleranceId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugValidateAlbedoSaturationToleranceId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugValidateAlbedoHueToleranceId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugValidateAlbedoHueToleranceId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugValidateAlbedoHueToleranceId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugValidateAlbedoHueToleranceId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugValidateAlbedoCompareColorId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugValidateAlbedoCompareColorId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugValidateAlbedoCompareColorId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugValidateAlbedoCompareColorId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugValidateMetallicMinValueId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugValidateMetallicMinValueId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugValidateMetallicMinValueId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugValidateMetallicMinValueId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_DebugValidateMetallicMaxValueId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_DebugValidateMetallicMaxValueId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_DebugValidateMetallicMaxValueId() {
  return ::cordl_internals::getStaticField<int32_t, "k_DebugValidateMetallicMaxValueId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_ValidationChannelsId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ValidationChannelsId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_ValidationChannelsId() {
  return ::cordl_internals::getStaticField<int32_t, "k_ValidationChannelsId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_RangeMinimumId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_RangeMinimumId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_RangeMinimumId() {
  return ::cordl_internals::getStaticField<int32_t, "k_RangeMinimumId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_k_RangeMaximumId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_RangeMaximumId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::getStaticF_k_RangeMaximumId() {
  return ::cordl_internals::getStaticField<int32_t, "k_RangeMaximumId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_s_DebugSetupSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_DebugSetupSampler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::DebugHandler::getStaticF_s_DebugSetupSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_DebugSetupSampler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugHandler::setStaticF_s_DebugFinalValidationSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_DebugFinalValidationSampler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::DebugHandler::getStaticF_s_DebugFinalValidationSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_DebugFinalValidationSampler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get>();
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* UnityEngine::Rendering::Universal::DebugHandler::get_LightingSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "get_LightingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* UnityEngine::Rendering::Universal::DebugHandler::get_MaterialSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "get_MaterialSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* UnityEngine::Rendering::Universal::DebugHandler::get_RenderingSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "get_RenderingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugHandler::get_AreAnySettingsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "get_AreAnySettingsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugHandler::get_IsPostProcessingAllowed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "get_IsPostProcessingAllowed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugHandler::get_IsLightingActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "get_IsLightingActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugHandler::get_IsActiveModeUnsupportedForDeferred() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                               "get_IsActiveModeUnsupportedForDeferred", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugHandler::TryGetScreenClearColor(::ByRef<::UnityEngine::Color> color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "TryGetScreenClearColor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, color);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::DebugHandler::get_ReplacementMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "get_ReplacementMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings* UnityEngine::Rendering::Universal::DebugHandler::get_DebugDisplaySettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "get_DebugDisplaySettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::RTHandle*> UnityEngine::Rendering::Universal::DebugHandler::get_DebugScreenColorHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "get_DebugScreenColorHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::RTHandle*>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::RTHandle*> UnityEngine::Rendering::Universal::DebugHandler::get_DebugScreenDepthHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "get_DebugScreenDepthHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::RTHandle*>, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass* UnityEngine::Rendering::Universal::DebugHandler::get_hdrDebugViewPass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "get_hdrDebugViewPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::HDRDebugViewPass*, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugHandler::HDRDebugViewIsActive(bool resolveFinalTarget) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "HDRDebugViewIsActive",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, resolveFinalTarget);
}
inline bool UnityEngine::Rendering::Universal::DebugHandler::WriteToDebugScreenTexture(bool resolveFinalTarget) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "WriteToDebugScreenTexture",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, resolveFinalTarget);
}
inline bool UnityEngine::Rendering::Universal::DebugHandler::get_IsScreenClearNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "get_IsScreenClearNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugHandler::get_IsRenderPassSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "get_IsRenderPassSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::DebugHandler::get_stpDebugViewIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "get_stpDebugViewIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugHandler::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugHandler::IsActiveForCamera(bool isPreviewCamera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "IsActiveForCamera",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, isPreviewCamera);
}
inline bool UnityEngine::Rendering::Universal::DebugHandler::TryGetFullscreenDebugMode(::ByRef<::UnityEngine::Rendering::Universal::DebugFullScreenMode> debugFullScreenMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "TryGetFullscreenDebugMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::DebugFullScreenMode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, debugFullScreenMode);
}
inline bool UnityEngine::Rendering::Universal::DebugHandler::TryGetFullscreenDebugMode(::ByRef<::UnityEngine::Rendering::Universal::DebugFullScreenMode> debugFullScreenMode,
                                                                                       ::ByRef<int32_t> textureHeightPercent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "TryGetFullscreenDebugMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::DebugFullScreenMode>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, debugFullScreenMode, textureHeightPercent);
}
inline void UnityEngine::Rendering::Universal::DebugHandler::ConfigureColorDescriptorForDebugScreen(::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor, int32_t cameraWidth,
                                                                                                    int32_t cameraHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "ConfigureColorDescriptorForDebugScreen",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, descriptor, cameraWidth, cameraHeight);
}
inline void UnityEngine::Rendering::Universal::DebugHandler::ConfigureDepthDescriptorForDebugScreen(::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor,
                                                                                                    ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat, int32_t cameraWidth,
                                                                                                    int32_t cameraHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "ConfigureDepthDescriptorForDebugScreen",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RenderTextureDescriptor>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, descriptor, depthStencilFormat, cameraWidth, cameraHeight);
}
inline void UnityEngine::Rendering::Universal::DebugHandler::SetupShaderProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd, int32_t passIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "SetupShaderProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, passIndex);
}
inline void UnityEngine::Rendering::Universal::DebugHandler::SetDebugRenderTarget(::UnityEngine::Rendering::RTHandle* renderTarget, ::UnityEngine::Rect displayRect, bool supportsStereo,
                                                                                  ::UnityEngine::Vector4 dataRangeRemap) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "SetDebugRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderTarget, displayRect, supportsStereo, dataRangeRemap);
}
inline void UnityEngine::Rendering::Universal::DebugHandler::ResetDebugRenderTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                                                             "ResetDebugRenderTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*
UnityEngine::Rendering::Universal::DebugHandler::InitDebugFinalValidationPassData(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* passData,
                                                                                  ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool isFinalPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "InitDebugFinalValidationPassData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*, false>(this, ___internal_method, passData, cameraData, isFinalPass);
}
inline void UnityEngine::Rendering::Universal::DebugHandler::UpdateShaderGlobalPropertiesForFinalValidationPass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                                                ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "UpdateShaderGlobalPropertiesForFinalValidationPass",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, data);
}
inline void UnityEngine::Rendering::Universal::DebugHandler::UpdateShaderGlobalPropertiesForFinalValidationPass(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                                bool isFinalPass) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                  "UpdateShaderGlobalPropertiesForFinalValidationPass", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cameraData, isFinalPass);
}
inline void UnityEngine::Rendering::Universal::DebugHandler::UpdateShaderGlobalPropertiesForFinalValidationPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                                bool isFinalPass) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(),
                                  "UpdateShaderGlobalPropertiesForFinalValidationPass", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, cameraData, isFinalPass);
}
inline ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*
UnityEngine::Rendering::Universal::DebugHandler::InitDebugSetupPassData(::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* passData, bool isPreviewCamera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "InitDebugSetupPassData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*, false>(this, ___internal_method, passData, isPreviewCamera);
}
inline void UnityEngine::Rendering::Universal::DebugHandler::Setup(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* passData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, passData);
}
inline void UnityEngine::Rendering::Universal::DebugHandler::Setup(::UnityEngine::Rendering::CommandBuffer* cmd, bool isPreviewCamera) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, isPreviewCamera);
}
inline void UnityEngine::Rendering::Universal::DebugHandler::Setup(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool isPreviewCamera) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, isPreviewCamera);
}
inline void UnityEngine::Rendering::Universal::DebugHandler::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle srcColor,
                                                                    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle overlayTexture,
                                                                    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dstColor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, cameraData, srcColor, overlayTexture, dstColor);
}
inline ::UnityEngine::Rendering::Universal::DebugRendererLists* UnityEngine::Rendering::Universal::DebugHandler::CreateRendererListsWithDebugRenderState(
    ::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults, ::ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
    ::ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings, ::ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "CreateRendererListsWithDebugRenderState",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugRendererLists*, false>(this, ___internal_method, context, cullResults, drawingSettings, filteringSettings,
                                                                                                              renderStateBlock);
}
inline ::UnityEngine::Rendering::Universal::DebugRendererLists* UnityEngine::Rendering::Universal::DebugHandler::CreateRendererListsWithDebugRenderState(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
    ::ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings, ::ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
    ::ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugHandler*>::get(), "CreateRendererListsWithDebugRenderState",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugRendererLists*, false>(this, ___internal_method, renderGraph, cullResults, drawingSettings, filteringSettings,
                                                                                                              renderStateBlock);
}
inline ::UnityEngine::Rendering::Universal::DebugHandler* UnityEngine::Rendering::Universal::DebugHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DebugHandler*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr UnityEngine::Rendering::Universal::DebugHandler::operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* UnityEngine::Rendering::Universal::DebugHandler::i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugHandler::DebugHandler() {}
