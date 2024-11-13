#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/PreferenceKeys.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PreferenceKeys)
// Forward declare root types
namespace UnityEngine::ProBuilder {
class PreferenceKeys;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::PreferenceKeys);
// Type: UnityEngine.ProBuilder::PreferenceKeys
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::PreferenceKeys*
class CORDL_TYPE PreferenceKeys : public ::System::Object {
public:
  // Declarations
  /// @brief Field proBuilderBlue, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_proBuilderBlue, put = setStaticF_proBuilderBlue)) ::UnityEngine::Color proBuilderBlue;

  /// @brief Field proBuilderDarkGray, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_proBuilderDarkGray, put = setStaticF_proBuilderDarkGray)) ::UnityEngine::Color proBuilderDarkGray;

  /// @brief Field proBuilderLightGray, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_proBuilderLightGray, put = setStaticF_proBuilderLightGray)) ::UnityEngine::Color proBuilderLightGray;

  static inline ::UnityEngine::Color getStaticF_proBuilderBlue();

  static inline ::UnityEngine::Color getStaticF_proBuilderDarkGray();

  static inline ::UnityEngine::Color getStaticF_proBuilderLightGray();

  static inline void setStaticF_proBuilderBlue(::UnityEngine::Color value);

  static inline void setStaticF_proBuilderDarkGray(::UnityEngine::Color value);

  static inline void setStaticF_proBuilderLightGray(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreferenceKeys();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreferenceKeys", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreferenceKeys(PreferenceKeys&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreferenceKeys", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreferenceKeys(PreferenceKeys const&) = delete;

  /// @brief Field CMD_ALT offset 0xffffffff size 0x2
  static constexpr char16_t CMD_ALT{ u'\u{2387}' };

  /// @brief Field CMD_DELETE offset 0xffffffff size 0x2
  static constexpr char16_t CMD_DELETE{ u'\u{232b}' };

  /// @brief Field CMD_OPTION offset 0xffffffff size 0x2
  static constexpr char16_t CMD_OPTION{ u'\u{2325}' };

  /// @brief Field CMD_SHIFT offset 0xffffffff size 0x2
  static constexpr char16_t CMD_SHIFT{ u'\u{21e7}' };

  /// @brief Field CMD_SUPER offset 0xffffffff size 0x2
  static constexpr char16_t CMD_SUPER{ u'\u{2318}' };

  /// @brief Field DEGREE_SYMBOL offset 0xffffffff size 0x2
  static constexpr char16_t DEGREE_SYMBOL{ u'\u{b0}' };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14231 };

  /// @brief Field defaultUnwrapParameters offset 0xffffffff size 0x8
  static constexpr ::ConstString defaultUnwrapParameters{ u"pbDefaultUnwrapParameters" };

  /// @brief Field k_MaxPointDistanceFromControl offset 0xffffffff size 0x4
  static constexpr float_t k_MaxPointDistanceFromControl{ 20.0 };

  /// @brief Field menuActions offset 0xffffffff size 0x4
  static constexpr int32_t menuActions{ static_cast<int32_t>(0x12c) };

  /// @brief Field menuEditor offset 0xffffffff size 0x4
  static constexpr int32_t menuEditor{ static_cast<int32_t>(0x64) };

  /// @brief Field menuExport offset 0xffffffff size 0x4
  static constexpr int32_t menuExport{ static_cast<int32_t>(0x320) };

  /// @brief Field menuGeometry offset 0xffffffff size 0x4
  static constexpr int32_t menuGeometry{ static_cast<int32_t>(0xc8) };

  /// @brief Field menuMaterialColors offset 0xffffffff size 0x4
  static constexpr int32_t menuMaterialColors{ static_cast<int32_t>(0x190) };

  /// @brief Field menuMisc offset 0xffffffff size 0x4
  static constexpr int32_t menuMisc{ static_cast<int32_t>(0x258) };

  /// @brief Field menuRepair offset 0xffffffff size 0x4
  static constexpr int32_t menuRepair{ static_cast<int32_t>(0x258) };

