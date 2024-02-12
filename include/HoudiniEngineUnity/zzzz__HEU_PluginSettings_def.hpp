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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9468))
// CS Name: ::HoudiniEngineUnity::HEU_PluginSettings*
class CORDL_TYPE HEU_PluginSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_HoudiniEngineEnvFilePath, addr 0x221ecbc, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniEngineEnvFilePath();

  /// @brief Method set_HoudiniEngineEnvFilePath, addr 0x221f018, size 0x60, virtual false, abstract: false, final false
  static inline void set_HoudiniEngineEnvFilePath(::StringW value);

  /// @brief Method get_CookingEnabled, addr 0x221f4e8, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookingEnabled();

  /// @brief Method set_CookingEnabled, addr 0x221f640, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookingEnabled(bool value);

  /// @brief Method get_CookingTriggersDownstreamCooks, addr 0x221f760, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookingTriggersDownstreamCooks();

  /// @brief Method set_CookingTriggersDownstreamCooks, addr 0x221f7c4, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookingTriggersDownstreamCooks(bool value);

  /// @brief Method get_CookTemplatedGeos, addr 0x221f818, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookTemplatedGeos();

  /// @brief Method set_CookTemplatedGeos, addr 0x221f87c, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookTemplatedGeos(bool value);

  /// @brief Method get_PushUnityTransformToHoudini, addr 0x221f8d0, size 0x64, virtual false, abstract: false, final false
  static inline bool get_PushUnityTransformToHoudini();

  /// @brief Method set_PushUnityTransformToHoudini, addr 0x221f934, size 0x54, virtual false, abstract: false, final false
  static inline void set_PushUnityTransformToHoudini(bool value);

  /// @brief Method get_TransformChangeTriggersCooks, addr 0x221f988, size 0x64, virtual false, abstract: false, final false
  static inline bool get_TransformChangeTriggersCooks();

  /// @brief Method set_TransformChangeTriggersCooks, addr 0x221f9ec, size 0x54, virtual false, abstract: false, final false
  static inline void set_TransformChangeTriggersCooks(bool value);

  /// @brief Method get_CollisionGroupName, addr 0x221fa40, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_CollisionGroupName();

  /// @brief Method set_CollisionGroupName, addr 0x221fab8, size 0x54, virtual false, abstract: false, final false
  static inline void set_CollisionGroupName(::StringW value);

  /// @brief Method get_RenderedCollisionGroupName, addr 0x221fb0c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_RenderedCollisionGroupName();

  /// @brief Method set_RenderedCollisionGroupName, addr 0x221fb84, size 0x54, virtual false, abstract: false, final false
  static inline void set_RenderedCollisionGroupName(::StringW value);

  /// @brief Method get_RenderedConvexCollisionGroupName, addr 0x221fbd8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_RenderedConvexCollisionGroupName();

  /// @brief Method set_RenderedConvexCollisionGroupName, addr 0x221fc50, size 0x54, virtual false, abstract: false, final false
  static inline void set_RenderedConvexCollisionGroupName(::StringW value);

  /// @brief Method get_UnityMaterialAttribName, addr 0x221fca4, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityMaterialAttribName();

  /// @brief Method set_UnityMaterialAttribName, addr 0x221fd1c, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityMaterialAttribName(::StringW value);

  /// @brief Method get_UnitySubMaterialAttribName, addr 0x221fd70, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnitySubMaterialAttribName();

  /// @brief Method set_UnitySubMaterialAttribName, addr 0x221fde8, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnitySubMaterialAttribName(::StringW value);

  /// @brief Method get_UnitySubMaterialIndexAttribName, addr 0x221fe3c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnitySubMaterialIndexAttribName();

  /// @brief Method set_UnitySubMaterialIndexAttribName, addr 0x221feb4, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnitySubMaterialIndexAttribName(::StringW value);

  /// @brief Method get_UnityTagAttributeName, addr 0x221ff08, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityTagAttributeName();

  /// @brief Method set_UnityTagAttributeName, addr 0x221ff80, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityTagAttributeName(::StringW value);

  /// @brief Method get_UnityStaticAttributeName, addr 0x221ffd4, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityStaticAttributeName();

  /// @brief Method set_UnityStaticAttributeName, addr 0x222004c, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityStaticAttributeName(::StringW value);

  /// @brief Method get_UnityScriptAttributeName, addr 0x22200a0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityScriptAttributeName();

  /// @brief Method set_UnityScriptAttributeName, addr 0x2220118, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityScriptAttributeName(::StringW value);

  /// @brief Method get_UnityLayerAttributeName, addr 0x222016c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityLayerAttributeName();

  /// @brief Method set_UnityLayerAttributeName, addr 0x22201e4, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityLayerAttributeName(::StringW value);

  /// @brief Method get_ImageGamma, addr 0x2220238, size 0x6c, virtual false, abstract: false, final false
  static inline float_t get_ImageGamma();

  /// @brief Method set_ImageGamma, addr 0x22203d8, size 0x54, virtual false, abstract: false, final false
  static inline void set_ImageGamma(float_t value);

  /// @brief Method get_NormalGenerationThresholdAngle, addr 0x2220504, size 0x68, virtual false, abstract: false, final false
  static inline float_t get_NormalGenerationThresholdAngle();

  /// @brief Method set_NormalGenerationThresholdAngle, addr 0x222056c, size 0x54, virtual false, abstract: false, final false
  static inline void set_NormalGenerationThresholdAngle(float_t value);

  /// @brief Method get_LastLoadHDAPath, addr 0x22205c0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastLoadHDAPath();

  /// @brief Method set_LastLoadHDAPath, addr 0x2220638, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastLoadHDAPath(::StringW value);

  /// @brief Method get_LastLoadHIPPath, addr 0x222068c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastLoadHIPPath();

  /// @brief Method set_LastLoadHIPPath, addr 0x2220704, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastLoadHIPPath(::StringW value);

  /// @brief Method get_InstanceAttr, addr 0x2220758, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_InstanceAttr();

  /// @brief Method set_InstanceAttr, addr 0x22207d0, size 0x54, virtual false, abstract: false, final false
  static inline void set_InstanceAttr(::StringW value);

  /// @brief Method get_UnityInstanceAttr, addr 0x2220824, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityInstanceAttr();

  /// @brief Method set_UnityInstanceAttr, addr 0x222089c, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityInstanceAttr(::StringW value);

  /// @brief Method get_UnityInputMeshAttr, addr 0x22208f0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityInputMeshAttr();

  /// @brief Method set_UnityInputMeshAttr, addr 0x2220968, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityInputMeshAttr(::StringW value);

  /// @brief Method get_LineColor, addr 0x22209bc, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_LineColor();

  /// @brief Method set_LineColor, addr 0x2220a3c, size 0x84, virtual false, abstract: false, final false
  static inline void set_LineColor(::UnityEngine::Color value);

  /// @brief Method get_EditorOnly_Tag, addr 0x221ae10, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_EditorOnly_Tag();

  /// @brief Method set_EditorOnly_Tag, addr 0x2220ac0, size 0xf4, virtual false, abstract: false, final false
  static inline void set_EditorOnly_Tag(::StringW value);

  /// @brief Method get_HDAData_Name, addr 0x221ad98, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HDAData_Name();

  /// @brief Method set_HDAData_Name, addr 0x2220bb4, size 0x54, virtual false, abstract: false, final false
  static inline void set_HDAData_Name(::StringW value);

  /// @brief Method get_Session_Mode, addr 0x2220c08, size 0x68, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::SessionMode get_Session_Mode();

  /// @brief Method set_Session_Mode, addr 0x2220d64, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Mode(::HoudiniEngineUnity::SessionMode value);

  /// @brief Method get_Session_PipeName, addr 0x2220e88, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_Session_PipeName();

  /// @brief Method set_Session_PipeName, addr 0x2220f00, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_PipeName(::StringW value);

  /// @brief Method get_Session_Localhost, addr 0x2220f54, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_Session_Localhost();

  /// @brief Method set_Session_Localhost, addr 0x2220fcc, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Localhost(::StringW value);

  /// @brief Method get_Session_Port, addr 0x2221020, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_Session_Port();

  /// @brief Method set_Session_Port, addr 0x2221084, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Port(int32_t value);

  /// @brief Method get_Session_Timeout, addr 0x22210d8, size 0x6c, virtual false, abstract: false, final false
  static inline float_t get_Session_Timeout();

  /// @brief Method set_Session_Timeout, addr 0x2221144, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Timeout(float_t value);

  /// @brief Method get_Session_AutoClose, addr 0x2221198, size 0x64, virtual false, abstract: false, final false
  static inline bool get_Session_AutoClose();

  /// @brief Method set_Session_AutoClose, addr 0x22211fc, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_AutoClose(bool value);

  /// @brief Method get_Curves_ShowInSceneView, addr 0x2221250, size 0x64, virtual false, abstract: false, final false
  static inline bool get_Curves_ShowInSceneView();

  /// @brief Method set_Curves_ShowInSceneView, addr 0x22212b4, size 0x54, virtual false, abstract: false, final false
  static inline void set_Curves_ShowInSceneView(bool value);

  /// @brief Method get_AssetCachePath, addr 0x2221308, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_AssetCachePath();

  /// @brief Method set_AssetCachePath, addr 0x2221380, size 0x54, virtual false, abstract: false, final false
  static inline void set_AssetCachePath(::StringW value);

  /// @brief Method get_UseFullPathNamesForOutput, addr 0x22213d4, size 0x64, virtual false, abstract: false, final false
  static inline bool get_UseFullPathNamesForOutput();

  /// @brief Method set_UseFullPathNamesForOutput, addr 0x2221438, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseFullPathNamesForOutput(bool value);

  /// @brief Method get_HEngineToolsShelves, addr 0x222148c, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* get_HEngineToolsShelves();

  /// @brief Method set_HEngineToolsShelves, addr 0x22216b8, size 0x58, virtual false, abstract: false, final false
  static inline void set_HEngineToolsShelves(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method get_HEngineShelfSelectedIndex, addr 0x2221864, size 0x60, virtual false, abstract: false, final false
  static inline int32_t get_HEngineShelfSelectedIndex();

  /// @brief Method set_HEngineShelfSelectedIndex, addr 0x22218c4, size 0x54, virtual false, abstract: false, final false
  static inline void set_HEngineShelfSelectedIndex(int32_t value);

  /// @brief Method get_DefaultTerrainMaterial, addr 0x2221918, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultTerrainMaterial();

  /// @brief Method set_DefaultTerrainMaterial, addr 0x2221990, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultTerrainMaterial(::StringW value);

  /// @brief Method get_TerrainSplatTextureDefault, addr 0x22219e4, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_TerrainSplatTextureDefault();

  /// @brief Method set_TerrainSplatTextureDefault, addr 0x2221a5c, size 0x54, virtual false, abstract: false, final false
  static inline void set_TerrainSplatTextureDefault(::StringW value);

  /// @brief Method get_DefaultStandardShader, addr 0x2221ab0, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultStandardShader();

  /// @brief Method set_DefaultStandardShader, addr 0x2221d18, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultStandardShader(::StringW value);

  /// @brief Method get_DefaultVertexColorShader, addr 0x2221d6c, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultVertexColorShader();

  /// @brief Method set_DefaultVertexColorShader, addr 0x2221f14, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultVertexColorShader(::StringW value);

  /// @brief Method get_DefaultTransparentShader, addr 0x2221f68, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultTransparentShader();

  /// @brief Method set_DefaultTransparentShader, addr 0x2222110, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultTransparentShader(::StringW value);

  /// @brief Method get_DefaultCurveShader, addr 0x2222164, size 0x148, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultCurveShader();

  /// @brief Method set_DefaultCurveShader, addr 0x22222ac, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultCurveShader(::StringW value);

  /// @brief Method get_SupportHoudiniBoxType, addr 0x2222300, size 0x60, virtual false, abstract: false, final false
  static inline bool get_SupportHoudiniBoxType();

  /// @brief Method set_SupportHoudiniBoxType, addr 0x2222360, size 0x54, virtual false, abstract: false, final false
  static inline void set_SupportHoudiniBoxType(bool value);

  /// @brief Method get_SupportHoudiniSphereType, addr 0x22223b4, size 0x60, virtual false, abstract: false, final false
  static inline bool get_SupportHoudiniSphereType();

  /// @brief Method set_SupportHoudiniSphereType, addr 0x2222414, size 0x54, virtual false, abstract: false, final false
  static inline void set_SupportHoudiniSphereType(bool value);

  /// @brief Method get_SetCurrentThreadToInvariantCulture, addr 0x2222468, size 0x64, virtual false, abstract: false, final false
  static inline bool get_SetCurrentThreadToInvariantCulture();

  /// @brief Method set_SetCurrentThreadToInvariantCulture, addr 0x22224cc, size 0x60, virtual false, abstract: false, final false
  static inline void set_SetCurrentThreadToInvariantCulture(bool value);

  /// @brief Method get_HoudiniDebugLaunchPath, addr 0x2222638, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniDebugLaunchPath();

  /// @brief Method set_HoudiniDebugLaunchPath, addr 0x2222724, size 0x54, virtual false, abstract: false, final false
  static inline void set_HoudiniDebugLaunchPath(::StringW value);

  /// @brief Method get_LastExportPath, addr 0x2222778, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastExportPath();

  /// @brief Method set_LastExportPath, addr 0x22227f0, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastExportPath(::StringW value);

  /// @brief Method get_InputSelectionFilterLocation, addr 0x2222844, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_InputSelectionFilterLocation();

  /// @brief Method set_InputSelectionFilterLocation, addr 0x22228a8, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterLocation(int32_t value);

  /// @brief Method get_InputSelectionFilterState, addr 0x22228fc, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_InputSelectionFilterState();

  /// @brief Method set_InputSelectionFilterState, addr 0x2222960, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterState(int32_t value);

  /// @brief Method get_InputSelectionFilterRoots, addr 0x22229b4, size 0x60, virtual false, abstract: false, final false
  static inline bool get_InputSelectionFilterRoots();

  /// @brief Method set_InputSelectionFilterRoots, addr 0x2222a14, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterRoots(bool value);

  /// @brief Method get_InputSelectionFilterName, addr 0x2222a68, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_InputSelectionFilterName();

  /// @brief Method set_InputSelectionFilterName, addr 0x2222ae0, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterName(::StringW value);

  /// @brief Method get_CookOptionSplitGeosByGroup, addr 0x2222b34, size 0x60, virtual false, abstract: false, final false
  static inline bool get_CookOptionSplitGeosByGroup();

  /// @brief Method set_CookOptionSplitGeosByGroup, addr 0x2222b94, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookOptionSplitGeosByGroup(bool value);

  /// @brief Method get_MaxVerticesPerPrimitive, addr 0x2222be8, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_MaxVerticesPerPrimitive();

  /// @brief Method set_MaxVerticesPerPrimitive, addr 0x2222c4c, size 0x54, virtual false, abstract: false, final false
  static inline void set_MaxVerticesPerPrimitive(int32_t value);

  /// @brief Method get_HoudiniInstallPath, addr 0x221e0a8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniInstallPath();

  /// @brief Method set_HoudiniInstallPath, addr 0x221e198, size 0x54, virtual false, abstract: false, final false
  static inline void set_HoudiniInstallPath(::StringW value);

  /// @brief Method get_LastHoudiniVersion, addr 0x221e120, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastHoudiniVersion();

  /// @brief Method set_LastHoudiniVersion, addr 0x221e1ec, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastHoudiniVersion(::StringW value);

  /// @brief Method get_SessionSyncAutoCook, addr 0x2222ca0, size 0x64, virtual false, abstract: false, final false
  static inline bool get_SessionSyncAutoCook();

  /// @brief Method set_SessionSyncAutoCook, addr 0x2222d04, size 0x54, virtual false, abstract: false, final false
  static inline void set_SessionSyncAutoCook(bool value);

  /// @brief Method get_WriteCookLogs, addr 0x221b864, size 0x60, virtual false, abstract: false, final false
  static inline bool get_WriteCookLogs();

  /// @brief Method set_WriteCookLogs, addr 0x2222d58, size 0x54, virtual false, abstract: false, final false
  static inline void set_WriteCookLogs(bool value);

  /// @brief Method get_UseHDRColor, addr 0x2222dac, size 0x64, virtual false, abstract: false, final false
  static inline bool get_UseHDRColor();

  /// @brief Method set_UseHDRColor, addr 0x2222e10, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseHDRColor(bool value);

  /// @brief Method get_UseSpecularShader, addr 0x2221c58, size 0x60, virtual false, abstract: false, final false
  static inline bool get_UseSpecularShader();

  /// @brief Method set_UseSpecularShader, addr 0x2222e64, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseSpecularShader(bool value);

  /// @brief Method get_UseLegacyShaders, addr 0x2221cb8, size 0x60, virtual false, abstract: false, final false
  static inline bool get_UseLegacyShaders();

  /// @brief Method set_UseLegacyShaders, addr 0x2222eb8, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseLegacyShaders(bool value);

  /// @brief Method get_ShortenFolderPaths, addr 0x2222f0c, size 0x60, virtual false, abstract: false, final false
  static inline bool get_ShortenFolderPaths();

  /// @brief Method set_ShortenFolderPaths, addr 0x2222f6c, size 0x54, virtual false, abstract: false, final false
  static inline void set_ShortenFolderPaths(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PluginSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_PluginSettings(HEU_PluginSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_PluginSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_PluginSettings(HEU_PluginSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_PluginSettings();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PluginSettings, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PluginSettings);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PluginSettings*, "HoudiniEngineUnity", "HEU_PluginSettings");
