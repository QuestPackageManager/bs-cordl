#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_PluginSettings.hpp"
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
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_PluginSettings
class CORDL_TYPE HEU_PluginSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_AssetCachePath, addr 0x3a51254, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_AssetCachePath();

  /// @brief Method get_CollisionGroupName, addr 0x3a4f998, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_CollisionGroupName();

  /// @brief Method get_CookOptionSplitGeosByGroup, addr 0x3a52aa0, size 0x60, virtual false, abstract: false, final false
  static inline bool get_CookOptionSplitGeosByGroup();

  /// @brief Method get_CookTemplatedGeos, addr 0x3a4f770, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookTemplatedGeos();

  /// @brief Method get_CookingEnabled, addr 0x3a4f440, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookingEnabled();

  /// @brief Method get_CookingTriggersDownstreamCooks, addr 0x3a4f6b8, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookingTriggersDownstreamCooks();

  /// @brief Method get_Curves_ShowInSceneView, addr 0x3a5119c, size 0x64, virtual false, abstract: false, final false
  static inline bool get_Curves_ShowInSceneView();

  /// @brief Method get_DefaultCurveShader, addr 0x3a520b4, size 0x144, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultCurveShader();

  /// @brief Method get_DefaultStandardShader, addr 0x3a51a00, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultStandardShader();

  /// @brief Method get_DefaultTerrainMaterial, addr 0x3a51868, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultTerrainMaterial();

  /// @brief Method get_DefaultTransparentShader, addr 0x3a51eb8, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultTransparentShader();

  /// @brief Method get_DefaultVertexColorShader, addr 0x3a51cbc, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultVertexColorShader();

  /// @brief Method get_EditorOnly_Tag, addr 0x3a4ad84, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_EditorOnly_Tag();

  /// @brief Method get_HDAData_Name, addr 0x3a4ad0c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HDAData_Name();

  /// @brief Method get_HEngineShelfSelectedIndex, addr 0x3a517b4, size 0x60, virtual false, abstract: false, final false
  static inline int32_t get_HEngineShelfSelectedIndex();

  /// @brief Method get_HEngineToolsShelves, addr 0x3a513d8, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* get_HEngineToolsShelves();

  /// @brief Method get_HoudiniDebugLaunchPath, addr 0x3a52584, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniDebugLaunchPath();

  /// @brief Method get_HoudiniEngineEnvFilePath, addr 0x3a4ec0c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniEngineEnvFilePath();

  /// @brief Method get_HoudiniInstallPath, addr 0x3a4dff8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniInstallPath();

  /// @brief Method get_ImageGamma, addr 0x3a50190, size 0x6c, virtual false, abstract: false, final false
  static inline float_t get_ImageGamma();

  /// @brief Method get_InputSelectionFilterLocation, addr 0x3a527b0, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_InputSelectionFilterLocation();

  /// @brief Method get_InputSelectionFilterName, addr 0x3a529d4, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_InputSelectionFilterName();

  /// @brief Method get_InputSelectionFilterRoots, addr 0x3a52920, size 0x60, virtual false, abstract: false, final false
  static inline bool get_InputSelectionFilterRoots();

  /// @brief Method get_InputSelectionFilterState, addr 0x3a52868, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_InputSelectionFilterState();

  /// @brief Method get_InstanceAttr, addr 0x3a506b0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_InstanceAttr();

  /// @brief Method get_LastExportPath, addr 0x3a526e4, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastExportPath();

  /// @brief Method get_LastHoudiniVersion, addr 0x3a4e070, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastHoudiniVersion();

  /// @brief Method get_LastLoadHDAPath, addr 0x3a50518, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastLoadHDAPath();

  /// @brief Method get_LastLoadHIPPath, addr 0x3a505e4, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastLoadHIPPath();

  /// @brief Method get_LineColor, addr 0x3a50914, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_LineColor();

  /// @brief Method get_MaxVerticesPerPrimitive, addr 0x3a52b54, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_MaxVerticesPerPrimitive();

  /// @brief Method get_NormalGenerationThresholdAngle, addr 0x3a5045c, size 0x68, virtual false, abstract: false, final false
  static inline float_t get_NormalGenerationThresholdAngle();

  /// @brief Method get_PushUnityTransformToHoudini, addr 0x3a4f828, size 0x64, virtual false, abstract: false, final false
  static inline bool get_PushUnityTransformToHoudini();

  /// @brief Method get_RenderedCollisionGroupName, addr 0x3a4fa64, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_RenderedCollisionGroupName();

  /// @brief Method get_RenderedConvexCollisionGroupName, addr 0x3a4fb30, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_RenderedConvexCollisionGroupName();

  /// @brief Method get_SessionSyncAutoCook, addr 0x3a52c0c, size 0x64, virtual false, abstract: false, final false
  static inline bool get_SessionSyncAutoCook();

  /// @brief Method get_Session_AutoClose, addr 0x3a510e4, size 0x64, virtual false, abstract: false, final false
  static inline bool get_Session_AutoClose();

  /// @brief Method get_Session_Localhost, addr 0x3a50ea0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_Session_Localhost();

  /// @brief Method get_Session_Mode, addr 0x3a50b54, size 0x68, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::SessionMode get_Session_Mode();

  /// @brief Method get_Session_PipeName, addr 0x3a50dd4, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_Session_PipeName();

  /// @brief Method get_Session_Port, addr 0x3a50f6c, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_Session_Port();

  /// @brief Method get_Session_Timeout, addr 0x3a51024, size 0x6c, virtual false, abstract: false, final false
  static inline float_t get_Session_Timeout();

  /// @brief Method get_SetCurrentThreadToInvariantCulture, addr 0x3a523b4, size 0x64, virtual false, abstract: false, final false
  static inline bool get_SetCurrentThreadToInvariantCulture();

  /// @brief Method get_ShortenFolderPaths, addr 0x3a52e78, size 0x60, virtual false, abstract: false, final false
  static inline bool get_ShortenFolderPaths();

  /// @brief Method get_SupportHoudiniBoxType, addr 0x3a5224c, size 0x60, virtual false, abstract: false, final false
  static inline bool get_SupportHoudiniBoxType();

  /// @brief Method get_SupportHoudiniSphereType, addr 0x3a52300, size 0x60, virtual false, abstract: false, final false
  static inline bool get_SupportHoudiniSphereType();

  /// @brief Method get_TerrainSplatTextureDefault, addr 0x3a51934, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_TerrainSplatTextureDefault();

  /// @brief Method get_TransformChangeTriggersCooks, addr 0x3a4f8e0, size 0x64, virtual false, abstract: false, final false
  static inline bool get_TransformChangeTriggersCooks();

  /// @brief Method get_UnityInputMeshAttr, addr 0x3a50848, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityInputMeshAttr();

  /// @brief Method get_UnityInstanceAttr, addr 0x3a5077c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityInstanceAttr();

  /// @brief Method get_UnityLayerAttributeName, addr 0x3a500c4, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityLayerAttributeName();

  /// @brief Method get_UnityMaterialAttribName, addr 0x3a4fbfc, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityMaterialAttribName();

  /// @brief Method get_UnityScriptAttributeName, addr 0x3a4fff8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityScriptAttributeName();

  /// @brief Method get_UnityStaticAttributeName, addr 0x3a4ff2c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityStaticAttributeName();

  /// @brief Method get_UnitySubMaterialAttribName, addr 0x3a4fcc8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnitySubMaterialAttribName();

  /// @brief Method get_UnitySubMaterialIndexAttribName, addr 0x3a4fd94, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnitySubMaterialIndexAttribName();

  /// @brief Method get_UnityTagAttributeName, addr 0x3a4fe60, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityTagAttributeName();

  /// @brief Method get_UseFullPathNamesForOutput, addr 0x3a51320, size 0x64, virtual false, abstract: false, final false
  static inline bool get_UseFullPathNamesForOutput();

  /// @brief Method get_UseHDRColor, addr 0x3a52d18, size 0x64, virtual false, abstract: false, final false
  static inline bool get_UseHDRColor();

  /// @brief Method get_UseLegacyShaders, addr 0x3a51c08, size 0x60, virtual false, abstract: false, final false
  static inline bool get_UseLegacyShaders();

  /// @brief Method get_UseSpecularShader, addr 0x3a51ba8, size 0x60, virtual false, abstract: false, final false
  static inline bool get_UseSpecularShader();

  /// @brief Method get_WriteCookLogs, addr 0x3a4b7b4, size 0x60, virtual false, abstract: false, final false
  static inline bool get_WriteCookLogs();

  /// @brief Method set_AssetCachePath, addr 0x3a512cc, size 0x54, virtual false, abstract: false, final false
  static inline void set_AssetCachePath(::StringW value);

  /// @brief Method set_CollisionGroupName, addr 0x3a4fa10, size 0x54, virtual false, abstract: false, final false
  static inline void set_CollisionGroupName(::StringW value);

  /// @brief Method set_CookOptionSplitGeosByGroup, addr 0x3a52b00, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookOptionSplitGeosByGroup(bool value);

  /// @brief Method set_CookTemplatedGeos, addr 0x3a4f7d4, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookTemplatedGeos(bool value);

  /// @brief Method set_CookingEnabled, addr 0x3a4f598, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookingEnabled(bool value);

  /// @brief Method set_CookingTriggersDownstreamCooks, addr 0x3a4f71c, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookingTriggersDownstreamCooks(bool value);

  /// @brief Method set_Curves_ShowInSceneView, addr 0x3a51200, size 0x54, virtual false, abstract: false, final false
  static inline void set_Curves_ShowInSceneView(bool value);

  /// @brief Method set_DefaultCurveShader, addr 0x3a521f8, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultCurveShader(::StringW value);

  /// @brief Method set_DefaultStandardShader, addr 0x3a51c68, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultStandardShader(::StringW value);

  /// @brief Method set_DefaultTerrainMaterial, addr 0x3a518e0, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultTerrainMaterial(::StringW value);

  /// @brief Method set_DefaultTransparentShader, addr 0x3a52060, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultTransparentShader(::StringW value);

  /// @brief Method set_DefaultVertexColorShader, addr 0x3a51e64, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultVertexColorShader(::StringW value);

  /// @brief Method set_EditorOnly_Tag, addr 0x3a50a18, size 0xe8, virtual false, abstract: false, final false
  static inline void set_EditorOnly_Tag(::StringW value);

  /// @brief Method set_HDAData_Name, addr 0x3a50b00, size 0x54, virtual false, abstract: false, final false
  static inline void set_HDAData_Name(::StringW value);

  /// @brief Method set_HEngineShelfSelectedIndex, addr 0x3a51814, size 0x54, virtual false, abstract: false, final false
  static inline void set_HEngineShelfSelectedIndex(int32_t value);

  /// @brief Method set_HEngineToolsShelves, addr 0x3a51600, size 0x58, virtual false, abstract: false, final false
  static inline void set_HEngineToolsShelves(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_HoudiniDebugLaunchPath, addr 0x3a52690, size 0x54, virtual false, abstract: false, final false
  static inline void set_HoudiniDebugLaunchPath(::StringW value);

  /// @brief Method set_HoudiniEngineEnvFilePath, addr 0x3a4ef64, size 0x60, virtual false, abstract: false, final false
  static inline void set_HoudiniEngineEnvFilePath(::StringW value);

  /// @brief Method set_HoudiniInstallPath, addr 0x3a4e0e8, size 0x54, virtual false, abstract: false, final false
  static inline void set_HoudiniInstallPath(::StringW value);

  /// @brief Method set_ImageGamma, addr 0x3a50330, size 0x54, virtual false, abstract: false, final false
  static inline void set_ImageGamma(float_t value);

  /// @brief Method set_InputSelectionFilterLocation, addr 0x3a52814, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterLocation(int32_t value);

  /// @brief Method set_InputSelectionFilterName, addr 0x3a52a4c, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterName(::StringW value);

  /// @brief Method set_InputSelectionFilterRoots, addr 0x3a52980, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterRoots(bool value);

  /// @brief Method set_InputSelectionFilterState, addr 0x3a528cc, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterState(int32_t value);

  /// @brief Method set_InstanceAttr, addr 0x3a50728, size 0x54, virtual false, abstract: false, final false
  static inline void set_InstanceAttr(::StringW value);

  /// @brief Method set_LastExportPath, addr 0x3a5275c, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastExportPath(::StringW value);

  /// @brief Method set_LastHoudiniVersion, addr 0x3a4e13c, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastHoudiniVersion(::StringW value);

  /// @brief Method set_LastLoadHDAPath, addr 0x3a50590, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastLoadHDAPath(::StringW value);

  /// @brief Method set_LastLoadHIPPath, addr 0x3a5065c, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastLoadHIPPath(::StringW value);

  /// @brief Method set_LineColor, addr 0x3a50994, size 0x84, virtual false, abstract: false, final false
  static inline void set_LineColor(::UnityEngine::Color value);

  /// @brief Method set_MaxVerticesPerPrimitive, addr 0x3a52bb8, size 0x54, virtual false, abstract: false, final false
  static inline void set_MaxVerticesPerPrimitive(int32_t value);

  /// @brief Method set_NormalGenerationThresholdAngle, addr 0x3a504c4, size 0x54, virtual false, abstract: false, final false
  static inline void set_NormalGenerationThresholdAngle(float_t value);

  /// @brief Method set_PushUnityTransformToHoudini, addr 0x3a4f88c, size 0x54, virtual false, abstract: false, final false
  static inline void set_PushUnityTransformToHoudini(bool value);

  /// @brief Method set_RenderedCollisionGroupName, addr 0x3a4fadc, size 0x54, virtual false, abstract: false, final false
  static inline void set_RenderedCollisionGroupName(::StringW value);

  /// @brief Method set_RenderedConvexCollisionGroupName, addr 0x3a4fba8, size 0x54, virtual false, abstract: false, final false
  static inline void set_RenderedConvexCollisionGroupName(::StringW value);

  /// @brief Method set_SessionSyncAutoCook, addr 0x3a52c70, size 0x54, virtual false, abstract: false, final false
  static inline void set_SessionSyncAutoCook(bool value);

  /// @brief Method set_Session_AutoClose, addr 0x3a51148, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_AutoClose(bool value);

  /// @brief Method set_Session_Localhost, addr 0x3a50f18, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Localhost(::StringW value);

  /// @brief Method set_Session_Mode, addr 0x3a50cb0, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Mode(::HoudiniEngineUnity::SessionMode value);

  /// @brief Method set_Session_PipeName, addr 0x3a50e4c, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_PipeName(::StringW value);

  /// @brief Method set_Session_Port, addr 0x3a50fd0, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Port(int32_t value);

  /// @brief Method set_Session_Timeout, addr 0x3a51090, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Timeout(float_t value);

  /// @brief Method set_SetCurrentThreadToInvariantCulture, addr 0x3a52418, size 0x60, virtual false, abstract: false, final false
  static inline void set_SetCurrentThreadToInvariantCulture(bool value);

  /// @brief Method set_ShortenFolderPaths, addr 0x3a52ed8, size 0x54, virtual false, abstract: false, final false
  static inline void set_ShortenFolderPaths(bool value);

  /// @brief Method set_SupportHoudiniBoxType, addr 0x3a522ac, size 0x54, virtual false, abstract: false, final false
  static inline void set_SupportHoudiniBoxType(bool value);

  /// @brief Method set_SupportHoudiniSphereType, addr 0x3a52360, size 0x54, virtual false, abstract: false, final false
  static inline void set_SupportHoudiniSphereType(bool value);

  /// @brief Method set_TerrainSplatTextureDefault, addr 0x3a519ac, size 0x54, virtual false, abstract: false, final false
  static inline void set_TerrainSplatTextureDefault(::StringW value);

  /// @brief Method set_TransformChangeTriggersCooks, addr 0x3a4f944, size 0x54, virtual false, abstract: false, final false
  static inline void set_TransformChangeTriggersCooks(bool value);

  /// @brief Method set_UnityInputMeshAttr, addr 0x3a508c0, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityInputMeshAttr(::StringW value);

  /// @brief Method set_UnityInstanceAttr, addr 0x3a507f4, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityInstanceAttr(::StringW value);

  /// @brief Method set_UnityLayerAttributeName, addr 0x3a5013c, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityLayerAttributeName(::StringW value);

  /// @brief Method set_UnityMaterialAttribName, addr 0x3a4fc74, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityMaterialAttribName(::StringW value);

  /// @brief Method set_UnityScriptAttributeName, addr 0x3a50070, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityScriptAttributeName(::StringW value);

  /// @brief Method set_UnityStaticAttributeName, addr 0x3a4ffa4, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityStaticAttributeName(::StringW value);

  /// @brief Method set_UnitySubMaterialAttribName, addr 0x3a4fd40, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnitySubMaterialAttribName(::StringW value);

  /// @brief Method set_UnitySubMaterialIndexAttribName, addr 0x3a4fe0c, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnitySubMaterialIndexAttribName(::StringW value);

  /// @brief Method set_UnityTagAttributeName, addr 0x3a4fed8, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityTagAttributeName(::StringW value);

  /// @brief Method set_UseFullPathNamesForOutput, addr 0x3a51384, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseFullPathNamesForOutput(bool value);

  /// @brief Method set_UseHDRColor, addr 0x3a52d7c, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseHDRColor(bool value);

  /// @brief Method set_UseLegacyShaders, addr 0x3a52e24, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseLegacyShaders(bool value);

  /// @brief Method set_UseSpecularShader, addr 0x3a52dd0, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseSpecularShader(bool value);

  /// @brief Method set_WriteCookLogs, addr 0x3a52cc4, size 0x54, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11663 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PluginSettings, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PluginSettings);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PluginSettings*, "HoudiniEngineUnity", "HEU_PluginSettings");