  /// @brief Field menuSelection offset 0xffffffff size 0x4
  static constexpr int32_t menuSelection{ static_cast<int32_t>(0xc8) };

  /// @brief Field menuVertexColors offset 0xffffffff size 0x4
  static constexpr int32_t menuVertexColors{ static_cast<int32_t>(0x190) };

  /// @brief Field pbBevelAmount offset 0xffffffff size 0x8
  static constexpr ::ConstString pbBevelAmount{ u"pbBevelAmount" };

  /// @brief Field pbCheckForProBuilderUpdates offset 0xffffffff size 0x8
  static constexpr ::ConstString pbCheckForProBuilderUpdates{ u"pbCheckForProBuilderUpdates" };

  /// @brief Field pbCloseShapeWindow offset 0xffffffff size 0x8
  static constexpr ::ConstString pbCloseShapeWindow{ u"pbCloseShapeWindow" };

  /// @brief Field pbCollapseVertexToFirst offset 0xffffffff size 0x8
  static constexpr ::ConstString pbCollapseVertexToFirst{ u"pbCollapseVertexToFirst" };

  /// @brief Field pbCurrentMaterialPalette offset 0xffffffff size 0x8
  static constexpr ::ConstString pbCurrentMaterialPalette{ u"pbCurrentMaterialPalette" };

  /// @brief Field pbDefaultCollider offset 0xffffffff size 0x8
  static constexpr ::ConstString pbDefaultCollider{ u"pbDefaultCollider" };

  /// @brief Field pbDefaultEditLevel offset 0xffffffff size 0x8
  static constexpr ::ConstString pbDefaultEditLevel{ u"pbDefaultEditLevel" };

  /// @brief Field pbDefaultEntity offset 0xffffffff size 0x8
  static constexpr ::ConstString pbDefaultEntity{ u"pbDefaultEntity" };

  /// @brief Field pbDefaultMaterial offset 0xffffffff size 0x8
  static constexpr ::ConstString pbDefaultMaterial{ u"pbDefaultMaterial" };

  /// @brief Field pbDefaultOpenInDockableWindow offset 0xffffffff size 0x8
  static constexpr ::ConstString pbDefaultOpenInDockableWindow{ u"pbDefaultOpenInDockableWindow" };

  /// @brief Field pbDefaultSelectionMode offset 0xffffffff size 0x8
  static constexpr ::ConstString pbDefaultSelectionMode{ u"pbDefaultSelectionMode" };

  /// @brief Field pbDefaultShortcuts offset 0xffffffff size 0x8
  static constexpr ::ConstString pbDefaultShortcuts{ u"pbDefaultShortcuts" };

  /// @brief Field pbDefaultStaticFlags offset 0xffffffff size 0x8
  static constexpr ::ConstString pbDefaultStaticFlags{ u"pbDefaultStaticFlags" };

  /// @brief Field pbDetachToNewObject offset 0xffffffff size 0x8
  static constexpr ::ConstString pbDetachToNewObject{ u"pbDetachToNewObject" };

  /// @brief Field pbDisableAutoUV2Generation offset 0xffffffff size 0x8
  static constexpr ::ConstString pbDisableAutoUV2Generation{ u"pbDisableAutoUV2Generation" };

  /// @brief Field pbDragCheckLimit offset 0xffffffff size 0x8
  static constexpr ::ConstString pbDragCheckLimit{ u"pbDragCheckLimit" };

  /// @brief Field pbDragSelectMode offset 0xffffffff size 0x8
  static constexpr ::ConstString pbDragSelectMode{ u"pbDragSelectMode" };

  /// @brief Field pbDragSelectWholeElement offset 0xffffffff size 0x8
  static constexpr ::ConstString pbDragSelectWholeElement{ u"pbDragSelectWholeElement" };

  /// @brief Field pbDrawAxisLines offset 0xffffffff size 0x8
  static constexpr ::ConstString pbDrawAxisLines{ u"pbDrawAxisLines" };

  /// @brief Field pbEdgeSubdivisions offset 0xffffffff size 0x8
  static constexpr ::ConstString pbEdgeSubdivisions{ u"pbEdgeSubdivisions" };

