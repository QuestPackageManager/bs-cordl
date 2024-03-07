#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_PluginSettings)
namespace HoudiniEngineUnity {
struct SessionMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_PluginSettings;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_PluginSettings);
// Type: HoudiniEngineUnity::HEU_PluginSettings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_PluginSettings*
class CORDL_TYPE HEU_PluginSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_AssetCachePath, addr 0x234f748, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_AssetCachePath();

  /// @brief Method get_CollisionGroupName, addr 0x234de80, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_CollisionGroupName();

  /// @brief Method get_CookOptionSplitGeosByGroup, addr 0x2350f74, size 0x60, virtual false, abstract: false, final false
  static inline bool get_CookOptionSplitGeosByGroup();

  /// @brief Method get_CookTemplatedGeos, addr 0x234dc58, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookTemplatedGeos();

  /// @brief Method get_CookingEnabled, addr 0x234d928, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookingEnabled();

  /// @brief Method get_CookingTriggersDownstreamCooks, addr 0x234dba0, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookingTriggersDownstreamCooks();

  /// @brief Method get_Curves_ShowInSceneView, addr 0x234f690, size 0x64, virtual false, abstract: false, final false
  static inline bool get_Curves_ShowInSceneView();

  /// @brief Method get_DefaultCurveShader, addr 0x23505a4, size 0x148, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultCurveShader();

  /// @brief Method get_DefaultStandardShader, addr 0x234fef0, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultStandardShader();

  /// @brief Method get_DefaultTerrainMaterial, addr 0x234fd58, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultTerrainMaterial();

  /// @brief Method get_DefaultTransparentShader, addr 0x23503a8, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultTransparentShader();

  /// @brief Method get_DefaultVertexColorShader, addr 0x23501ac, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultVertexColorShader();

  /// @brief Method get_EditorOnly_Tag, addr 0x2349250, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_EditorOnly_Tag();

  /// @brief Method get_HDAData_Name, addr 0x23491d8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HDAData_Name();

  /// @brief Method get_HEngineShelfSelectedIndex, addr 0x234fca4, size 0x60, virtual false, abstract: false, final false
  static inline int32_t get_HEngineShelfSelectedIndex();

  /// @brief Method get_HEngineToolsShelves, addr 0x234f8cc, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* get_HEngineToolsShelves();

  /// @brief Method get_HoudiniDebugLaunchPath, addr 0x2350a78, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniDebugLaunchPath();

  /// @brief Method get_HoudiniEngineEnvFilePath, addr 0x234d0fc, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniEngineEnvFilePath();

  /// @brief Method get_HoudiniInstallPath, addr 0x234c4e8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniInstallPath();

  /// @brief Method get_ImageGamma, addr 0x234e678, size 0x6c, virtual false, abstract: false, final false
  static inline float_t get_ImageGamma();

  /// @brief Method get_InputSelectionFilterLocation, addr 0x2350c84, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_InputSelectionFilterLocation();

  /// @brief Method get_InputSelectionFilterName, addr 0x2350ea8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_InputSelectionFilterName();

  /// @brief Method get_InputSelectionFilterRoots, addr 0x2350df4, size 0x60, virtual false, abstract: false, final false
  static inline bool get_InputSelectionFilterRoots();

  /// @brief Method get_InputSelectionFilterState, addr 0x2350d3c, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_InputSelectionFilterState();

  /// @brief Method get_InstanceAttr, addr 0x234eb98, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_InstanceAttr();

  /// @brief Method get_LastExportPath, addr 0x2350bb8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastExportPath();

  /// @brief Method get_LastHoudiniVersion, addr 0x234c560, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastHoudiniVersion();

  /// @brief Method get_LastLoadHDAPath, addr 0x234ea00, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastLoadHDAPath();

  /// @brief Method get_LastLoadHIPPath, addr 0x234eacc, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastLoadHIPPath();

  /// @brief Method get_LineColor, addr 0x234edfc, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_LineColor();

  /// @brief Method get_MaxVerticesPerPrimitive, addr 0x2351028, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_MaxVerticesPerPrimitive();

  /// @brief Method get_NormalGenerationThresholdAngle, addr 0x234e944, size 0x68, virtual false, abstract: false, final false
  static inline float_t get_NormalGenerationThresholdAngle();

  /// @brief Method get_PushUnityTransformToHoudini, addr 0x234dd10, size 0x64, virtual false, abstract: false, final false
  static inline bool get_PushUnityTransformToHoudini();

  /// @brief Method get_RenderedCollisionGroupName, addr 0x234df4c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_RenderedCollisionGroupName();

  /// @brief Method get_RenderedConvexCollisionGroupName, addr 0x234e018, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_RenderedConvexCollisionGroupName();

  /// @brief Method get_SessionSyncAutoCook, addr 0x23510e0, size 0x64, virtual false, abstract: false, final false
  static inline bool get_SessionSyncAutoCook();

  /// @brief Method get_Session_AutoClose, addr 0x234f5d8, size 0x64, virtual false, abstract: false, final false
  static inline bool get_Session_AutoClose();

  /// @brief Method get_Session_Localhost, addr 0x234f394, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_Session_Localhost();

  /// @brief Method get_Session_Mode, addr 0x234f048, size 0x68, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::SessionMode get_Session_Mode();

  /// @brief Method get_Session_PipeName, addr 0x234f2c8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_Session_PipeName();

  /// @brief Method get_Session_Port, addr 0x234f460, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_Session_Port();

  /// @brief Method get_Session_Timeout, addr 0x234f518, size 0x6c, virtual false, abstract: false, final false
  static inline float_t get_Session_Timeout();

  /// @brief Method get_SetCurrentThreadToInvariantCulture, addr 0x23508a8, size 0x64, virtual false, abstract: false, final false
  static inline bool get_SetCurrentThreadToInvariantCulture();

  /// @brief Method get_ShortenFolderPaths, addr 0x235134c, size 0x60, virtual false, abstract: false, final false
  static inline bool get_ShortenFolderPaths();

  /// @brief Method get_SupportHoudiniBoxType, addr 0x2350740, size 0x60, virtual false, abstract: false, final false
  static inline bool get_SupportHoudiniBoxType();

  /// @brief Method get_SupportHoudiniSphereType, addr 0x23507f4, size 0x60, virtual false, abstract: false, final false
  static inline bool get_SupportHoudiniSphereType();

  /// @brief Method get_TerrainSplatTextureDefault, addr 0x234fe24, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_TerrainSplatTextureDefault();

  /// @brief Method get_TransformChangeTriggersCooks, addr 0x234ddc8, size 0x64, virtual false, abstract: false, final false
  static inline bool get_TransformChangeTriggersCooks();

  /// @brief Method get_UnityInputMeshAttr, addr 0x234ed30, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityInputMeshAttr();

  /// @brief Method get_UnityInstanceAttr, addr 0x234ec64, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityInstanceAttr();

  /// @brief Method get_UnityLayerAttributeName, addr 0x234e5ac, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityLayerAttributeName();

  /// @brief Method get_UnityMaterialAttribName, addr 0x234e0e4, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityMaterialAttribName();

  /// @brief Method get_UnityScriptAttributeName, addr 0x234e4e0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityScriptAttributeName();

  /// @brief Method get_UnityStaticAttributeName, addr 0x234e414, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityStaticAttributeName();

  /// @brief Method get_UnitySubMaterialAttribName, addr 0x234e1b0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnitySubMaterialAttribName();

  /// @brief Method get_UnitySubMaterialIndexAttribName, addr 0x234e27c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnitySubMaterialIndexAttribName();

  /// @brief Method get_UnityTagAttributeName, addr 0x234e348, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityTagAttributeName();

  /// @brief Method get_UseFullPathNamesForOutput, addr 0x234f814, size 0x64, virtual false, abstract: false, final false
  static inline bool get_UseFullPathNamesForOutput();

  /// @brief Method get_UseHDRColor, addr 0x23511ec, size 0x64, virtual false, abstract: false, final false
  static inline bool get_UseHDRColor();

  /// @brief Method get_UseLegacyShaders, addr 0x23500f8, size 0x60, virtual false, abstract: false, final false
  static inline bool get_UseLegacyShaders();

  /// @brief Method get_UseSpecularShader, addr 0x2350098, size 0x60, virtual false, abstract: false, final false
  static inline bool get_UseSpecularShader();

  /// @brief Method get_WriteCookLogs, addr 0x2349ca4, size 0x60, virtual false, abstract: false, final false
  static inline bool get_WriteCookLogs();

  /// @brief Method set_AssetCachePath, addr 0x234f7c0, size 0x54, virtual false, abstract: false, final false
  static inline void set_AssetCachePath(::StringW value);

  /// @brief Method set_CollisionGroupName, addr 0x234def8, size 0x54, virtual false, abstract: false, final false
  static inline void set_CollisionGroupName(::StringW value);

  /// @brief Method set_CookOptionSplitGeosByGroup, addr 0x2350fd4, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookOptionSplitGeosByGroup(bool value);

  /// @brief Method set_CookTemplatedGeos, addr 0x234dcbc, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookTemplatedGeos(bool value);

  /// @brief Method set_CookingEnabled, addr 0x234da80, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookingEnabled(bool value);

  /// @brief Method set_CookingTriggersDownstreamCooks, addr 0x234dc04, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookingTriggersDownstreamCooks(bool value);

  /// @brief Method set_Curves_ShowInSceneView, addr 0x234f6f4, size 0x54, virtual false, abstract: false, final false
  static inline void set_Curves_ShowInSceneView(bool value);

  /// @brief Method set_DefaultCurveShader, addr 0x23506ec, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultCurveShader(::StringW value);

  /// @brief Method set_DefaultStandardShader, addr 0x2350158, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultStandardShader(::StringW value);

  /// @brief Method set_DefaultTerrainMaterial, addr 0x234fdd0, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultTerrainMaterial(::StringW value);

  /// @brief Method set_DefaultTransparentShader, addr 0x2350550, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultTransparentShader(::StringW value);

  /// @brief Method set_DefaultVertexColorShader, addr 0x2350354, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultVertexColorShader(::StringW value);

  /// @brief Method set_EditorOnly_Tag, addr 0x234ef00, size 0xf4, virtual false, abstract: false, final false
  static inline void set_EditorOnly_Tag(::StringW value);

  /// @brief Method set_HDAData_Name, addr 0x234eff4, size 0x54, virtual false, abstract: false, final false
  static inline void set_HDAData_Name(::StringW value);

  /// @brief Method set_HEngineShelfSelectedIndex, addr 0x234fd04, size 0x54, virtual false, abstract: false, final false
  static inline void set_HEngineShelfSelectedIndex(int32_t value);

  /// @brief Method set_HEngineToolsShelves, addr 0x234faf8, size 0x58, virtual false, abstract: false, final false
  static inline void set_HEngineToolsShelves(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_HoudiniDebugLaunchPath, addr 0x2350b64, size 0x54, virtual false, abstract: false, final false
  static inline void set_HoudiniDebugLaunchPath(::StringW value);

  /// @brief Method set_HoudiniEngineEnvFilePath, addr 0x234d458, size 0x60, virtual false, abstract: false, final false
  static inline void set_HoudiniEngineEnvFilePath(::StringW value);

  /// @brief Method set_HoudiniInstallPath, addr 0x234c5d8, size 0x54, virtual false, abstract: false, final false
  static inline void set_HoudiniInstallPath(::StringW value);

  /// @brief Method set_ImageGamma, addr 0x234e818, size 0x54, virtual false, abstract: false, final false
  static inline void set_ImageGamma(float_t value);

  /// @brief Method set_InputSelectionFilterLocation, addr 0x2350ce8, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterLocation(int32_t value);

  /// @brief Method set_InputSelectionFilterName, addr 0x2350f20, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterName(::StringW value);

  /// @brief Method set_InputSelectionFilterRoots, addr 0x2350e54, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterRoots(bool value);

  /// @brief Method set_InputSelectionFilterState, addr 0x2350da0, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterState(int32_t value);

  /// @brief Method set_InstanceAttr, addr 0x234ec10, size 0x54, virtual false, abstract: false, final false
  static inline void set_InstanceAttr(::StringW value);

  /// @brief Method set_LastExportPath, addr 0x2350c30, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastExportPath(::StringW value);

  /// @brief Method set_LastHoudiniVersion, addr 0x234c62c, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastHoudiniVersion(::StringW value);

  /// @brief Method set_LastLoadHDAPath, addr 0x234ea78, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastLoadHDAPath(::StringW value);

  /// @brief Method set_LastLoadHIPPath, addr 0x234eb44, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastLoadHIPPath(::StringW value);

  /// @brief Method set_LineColor, addr 0x234ee7c, size 0x84, virtual false, abstract: false, final false
  static inline void set_LineColor(::UnityEngine::Color value);

  /// @brief Method set_MaxVerticesPerPrimitive, addr 0x235108c, size 0x54, virtual false, abstract: false, final false
  static inline void set_MaxVerticesPerPrimitive(int32_t value);

  /// @brief Method set_NormalGenerationThresholdAngle, addr 0x234e9ac, size 0x54, virtual false, abstract: false, final false
  static inline void set_NormalGenerationThresholdAngle(float_t value);

  /// @brief Method set_PushUnityTransformToHoudini, addr 0x234dd74, size 0x54, virtual false, abstract: false, final false
  static inline void set_PushUnityTransformToHoudini(bool value);

  /// @brief Method set_RenderedCollisionGroupName, addr 0x234dfc4, size 0x54, virtual false, abstract: false, final false
  static inline void set_RenderedCollisionGroupName(::StringW value);

  /// @brief Method set_RenderedConvexCollisionGroupName, addr 0x234e090, size 0x54, virtual false, abstract: false, final false
  static inline void set_RenderedConvexCollisionGroupName(::StringW value);

  /// @brief Method set_SessionSyncAutoCook, addr 0x2351144, size 0x54, virtual false, abstract: false, final false
  static inline void set_SessionSyncAutoCook(bool value);

  /// @brief Method set_Session_AutoClose, addr 0x234f63c, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_AutoClose(bool value);

  /// @brief Method set_Session_Localhost, addr 0x234f40c, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Localhost(::StringW value);

  /// @brief Method set_Session_Mode, addr 0x234f1a4, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Mode(::HoudiniEngineUnity::SessionMode value);

  /// @brief Method set_Session_PipeName, addr 0x234f340, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_PipeName(::StringW value);

  /// @brief Method set_Session_Port, addr 0x234f4c4, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Port(int32_t value);

  /// @brief Method set_Session_Timeout, addr 0x234f584, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Timeout(float_t value);

  /// @brief Method set_SetCurrentThreadToInvariantCulture, addr 0x235090c, size 0x60, virtual false, abstract: false, final false
  static inline void set_SetCurrentThreadToInvariantCulture(bool value);

  /// @brief Method set_ShortenFolderPaths, addr 0x23513ac, size 0x54, virtual false, abstract: false, final false
  static inline void set_ShortenFolderPaths(bool value);

  /// @brief Method set_SupportHoudiniBoxType, addr 0x23507a0, size 0x54, virtual false, abstract: false, final false
  static inline void set_SupportHoudiniBoxType(bool value);

  /// @brief Method set_SupportHoudiniSphereType, addr 0x2350854, size 0x54, virtual false, abstract: false, final false
  static inline void set_SupportHoudiniSphereType(bool value);

  /// @brief Method set_TerrainSplatTextureDefault, addr 0x234fe9c, size 0x54, virtual false, abstract: false, final false
  static inline void set_TerrainSplatTextureDefault(::StringW value);

  /// @brief Method set_TransformChangeTriggersCooks, addr 0x234de2c, size 0x54, virtual false, abstract: false, final false
  static inline void set_TransformChangeTriggersCooks(bool value);

  /// @brief Method set_UnityInputMeshAttr, addr 0x234eda8, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityInputMeshAttr(::StringW value);

  /// @brief Method set_UnityInstanceAttr, addr 0x234ecdc, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityInstanceAttr(::StringW value);

  /// @brief Method set_UnityLayerAttributeName, addr 0x234e624, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityLayerAttributeName(::StringW value);

  /// @brief Method set_UnityMaterialAttribName, addr 0x234e15c, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityMaterialAttribName(::StringW value);

  /// @brief Method set_UnityScriptAttributeName, addr 0x234e558, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityScriptAttributeName(::StringW value);

  /// @brief Method set_UnityStaticAttributeName, addr 0x234e48c, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityStaticAttributeName(::StringW value);

  /// @brief Method set_UnitySubMaterialAttribName, addr 0x234e228, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnitySubMaterialAttribName(::StringW value);

  /// @brief Method set_UnitySubMaterialIndexAttribName, addr 0x234e2f4, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnitySubMaterialIndexAttribName(::StringW value);

  /// @brief Method set_UnityTagAttributeName, addr 0x234e3c0, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityTagAttributeName(::StringW value);

  /// @brief Method set_UseFullPathNamesForOutput, addr 0x234f878, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseFullPathNamesForOutput(bool value);

  /// @brief Method set_UseHDRColor, addr 0x2351250, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseHDRColor(bool value);

  /// @brief Method set_UseLegacyShaders, addr 0x23512f8, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseLegacyShaders(bool value);

  /// @brief Method set_UseSpecularShader, addr 0x23512a4, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseSpecularShader(bool value);

  /// @brief Method set_WriteCookLogs, addr 0x2351198, size 0x54, virtual false, abstract: false, final false
  static inline void set_WriteCookLogs(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PluginSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_PluginSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_PluginSettings(HEU_PluginSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PluginSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_PluginSettings(HEU_PluginSettings const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PluginSettings, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PluginSettings);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PluginSettings*, "HoudiniEngineUnity", "HEU_PluginSettings");
