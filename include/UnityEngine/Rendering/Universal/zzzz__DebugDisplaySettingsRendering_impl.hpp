#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugDisplaySettingsRendering.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugFullScreenMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMipInfoMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMipMapModeTerrainTexture_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMipMapStatusMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugOverdrawMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugPostProcessingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugSceneOverrideMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugValidationMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugWireframeMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelValidationChannels_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsRendering_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugDisplaySettingsRendering_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugFullScreenMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMipInfoMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMipMapModeTerrainTexture_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMipMapStatusMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugOverdrawMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugPostProcessingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugSceneOverrideMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugValidationMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugWireframeMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelValidationChannels_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsData_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsPanelDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__IDebugDisplaySettingsQuery_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode::DebugDisplaySettingsRendering_TaaDebugMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode::DebugDisplaySettingsRendering_TaaDebugMode() {}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode::None{ static_cast<int32_t>(
    0x0) };
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode::ShowRawFrame{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode::ShowRawFrameNoJitter{
  static_cast<int32_t>(0x2)
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode::ShowClampedHistory{
  static_cast<int32_t>(0x3)
};
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MapOverlays(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MapOverlays", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MapOverlays() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MapOverlays", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_StpDebugViews(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "StpDebugViews", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_StpDebugViews() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "StpDebugViews", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MapSize(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MapSize", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MapSize() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MapSize", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_AdditionalWireframeModes(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "AdditionalWireframeModes", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_AdditionalWireframeModes() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "AdditionalWireframeModes",
                                           ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_WireframeNotSupportedWarning(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "WireframeNotSupportedWarning",
                                    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_WireframeNotSupportedWarning() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "WireframeNotSupportedWarning",
                                           ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_OverdrawMode(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "OverdrawMode", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_OverdrawMode() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "OverdrawMode", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MaxOverdrawCount(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MaxOverdrawCount", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MaxOverdrawCount() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MaxOverdrawCount", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapDisableMipCaching(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDisableMipCaching", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapDisableMipCaching() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDisableMipCaching",
                                           ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapDebugView(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDebugView", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapDebugView() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDebugView", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapDebugOpacity(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDebugOpacity", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapDebugOpacity() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDebugOpacity",
                                           ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapMaterialTextureSlot(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapMaterialTextureSlot", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapMaterialTextureSlot() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapMaterialTextureSlot",
                                           ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapTerrainTexture(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapTerrainTexture", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapTerrainTexture() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapTerrainTexture",
                                           ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapDisplayStatusCodes(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDisplayStatusCodes", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapDisplayStatusCodes() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDisplayStatusCodes",
                                           ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapActivityTimespan(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapActivityTimespan", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapActivityTimespan() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapActivityTimespan",
                                           ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapCombinePerMaterial(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapCombinePerMaterial", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapCombinePerMaterial() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapCombinePerMaterial",
                                           ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_PostProcessing(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "PostProcessing", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_PostProcessing() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "PostProcessing", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MSAA(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MSAA", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MSAA() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MSAA", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_HDR(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "HDR", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_HDR() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "HDR", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_TaaDebugMode(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "TaaDebugMode", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_TaaDebugMode() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "TaaDebugMode", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_PixelValidationMode(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "PixelValidationMode", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_PixelValidationMode() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "PixelValidationMode",
                                           ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_Channels(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "Channels", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_Channels() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "Channels", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_ValueRangeMin(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "ValueRangeMin", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_ValueRangeMin() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "ValueRangeMin", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_ValueRangeMax(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "ValueRangeMax", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_ValueRangeMax() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "ValueRangeMax", ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::DebugDisplaySettingsRendering_Strings() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x684649c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMapOverlaySize_b__2_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMapOverlaySize_b__2_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68464a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMapOverlaySize>b__2_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMapOverlaySize_b__2_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMapOverlaySize_b__2_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68464a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMapOverlaySize>b__2_3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateAdditionalWireframeShaderViews_b__3_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t)>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateAdditionalWireframeShaderViews_b__3_4)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x68464b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(),
                            { "<CreateAdditionalWireframeShaderViews>b__3_4", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMaxOverdrawCount_b__6_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMaxOverdrawCount_b__6_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684652c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMaxOverdrawCount>b__6_3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMaxOverdrawCount_b__6_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMaxOverdrawCount_b__6_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6846534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMaxOverdrawCount>b__6_4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMipMapDebugWidget_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugWidget_b__7_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x684653c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMipMapDebugWidget>b__7_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMipMapDebugWidget_b__7_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)(bool)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugWidget_b__7_1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x68465a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(),
                                                                                           { "<CreateMipMapDebugWidget>b__7_1", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMipMapDebugSettings_b__9_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugSettings_b__9_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6846620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMipMapDebugSettings>b__9_4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMipMapDebugSettings_b__9_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugSettings_b__9_5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6846628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMipMapDebugSettings>b__9_5", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMipMapDebugSettings_b__9_10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugSettings_b__9_10)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6846630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMipMapDebugSettings>b__9_10", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMipMapDebugCooldownSlider_b__11_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugCooldownSlider_b__11_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6846638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(),
                                                                                           { "<CreateMipMapDebugCooldownSlider>b__11_3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMipMapDebugCooldownSlider_b__11_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugCooldownSlider_b__11_4)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6846640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(),
                                                                                           { "<CreateMipMapDebugCooldownSlider>b__11_4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateTaaDebugMode_b__16_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)(
    ::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateTaaDebugMode_b__16_4)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x684664c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(),
                                                { "<CreateTaaDebugMode>b__16_4", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreatePixelValidationMode_b__17_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)(
    ::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreatePixelValidationMode_b__17_4)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x68466c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(),
                                                { "<CreatePixelValidationMode>b__17_4", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*, "<>9",
                                    ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*, "<>9",
                                           ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__2_2(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__2_2", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__2_2() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__2_2", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__2_3(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__2_3", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__2_3() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__2_3", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__3_4(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*, "<>9__3_4",
                                    ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__3_4() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*, "<>9__3_4",
                                           ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__6_3(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__6_3", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__6_3() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__6_3", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__6_4(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__6_4", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__6_4() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__6_4", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__7_0(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__7_0", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__7_0", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__7_1(::System::Action_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__7_1", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__7_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__7_1", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__9_4(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__9_4", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__9_4() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__9_4", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__9_5(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__9_5", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__9_5() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__9_5", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__9_10(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__9_10", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__9_10() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__9_10", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__11_3(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__11_3", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__11_3() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__11_3", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__11_4(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__11_4", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__11_4() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__11_4", ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__16_4(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*, "<>9__16_4",
                                    ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__16_4() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*, "<>9__16_4",
                                           ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__17_4(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*, "<>9__17_4",
                                    ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__17_4() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*, "<>9__17_4",
                                           ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMapOverlaySize_b__2_2() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMapOverlaySize>b__2_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMapOverlaySize_b__2_3() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMapOverlaySize>b__2_3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateAdditionalWireframeShaderViews_b__3_4(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _,
                                                                                                                                             int32_t __param_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(),
                                       { "<CreateAdditionalWireframeShaderViews>b__3_4", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __param_1);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMaxOverdrawCount_b__6_3() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMaxOverdrawCount>b__6_3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMaxOverdrawCount_b__6_4() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMaxOverdrawCount>b__6_4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugWidget_b__7_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMipMapDebugWidget>b__7_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugWidget_b__7_1(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(),
                                                                                         { "<CreateMipMapDebugWidget>b__7_1", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugSettings_b__9_4() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMipMapDebugSettings>b__9_4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugSettings_b__9_5() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMipMapDebugSettings>b__9_5", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugSettings_b__9_10() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(), { "<CreateMipMapDebugSettings>b__9_10", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugCooldownSlider_b__11_3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(),
                                                                                         { "<CreateMipMapDebugCooldownSlider>b__11_3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugCooldownSlider_b__11_4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(),
                                                                                         { "<CreateMipMapDebugCooldownSlider>b__11_4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateTaaDebugMode_b__16_4(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _, int32_t __param_1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(),
                                              { "<CreateTaaDebugMode>b__16_4", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __param_1);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreatePixelValidationMode_b__17_4(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _,
                                                                                                                                   int32_t __param_1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(),
                                              { "<CreatePixelValidationMode>b__17_4", {}, { ::i2c::type_of<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, __param_1);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::WidgetFactory_DebugDisplaySettingsRendering___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6841bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0._CreateMapOverlays_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6846744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>(), { "<CreateMapOverlays>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0._CreateMapOverlays_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x684679c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>(),
                                                             { "<CreateMapOverlays>b__1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0._CreateMapOverlays_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6846800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>(), { "<CreateMapOverlays>b__2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0._CreateMapOverlays_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6846858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>(),
                                                             { "<CreateMapOverlays>b__3", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>(), { "<CreateMapOverlays>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__1(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>(),
                                                           { "<CreateMapOverlays>b__1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__2() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>(), { "<CreateMapOverlays>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__3(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>(),
                                                           { "<CreateMapOverlays>b__3", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6844d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0._CreateMipMapDebugSlotSelector_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68468bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>(),
                                                             { "<CreateMipMapDebugSlotSelector>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0._CreateMipMapDebugSlotSelector_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6846914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>(),
                                                             { "<CreateMipMapDebugSlotSelector>b__1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0._CreateMipMapDebugSlotSelector_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6846978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>(),
                                                             { "<CreateMipMapDebugSlotSelector>b__2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0._CreateMipMapDebugSlotSelector_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68469d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>(),
                                                             { "<CreateMipMapDebugSlotSelector>b__3", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>(),
                                                           { "<CreateMipMapDebugSlotSelector>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__1(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>(),
                                                           { "<CreateMipMapDebugSlotSelector>b__1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__2() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>(),
                                                           { "<CreateMipMapDebugSlotSelector>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__3(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>(),
                                                           { "<CreateMipMapDebugSlotSelector>b__3", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6844d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0._CreateMipMapDebugCooldownSlider_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_CreateMipMapDebugCooldownSlider_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6846a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>(),
                                                             { "<CreateMipMapDebugCooldownSlider>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0._CreateMipMapDebugCooldownSlider_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_CreateMipMapDebugCooldownSlider_b__1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6846a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>(),
                                                             { "<CreateMipMapDebugCooldownSlider>b__1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0._CreateMipMapDebugCooldownSlider_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_CreateMipMapDebugCooldownSlider_b__2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6846aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>(),
                                                             { "<CreateMipMapDebugCooldownSlider>b__2", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_CreateMipMapDebugCooldownSlider_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>(),
                                                           { "<CreateMipMapDebugCooldownSlider>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_CreateMipMapDebugCooldownSlider_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>(),
                                                           { "<CreateMipMapDebugCooldownSlider>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_CreateMipMapDebugCooldownSlider_b__2(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>(),
                                                           { "<CreateMipMapDebugCooldownSlider>b__2", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6844d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0._CreateMipMapShowStatusCodeToggle_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_CreateMipMapShowStatusCodeToggle_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6846b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>(),
                                                             { "<CreateMipMapShowStatusCodeToggle>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0._CreateMipMapShowStatusCodeToggle_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_CreateMipMapShowStatusCodeToggle_b__1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6846bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>(),
                                                             { "<CreateMipMapShowStatusCodeToggle>b__1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0._CreateMipMapShowStatusCodeToggle_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::*)(bool)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_CreateMipMapShowStatusCodeToggle_b__2)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6846c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>(),
                                                             { "<CreateMipMapShowStatusCodeToggle>b__2", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_CreateMipMapShowStatusCodeToggle_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>(),
                                                           { "<CreateMipMapShowStatusCodeToggle>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_CreateMipMapShowStatusCodeToggle_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>(),
                                                           { "<CreateMipMapShowStatusCodeToggle>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_CreateMipMapShowStatusCodeToggle_b__2(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>(),
                                                           { "<CreateMipMapShowStatusCodeToggle>b__2", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x684504c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0._CreatePostProcessing_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6846c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>(), { "<CreatePostProcessing>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0._CreatePostProcessing_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6846cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>(),
                                                             { "<CreatePostProcessing>b__1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0._CreatePostProcessing_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6846d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>(), { "<CreatePostProcessing>b__2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0._CreatePostProcessing_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6846d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>(),
                                                             { "<CreatePostProcessing>b__3", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>(), { "<CreatePostProcessing>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__1(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>(),
                                                           { "<CreatePostProcessing>b__1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__2() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>(), { "<CreatePostProcessing>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__3(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>(),
                                                           { "<CreatePostProcessing>b__3", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x684527c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0._CreateMSAA_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::_CreateMSAA_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6846de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*>(), { "<CreateMSAA>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0._CreateMSAA_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::*)(bool)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::_CreateMSAA_b__1)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6846e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*>(),
                                                             { "<CreateMSAA>b__1", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::_CreateMSAA_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*>(), { "<CreateMSAA>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::_CreateMSAA_b__1(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*>(),
                                                           { "<CreateMSAA>b__1", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68454ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0._CreateHDR_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::_CreateHDR_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6846ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*>(), { "<CreateHDR>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0._CreateHDR_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::*)(bool)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::_CreateHDR_b__1)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6846f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*>(),
                                                             { "<CreateHDR>b__1", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::_CreateHDR_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*>(), { "<CreateHDR>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::_CreateHDR_b__1(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*>(),
                                                           { "<CreateHDR>b__1", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6845894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0._CreateTaaDebugMode_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6846f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>(), { "<CreateTaaDebugMode>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0._CreateTaaDebugMode_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6846fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>(),
                                                             { "<CreateTaaDebugMode>b__1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0._CreateTaaDebugMode_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6847024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>(), { "<CreateTaaDebugMode>b__2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0._CreateTaaDebugMode_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x684707c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>(),
                                                             { "<CreateTaaDebugMode>b__3", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>(), { "<CreateTaaDebugMode>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__1(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>(),
                                                           { "<CreateTaaDebugMode>b__1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__2() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>(), { "<CreateTaaDebugMode>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__3(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>(),
                                                           { "<CreateTaaDebugMode>b__3", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6845c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0._CreatePixelValidationMode_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68470e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>(),
                                                             { "<CreatePixelValidationMode>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0._CreatePixelValidationMode_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6847138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>(),
                                                             { "<CreatePixelValidationMode>b__1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0._CreatePixelValidationMode_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x684719c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>(),
                                                             { "<CreatePixelValidationMode>b__2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0._CreatePixelValidationMode_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68471f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>(),
                                                             { "<CreatePixelValidationMode>b__3", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>(), { "<CreatePixelValidationMode>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__1(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>(),
                                                           { "<CreatePixelValidationMode>b__1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__2() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>(), { "<CreatePixelValidationMode>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__3(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>(),
                                                           { "<CreatePixelValidationMode>b__3", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6845fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0._CreatePixelValidationChannels_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6847258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>(),
                                                             { "<CreatePixelValidationChannels>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0._CreatePixelValidationChannels_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68472b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>(),
                                                             { "<CreatePixelValidationChannels>b__1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0._CreatePixelValidationChannels_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6847314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>(),
                                                             { "<CreatePixelValidationChannels>b__2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0._CreatePixelValidationChannels_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x684736c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>(),
                                                             { "<CreatePixelValidationChannels>b__3", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>(),
                                                           { "<CreatePixelValidationChannels>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__1(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>(),
                                                           { "<CreatePixelValidationChannels>b__1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__2() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>(),
                                                           { "<CreatePixelValidationChannels>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__3(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>(),
                                                           { "<CreatePixelValidationChannels>b__3", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68461fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0._CreatePixelValueRangeMin_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::_CreatePixelValueRangeMin_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68473d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*>(), { "<CreatePixelValueRangeMin>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0._CreatePixelValueRangeMin_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::_CreatePixelValueRangeMin_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6847428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*>(),
                                                             { "<CreatePixelValueRangeMin>b__1", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::_CreatePixelValueRangeMin_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*>(), { "<CreatePixelValueRangeMin>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::_CreatePixelValueRangeMin_b__1(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*>(),
                                                           { "<CreatePixelValueRangeMin>b__1", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x684201c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0._CreateStpDebugViews_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x684748c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>(), { "<CreateStpDebugViews>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0._CreateStpDebugViews_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68474ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>(), { "<CreateStpDebugViews>b__1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0._CreateStpDebugViews_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6847544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>(),
                                                             { "<CreateStpDebugViews>b__2", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0._CreateStpDebugViews_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__3)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68475a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>(), { "<CreateStpDebugViews>b__3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0._CreateStpDebugViews_b__4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__4)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6847600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>(),
                                                             { "<CreateStpDebugViews>b__4", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>(), { "<CreateStpDebugViews>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__1() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>(), { "<CreateStpDebugViews>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__2(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>(),
                                                           { "<CreateStpDebugViews>b__2", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__3() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>(), { "<CreateStpDebugViews>b__3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__4(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>(),
                                                           { "<CreateStpDebugViews>b__4", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6846444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0._CreatePixelValueRangeMax_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::_CreatePixelValueRangeMax_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6847664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*>(), { "<CreatePixelValueRangeMax>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0._CreatePixelValueRangeMax_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::_CreatePixelValueRangeMax_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68476bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*>(),
                                                             { "<CreatePixelValueRangeMax>b__1", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::_CreatePixelValueRangeMax_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*>(), { "<CreatePixelValueRangeMax>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::_CreatePixelValueRangeMax_b__1(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*>(),
                                                           { "<CreatePixelValueRangeMax>b__1", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68423d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0._CreateMapOverlaySize_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::_CreateMapOverlaySize_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6847720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*>(), { "<CreateMapOverlaySize>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0._CreateMapOverlaySize_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::_CreateMapOverlaySize_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6847778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*>(),
                                                             { "<CreateMapOverlaySize>b__1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::_CreateMapOverlaySize_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*>(), { "<CreateMapOverlaySize>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::_CreateMapOverlaySize_b__1(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*>(),
                                                           { "<CreateMapOverlaySize>b__1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68427b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0._CreateAdditionalWireframeShaderViews_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68477dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>(),
                                                             { "<CreateAdditionalWireframeShaderViews>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0._CreateAdditionalWireframeShaderViews_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6847834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>(),
                                                             { "<CreateAdditionalWireframeShaderViews>b__1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0._CreateAdditionalWireframeShaderViews_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68478bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>(),
                                                             { "<CreateAdditionalWireframeShaderViews>b__2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0._CreateAdditionalWireframeShaderViews_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__3)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6847914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>(),
                                                             { "<CreateAdditionalWireframeShaderViews>b__3", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>(),
                                                           { "<CreateAdditionalWireframeShaderViews>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__1(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>(),
                                                           { "<CreateAdditionalWireframeShaderViews>b__1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__2() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>(),
                                                           { "<CreateAdditionalWireframeShaderViews>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__3(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>(),
                                                           { "<CreateAdditionalWireframeShaderViews>b__3", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6842910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0._CreateWireframeNotSupportedWarning_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::_CreateWireframeNotSupportedWarning_b__0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x684799c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0*>(),
                                                             { "<CreateWireframeNotSupportedWarning>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::_CreateWireframeNotSupportedWarning_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0*>(),
                                                           { "<CreateWireframeNotSupportedWarning>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6842c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0._CreateOverdrawMode_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6847a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>(), { "<CreateOverdrawMode>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0._CreateOverdrawMode_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6847a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>(),
                                                             { "<CreateOverdrawMode>b__1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0._CreateOverdrawMode_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6847b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>(), { "<CreateOverdrawMode>b__2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0._CreateOverdrawMode_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__3)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6847b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>(),
                                                             { "<CreateOverdrawMode>b__3", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>(), { "<CreateOverdrawMode>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__1(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>(),
                                                           { "<CreateOverdrawMode>b__1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__2() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>(), { "<CreateOverdrawMode>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__3(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>(),
                                                           { "<CreateOverdrawMode>b__3", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6843084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0._CreateMaxOverdrawCount_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_CreateMaxOverdrawCount_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6847be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>(), { "<CreateMaxOverdrawCount>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0._CreateMaxOverdrawCount_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_CreateMaxOverdrawCount_b__1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6847c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>(), { "<CreateMaxOverdrawCount>b__1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0._CreateMaxOverdrawCount_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_CreateMaxOverdrawCount_b__2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6847c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>(),
                                                             { "<CreateMaxOverdrawCount>b__2", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_CreateMaxOverdrawCount_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>(), { "<CreateMaxOverdrawCount>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_CreateMaxOverdrawCount_b__1() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>(), { "<CreateMaxOverdrawCount>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_CreateMaxOverdrawCount_b__2(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>(),
                                                           { "<CreateMaxOverdrawCount>b__2", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6844378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0._CreateMipMapMode_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6847d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>(), { "<CreateMipMapMode>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0._CreateMipMapMode_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6847d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>(),
                                                             { "<CreateMipMapMode>b__1", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0._CreateMipMapMode_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6847dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>(), { "<CreateMipMapMode>b__2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0._CreateMipMapMode_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6847e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>(),
                                                             { "<CreateMipMapMode>b__3", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>(), { "<CreateMipMapMode>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__1(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>(),
                                                           { "<CreateMipMapMode>b__1", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__2() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>(), { "<CreateMipMapMode>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__3(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>(),
                                                           { "<CreateMipMapMode>b__3", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x684437c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6847e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { "<CreateMipMapDebugSettings>b__0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6847ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { "<CreateMipMapDebugSettings>b__2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6847f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(),
                                                             { "<CreateMipMapDebugSettings>b__3", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6847f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { "<CreateMipMapDebugSettings>b__1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__6)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6847ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { "<CreateMipMapDebugSettings>b__6", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__7)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x684805c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { "<CreateMipMapDebugSettings>b__7", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)(bool)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__8)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x68480b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(),
                                                             { "<CreateMipMapDebugSettings>b__8", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__9)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6848128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { "<CreateMipMapDebugSettings>b__9", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__11)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68481a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(),
                                                             { "<CreateMipMapDebugSettings>b__11", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__12
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__12)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68481f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(),
                                                             { "<CreateMipMapDebugSettings>b__12", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__13
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__13)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x684825c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(),
                                                             { "<CreateMipMapDebugSettings>b__13", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__14
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__14)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68482b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(),
                                                             { "<CreateMipMapDebugSettings>b__14", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const&
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::__cordl_internal_set_panel(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panel = value;
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { "<CreateMipMapDebugSettings>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__2() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { "<CreateMipMapDebugSettings>b__2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__3(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(),
                                                           { "<CreateMipMapDebugSettings>b__3", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__1() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { "<CreateMipMapDebugSettings>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__6() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { "<CreateMipMapDebugSettings>b__6", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__7() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { "<CreateMipMapDebugSettings>b__7", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__8(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(),
                                                           { "<CreateMipMapDebugSettings>b__8", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__9() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { "<CreateMipMapDebugSettings>b__9", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__11() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { "<CreateMipMapDebugSettings>b__11", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__12(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(),
                                                           { "<CreateMipMapDebugSettings>b__12", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__13() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(), { "<CreateMipMapDebugSettings>b__13", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__14(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>(),
                                                           { "<CreateMipMapDebugSettings>b__14", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMapOverlays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMapOverlays)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x6841898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                             { "CreateMapOverlays", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateStpDebugViews
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateStpDebugViews)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x6841bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                             { "CreateStpDebugViews", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMapOverlaySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMapOverlaySize)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x6842020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                             { "CreateMapOverlaySize", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateAdditionalWireframeShaderViews
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateAdditionalWireframeShaderViews)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x68423d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                         { "CreateAdditionalWireframeShaderViews", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateWireframeNotSupportedWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateWireframeNotSupportedWarning)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x68427bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                         { "CreateWireframeNotSupportedWarning", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateOverdrawMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateOverdrawMode)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x6842914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                             { "CreateOverdrawMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMaxOverdrawCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMaxOverdrawCount)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x6842c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                { "CreateMaxOverdrawCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMipMapDebugWidget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugWidget)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6843088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                { "CreateMipMapDebugWidget", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMipMapMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapMode)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x6843378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                             { "CreateMipMapMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMipMapDebugSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugSettings)> {
  constexpr static std::size_t size = 0xccc;
  constexpr static std::size_t addrs = 0x68436ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                { "CreateMipMapDebugSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMipMapDebugSlotSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*,
                                                                                                     ::System::Func_1<bool>*, ::ArrayW<::UnityEngine::GUIContent*>, ::ArrayW<int32_t>)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugSlotSelector)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x6844380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                { "CreateMipMapDebugSlotSelector",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>(), ::i2c::type_of<::System::Func_1<bool>*>(),
                                                    ::i2c::type_of<::ArrayW<::UnityEngine::GUIContent*>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMipMapDebugCooldownSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugCooldownSlider)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x684493c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                { "CreateMipMapDebugCooldownSlider", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMipMapShowStatusCodeToggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapShowStatusCodeToggle)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x68446a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                { "CreateMipMapShowStatusCodeToggle", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreatePostProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePostProcessing)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x6844d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                             { "CreatePostProcessing", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMSAA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMSAA)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6845050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                             { "CreateMSAA", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateHDR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateHDR)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6845280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                             { "CreateHDR", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateTaaDebugMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateTaaDebugMode)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x68454b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                             { "CreateTaaDebugMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreatePixelValidationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValidationMode)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x6845898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                { "CreatePixelValidationMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreatePixelValidationChannels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValidationChannels)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x6845c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                { "CreatePixelValidationChannels", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreatePixelValueRangeMin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValueRangeMin)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6845fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                { "CreatePixelValueRangeMin", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreatePixelValueRangeMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValueRangeMax)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6846200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                { "CreatePixelValueRangeMax", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMapOverlays(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                           { "CreateMapOverlays", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateStpDebugViews(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                           { "CreateStpDebugViews", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMapOverlaySize(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                           { "CreateMapOverlaySize", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateAdditionalWireframeShaderViews(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                       { "CreateAdditionalWireframeShaderViews", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateWireframeNotSupportedWarning(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                              { "CreateWireframeNotSupportedWarning", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateOverdrawMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                           { "CreateOverdrawMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMaxOverdrawCount(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                           { "CreateMaxOverdrawCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugWidget(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                              { "CreateMipMapDebugWidget", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                           { "CreateMipMapMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                              { "CreateMipMapDebugSettings", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugSlotSelector(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel,
                                                                                                              ::System::Func_1<bool>* hiddenCB, ::ArrayW<::UnityEngine::GUIContent*> texSlotStrings,
                                                                                                              ::ArrayW<int32_t> texSlotValues) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                              { "CreateMipMapDebugSlotSelector",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>(), ::i2c::type_of<::System::Func_1<bool>*>(),
                                                  ::i2c::type_of<::ArrayW<::UnityEngine::GUIContent*>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel, hiddenCB, texSlotStrings, texSlotValues);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugCooldownSlider(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                              { "CreateMipMapDebugCooldownSlider", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapShowStatusCodeToggle(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                              { "CreateMipMapShowStatusCodeToggle", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePostProcessing(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                           { "CreatePostProcessing", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMSAA(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                           { "CreateMSAA", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateHDR(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                           { "CreateHDR", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateTaaDebugMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                                           { "CreateTaaDebugMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValidationMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                              { "CreatePixelValidationMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValidationChannels(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                              { "CreatePixelValidationChannels", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValueRangeMin(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                              { "CreatePixelValueRangeMin", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValueRangeMax(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>(),
                                              { "CreatePixelValueRangeMax", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*>(nullptr, ___internal_method, panel);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::DebugDisplaySettingsRendering_WidgetFactory() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::*)()>(
    &::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6848318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0.__ctor_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::*)()>(
    &::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x684831c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0*>(), { "<.ctor>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*&
UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* const&
UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::__cordl_internal_set_data(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::__ctor_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0*>(), { "<.ctor>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0*
UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel::*)(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel::_ctor)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x6840cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel::_ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel::New_ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>(data));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel::DebugDisplaySettingsRendering_SettingsPanel() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_wireframeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugWireframeMode (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_wireframeMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684091c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_wireframeMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_wireframeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(::UnityEngine::Rendering::Universal::DebugWireframeMode)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_wireframeMode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6840924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                             { "set_wireframeMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugWireframeMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_overdraw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_overdraw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x684097c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_overdraw", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_overdraw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_overdraw)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6840984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_overdraw", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_overdrawMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugOverdrawMode (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_overdrawMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68409b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_overdrawMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_overdrawMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(::UnityEngine::Rendering::Universal::DebugOverdrawMode)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_overdrawMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x68409bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                           { "set_overdrawMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugOverdrawMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_maxOverdrawCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_maxOverdrawCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68409e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_maxOverdrawCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_maxOverdrawCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_maxOverdrawCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68409e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_maxOverdrawCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.UpdateDebugSceneOverrideMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::UpdateDebugSceneOverrideMode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6840950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "UpdateDebugSceneOverrideMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_fullScreenDebugMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugFullScreenMode (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_fullScreenDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68409f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_fullScreenDebugMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_fullScreenDebugMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(::UnityEngine::Rendering::Universal::DebugFullScreenMode)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_fullScreenDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68409f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                             { "set_fullScreenDebugMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugFullScreenMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_stpDebugViewIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_stpDebugViewIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_stpDebugViewIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_stpDebugViewIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_stpDebugViewIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_stpDebugViewIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_fullScreenDebugModeOutputSizeScreenPercent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_fullScreenDebugModeOutputSizeScreenPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_fullScreenDebugModeOutputSizeScreenPercent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_fullScreenDebugModeOutputSizeScreenPercent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_fullScreenDebugModeOutputSizeScreenPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                           { "set_fullScreenDebugModeOutputSizeScreenPercent", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_sceneOverrideMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugSceneOverrideMode (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_sceneOverrideMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_sceneOverrideMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_sceneOverrideMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(::UnityEngine::Rendering::Universal::DebugSceneOverrideMode)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_sceneOverrideMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                             { "set_sceneOverrideMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugSceneOverrideMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_mipInfoMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugMipInfoMode (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipInfoMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_mipInfoMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_mipInfoMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(::UnityEngine::Rendering::Universal::DebugMipInfoMode)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipInfoMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                           { "set_mipInfoMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugMipInfoMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_mipDebugStatusShowCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugStatusShowCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_mipDebugStatusShowCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_mipDebugStatusShowCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugStatusShowCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_mipDebugStatusShowCode", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_mipDebugStatusMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugMipMapStatusMode (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugStatusMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_mipDebugStatusMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_mipDebugStatusMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(::UnityEngine::Rendering::Universal::DebugMipMapStatusMode)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugStatusMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                             { "set_mipDebugStatusMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugMipMapStatusMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_mipDebugOpacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugOpacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_mipDebugOpacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_mipDebugOpacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugOpacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_mipDebugOpacity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_mipDebugRecentUpdateCooldown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugRecentUpdateCooldown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_mipDebugRecentUpdateCooldown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_mipDebugRecentUpdateCooldown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugRecentUpdateCooldown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                           { "set_mipDebugRecentUpdateCooldown", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_mipDebugMaterialTextureSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugMaterialTextureSlot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_mipDebugMaterialTextureSlot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_mipDebugMaterialTextureSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugMaterialTextureSlot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                           { "set_mipDebugMaterialTextureSlot", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_showInfoForAllSlots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_showInfoForAllSlots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_showInfoForAllSlots", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_showInfoForAllSlots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_showInfoForAllSlots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_showInfoForAllSlots", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_canAggregateData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_canAggregateData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6840aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_canAggregateData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_mipDebugTerrainTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugTerrainTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_mipDebugTerrainTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_mipDebugTerrainTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugTerrainTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                             { "set_mipDebugTerrainTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_postProcessingDebugMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugPostProcessingMode (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_postProcessingDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_postProcessingDebugMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_postProcessingDebugMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(::UnityEngine::Rendering::Universal::DebugPostProcessingMode)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_postProcessingDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                             { "set_postProcessingDebugMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugPostProcessingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_enableMsaa
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_enableMsaa)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_enableMsaa", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_enableMsaa
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_enableMsaa)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_enableMsaa", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_enableHDR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_enableHDR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_enableHDR", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_enableHDR
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_enableHDR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_enableHDR", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_taaDebugMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_taaDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_taaDebugMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_taaDebugMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_taaDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                             { "set_taaDebugMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_validationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugValidationMode (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_validationMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_validationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(::UnityEngine::Rendering::Universal::DebugValidationMode)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                             { "set_validationMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugValidationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_validationChannels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::PixelValidationChannels (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationChannels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_validationChannels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_validationChannels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(::UnityEngine::Rendering::Universal::PixelValidationChannels)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationChannels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                             { "set_validationChannels", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::PixelValidationChannels>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_validationRangeMin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationRangeMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_validationRangeMin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_validationRangeMin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationRangeMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_validationRangeMin", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_validationRangeMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationRangeMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_validationRangeMax", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_validationRangeMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationRangeMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6840b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_validationRangeMax", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_AreAnySettingsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_AreAnySettingsActive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6840b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_AreAnySettingsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_IsPostProcessingAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_IsPostProcessingAllowed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6840b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_IsPostProcessingAllowed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_IsLightingActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_IsLightingActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6840bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_IsLightingActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.TryGetScreenClearColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(::by_ref<::UnityEngine::Color>)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::TryGetScreenClearColor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6840be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                           { "TryGetScreenClearColor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6840c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                           { "UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6841254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DebugWireframeMode& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get_m_WireframeMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WireframeMode;
}
constexpr ::UnityEngine::Rendering::Universal::DebugWireframeMode const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get_m_WireframeMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WireframeMode;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set_m_WireframeMode(::UnityEngine::Rendering::Universal::DebugWireframeMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WireframeMode = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get_m_Overdraw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Overdraw;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get_m_Overdraw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Overdraw;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set_m_Overdraw(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Overdraw = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugOverdrawMode& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get_m_OverdrawMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverdrawMode;
}
constexpr ::UnityEngine::Rendering::Universal::DebugOverdrawMode const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get_m_OverdrawMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverdrawMode;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set_m_OverdrawMode(::UnityEngine::Rendering::Universal::DebugOverdrawMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OverdrawMode = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__maxOverdrawCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxOverdrawCount_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__maxOverdrawCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxOverdrawCount_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__maxOverdrawCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxOverdrawCount_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugFullScreenMode& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__fullScreenDebugMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullScreenDebugMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugFullScreenMode const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__fullScreenDebugMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullScreenDebugMode_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__fullScreenDebugMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugFullScreenMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullScreenDebugMode_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__stpDebugViewIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stpDebugViewIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__stpDebugViewIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stpDebugViewIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__stpDebugViewIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stpDebugViewIndex_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__fullScreenDebugModeOutputSizeScreenPercent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullScreenDebugModeOutputSizeScreenPercent_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__fullScreenDebugModeOutputSizeScreenPercent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullScreenDebugModeOutputSizeScreenPercent_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__fullScreenDebugModeOutputSizeScreenPercent_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullScreenDebugModeOutputSizeScreenPercent_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__sceneOverrideMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneOverrideMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__sceneOverrideMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneOverrideMode_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__sceneOverrideMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugSceneOverrideMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneOverrideMode_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__mipInfoMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipInfoMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__mipInfoMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipInfoMode_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__mipInfoMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugMipInfoMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mipInfoMode_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__mipDebugStatusShowCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipDebugStatusShowCode_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__mipDebugStatusShowCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipDebugStatusShowCode_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__mipDebugStatusShowCode_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mipDebugStatusShowCode_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugMipMapStatusMode& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__mipDebugStatusMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipDebugStatusMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugMipMapStatusMode const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__mipDebugStatusMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipDebugStatusMode_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__mipDebugStatusMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugMipMapStatusMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mipDebugStatusMode_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__mipDebugOpacity_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipDebugOpacity_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__mipDebugOpacity_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipDebugOpacity_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__mipDebugOpacity_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mipDebugOpacity_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__mipDebugRecentUpdateCooldown_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipDebugRecentUpdateCooldown_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__mipDebugRecentUpdateCooldown_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipDebugRecentUpdateCooldown_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__mipDebugRecentUpdateCooldown_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mipDebugRecentUpdateCooldown_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__mipDebugMaterialTextureSlot_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipDebugMaterialTextureSlot_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__mipDebugMaterialTextureSlot_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipDebugMaterialTextureSlot_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__mipDebugMaterialTextureSlot_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mipDebugMaterialTextureSlot_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__showInfoForAllSlots_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showInfoForAllSlots_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__showInfoForAllSlots_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showInfoForAllSlots_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__showInfoForAllSlots_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showInfoForAllSlots_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__mipDebugTerrainTexture_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipDebugTerrainTexture_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__mipDebugTerrainTexture_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipDebugTerrainTexture_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__mipDebugTerrainTexture_k__BackingField(
    ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mipDebugTerrainTexture_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugPostProcessingMode&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__postProcessingDebugMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____postProcessingDebugMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugPostProcessingMode const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__postProcessingDebugMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____postProcessingDebugMode_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__postProcessingDebugMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugPostProcessingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____postProcessingDebugMode_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__enableMsaa_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableMsaa_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__enableMsaa_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableMsaa_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__enableMsaa_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableMsaa_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__enableHDR_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableHDR_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__enableHDR_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableHDR_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__enableHDR_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableHDR_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__taaDebugMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taaDebugMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__taaDebugMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taaDebugMode_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__taaDebugMode_k__BackingField(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____taaDebugMode_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugValidationMode& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__validationMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationMode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugValidationMode const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__validationMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationMode_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__validationMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugValidationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validationMode_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::PixelValidationChannels& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__validationChannels_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationChannels_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::PixelValidationChannels const&
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__validationChannels_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationChannels_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__validationChannels_k__BackingField(::UnityEngine::Rendering::Universal::PixelValidationChannels value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validationChannels_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__validationRangeMin_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationRangeMin_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__validationRangeMin_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationRangeMin_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__validationRangeMin_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validationRangeMin_k__BackingField = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__validationRangeMax_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationRangeMax_k__BackingField;
}
constexpr float_t const& UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_get__validationRangeMax_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validationRangeMax_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::__cordl_internal_set__validationRangeMax_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validationRangeMax_k__BackingField = value;
}
inline ::UnityEngine::Rendering::Universal::DebugWireframeMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_wireframeMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_wireframeMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugWireframeMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_wireframeMode(::UnityEngine::Rendering::Universal::DebugWireframeMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                         { "set_wireframeMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugWireframeMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_overdraw() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_overdraw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_overdraw(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_overdraw", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugOverdrawMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_overdrawMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_overdrawMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugOverdrawMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_overdrawMode(::UnityEngine::Rendering::Universal::DebugOverdrawMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                         { "set_overdrawMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugOverdrawMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_maxOverdrawCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_maxOverdrawCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_maxOverdrawCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_maxOverdrawCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::UpdateDebugSceneOverrideMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "UpdateDebugSceneOverrideMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugFullScreenMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_fullScreenDebugMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_fullScreenDebugMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugFullScreenMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_fullScreenDebugMode(::UnityEngine::Rendering::Universal::DebugFullScreenMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                           { "set_fullScreenDebugMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugFullScreenMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_stpDebugViewIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_stpDebugViewIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_stpDebugViewIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_stpDebugViewIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_fullScreenDebugModeOutputSizeScreenPercent() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_fullScreenDebugModeOutputSizeScreenPercent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_fullScreenDebugModeOutputSizeScreenPercent(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                         { "set_fullScreenDebugModeOutputSizeScreenPercent", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_sceneOverrideMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_sceneOverrideMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugSceneOverrideMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_sceneOverrideMode(::UnityEngine::Rendering::Universal::DebugSceneOverrideMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                           { "set_sceneOverrideMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugSceneOverrideMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugMipInfoMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipInfoMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_mipInfoMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugMipInfoMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipInfoMode(::UnityEngine::Rendering::Universal::DebugMipInfoMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                         { "set_mipInfoMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugMipInfoMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugStatusShowCode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_mipDebugStatusShowCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugStatusShowCode(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_mipDebugStatusShowCode", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugMipMapStatusMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugStatusMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_mipDebugStatusMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugMipMapStatusMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugStatusMode(::UnityEngine::Rendering::Universal::DebugMipMapStatusMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                           { "set_mipDebugStatusMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugMipMapStatusMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugOpacity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_mipDebugOpacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugOpacity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_mipDebugOpacity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugRecentUpdateCooldown() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_mipDebugRecentUpdateCooldown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugRecentUpdateCooldown(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                         { "set_mipDebugRecentUpdateCooldown", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugMaterialTextureSlot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_mipDebugMaterialTextureSlot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugMaterialTextureSlot(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                         { "set_mipDebugMaterialTextureSlot", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_showInfoForAllSlots() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_showInfoForAllSlots", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_showInfoForAllSlots(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_showInfoForAllSlots", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_canAggregateData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_canAggregateData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugTerrainTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_mipDebugTerrainTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugTerrainTexture(::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                           { "set_mipDebugTerrainTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugPostProcessingMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_postProcessingDebugMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_postProcessingDebugMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugPostProcessingMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_postProcessingDebugMode(::UnityEngine::Rendering::Universal::DebugPostProcessingMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                           { "set_postProcessingDebugMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugPostProcessingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_enableMsaa() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_enableMsaa", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_enableMsaa(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_enableMsaa", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_enableHDR() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_enableHDR", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_enableHDR(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_enableHDR", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_taaDebugMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_taaDebugMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_taaDebugMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                           { "set_taaDebugMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugValidationMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_validationMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugValidationMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationMode(::UnityEngine::Rendering::Universal::DebugValidationMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                           { "set_validationMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DebugValidationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::PixelValidationChannels UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationChannels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_validationChannels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::PixelValidationChannels>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationChannels(::UnityEngine::Rendering::Universal::PixelValidationChannels value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                           { "set_validationChannels", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::PixelValidationChannels>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationRangeMin() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_validationRangeMin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationRangeMin(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_validationRangeMin", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationRangeMax() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_validationRangeMax", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationRangeMax(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "set_validationRangeMax", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_AreAnySettingsActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_AreAnySettingsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_IsPostProcessingAllowed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_IsPostProcessingAllowed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_IsLightingActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { "get_IsLightingActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::TryGetScreenClearColor(::by_ref<::UnityEngine::Color> color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                         { "TryGetScreenClearColor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, color);
}
inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(),
                                                                                         { "UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
constexpr UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept {
  return static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsQuery*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::DebugDisplaySettingsRendering() {}