  /// @brief Field pbEditorPrefVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString pbEditorPrefVersion{ u"pbEditorPrefVersion" };

  /// @brief Field pbEditorShortcutsVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString pbEditorShortcutsVersion{ u"pbEditorShortcutsVersion" };

  /// @brief Field pbElementSelectIsHamFisted offset 0xffffffff size 0x8
  static constexpr ::ConstString pbElementSelectIsHamFisted{ u"pbElementSelectIsHamFisted" };

  /// @brief Field pbEnableBackfaceSelection offset 0xffffffff size 0x8
  static constexpr ::ConstString pbEnableBackfaceSelection{ u"pbEnableBackfaceSelection" };

  /// @brief Field pbEnableExperimental offset 0xffffffff size 0x8
  static constexpr ::ConstString pbEnableExperimental{ u"pbEnableExperimental" };

  /// @brief Field pbExtrudeAsGroup offset 0xffffffff size 0x8
  static constexpr ::ConstString pbExtrudeAsGroup{ u"pbExtrudeAsGroup" };

  /// @brief Field pbExtrudeDistance offset 0xffffffff size 0x8
  static constexpr ::ConstString pbExtrudeDistance{ u"pbExtrudeDistance" };

  /// @brief Field pbExtrudeMethod offset 0xffffffff size 0x8
  static constexpr ::ConstString pbExtrudeMethod{ u"pbExtrudeMethod" };

  /// @brief Field pbFillHoleSelectsEntirePath offset 0xffffffff size 0x8
  static constexpr ::ConstString pbFillHoleSelectsEntirePath{ u"pbFillHoleSelectsEntirePath" };

  /// @brief Field pbForceConvex offset 0xffffffff size 0x8
  static constexpr ::ConstString pbForceConvex{ u"pbForceConvex" };

  /// @brief Field pbForceGridPivot offset 0xffffffff size 0x8
  static constexpr ::ConstString pbForceGridPivot{ u"pbForceGridPivot" };

  /// @brief Field pbForceVertexPivot offset 0xffffffff size 0x8
  static constexpr ::ConstString pbForceVertexPivot{ u"pbForceVertexPivot" };

  /// @brief Field pbGrowSelectionAngle offset 0xffffffff size 0x8
  static constexpr ::ConstString pbGrowSelectionAngle{ u"pbGrowSelectionAngle" };

  /// @brief Field pbGrowSelectionAngleIterative offset 0xffffffff size 0x8
  static constexpr ::ConstString pbGrowSelectionAngleIterative{ u"pbGrowSelectionAngleIterative" };

  /// @brief Field pbGrowSelectionUsingAngle offset 0xffffffff size 0x8
  static constexpr ::ConstString pbGrowSelectionUsingAngle{ u"pbGrowSelectionUsingAngle" };

  /// @brief Field pbHandleAlignment offset 0xffffffff size 0x8
  static constexpr ::ConstString pbHandleAlignment{ u"pbHandleAlignment" };

  /// @brief Field pbIconGUI offset 0xffffffff size 0x8
  static constexpr ::ConstString pbIconGUI{ u"pbIconGUI" };

  /// @brief Field pbLineHandleSize offset 0xffffffff size 0x8
  static constexpr ::ConstString pbLineHandleSize{ u"pbLineHandleSize" };

  /// @brief Field pbManageLightmappingStaticFlag offset 0xffffffff size 0x8
  static constexpr ::ConstString pbManageLightmappingStaticFlag{ u"pbManageLightmappingStaticFlag" };

  /// @brief Field pbManifoldEdgeExtrusion offset 0xffffffff size 0x8
  static constexpr ::ConstString pbManifoldEdgeExtrusion{ u"pbManifoldEdgeExtrusion" };

  /// @brief Field pbMaterialEditorFloating offset 0xffffffff size 0x8
  static constexpr ::ConstString pbMaterialEditorFloating{ u"pbMaterialEditorFloating" };

