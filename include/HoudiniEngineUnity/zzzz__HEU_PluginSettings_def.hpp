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
  /// @brief Method get_AssetCachePath, addr 0x246ec94, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_AssetCachePath();

  /// @brief Method get_CollisionGroupName, addr 0x246d3cc, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_CollisionGroupName();

  /// @brief Method get_CookOptionSplitGeosByGroup, addr 0x24704c0, size 0x60, virtual false, abstract: false, final false
  static inline bool get_CookOptionSplitGeosByGroup();

  /// @brief Method get_CookTemplatedGeos, addr 0x246d1a4, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookTemplatedGeos();

  /// @brief Method get_CookingEnabled, addr 0x246ce74, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookingEnabled();

  /// @brief Method get_CookingTriggersDownstreamCooks, addr 0x246d0ec, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookingTriggersDownstreamCooks();

  /// @brief Method get_Curves_ShowInSceneView, addr 0x246ebdc, size 0x64, virtual false, abstract: false, final false
  static inline bool get_Curves_ShowInSceneView();

  /// @brief Method get_DefaultCurveShader, addr 0x246faf0, size 0x148, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultCurveShader();

  /// @brief Method get_DefaultStandardShader, addr 0x246f43c, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultStandardShader();

  /// @brief Method get_DefaultTerrainMaterial, addr 0x246f2a4, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultTerrainMaterial();

  /// @brief Method get_DefaultTransparentShader, addr 0x246f8f4, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultTransparentShader();

  /// @brief Method get_DefaultVertexColorShader, addr 0x246f6f8, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultVertexColorShader();

  /// @brief Method get_EditorOnly_Tag, addr 0x246879c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_EditorOnly_Tag();

  /// @brief Method get_HDAData_Name, addr 0x2468724, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HDAData_Name();

  /// @brief Method get_HEngineShelfSelectedIndex, addr 0x246f1f0, size 0x60, virtual false, abstract: false, final false
  static inline int32_t get_HEngineShelfSelectedIndex();

  /// @brief Method get_HEngineToolsShelves, addr 0x246ee18, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* get_HEngineToolsShelves();

  /// @brief Method get_HoudiniDebugLaunchPath, addr 0x246ffc4, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniDebugLaunchPath();

  /// @brief Method get_HoudiniEngineEnvFilePath, addr 0x246c648, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniEngineEnvFilePath();

  /// @brief Method get_HoudiniInstallPath, addr 0x246ba34, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniInstallPath();

  /// @brief Method get_ImageGamma, addr 0x246dbc4, size 0x6c, virtual false, abstract: false, final false
  static inline float_t get_ImageGamma();

  /// @brief Method get_InputSelectionFilterLocation, addr 0x24701d0, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_InputSelectionFilterLocation();

  /// @brief Method get_InputSelectionFilterName, addr 0x24703f4, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_InputSelectionFilterName();

  /// @brief Method get_InputSelectionFilterRoots, addr 0x2470340, size 0x60, virtual false, abstract: false, final false
  static inline bool get_InputSelectionFilterRoots();

  /// @brief Method get_InputSelectionFilterState, addr 0x2470288, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_InputSelectionFilterState();

  /// @brief Method get_InstanceAttr, addr 0x246e0e4, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_InstanceAttr();

  /// @brief Method get_LastExportPath, addr 0x2470104, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastExportPath();

  /// @brief Method get_LastHoudiniVersion, addr 0x246baac, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastHoudiniVersion();

  /// @brief Method get_LastLoadHDAPath, addr 0x246df4c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastLoadHDAPath();

  /// @brief Method get_LastLoadHIPPath, addr 0x246e018, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastLoadHIPPath();

  /// @brief Method get_LineColor, addr 0x246e348, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_LineColor();

  /// @brief Method get_MaxVerticesPerPrimitive, addr 0x2470574, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_MaxVerticesPerPrimitive();

  /// @brief Method get_NormalGenerationThresholdAngle, addr 0x246de90, size 0x68, virtual false, abstract: false, final false
  static inline float_t get_NormalGenerationThresholdAngle();

  /// @brief Method get_PushUnityTransformToHoudini, addr 0x246d25c, size 0x64, virtual false, abstract: false, final false
  static inline bool get_PushUnityTransformToHoudini();

  /// @brief Method get_RenderedCollisionGroupName, addr 0x246d498, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_RenderedCollisionGroupName();

  /// @brief Method get_RenderedConvexCollisionGroupName, addr 0x246d564, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_RenderedConvexCollisionGroupName();

  /// @brief Method get_SessionSyncAutoCook, addr 0x247062c, size 0x64, virtual false, abstract: false, final false
  static inline bool get_SessionSyncAutoCook();

  /// @brief Method get_Session_AutoClose, addr 0x246eb24, size 0x64, virtual false, abstract: false, final false
  static inline bool get_Session_AutoClose();

  /// @brief Method get_Session_Localhost, addr 0x246e8e0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_Session_Localhost();

  /// @brief Method get_Session_Mode, addr 0x246e594, size 0x68, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::SessionMode get_Session_Mode();

  /// @brief Method get_Session_PipeName, addr 0x246e814, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_Session_PipeName();

  /// @brief Method get_Session_Port, addr 0x246e9ac, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_Session_Port();

  /// @brief Method get_Session_Timeout, addr 0x246ea64, size 0x6c, virtual false, abstract: false, final false
  static inline float_t get_Session_Timeout();

  /// @brief Method get_SetCurrentThreadToInvariantCulture, addr 0x246fdf4, size 0x64, virtual false, abstract: false, final false
  static inline bool get_SetCurrentThreadToInvariantCulture();

  /// @brief Method get_ShortenFolderPaths, addr 0x2470898, size 0x60, virtual false, abstract: false, final false
  static inline bool get_ShortenFolderPaths();

  /// @brief Method get_SupportHoudiniBoxType, addr 0x246fc8c, size 0x60, virtual false, abstract: false, final false
  static inline bool get_SupportHoudiniBoxType();

  /// @brief Method get_SupportHoudiniSphereType, addr 0x246fd40, size 0x60, virtual false, abstract: false, final false
  static inline bool get_SupportHoudiniSphereType();

  /// @brief Method get_TerrainSplatTextureDefault, addr 0x246f370, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_TerrainSplatTextureDefault();

  /// @brief Method get_TransformChangeTriggersCooks, addr 0x246d314, size 0x64, virtual false, abstract: false, final false
  static inline bool get_TransformChangeTriggersCooks();

  /// @brief Method get_UnityInputMeshAttr, addr 0x246e27c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityInputMeshAttr();

  /// @brief Method get_UnityInstanceAttr, addr 0x246e1b0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityInstanceAttr();

  /// @brief Method get_UnityLayerAttributeName, addr 0x246daf8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityLayerAttributeName();

  /// @brief Method get_UnityMaterialAttribName, addr 0x246d630, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityMaterialAttribName();

  /// @brief Method get_UnityScriptAttributeName, addr 0x246da2c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityScriptAttributeName();

  /// @brief Method get_UnityStaticAttributeName, addr 0x246d960, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityStaticAttributeName();

  /// @brief Method get_UnitySubMaterialAttribName, addr 0x246d6fc, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnitySubMaterialAttribName();

  /// @brief Method get_UnitySubMaterialIndexAttribName, addr 0x246d7c8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnitySubMaterialIndexAttribName();

  /// @brief Method get_UnityTagAttributeName, addr 0x246d894, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityTagAttributeName();

  /// @brief Method get_UseFullPathNamesForOutput, addr 0x246ed60, size 0x64, virtual false, abstract: false, final false
  static inline bool get_UseFullPathNamesForOutput();

  /// @brief Method get_UseHDRColor, addr 0x2470738, size 0x64, virtual false, abstract: false, final false
  static inline bool get_UseHDRColor();

  /// @brief Method get_UseLegacyShaders, addr 0x246f644, size 0x60, virtual false, abstract: false, final false
  static inline bool get_UseLegacyShaders();

  /// @brief Method get_UseSpecularShader, addr 0x246f5e4, size 0x60, virtual false, abstract: false, final false
  static inline bool get_UseSpecularShader();

  /// @brief Method get_WriteCookLogs, addr 0x24691f0, size 0x60, virtual false, abstract: false, final false
  static inline bool get_WriteCookLogs();

  /// @brief Method set_AssetCachePath, addr 0x246ed0c, size 0x54, virtual false, abstract: false, final false
  static inline void set_AssetCachePath(::StringW value);

  /// @brief Method set_CollisionGroupName, addr 0x246d444, size 0x54, virtual false, abstract: false, final false
  static inline void set_CollisionGroupName(::StringW value);

  /// @brief Method set_CookOptionSplitGeosByGroup, addr 0x2470520, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookOptionSplitGeosByGroup(bool value);

  /// @brief Method set_CookTemplatedGeos, addr 0x246d208, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookTemplatedGeos(bool value);

  /// @brief Method set_CookingEnabled, addr 0x246cfcc, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookingEnabled(bool value);

  /// @brief Method set_CookingTriggersDownstreamCooks, addr 0x246d150, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookingTriggersDownstreamCooks(bool value);

  /// @brief Method set_Curves_ShowInSceneView, addr 0x246ec40, size 0x54, virtual false, abstract: false, final false
  static inline void set_Curves_ShowInSceneView(bool value);

  /// @brief Method set_DefaultCurveShader, addr 0x246fc38, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultCurveShader(::StringW value);

  /// @brief Method set_DefaultStandardShader, addr 0x246f6a4, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultStandardShader(::StringW value);

  /// @brief Method set_DefaultTerrainMaterial, addr 0x246f31c, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultTerrainMaterial(::StringW value);

  /// @brief Method set_DefaultTransparentShader, addr 0x246fa9c, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultTransparentShader(::StringW value);

  /// @brief Method set_DefaultVertexColorShader, addr 0x246f8a0, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultVertexColorShader(::StringW value);

  /// @brief Method set_EditorOnly_Tag, addr 0x246e44c, size 0xf4, virtual false, abstract: false, final false
  static inline void set_EditorOnly_Tag(::StringW value);

  /// @brief Method set_HDAData_Name, addr 0x246e540, size 0x54, virtual false, abstract: false, final false
  static inline void set_HDAData_Name(::StringW value);

  /// @brief Method set_HEngineShelfSelectedIndex, addr 0x246f250, size 0x54, virtual false, abstract: false, final false
  static inline void set_HEngineShelfSelectedIndex(int32_t value);

  /// @brief Method set_HEngineToolsShelves, addr 0x246f044, size 0x58, virtual false, abstract: false, final false
  static inline void set_HEngineToolsShelves(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_HoudiniDebugLaunchPath, addr 0x24700b0, size 0x54, virtual false, abstract: false, final false
  static inline void set_HoudiniDebugLaunchPath(::StringW value);

  /// @brief Method set_HoudiniEngineEnvFilePath, addr 0x246c9a4, size 0x60, virtual false, abstract: false, final false
  static inline void set_HoudiniEngineEnvFilePath(::StringW value);

  /// @brief Method set_HoudiniInstallPath, addr 0x246bb24, size 0x54, virtual false, abstract: false, final false
  static inline void set_HoudiniInstallPath(::StringW value);

  /// @brief Method set_ImageGamma, addr 0x246dd64, size 0x54, virtual false, abstract: false, final false
  static inline void set_ImageGamma(float_t value);

  /// @brief Method set_InputSelectionFilterLocation, addr 0x2470234, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterLocation(int32_t value);

  /// @brief Method set_InputSelectionFilterName, addr 0x247046c, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterName(::StringW value);

  /// @brief Method set_InputSelectionFilterRoots, addr 0x24703a0, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterRoots(bool value);

  /// @brief Method set_InputSelectionFilterState, addr 0x24702ec, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterState(int32_t value);

  /// @brief Method set_InstanceAttr, addr 0x246e15c, size 0x54, virtual false, abstract: false, final false
  static inline void set_InstanceAttr(::StringW value);

  /// @brief Method set_LastExportPath, addr 0x247017c, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastExportPath(::StringW value);

  /// @brief Method set_LastHoudiniVersion, addr 0x246bb78, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastHoudiniVersion(::StringW value);

  /// @brief Method set_LastLoadHDAPath, addr 0x246dfc4, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastLoadHDAPath(::StringW value);

  /// @brief Method set_LastLoadHIPPath, addr 0x246e090, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastLoadHIPPath(::StringW value);

  /// @brief Method set_LineColor, addr 0x246e3c8, size 0x84, virtual false, abstract: false, final false
  static inline void set_LineColor(::UnityEngine::Color value);

  /// @brief Method set_MaxVerticesPerPrimitive, addr 0x24705d8, size 0x54, virtual false, abstract: false, final false
  static inline void set_MaxVerticesPerPrimitive(int32_t value);

  /// @brief Method set_NormalGenerationThresholdAngle, addr 0x246def8, size 0x54, virtual false, abstract: false, final false
  static inline void set_NormalGenerationThresholdAngle(float_t value);

  /// @brief Method set_PushUnityTransformToHoudini, addr 0x246d2c0, size 0x54, virtual false, abstract: false, final false
  static inline void set_PushUnityTransformToHoudini(bool value);

  /// @brief Method set_RenderedCollisionGroupName, addr 0x246d510, size 0x54, virtual false, abstract: false, final false
  static inline void set_RenderedCollisionGroupName(::StringW value);

  /// @brief Method set_RenderedConvexCollisionGroupName, addr 0x246d5dc, size 0x54, virtual false, abstract: false, final false
  static inline void set_RenderedConvexCollisionGroupName(::StringW value);

  /// @brief Method set_SessionSyncAutoCook, addr 0x2470690, size 0x54, virtual false, abstract: false, final false
  static inline void set_SessionSyncAutoCook(bool value);

  /// @brief Method set_Session_AutoClose, addr 0x246eb88, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_AutoClose(bool value);

  /// @brief Method set_Session_Localhost, addr 0x246e958, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Localhost(::StringW value);

  /// @brief Method set_Session_Mode, addr 0x246e6f0, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Mode(::HoudiniEngineUnity::SessionMode value);

  /// @brief Method set_Session_PipeName, addr 0x246e88c, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_PipeName(::StringW value);

  /// @brief Method set_Session_Port, addr 0x246ea10, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Port(int32_t value);

  /// @brief Method set_Session_Timeout, addr 0x246ead0, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Timeout(float_t value);

  /// @brief Method set_SetCurrentThreadToInvariantCulture, addr 0x246fe58, size 0x60, virtual false, abstract: false, final false
  static inline void set_SetCurrentThreadToInvariantCulture(bool value);

  /// @brief Method set_ShortenFolderPaths, addr 0x24708f8, size 0x54, virtual false, abstract: false, final false
  static inline void set_ShortenFolderPaths(bool value);

  /// @brief Method set_SupportHoudiniBoxType, addr 0x246fcec, size 0x54, virtual false, abstract: false, final false
  static inline void set_SupportHoudiniBoxType(bool value);

  /// @brief Method set_SupportHoudiniSphereType, addr 0x246fda0, size 0x54, virtual false, abstract: false, final false
  static inline void set_SupportHoudiniSphereType(bool value);

  /// @brief Method set_TerrainSplatTextureDefault, addr 0x246f3e8, size 0x54, virtual false, abstract: false, final false
  static inline void set_TerrainSplatTextureDefault(::StringW value);

  /// @brief Method set_TransformChangeTriggersCooks, addr 0x246d378, size 0x54, virtual false, abstract: false, final false
  static inline void set_TransformChangeTriggersCooks(bool value);

  /// @brief Method set_UnityInputMeshAttr, addr 0x246e2f4, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityInputMeshAttr(::StringW value);

  /// @brief Method set_UnityInstanceAttr, addr 0x246e228, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityInstanceAttr(::StringW value);

  /// @brief Method set_UnityLayerAttributeName, addr 0x246db70, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityLayerAttributeName(::StringW value);

  /// @brief Method set_UnityMaterialAttribName, addr 0x246d6a8, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityMaterialAttribName(::StringW value);

  /// @brief Method set_UnityScriptAttributeName, addr 0x246daa4, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityScriptAttributeName(::StringW value);

  /// @brief Method set_UnityStaticAttributeName, addr 0x246d9d8, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityStaticAttributeName(::StringW value);

  /// @brief Method set_UnitySubMaterialAttribName, addr 0x246d774, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnitySubMaterialAttribName(::StringW value);

  /// @brief Method set_UnitySubMaterialIndexAttribName, addr 0x246d840, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnitySubMaterialIndexAttribName(::StringW value);

  /// @brief Method set_UnityTagAttributeName, addr 0x246d90c, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityTagAttributeName(::StringW value);

  /// @brief Method set_UseFullPathNamesForOutput, addr 0x246edc4, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseFullPathNamesForOutput(bool value);

  /// @brief Method set_UseHDRColor, addr 0x247079c, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseHDRColor(bool value);

  /// @brief Method set_UseLegacyShaders, addr 0x2470844, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseLegacyShaders(bool value);

  /// @brief Method set_UseSpecularShader, addr 0x24707f0, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseSpecularShader(bool value);

  /// @brief Method set_WriteCookLogs, addr 0x24706e4, size 0x54, virtual false, abstract: false, final false
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
