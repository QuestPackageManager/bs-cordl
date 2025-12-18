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
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MapOverlays",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MapOverlays() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MapOverlays",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_StpDebugViews(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "StpDebugViews",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_StpDebugViews() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "StpDebugViews",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MapSize(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MapSize",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MapSize() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MapSize",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_AdditionalWireframeModes(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "AdditionalWireframeModes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_AdditionalWireframeModes() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "AdditionalWireframeModes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_WireframeNotSupportedWarning(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "WireframeNotSupportedWarning",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_WireframeNotSupportedWarning() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "WireframeNotSupportedWarning",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_OverdrawMode(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "OverdrawMode",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_OverdrawMode() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "OverdrawMode",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MaxOverdrawCount(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MaxOverdrawCount",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MaxOverdrawCount() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MaxOverdrawCount",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapDisableMipCaching(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDisableMipCaching",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapDisableMipCaching() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDisableMipCaching",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapDebugView(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDebugView",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapDebugView() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDebugView",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapDebugOpacity(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDebugOpacity",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapDebugOpacity() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDebugOpacity",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapMaterialTextureSlot(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapMaterialTextureSlot",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapMaterialTextureSlot() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapMaterialTextureSlot",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapTerrainTexture(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapTerrainTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapTerrainTexture() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapTerrainTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapDisplayStatusCodes(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDisplayStatusCodes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapDisplayStatusCodes() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapDisplayStatusCodes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapActivityTimespan(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapActivityTimespan",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapActivityTimespan() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapActivityTimespan",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MipMapCombinePerMaterial(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapCombinePerMaterial",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MipMapCombinePerMaterial() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MipMapCombinePerMaterial",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_PostProcessing(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "PostProcessing",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_PostProcessing() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "PostProcessing",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_MSAA(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MSAA",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_MSAA() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "MSAA",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_HDR(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "HDR",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_HDR() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "HDR",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_TaaDebugMode(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "TaaDebugMode",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_TaaDebugMode() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "TaaDebugMode",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_PixelValidationMode(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "PixelValidationMode",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_PixelValidationMode() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "PixelValidationMode",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_Channels(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "Channels",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_Channels() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "Channels",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_ValueRangeMin(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "ValueRangeMin",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_ValueRangeMin() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "ValueRangeMin",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::setStaticF_ValueRangeMax(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "ValueRangeMax",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>(
      std::forward<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip>(value));
}
inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::getStaticF_ValueRangeMax() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "ValueRangeMax",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings::DebugDisplaySettingsRendering_Strings() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66936a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMapOverlaySize_b__2_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMapOverlaySize_b__2_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66936a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                                 "<CreateMapOverlaySize>b__2_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMapOverlaySize_b__2_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMapOverlaySize_b__2_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66936ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                                 "<CreateMapOverlaySize>b__2_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateAdditionalWireframeShaderViews_b__3_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t)>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateAdditionalWireframeShaderViews_b__3_4)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66936b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                                 "<CreateAdditionalWireframeShaderViews>b__3_4", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMaxOverdrawCount_b__6_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMaxOverdrawCount_b__6_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6693730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                                 "<CreateMaxOverdrawCount>b__6_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMaxOverdrawCount_b__6_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMaxOverdrawCount_b__6_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6693738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                                 "<CreateMaxOverdrawCount>b__6_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMipMapDebugWidget_b__7_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugWidget_b__7_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6693740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                                 "<CreateMipMapDebugWidget>b__7_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMipMapDebugWidget_b__7_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)(bool)>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugWidget_b__7_1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66937ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(), "<CreateMipMapDebugWidget>b__7_1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMipMapDebugSettings_b__9_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugSettings_b__9_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6693824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                                 "<CreateMipMapDebugSettings>b__9_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMipMapDebugSettings_b__9_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugSettings_b__9_5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x669382c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                                 "<CreateMipMapDebugSettings>b__9_5", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMipMapDebugSettings_b__9_10
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugSettings_b__9_10)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6693834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                                 "<CreateMipMapDebugSettings>b__9_10", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMipMapDebugCooldownSlider_b__11_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugCooldownSlider_b__11_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x669383c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                                 "<CreateMipMapDebugCooldownSlider>b__11_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateMipMapDebugCooldownSlider_b__11_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugCooldownSlider_b__11_4)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6693844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                                 "<CreateMipMapDebugCooldownSlider>b__11_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreateTaaDebugMode_b__16_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)(
    ::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateTaaDebugMode_b__16_4)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6693850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                                 "<CreateTaaDebugMode>b__16_4", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c._CreatePixelValidationMode_b__17_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::*)(
    ::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreatePixelValidationMode_b__17_4)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x66938cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                                 "<CreatePixelValidationMode>b__17_4", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__2_2(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__2_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__2_2() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__2_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__2_3(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__2_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__2_3() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__2_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__3_4(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*, "<>9__3_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__3_4() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*, "<>9__3_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__6_3(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__6_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__6_3() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__6_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__6_4(::System::Func_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<int32_t>*, "<>9__6_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::System::Func_1<int32_t>*>(value));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__6_4() {
  return ::cordl_internals::getStaticField<::System::Func_1<int32_t>*, "<>9__6_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__7_0(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__7_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__7_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__7_1(::System::Action_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__7_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__7_1() {
  return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__7_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__9_4(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__9_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__9_4() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__9_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__9_5(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__9_5",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__9_5() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__9_5",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__9_10(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__9_10",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__9_10() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__9_10",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__11_3(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__11_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__11_3() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__11_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__11_4(::System::Func_1<float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__11_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__11_4() {
  return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__11_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__16_4(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*, "<>9__16_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__16_4() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*, "<>9__16_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::setStaticF___9__17_4(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*, "<>9__17_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>(
      std::forward<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*>(value));
}
inline ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::getStaticF___9__17_4() {
  return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>*, "<>9__17_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMapOverlaySize_b__2_2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                               "<CreateMapOverlaySize>b__2_2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMapOverlaySize_b__2_3() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                               "<CreateMapOverlaySize>b__2_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateAdditionalWireframeShaderViews_b__3_4(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _,
                                                                                                                                             int32_t __param_1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                               "<CreateAdditionalWireframeShaderViews>b__3_4", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _, __param_1);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMaxOverdrawCount_b__6_3() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                               "<CreateMaxOverdrawCount>b__6_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMaxOverdrawCount_b__6_4() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                               "<CreateMaxOverdrawCount>b__6_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugWidget_b__7_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                               "<CreateMipMapDebugWidget>b__7_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugWidget_b__7_1(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(), "<CreateMipMapDebugWidget>b__7_1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugSettings_b__9_4() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                               "<CreateMipMapDebugSettings>b__9_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugSettings_b__9_5() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                               "<CreateMipMapDebugSettings>b__9_5", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugSettings_b__9_10() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                               "<CreateMipMapDebugSettings>b__9_10", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugCooldownSlider_b__11_3() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                               "<CreateMipMapDebugCooldownSlider>b__11_3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateMipMapDebugCooldownSlider_b__11_4() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                               "<CreateMipMapDebugCooldownSlider>b__11_4", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreateTaaDebugMode_b__16_4(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _, int32_t __param_1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                               "<CreateTaaDebugMode>b__16_4", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _, __param_1);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::_CreatePixelValidationMode_b__17_4(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _,
                                                                                                                                   int32_t __param_1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>::get(),
                                               "<CreatePixelValidationMode>b__17_4", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _, __param_1);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c* UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c::WidgetFactory_DebugDisplaySettingsRendering___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x668edd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0._CreateMapOverlays_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6693948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>::get(),
        "<CreateMapOverlays>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0._CreateMapOverlays_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66939a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>::get(),
        "<CreateMapOverlays>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0._CreateMapOverlays_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6693a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>::get(),
        "<CreateMapOverlays>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0._CreateMapOverlays_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6693a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>::get(),
        "<CreateMapOverlays>b__3", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>::get(),
                                  "<CreateMapOverlays>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>::get(), "<CreateMapOverlays>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__2() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>::get(),
                                  "<CreateMapOverlays>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::_CreateMapOverlays_b__3(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>::get(), "<CreateMapOverlays>b__3",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6691f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0._CreateMipMapDebugSlotSelector_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::*)()>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6693ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>::get(),
        "<CreateMipMapDebugSlotSelector>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0._CreateMipMapDebugSlotSelector_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6693b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>::get(),
        "<CreateMipMapDebugSlotSelector>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0._CreateMipMapDebugSlotSelector_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::*)()>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6693b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>::get(),
        "<CreateMipMapDebugSlotSelector>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0._CreateMipMapDebugSlotSelector_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6693bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>::get(),
        "<CreateMipMapDebugSlotSelector>b__3", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>::get(),
                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__0() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>::get(),
                                 "<CreateMipMapDebugSlotSelector>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>::get(),
      "<CreateMipMapDebugSlotSelector>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__2() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>::get(),
                                 "<CreateMipMapDebugSlotSelector>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::_CreateMipMapDebugSlotSelector_b__3(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>::get(),
      "<CreateMipMapDebugSlotSelector>b__3", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6691f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0._CreateMipMapDebugCooldownSlider_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_CreateMipMapDebugCooldownSlider_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6693c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>::get(),
        "<CreateMipMapDebugCooldownSlider>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0._CreateMipMapDebugCooldownSlider_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::*)()>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_CreateMipMapDebugCooldownSlider_b__1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6693c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>::get(),
        "<CreateMipMapDebugCooldownSlider>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0._CreateMipMapDebugCooldownSlider_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::*)(
    float_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_CreateMipMapDebugCooldownSlider_b__2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6693cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>::get(),
        "<CreateMipMapDebugCooldownSlider>b__2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>::get(),
                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_CreateMipMapDebugCooldownSlider_b__0() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>::get(),
                                 "<CreateMipMapDebugCooldownSlider>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_CreateMipMapDebugCooldownSlider_b__1() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>::get(),
                                 "<CreateMipMapDebugCooldownSlider>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::_CreateMipMapDebugCooldownSlider_b__2(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>::get(),
      "<CreateMipMapDebugCooldownSlider>b__2", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6691f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0._CreateMipMapShowStatusCodeToggle_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_CreateMipMapShowStatusCodeToggle_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6693d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>::get(),
        "<CreateMipMapShowStatusCodeToggle>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0._CreateMipMapShowStatusCodeToggle_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_CreateMipMapShowStatusCodeToggle_b__1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6693db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>::get(),
        "<CreateMipMapShowStatusCodeToggle>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0._CreateMipMapShowStatusCodeToggle_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::*)(
    bool)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_CreateMipMapShowStatusCodeToggle_b__2)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6693e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>::get(),
        "<CreateMipMapShowStatusCodeToggle>b__2", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>::get(),
                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_CreateMipMapShowStatusCodeToggle_b__0() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>::get(),
                                 "<CreateMipMapShowStatusCodeToggle>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_CreateMipMapShowStatusCodeToggle_b__1() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>::get(),
                                 "<CreateMipMapShowStatusCodeToggle>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::_CreateMipMapShowStatusCodeToggle_b__2(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>::get(),
      "<CreateMipMapShowStatusCodeToggle>b__2", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6692250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0._CreatePostProcessing_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::*)()>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6693e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>::get(),
        "<CreatePostProcessing>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0._CreatePostProcessing_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6693ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>::get(),
        "<CreatePostProcessing>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0._CreatePostProcessing_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::*)()>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6693f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>::get(),
        "<CreatePostProcessing>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0._CreatePostProcessing_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6693f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>::get(),
        "<CreatePostProcessing>b__3", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>::get(),
                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__0() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>::get(),
                                 "<CreatePostProcessing>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>::get(),
      "<CreatePostProcessing>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__2() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>::get(),
                                 "<CreatePostProcessing>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::_CreatePostProcessing_b__3(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>::get(),
      "<CreatePostProcessing>b__3", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6692480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0._CreateMSAA_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::_CreateMSAA_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6693fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*>::get(), "<CreateMSAA>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0._CreateMSAA_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::*)(
    bool)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::_CreateMSAA_b__1)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6694044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*>::get(), "<CreateMSAA>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*>::get(),
                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::_CreateMSAA_b__0() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*>::get(),
                                 "<CreateMSAA>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::_CreateMSAA_b__1(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*>::get(), "<CreateMSAA>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66926b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0._CreateHDR_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::_CreateHDR_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66940ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*>::get(), "<CreateHDR>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0._CreateHDR_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::*)(
    bool)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::_CreateHDR_b__1)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6694104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*>::get(), "<CreateHDR>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*>::get(),
                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::_CreateHDR_b__0() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*>::get(),
                                 "<CreateHDR>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::_CreateHDR_b__1(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*>::get(), "<CreateHDR>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6692a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0._CreateTaaDebugMode_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::*)()>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x669416c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>::get(),
        "<CreateTaaDebugMode>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0._CreateTaaDebugMode_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66941c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>::get(),
        "<CreateTaaDebugMode>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0._CreateTaaDebugMode_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::*)()>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6694228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>::get(),
        "<CreateTaaDebugMode>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0._CreateTaaDebugMode_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6694280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>::get(),
        "<CreateTaaDebugMode>b__3", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>::get(),
                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__0() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>::get(),
                                 "<CreateTaaDebugMode>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>::get(),
      "<CreateTaaDebugMode>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__2() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>::get(),
                                 "<CreateTaaDebugMode>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::_CreateTaaDebugMode_b__3(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>::get(),
      "<CreateTaaDebugMode>b__3", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6692e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0._CreatePixelValidationMode_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::*)()>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66942e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>::get(),
        "<CreatePixelValidationMode>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0._CreatePixelValidationMode_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x669433c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>::get(),
        "<CreatePixelValidationMode>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0._CreatePixelValidationMode_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::*)()>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66943a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>::get(),
        "<CreatePixelValidationMode>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0._CreatePixelValidationMode_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66943f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>::get(),
        "<CreatePixelValidationMode>b__3", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>::get(),
                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__0() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>::get(),
                                 "<CreatePixelValidationMode>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>::get(),
      "<CreatePixelValidationMode>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__2() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>::get(),
                                 "<CreatePixelValidationMode>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::_CreatePixelValidationMode_b__3(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>::get(),
      "<CreatePixelValidationMode>b__3", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66931b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0._CreatePixelValidationChannels_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::*)()>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x669445c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>::get(),
        "<CreatePixelValidationChannels>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0._CreatePixelValidationChannels_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66944b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>::get(),
        "<CreatePixelValidationChannels>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0._CreatePixelValidationChannels_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::*)()>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6694518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>::get(),
        "<CreatePixelValidationChannels>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0._CreatePixelValidationChannels_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6694570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>::get(),
        "<CreatePixelValidationChannels>b__3", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>::get(),
                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__0() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>::get(),
                                 "<CreatePixelValidationChannels>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>::get(),
      "<CreatePixelValidationChannels>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__2() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>::get(),
                                 "<CreatePixelValidationChannels>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::_CreatePixelValidationChannels_b__3(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>::get(),
      "<CreatePixelValidationChannels>b__3", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6693400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0._CreatePixelValueRangeMin_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::*)()>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::_CreatePixelValueRangeMin_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66945d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*>::get(),
        "<CreatePixelValueRangeMin>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0._CreatePixelValueRangeMin_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::*)(
    float_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::_CreatePixelValueRangeMin_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x669462c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*>::get(),
        "<CreatePixelValueRangeMin>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*>::get(),
                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::_CreatePixelValueRangeMin_b__0() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*>::get(),
                                 "<CreatePixelValueRangeMin>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::_CreatePixelValueRangeMin_b__1(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*>::get(),
      "<CreatePixelValueRangeMin>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x668f220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0._CreateStpDebugViews_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6694690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>::get(),
        "<CreateStpDebugViews>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0._CreateStpDebugViews_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66946f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>::get(),
        "<CreateStpDebugViews>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0._CreateStpDebugViews_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6694748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>::get(),
        "<CreateStpDebugViews>b__2", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0._CreateStpDebugViews_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__3)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66947ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>::get(),
        "<CreateStpDebugViews>b__3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0._CreateStpDebugViews_b__4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__4)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6694804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>::get(),
        "<CreateStpDebugViews>b__4", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>::get(),
                                  "<CreateStpDebugViews>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__1() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>::get(),
                                  "<CreateStpDebugViews>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__2(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>::get(),
      "<CreateStpDebugViews>b__2", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__3() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>::get(),
                                  "<CreateStpDebugViews>b__3", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::_CreateStpDebugViews_b__4(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>::get(),
      "<CreateStpDebugViews>b__4", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6693648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0._CreatePixelValueRangeMax_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::*)()>(
        &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::_CreatePixelValueRangeMax_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6694868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*>::get(),
        "<CreatePixelValueRangeMax>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0._CreatePixelValueRangeMax_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::*)(
    float_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::_CreatePixelValueRangeMax_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66948c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*>::get(),
        "<CreatePixelValueRangeMax>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*>::get(),
                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::_CreatePixelValueRangeMax_b__0() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*>::get(),
                                 "<CreatePixelValueRangeMax>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::_CreatePixelValueRangeMax_b__1(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*>::get(),
      "<CreatePixelValueRangeMax>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x668f5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0._CreateMapOverlaySize_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::_CreateMapOverlaySize_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6694924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*>::get(),
        "<CreateMapOverlaySize>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0._CreateMapOverlaySize_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::_CreateMapOverlaySize_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x669497c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*>::get(),
        "<CreateMapOverlaySize>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::_CreateMapOverlaySize_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*>::get(),
                                  "<CreateMapOverlaySize>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::_CreateMapOverlaySize_b__1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*>::get(),
      "<CreateMapOverlaySize>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x668f9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0._CreateAdditionalWireframeShaderViews_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66949e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>::get(),
        "<CreateAdditionalWireframeShaderViews>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0._CreateAdditionalWireframeShaderViews_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6694a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>::get(),
        "<CreateAdditionalWireframeShaderViews>b__1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0._CreateAdditionalWireframeShaderViews_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6694ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>::get(),
        "<CreateAdditionalWireframeShaderViews>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0._CreateAdditionalWireframeShaderViews_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__3)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6694b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>::get(),
        "<CreateAdditionalWireframeShaderViews>b__3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>::get(),
                                  "<CreateAdditionalWireframeShaderViews>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>::get(),
                                  "<CreateAdditionalWireframeShaderViews>b__1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__2() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>::get(),
                                  "<CreateAdditionalWireframeShaderViews>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::_CreateAdditionalWireframeShaderViews_b__3(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>::get(),
                                  "<CreateAdditionalWireframeShaderViews>b__3", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x668fb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0._CreateWireframeNotSupportedWarning_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::_CreateWireframeNotSupportedWarning_b__0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6694ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0*>::get(),
        "<CreateWireframeNotSupportedWarning>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::_CreateWireframeNotSupportedWarning_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0*>::get(),
                                  "<CreateWireframeNotSupportedWarning>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x668fe4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0._CreateOverdrawMode_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6694c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>::get(),
        "<CreateOverdrawMode>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0._CreateOverdrawMode_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6694c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>::get(),
        "<CreateOverdrawMode>b__1", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0._CreateOverdrawMode_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6694d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>::get(),
        "<CreateOverdrawMode>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0._CreateOverdrawMode_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__3)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6694d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>::get(),
        "<CreateOverdrawMode>b__3", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>::get(),
                                  "<CreateOverdrawMode>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>::get(), "<CreateOverdrawMode>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__2() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>::get(),
                                  "<CreateOverdrawMode>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::_CreateOverdrawMode_b__3(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>::get(), "<CreateOverdrawMode>b__3",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6690288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0._CreateMaxOverdrawCount_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_CreateMaxOverdrawCount_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6694de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>::get(),
        "<CreateMaxOverdrawCount>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0._CreateMaxOverdrawCount_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_CreateMaxOverdrawCount_b__1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6694e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>::get(),
        "<CreateMaxOverdrawCount>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0._CreateMaxOverdrawCount_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_CreateMaxOverdrawCount_b__2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6694ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>::get(),
        "<CreateMaxOverdrawCount>b__2", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_CreateMaxOverdrawCount_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>::get(),
                                  "<CreateMaxOverdrawCount>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_CreateMaxOverdrawCount_b__1() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>::get(),
                                  "<CreateMaxOverdrawCount>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::_CreateMaxOverdrawCount_b__2(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>::get(),
      "<CreateMaxOverdrawCount>b__2", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x669157c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0._CreateMipMapMode_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6694f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>::get(), "<CreateMipMapMode>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0._CreateMipMapMode_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6694f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>::get(), "<CreateMipMapMode>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0._CreateMipMapMode_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6694fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>::get(), "<CreateMipMapMode>b__2",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0._CreateMipMapMode_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6695018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>::get(), "<CreateMipMapMode>b__3",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>::get(),
                                  "<CreateMipMapMode>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__1(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>::get(), "<CreateMipMapMode>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__2() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>::get(),
                                  "<CreateMipMapMode>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::_CreateMipMapMode_b__3(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>::get(), "<CreateMipMapMode>b__3",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6691580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x669507c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
        "<CreateMipMapDebugSettings>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66950dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
        "<CreateMipMapDebugSettings>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)(
    float_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__3)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6695134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
        "<CreateMipMapDebugSettings>b__3", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__1)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6695198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
        "<CreateMipMapDebugSettings>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__6)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66951fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
        "<CreateMipMapDebugSettings>b__6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__7)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6695260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
        "<CreateMipMapDebugSettings>b__7", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)(
    bool)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__8)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x66952b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
        "<CreateMipMapDebugSettings>b__8", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__9
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__9)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x669532c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
        "<CreateMipMapDebugSettings>b__9", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__11
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__11)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x66953a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
        "<CreateMipMapDebugSettings>b__11", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__12
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__12)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66953fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
        "<CreateMipMapDebugSettings>b__12", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__13
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)()>(
    &::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__13)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6695460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
        "<CreateMipMapDebugSettings>b__13", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0._CreateMipMapDebugSettings_b__14
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::*)(
    int32_t)>(&::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__14)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x66954b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
        "<CreateMipMapDebugSettings>b__14", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
                                  "<CreateMipMapDebugSettings>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__2() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
                                  "<CreateMipMapDebugSettings>b__2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__3(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
      "<CreateMipMapDebugSettings>b__3", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__1() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
                                  "<CreateMipMapDebugSettings>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__6() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
                                  "<CreateMipMapDebugSettings>b__6", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__7() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
                                  "<CreateMipMapDebugSettings>b__7", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__8(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
      "<CreateMipMapDebugSettings>b__8", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__9() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
                                  "<CreateMipMapDebugSettings>b__9", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__11() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
                                  "<CreateMipMapDebugSettings>b__11", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__12(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
      "<CreateMipMapDebugSettings>b__12", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__13() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
                                  "<CreateMipMapDebugSettings>b__13", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::_CreateMipMapDebugSettings_b__14(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>::get(),
      "<CreateMipMapDebugSettings>b__14", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*
UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMapOverlays
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMapOverlays)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x668ea9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMapOverlays",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateStpDebugViews
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateStpDebugViews)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x668edd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateStpDebugViews",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMapOverlaySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMapOverlaySize)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x668f224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMapOverlaySize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateAdditionalWireframeShaderViews
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateAdditionalWireframeShaderViews)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x668f5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateAdditionalWireframeShaderViews",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateWireframeNotSupportedWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateWireframeNotSupportedWarning)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x668f9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateWireframeNotSupportedWarning",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateOverdrawMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateOverdrawMode)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x668fb18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateOverdrawMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMaxOverdrawCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMaxOverdrawCount)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x668fe50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMaxOverdrawCount",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMipMapDebugWidget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugWidget)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x669028c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMipMapDebugWidget",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMipMapMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapMode)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x669057c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMipMapMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMipMapDebugSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugSettings)> {
  constexpr static std::size_t size = 0xccc;
  constexpr static std::size_t addrs = 0x66908b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMipMapDebugSettings",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMipMapDebugSlotSelector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*, ::System::Func_1<bool>*,
                                                              ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>, ::ArrayW<int32_t, ::Array<int32_t>*>)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugSlotSelector)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x6691584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMipMapDebugSlotSelector",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMipMapDebugCooldownSlider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugCooldownSlider)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x6691b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMipMapDebugCooldownSlider",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMipMapShowStatusCodeToggle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapShowStatusCodeToggle)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x66918ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMipMapShowStatusCodeToggle",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreatePostProcessing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePostProcessing)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x6691f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreatePostProcessing",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateMSAA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMSAA)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6692254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMSAA",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateHDR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateHDR)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6692484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateHDR",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreateTaaDebugMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateTaaDebugMode)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x66926b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateTaaDebugMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreatePixelValidationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValidationMode)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x6692a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreatePixelValidationMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreatePixelValidationChannels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValidationChannels)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x6692e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreatePixelValidationChannels",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreatePixelValueRangeMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValueRangeMin)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x66931bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreatePixelValueRangeMin",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory.CreatePixelValueRangeMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DebugUI_Widget* (*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*)>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValueRangeMax)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6693404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreatePixelValueRangeMax",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMapOverlays(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMapOverlays",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateStpDebugViews(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateStpDebugViews",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMapOverlaySize(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMapOverlaySize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateAdditionalWireframeShaderViews(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateAdditionalWireframeShaderViews",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateWireframeNotSupportedWarning(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateWireframeNotSupportedWarning",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateOverdrawMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateOverdrawMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMaxOverdrawCount(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMaxOverdrawCount",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugWidget(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMipMapDebugWidget",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMipMapMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMipMapDebugSettings",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugSlotSelector(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel, ::System::Func_1<bool>* hiddenCB,
    ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> texSlotStrings, ::ArrayW<int32_t, ::Array<int32_t>*> texSlotValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMipMapDebugSlotSelector",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel, hiddenCB, texSlotStrings, texSlotValues);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapDebugCooldownSlider(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMipMapDebugCooldownSlider",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMipMapShowStatusCodeToggle(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMipMapShowStatusCodeToggle",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePostProcessing(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreatePostProcessing",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateMSAA(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateMSAA",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateHDR(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateHDR",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreateTaaDebugMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreateTaaDebugMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValidationMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreatePixelValidationMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValidationChannels(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreatePixelValidationChannels",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValueRangeMin(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreatePixelValueRangeMin",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
inline ::UnityEngine::Rendering::DebugUI_Widget*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::CreatePixelValueRangeMax(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*>::get(), "CreatePixelValueRangeMax",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DebugUI_Widget*, false>(nullptr, ___internal_method, panel);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory::DebugDisplaySettingsRendering_WidgetFactory() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::*)()>(
    &::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x669551c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0.__ctor_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::*)()>(
    &::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6695520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0*>::get(), "<.ctor>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::__ctor_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0*>::get(),
                                  "<.ctor>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0*
UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel::*)(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel::_ctor)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x668def4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel::_ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*
UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel::New_ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*>(data));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel::DebugDisplaySettingsRendering_SettingsPanel() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_wireframeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugWireframeMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_wireframeMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668db20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_wireframeMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_wireframeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugWireframeMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_wireframeMode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x668db28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_wireframeMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugWireframeMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_overdraw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_overdraw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668db80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_overdraw",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_overdraw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_overdraw)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x668db88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_overdraw",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_overdrawMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugOverdrawMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_overdrawMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_overdrawMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_overdrawMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugOverdrawMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_overdrawMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x668dbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_overdrawMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugOverdrawMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_maxOverdrawCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_maxOverdrawCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dbe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_maxOverdrawCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_maxOverdrawCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_maxOverdrawCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dbec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_maxOverdrawCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.UpdateDebugSceneOverrideMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::UpdateDebugSceneOverrideMode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x668db54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "UpdateDebugSceneOverrideMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_fullScreenDebugMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugFullScreenMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_fullScreenDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dbf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_fullScreenDebugMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_fullScreenDebugMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugFullScreenMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_fullScreenDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_fullScreenDebugMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugFullScreenMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_stpDebugViewIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_stpDebugViewIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_stpDebugViewIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_stpDebugViewIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_stpDebugViewIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_stpDebugViewIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_fullScreenDebugModeOutputSizeScreenPercent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_fullScreenDebugModeOutputSizeScreenPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_fullScreenDebugModeOutputSizeScreenPercent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_fullScreenDebugModeOutputSizeScreenPercent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_fullScreenDebugModeOutputSizeScreenPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_fullScreenDebugModeOutputSizeScreenPercent",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_sceneOverrideMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugSceneOverrideMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_sceneOverrideMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_sceneOverrideMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_sceneOverrideMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_sceneOverrideMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_sceneOverrideMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugSceneOverrideMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_mipInfoMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugMipInfoMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipInfoMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_mipInfoMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_mipInfoMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugMipInfoMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipInfoMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_mipInfoMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugMipInfoMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_mipDebugStatusShowCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugStatusShowCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_mipDebugStatusShowCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_mipDebugStatusShowCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugStatusShowCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_mipDebugStatusShowCode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_mipDebugStatusMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugMipMapStatusMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugStatusMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_mipDebugStatusMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_mipDebugStatusMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugMipMapStatusMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugStatusMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_mipDebugStatusMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugMipMapStatusMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_mipDebugOpacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugOpacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_mipDebugOpacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_mipDebugOpacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugOpacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_mipDebugOpacity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_mipDebugRecentUpdateCooldown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugRecentUpdateCooldown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_mipDebugRecentUpdateCooldown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_mipDebugRecentUpdateCooldown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugRecentUpdateCooldown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_mipDebugRecentUpdateCooldown",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_mipDebugMaterialTextureSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugMaterialTextureSlot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_mipDebugMaterialTextureSlot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_mipDebugMaterialTextureSlot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugMaterialTextureSlot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_mipDebugMaterialTextureSlot",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_showInfoForAllSlots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_showInfoForAllSlots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_showInfoForAllSlots", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_showInfoForAllSlots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_showInfoForAllSlots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_showInfoForAllSlots",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_canAggregateData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_canAggregateData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x668dca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_canAggregateData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_mipDebugTerrainTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugTerrainTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dcb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_mipDebugTerrainTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_mipDebugTerrainTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugTerrainTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dcc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_mipDebugTerrainTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_postProcessingDebugMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugPostProcessingMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_postProcessingDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dcc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_postProcessingDebugMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_postProcessingDebugMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugPostProcessingMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_postProcessingDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dcd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_postProcessingDebugMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugPostProcessingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_enableMsaa
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_enableMsaa)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dcd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_enableMsaa",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_enableMsaa
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_enableMsaa)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_enableMsaa",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_enableHDR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_enableHDR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_enableHDR",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_enableHDR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(bool)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_enableHDR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dcf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_enableHDR",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_taaDebugMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_taaDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dcf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_taaDebugMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_taaDebugMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_taaDebugMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_taaDebugMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_validationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::DebugValidationMode (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dd08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_validationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_validationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::DebugValidationMode)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dd10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_validationMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugValidationMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_validationChannels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::PixelValidationChannels (
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationChannels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_validationChannels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_validationChannels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(
    ::UnityEngine::Rendering::Universal::PixelValidationChannels)>(&::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationChannels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_validationChannels",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PixelValidationChannels>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_validationRangeMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationRangeMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dd28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_validationRangeMin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_validationRangeMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationRangeMin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dd30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_validationRangeMin",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_validationRangeMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationRangeMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_validationRangeMax", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.set_validationRangeMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationRangeMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x668dd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_validationRangeMax",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_AreAnySettingsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_AreAnySettingsActive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x668dd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_AreAnySettingsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_IsPostProcessingAllowed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_IsPostProcessingAllowed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x668dd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_IsPostProcessingAllowed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.get_IsLightingActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_IsLightingActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x668ddc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "get_IsLightingActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.TryGetScreenClearColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)(::ByRef<::UnityEngine::Color>)>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::TryGetScreenClearColor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x668dde4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "TryGetScreenClearColor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering.UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
        &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x668de98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                                 "UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::*)()>(
    &::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x668e458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_wireframeMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugWireframeMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_wireframeMode(::UnityEngine::Rendering::Universal::DebugWireframeMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_wireframeMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugWireframeMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_overdraw() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_overdraw",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_overdraw(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_overdraw",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugOverdrawMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_overdrawMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_overdrawMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugOverdrawMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_overdrawMode(::UnityEngine::Rendering::Universal::DebugOverdrawMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_overdrawMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugOverdrawMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_maxOverdrawCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_maxOverdrawCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_maxOverdrawCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_maxOverdrawCount",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::UpdateDebugSceneOverrideMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "UpdateDebugSceneOverrideMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugFullScreenMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_fullScreenDebugMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_fullScreenDebugMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugFullScreenMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_fullScreenDebugMode(::UnityEngine::Rendering::Universal::DebugFullScreenMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_fullScreenDebugMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugFullScreenMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_stpDebugViewIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_stpDebugViewIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_stpDebugViewIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_stpDebugViewIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_fullScreenDebugModeOutputSizeScreenPercent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_fullScreenDebugModeOutputSizeScreenPercent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_fullScreenDebugModeOutputSizeScreenPercent(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_fullScreenDebugModeOutputSizeScreenPercent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_sceneOverrideMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_sceneOverrideMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugSceneOverrideMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_sceneOverrideMode(::UnityEngine::Rendering::Universal::DebugSceneOverrideMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_sceneOverrideMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugSceneOverrideMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugMipInfoMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipInfoMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_mipInfoMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugMipInfoMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipInfoMode(::UnityEngine::Rendering::Universal::DebugMipInfoMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_mipInfoMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugMipInfoMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugStatusShowCode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_mipDebugStatusShowCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugStatusShowCode(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_mipDebugStatusShowCode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugMipMapStatusMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugStatusMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_mipDebugStatusMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugMipMapStatusMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugStatusMode(::UnityEngine::Rendering::Universal::DebugMipMapStatusMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_mipDebugStatusMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugMipMapStatusMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugOpacity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_mipDebugOpacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugOpacity(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_mipDebugOpacity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugRecentUpdateCooldown() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_mipDebugRecentUpdateCooldown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugRecentUpdateCooldown(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_mipDebugRecentUpdateCooldown",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugMaterialTextureSlot() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_mipDebugMaterialTextureSlot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugMaterialTextureSlot(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_mipDebugMaterialTextureSlot",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_showInfoForAllSlots() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_showInfoForAllSlots", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_showInfoForAllSlots(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_showInfoForAllSlots",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_canAggregateData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_canAggregateData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_mipDebugTerrainTexture() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_mipDebugTerrainTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_mipDebugTerrainTexture(::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_mipDebugTerrainTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugPostProcessingMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_postProcessingDebugMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_postProcessingDebugMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugPostProcessingMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_postProcessingDebugMode(::UnityEngine::Rendering::Universal::DebugPostProcessingMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_postProcessingDebugMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugPostProcessingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_enableMsaa() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_enableMsaa",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_enableMsaa(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_enableMsaa",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_enableHDR() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_enableHDR",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_enableHDR(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_enableHDR",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_taaDebugMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_taaDebugMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_taaDebugMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_taaDebugMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugValidationMode UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "get_validationMode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugValidationMode, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationMode(::UnityEngine::Rendering::Universal::DebugValidationMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_validationMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DebugValidationMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::PixelValidationChannels UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationChannels() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_validationChannels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::PixelValidationChannels, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationChannels(::UnityEngine::Rendering::Universal::PixelValidationChannels value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_validationChannels",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::PixelValidationChannels>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationRangeMin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_validationRangeMin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationRangeMin(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_validationRangeMin",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_validationRangeMax() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_validationRangeMax", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::set_validationRangeMax(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "set_validationRangeMax",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_AreAnySettingsActive() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_AreAnySettingsActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_IsPostProcessingAllowed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_IsPostProcessingAllowed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::get_IsLightingActive() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "get_IsLightingActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::TryGetScreenClearColor(::ByRef<::UnityEngine::Color> color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), "TryGetScreenClearColor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, color);
}
inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(),
                                               "UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*>());
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