  /// @brief Field pbMeshesAreAssets offset 0xffffffff size 0x8
  static constexpr ::ConstString pbMeshesAreAssets{ u"pbMeshesAreAssets" };

  /// @brief Field pbNormalizeUVsOnPlanarProjection offset 0xffffffff size 0x8
  static constexpr ::ConstString pbNormalizeUVsOnPlanarProjection{ u"pbNormalizeUVsOnPlanarProjection" };

  /// @brief Field pbPBOSelectionOnly offset 0xffffffff size 0x8
  static constexpr ::ConstString pbPBOSelectionOnly{ u"pbPBOSelectionOnly" };

  /// @brief Field pbPerimeterEdgeBridgeOnly offset 0xffffffff size 0x8
  static constexpr ::ConstString pbPerimeterEdgeBridgeOnly{ u"pbPerimeterEdgeBridgeOnly" };

  /// @brief Field pbPreselectionColor offset 0xffffffff size 0x8
  static constexpr ::ConstString pbPreselectionColor{ u"pbPreselectionColor" };

  /// @brief Field pbPreserveFaces offset 0xffffffff size 0x8
  static constexpr ::ConstString pbPreserveFaces{ u"pbPreserveFaces" };

  /// @brief Field pbRectSelectMode offset 0xffffffff size 0x8
  static constexpr ::ConstString pbRectSelectMode{ u"pbRectSelectMode" };

  /// @brief Field pbSelectedEdgeColor offset 0xffffffff size 0x8
  static constexpr ::ConstString pbSelectedEdgeColor{ u"pbSelectedEdgeColor" };

  /// @brief Field pbSelectedFaceColor offset 0xffffffff size 0x8
  static constexpr ::ConstString pbSelectedFaceColor{ u"pbDefaultFaceColor" };

  /// @brief Field pbSelectedFaceDither offset 0xffffffff size 0x8
  static constexpr ::ConstString pbSelectedFaceDither{ u"pbSelectedFaceDither" };

  /// @brief Field pbSelectedVertexColor offset 0xffffffff size 0x8
  static constexpr ::ConstString pbSelectedVertexColor{ u"pbDefaultSelectedVertexColor" };

  /// @brief Field pbShadowCastingMode offset 0xffffffff size 0x8
  static constexpr ::ConstString pbShadowCastingMode{ u"pbShadowCastingMode" };

  /// @brief Field pbShapeWindowFloating offset 0xffffffff size 0x8
  static constexpr ::ConstString pbShapeWindowFloating{ u"pbShapeWindowFloating" };

  /// @brief Field pbShiftOnlyTooltips offset 0xffffffff size 0x8
  static constexpr ::ConstString pbShiftOnlyTooltips{ u"pbShiftOnlyTooltips" };

  /// @brief Field pbShowCollider offset 0xffffffff size 0x8
  static constexpr ::ConstString pbShowCollider{ u"pbShowCollider" };

  /// @brief Field pbShowDetail offset 0xffffffff size 0x8
  static constexpr ::ConstString pbShowDetail{ u"pbShowDetail" };

  /// @brief Field pbShowEditorNotifications offset 0xffffffff size 0x8
  static constexpr ::ConstString pbShowEditorNotifications{ u"pbShowEditorNotifications" };

  /// @brief Field pbShowMissingLightmapUvWarning offset 0xffffffff size 0x8
  static constexpr ::ConstString pbShowMissingLightmapUvWarning{ u"pb_Lightmapping::showMissingLightmapUvWarning" };

  /// @brief Field pbShowMover offset 0xffffffff size 0x8
  static constexpr ::ConstString pbShowMover{ u"pbShowMover" };

  /// @brief Field pbShowNoDraw offset 0xffffffff size 0x8
  static constexpr ::ConstString pbShowNoDraw{ u"pbShowNoDraw" };

  /// @brief Field pbShowOccluder offset 0xffffffff size 0x8
  static constexpr ::ConstString pbShowOccluder{ u"pbShowOccluder" };

  /// @brief Field pbShowPreselectionHighlight offset 0xffffffff size 0x8
  static constexpr ::ConstString pbShowPreselectionHighlight{ u"pbShowPreselectionHighlight" };

