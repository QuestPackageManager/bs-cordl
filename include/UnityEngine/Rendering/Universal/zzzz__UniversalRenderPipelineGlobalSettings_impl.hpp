#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\UniversalRenderPipelineGlobalSettings.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGlobalSettings_2_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderVariantLogLevel_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipelineGlobalSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPShaderStrippingSetting_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipeline_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSceneData_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGraphicsSettingsContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderStrippingSetting_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings.get_stripUnusedLODCrossFadeVariants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::get_stripUnusedLODCrossFadeVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6874764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), { "get_stripUnusedLODCrossFadeVariants", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings.set_stripUnusedLODCrossFadeVariants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::set_stripUnusedLODCrossFadeVariants)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x687476c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(),
                                                                                           { "set_stripUnusedLODCrossFadeVariants", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings.get_settingsList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::get_settingsList)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6874770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings.IsAtLastVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::IsAtLastVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6874794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), { "IsAtLastVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x68747a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings.GetOrCreateDefaultVolumeProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeProfile> (*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::GetOrCreateDefaultVolumeProfile)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68747e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(),
                                                                                           { "GetOrCreateDefaultVolumeProfile", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings.get_prefixedLightLayerNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::get_prefixedLightLayerNames)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x68747e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), { "get_prefixedLightLayerNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings.get_lightLayerNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::get_lightLayerNames)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6874830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), { "get_lightLayerNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings.ResetRenderingLayerNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::ResetRenderingLayerNames)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6874878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), { "ResetRenderingLayerNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings.GetOrCreateAPVSceneData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProbeVolumeSceneData* (::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::GetOrCreateAPVSceneData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6874900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), { "GetOrCreateAPVSceneData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6874960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ShaderStrippingSetting*& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_ShaderStrippingSetting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderStrippingSetting;
}
constexpr ::UnityEngine::Rendering::ShaderStrippingSetting* const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_ShaderStrippingSetting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderStrippingSetting;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_m_ShaderStrippingSetting(::UnityEngine::Rendering::ShaderStrippingSetting* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShaderStrippingSetting = value;
}
constexpr ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting*&
UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_URPShaderStrippingSetting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_URPShaderStrippingSetting;
}
constexpr ::UnityEngine::Rendering::Universal::URPShaderStrippingSetting* const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_URPShaderStrippingSetting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_URPShaderStrippingSetting;
}
constexpr void
UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_m_URPShaderStrippingSetting(::UnityEngine::Rendering::Universal::URPShaderStrippingSetting* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_URPShaderStrippingSetting = value;
}
constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_ShaderVariantLogLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderVariantLogLevel;
}
constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_ShaderVariantLogLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderVariantLogLevel;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_m_ShaderVariantLogLevel(::UnityEngine::Rendering::ShaderVariantLogLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShaderVariantLogLevel = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_ExportShaderVariants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExportShaderVariants;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_ExportShaderVariants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExportShaderVariants;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_m_ExportShaderVariants(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExportShaderVariants = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_StripDebugVariants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripDebugVariants;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_StripDebugVariants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripDebugVariants;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_m_StripDebugVariants(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StripDebugVariants = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_StripUnusedPostProcessingVariants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripUnusedPostProcessingVariants;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_StripUnusedPostProcessingVariants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripUnusedPostProcessingVariants;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_m_StripUnusedPostProcessingVariants(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StripUnusedPostProcessingVariants = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_StripUnusedVariants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripUnusedVariants;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_StripUnusedVariants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripUnusedVariants;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_m_StripUnusedVariants(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StripUnusedVariants = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_StripScreenCoordOverrideVariants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripScreenCoordOverrideVariants;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_StripScreenCoordOverrideVariants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StripScreenCoordOverrideVariants;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_m_StripScreenCoordOverrideVariants(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StripScreenCoordOverrideVariants = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_supportRuntimeDebugDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportRuntimeDebugDisplay;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_supportRuntimeDebugDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportRuntimeDebugDisplay;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_supportRuntimeDebugDisplay(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportRuntimeDebugDisplay = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_EnableRenderGraph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableRenderGraph;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_EnableRenderGraph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableRenderGraph;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_m_EnableRenderGraph(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableRenderGraph = value;
}
constexpr ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer*& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer* const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_m_Settings(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Settings = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_AssetVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetVersion;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_AssetVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AssetVersion;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_m_AssetVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AssetVersion = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_ObsoleteDefaultVolumeProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObsoleteDefaultVolumeProfile;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const&
UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_ObsoleteDefaultVolumeProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObsoleteDefaultVolumeProfile;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_m_ObsoleteDefaultVolumeProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ObsoleteDefaultVolumeProfile = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_RenderingLayerNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayerNames;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_RenderingLayerNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayerNames;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_m_RenderingLayerNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderingLayerNames = value;
}
constexpr uint32_t& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_ValidRenderingLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValidRenderingLayers;
}
constexpr uint32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_m_ValidRenderingLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValidRenderingLayers;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_m_ValidRenderingLayers(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ValidRenderingLayers = value;
}
constexpr ::StringW& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName0;
}
constexpr ::StringW const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName0;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_lightLayerName0(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightLayerName0 = value;
}
constexpr ::StringW& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName1;
}
constexpr ::StringW const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName1;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_lightLayerName1(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightLayerName1 = value;
}
constexpr ::StringW& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName2;
}
constexpr ::StringW const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName2;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_lightLayerName2(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightLayerName2 = value;
}
constexpr ::StringW& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName3;
}
constexpr ::StringW const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName3;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_lightLayerName3(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightLayerName3 = value;
}
constexpr ::StringW& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName4;
}
constexpr ::StringW const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName4;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_lightLayerName4(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightLayerName4 = value;
}
constexpr ::StringW& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName5;
}
constexpr ::StringW const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName5;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_lightLayerName5(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightLayerName5 = value;
}
constexpr ::StringW& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName6;
}
constexpr ::StringW const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName6;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_lightLayerName6(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightLayerName6 = value;
}
constexpr ::StringW& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName7() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName7;
}
constexpr ::StringW const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_lightLayerName7() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightLayerName7;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_lightLayerName7(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightLayerName7 = value;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeSceneData*& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_apvScenesData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___apvScenesData;
}
constexpr ::UnityEngine::Rendering::ProbeVolumeSceneData* const& UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_get_apvScenesData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___apvScenesData;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::__cordl_internal_set_apvScenesData(::UnityEngine::Rendering::ProbeVolumeSceneData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___apvScenesData = value;
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::get_stripUnusedLODCrossFadeVariants() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), { "get_stripUnusedLODCrossFadeVariants", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::set_stripUnusedLODCrossFadeVariants(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(),
                                                                                         { "set_stripUnusedLODCrossFadeVariants", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>*
UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::get_settingsList() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>*>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::IsAtLastVersion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), { "IsAtLastVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::Reset() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::VolumeProfile>
UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::GetOrCreateDefaultVolumeProfile(::UnityEngine::Rendering::VolumeProfile* defaultVolumeProfile) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(),
                                                                                         { "GetOrCreateDefaultVolumeProfile", {}, { ::i2c::type_of<::UnityEngine::Rendering::VolumeProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeProfile>>(nullptr, ___internal_method, defaultVolumeProfile);
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::get_prefixedLightLayerNames() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), { "get_prefixedLightLayerNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::get_lightLayerNames() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), { "get_lightLayerNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::ResetRenderingLayerNames() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), { "ResetRenderingLayerNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumeSceneData* UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::GetOrCreateAPVSceneData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), { "GetOrCreateAPVSceneData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProbeVolumeSceneData*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings* UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings::UniversalRenderPipelineGlobalSettings() {}