  /// @brief Field pbShowSceneInfo offset 0xffffffff size 0x8
  static constexpr ::ConstString pbShowSceneInfo{ u"pbShowSceneInfo" };

  /// @brief Field pbShowSceneToolbar offset 0xffffffff size 0x8
  static constexpr ::ConstString pbShowSceneToolbar{ u"pbShowSceneToolbar" };

  /// @brief Field pbShowTrigger offset 0xffffffff size 0x8
  static constexpr ::ConstString pbShowTrigger{ u"pbShowTrigger" };

  /// @brief Field pbStripProBuilderOnBuild offset 0xffffffff size 0x8
  static constexpr ::ConstString pbStripProBuilderOnBuild{ u"pbStripProBuilderOnBuild" };

  /// @brief Field pbToolbarLocation offset 0xffffffff size 0x8
  static constexpr ::ConstString pbToolbarLocation{ u"pbToolbarLocation" };

  /// @brief Field pbUVEditorFloating offset 0xffffffff size 0x8
  static constexpr ::ConstString pbUVEditorFloating{ u"pbUVEditorFloating" };

  /// @brief Field pbUVGridSnapValue offset 0xffffffff size 0x8
  static constexpr ::ConstString pbUVGridSnapValue{ u"pbUVGridSnapValue" };

  /// @brief Field pbUVMaterialPreview offset 0xffffffff size 0x8
  static constexpr ::ConstString pbUVMaterialPreview{ u"pbUVMaterialPreview" };

  /// @brief Field pbUVWeldDistance offset 0xffffffff size 0x8
  static constexpr ::ConstString pbUVWeldDistance{ u"pbUVWeldDistance" };

  /// @brief Field pbUniqueModeShortcuts offset 0xffffffff size 0x8
  static constexpr ::ConstString pbUniqueModeShortcuts{ u"pbUniqueModeShortcuts" };

  /// @brief Field pbUnselectedEdgeColor offset 0xffffffff size 0x8
  static constexpr ::ConstString pbUnselectedEdgeColor{ u"pbUnselectedEdgeColor" };

  /// @brief Field pbUnselectedVertexColor offset 0xffffffff size 0x8
  static constexpr ::ConstString pbUnselectedVertexColor{ u"pbDefaultVertexColor" };

  /// @brief Field pbUseUnityColors offset 0xffffffff size 0x8
  static constexpr ::ConstString pbUseUnityColors{ u"pbUseUnityColors" };

  /// @brief Field pbVertexColorPrefs offset 0xffffffff size 0x8
  static constexpr ::ConstString pbVertexColorPrefs{ u"pbVertexColorPrefs" };

  /// @brief Field pbVertexColorTool offset 0xffffffff size 0x8
  static constexpr ::ConstString pbVertexColorTool{ u"pbVertexColorTool" };

  /// @brief Field pbVertexHandleSize offset 0xffffffff size 0x8
  static constexpr ::ConstString pbVertexHandleSize{ u"pbVertexHandleSize" };

  /// @brief Field pbVertexPaletteDockable offset 0xffffffff size 0x8
  static constexpr ::ConstString pbVertexPaletteDockable{ u"pbVertexPaletteDockable" };

  /// @brief Field pbWeldDistance offset 0xffffffff size 0x8
  static constexpr ::ConstString pbWeldDistance{ u"pbWeldDistance" };

  /// @brief Field pbWireframeColor offset 0xffffffff size 0x8
  static constexpr ::ConstString pbWireframeColor{ u"pbDefaultEdgeColor" };

  /// @brief Field pbWireframeSize offset 0xffffffff size 0x8
  static constexpr ::ConstString pbWireframeSize{ u"pbWireframeSize" };

  /// @brief Field pluginTitle offset 0xffffffff size 0x8
  static constexpr ::ConstString pluginTitle{ u"ProBuilder" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::PreferenceKeys, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::PreferenceKeys);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::PreferenceKeys*, "UnityEngine.ProBuilder", "PreferenceKeys");
