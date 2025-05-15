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
  /// @brief Method get_AssetCachePath, addr 0x3a4329c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_AssetCachePath();

  /// @brief Method get_CollisionGroupName, addr 0x3a419e0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_CollisionGroupName();

  /// @brief Method get_CookOptionSplitGeosByGroup, addr 0x3a44ae8, size 0x60, virtual false, abstract: false, final false
  static inline bool get_CookOptionSplitGeosByGroup();

  /// @brief Method get_CookTemplatedGeos, addr 0x3a417b8, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookTemplatedGeos();

  /// @brief Method get_CookingEnabled, addr 0x3a41488, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookingEnabled();

  /// @brief Method get_CookingTriggersDownstreamCooks, addr 0x3a41700, size 0x64, virtual false, abstract: false, final false
  static inline bool get_CookingTriggersDownstreamCooks();

  /// @brief Method get_Curves_ShowInSceneView, addr 0x3a431e4, size 0x64, virtual false, abstract: false, final false
  static inline bool get_Curves_ShowInSceneView();

  /// @brief Method get_DefaultCurveShader, addr 0x3a440fc, size 0x144, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultCurveShader();

  /// @brief Method get_DefaultStandardShader, addr 0x3a43a48, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultStandardShader();

  /// @brief Method get_DefaultTerrainMaterial, addr 0x3a438b0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultTerrainMaterial();

  /// @brief Method get_DefaultTransparentShader, addr 0x3a43f00, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultTransparentShader();

  /// @brief Method get_DefaultVertexColorShader, addr 0x3a43d04, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultVertexColorShader();

  /// @brief Method get_EditorOnly_Tag, addr 0x3a3cdcc, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_EditorOnly_Tag();

  /// @brief Method get_HDAData_Name, addr 0x3a3cd54, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HDAData_Name();

  /// @brief Method get_HEngineShelfSelectedIndex, addr 0x3a437fc, size 0x60, virtual false, abstract: false, final false
  static inline int32_t get_HEngineShelfSelectedIndex();

  /// @brief Method get_HEngineToolsShelves, addr 0x3a43420, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* get_HEngineToolsShelves();

  /// @brief Method get_HoudiniDebugLaunchPath, addr 0x3a445cc, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniDebugLaunchPath();

  /// @brief Method get_HoudiniEngineEnvFilePath, addr 0x3a40c54, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniEngineEnvFilePath();

  /// @brief Method get_HoudiniInstallPath, addr 0x3a40040, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_HoudiniInstallPath();

  /// @brief Method get_ImageGamma, addr 0x3a421d8, size 0x6c, virtual false, abstract: false, final false
  static inline float_t get_ImageGamma();

  /// @brief Method get_InputSelectionFilterLocation, addr 0x3a447f8, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_InputSelectionFilterLocation();

  /// @brief Method get_InputSelectionFilterName, addr 0x3a44a1c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_InputSelectionFilterName();

  /// @brief Method get_InputSelectionFilterRoots, addr 0x3a44968, size 0x60, virtual false, abstract: false, final false
  static inline bool get_InputSelectionFilterRoots();

  /// @brief Method get_InputSelectionFilterState, addr 0x3a448b0, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_InputSelectionFilterState();

  /// @brief Method get_InstanceAttr, addr 0x3a426f8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_InstanceAttr();

  /// @brief Method get_LastExportPath, addr 0x3a4472c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastExportPath();

  /// @brief Method get_LastHoudiniVersion, addr 0x3a400b8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastHoudiniVersion();

  /// @brief Method get_LastLoadHDAPath, addr 0x3a42560, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastLoadHDAPath();

  /// @brief Method get_LastLoadHIPPath, addr 0x3a4262c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_LastLoadHIPPath();

  /// @brief Method get_LineColor, addr 0x3a4295c, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_LineColor();

  /// @brief Method get_MaxVerticesPerPrimitive, addr 0x3a44b9c, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_MaxVerticesPerPrimitive();

  /// @brief Method get_NormalGenerationThresholdAngle, addr 0x3a424a4, size 0x68, virtual false, abstract: false, final false
  static inline float_t get_NormalGenerationThresholdAngle();

  /// @brief Method get_PushUnityTransformToHoudini, addr 0x3a41870, size 0x64, virtual false, abstract: false, final false
  static inline bool get_PushUnityTransformToHoudini();

  /// @brief Method get_RenderedCollisionGroupName, addr 0x3a41aac, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_RenderedCollisionGroupName();

  /// @brief Method get_RenderedConvexCollisionGroupName, addr 0x3a41b78, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_RenderedConvexCollisionGroupName();

  /// @brief Method get_SessionSyncAutoCook, addr 0x3a44c54, size 0x64, virtual false, abstract: false, final false
  static inline bool get_SessionSyncAutoCook();

  /// @brief Method get_Session_AutoClose, addr 0x3a4312c, size 0x64, virtual false, abstract: false, final false
  static inline bool get_Session_AutoClose();

  /// @brief Method get_Session_Localhost, addr 0x3a42ee8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_Session_Localhost();

  /// @brief Method get_Session_Mode, addr 0x3a42b9c, size 0x68, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::SessionMode get_Session_Mode();

  /// @brief Method get_Session_PipeName, addr 0x3a42e1c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_Session_PipeName();

  /// @brief Method get_Session_Port, addr 0x3a42fb4, size 0x64, virtual false, abstract: false, final false
  static inline int32_t get_Session_Port();

  /// @brief Method get_Session_Timeout, addr 0x3a4306c, size 0x6c, virtual false, abstract: false, final false
  static inline float_t get_Session_Timeout();

  /// @brief Method get_SetCurrentThreadToInvariantCulture, addr 0x3a443fc, size 0x64, virtual false, abstract: false, final false
  static inline bool get_SetCurrentThreadToInvariantCulture();

  /// @brief Method get_ShortenFolderPaths, addr 0x3a44ec0, size 0x60, virtual false, abstract: false, final false
  static inline bool get_ShortenFolderPaths();

  /// @brief Method get_SupportHoudiniBoxType, addr 0x3a44294, size 0x60, virtual false, abstract: false, final false
  static inline bool get_SupportHoudiniBoxType();

  /// @brief Method get_SupportHoudiniSphereType, addr 0x3a44348, size 0x60, virtual false, abstract: false, final false
  static inline bool get_SupportHoudiniSphereType();

  /// @brief Method get_TerrainSplatTextureDefault, addr 0x3a4397c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_TerrainSplatTextureDefault();

  /// @brief Method get_TransformChangeTriggersCooks, addr 0x3a41928, size 0x64, virtual false, abstract: false, final false
  static inline bool get_TransformChangeTriggersCooks();

  /// @brief Method get_UnityInputMeshAttr, addr 0x3a42890, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityInputMeshAttr();

  /// @brief Method get_UnityInstanceAttr, addr 0x3a427c4, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityInstanceAttr();

  /// @brief Method get_UnityLayerAttributeName, addr 0x3a4210c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityLayerAttributeName();

  /// @brief Method get_UnityMaterialAttribName, addr 0x3a41c44, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityMaterialAttribName();

  /// @brief Method get_UnityScriptAttributeName, addr 0x3a42040, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityScriptAttributeName();

  /// @brief Method get_UnityStaticAttributeName, addr 0x3a41f74, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityStaticAttributeName();

  /// @brief Method get_UnitySubMaterialAttribName, addr 0x3a41d10, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnitySubMaterialAttribName();

  /// @brief Method get_UnitySubMaterialIndexAttribName, addr 0x3a41ddc, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnitySubMaterialIndexAttribName();

  /// @brief Method get_UnityTagAttributeName, addr 0x3a41ea8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_UnityTagAttributeName();

  /// @brief Method get_UseFullPathNamesForOutput, addr 0x3a43368, size 0x64, virtual false, abstract: false, final false
  static inline bool get_UseFullPathNamesForOutput();

  /// @brief Method get_UseHDRColor, addr 0x3a44d60, size 0x64, virtual false, abstract: false, final false
  static inline bool get_UseHDRColor();

  /// @brief Method get_UseLegacyShaders, addr 0x3a43c50, size 0x60, virtual false, abstract: false, final false
  static inline bool get_UseLegacyShaders();

  /// @brief Method get_UseSpecularShader, addr 0x3a43bf0, size 0x60, virtual false, abstract: false, final false
  static inline bool get_UseSpecularShader();

  /// @brief Method get_WriteCookLogs, addr 0x3a3d7fc, size 0x60, virtual false, abstract: false, final false
  static inline bool get_WriteCookLogs();

  /// @brief Method set_AssetCachePath, addr 0x3a43314, size 0x54, virtual false, abstract: false, final false
  static inline void set_AssetCachePath(::StringW value);

  /// @brief Method set_CollisionGroupName, addr 0x3a41a58, size 0x54, virtual false, abstract: false, final false
  static inline void set_CollisionGroupName(::StringW value);

  /// @brief Method set_CookOptionSplitGeosByGroup, addr 0x3a44b48, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookOptionSplitGeosByGroup(bool value);

  /// @brief Method set_CookTemplatedGeos, addr 0x3a4181c, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookTemplatedGeos(bool value);

  /// @brief Method set_CookingEnabled, addr 0x3a415e0, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookingEnabled(bool value);

  /// @brief Method set_CookingTriggersDownstreamCooks, addr 0x3a41764, size 0x54, virtual false, abstract: false, final false
  static inline void set_CookingTriggersDownstreamCooks(bool value);

  /// @brief Method set_Curves_ShowInSceneView, addr 0x3a43248, size 0x54, virtual false, abstract: false, final false
  static inline void set_Curves_ShowInSceneView(bool value);

  /// @brief Method set_DefaultCurveShader, addr 0x3a44240, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultCurveShader(::StringW value);

  /// @brief Method set_DefaultStandardShader, addr 0x3a43cb0, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultStandardShader(::StringW value);

  /// @brief Method set_DefaultTerrainMaterial, addr 0x3a43928, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultTerrainMaterial(::StringW value);

  /// @brief Method set_DefaultTransparentShader, addr 0x3a440a8, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultTransparentShader(::StringW value);

  /// @brief Method set_DefaultVertexColorShader, addr 0x3a43eac, size 0x54, virtual false, abstract: false, final false
  static inline void set_DefaultVertexColorShader(::StringW value);

  /// @brief Method set_EditorOnly_Tag, addr 0x3a42a60, size 0xe8, virtual false, abstract: false, final false
  static inline void set_EditorOnly_Tag(::StringW value);

  /// @brief Method set_HDAData_Name, addr 0x3a42b48, size 0x54, virtual false, abstract: false, final false
  static inline void set_HDAData_Name(::StringW value);

  /// @brief Method set_HEngineShelfSelectedIndex, addr 0x3a4385c, size 0x54, virtual false, abstract: false, final false
  static inline void set_HEngineShelfSelectedIndex(int32_t value);

  /// @brief Method set_HEngineToolsShelves, addr 0x3a43648, size 0x58, virtual false, abstract: false, final false
  static inline void set_HEngineToolsShelves(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_HoudiniDebugLaunchPath, addr 0x3a446d8, size 0x54, virtual false, abstract: false, final false
  static inline void set_HoudiniDebugLaunchPath(::StringW value);

  /// @brief Method set_HoudiniEngineEnvFilePath, addr 0x3a40fac, size 0x60, virtual false, abstract: false, final false
  static inline void set_HoudiniEngineEnvFilePath(::StringW value);

  /// @brief Method set_HoudiniInstallPath, addr 0x3a40130, size 0x54, virtual false, abstract: false, final false
  static inline void set_HoudiniInstallPath(::StringW value);

  /// @brief Method set_ImageGamma, addr 0x3a42378, size 0x54, virtual false, abstract: false, final false
  static inline void set_ImageGamma(float_t value);

  /// @brief Method set_InputSelectionFilterLocation, addr 0x3a4485c, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterLocation(int32_t value);

  /// @brief Method set_InputSelectionFilterName, addr 0x3a44a94, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterName(::StringW value);

  /// @brief Method set_InputSelectionFilterRoots, addr 0x3a449c8, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterRoots(bool value);

  /// @brief Method set_InputSelectionFilterState, addr 0x3a44914, size 0x54, virtual false, abstract: false, final false
  static inline void set_InputSelectionFilterState(int32_t value);

  /// @brief Method set_InstanceAttr, addr 0x3a42770, size 0x54, virtual false, abstract: false, final false
  static inline void set_InstanceAttr(::StringW value);

  /// @brief Method set_LastExportPath, addr 0x3a447a4, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastExportPath(::StringW value);

  /// @brief Method set_LastHoudiniVersion, addr 0x3a40184, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastHoudiniVersion(::StringW value);

  /// @brief Method set_LastLoadHDAPath, addr 0x3a425d8, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastLoadHDAPath(::StringW value);

  /// @brief Method set_LastLoadHIPPath, addr 0x3a426a4, size 0x54, virtual false, abstract: false, final false
  static inline void set_LastLoadHIPPath(::StringW value);

  /// @brief Method set_LineColor, addr 0x3a429dc, size 0x84, virtual false, abstract: false, final false
  static inline void set_LineColor(::UnityEngine::Color value);

  /// @brief Method set_MaxVerticesPerPrimitive, addr 0x3a44c00, size 0x54, virtual false, abstract: false, final false
  static inline void set_MaxVerticesPerPrimitive(int32_t value);

  /// @brief Method set_NormalGenerationThresholdAngle, addr 0x3a4250c, size 0x54, virtual false, abstract: false, final false
  static inline void set_NormalGenerationThresholdAngle(float_t value);

  /// @brief Method set_PushUnityTransformToHoudini, addr 0x3a418d4, size 0x54, virtual false, abstract: false, final false
  static inline void set_PushUnityTransformToHoudini(bool value);

  /// @brief Method set_RenderedCollisionGroupName, addr 0x3a41b24, size 0x54, virtual false, abstract: false, final false
  static inline void set_RenderedCollisionGroupName(::StringW value);

  /// @brief Method set_RenderedConvexCollisionGroupName, addr 0x3a41bf0, size 0x54, virtual false, abstract: false, final false
  static inline void set_RenderedConvexCollisionGroupName(::StringW value);

  /// @brief Method set_SessionSyncAutoCook, addr 0x3a44cb8, size 0x54, virtual false, abstract: false, final false
  static inline void set_SessionSyncAutoCook(bool value);

  /// @brief Method set_Session_AutoClose, addr 0x3a43190, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_AutoClose(bool value);

  /// @brief Method set_Session_Localhost, addr 0x3a42f60, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Localhost(::StringW value);

  /// @brief Method set_Session_Mode, addr 0x3a42cf8, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Mode(::HoudiniEngineUnity::SessionMode value);

  /// @brief Method set_Session_PipeName, addr 0x3a42e94, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_PipeName(::StringW value);

  /// @brief Method set_Session_Port, addr 0x3a43018, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Port(int32_t value);

  /// @brief Method set_Session_Timeout, addr 0x3a430d8, size 0x54, virtual false, abstract: false, final false
  static inline void set_Session_Timeout(float_t value);

  /// @brief Method set_SetCurrentThreadToInvariantCulture, addr 0x3a44460, size 0x60, virtual false, abstract: false, final false
  static inline void set_SetCurrentThreadToInvariantCulture(bool value);

  /// @brief Method set_ShortenFolderPaths, addr 0x3a44f20, size 0x54, virtual false, abstract: false, final false
  static inline void set_ShortenFolderPaths(bool value);

  /// @brief Method set_SupportHoudiniBoxType, addr 0x3a442f4, size 0x54, virtual false, abstract: false, final false
  static inline void set_SupportHoudiniBoxType(bool value);

  /// @brief Method set_SupportHoudiniSphereType, addr 0x3a443a8, size 0x54, virtual false, abstract: false, final false
  static inline void set_SupportHoudiniSphereType(bool value);

  /// @brief Method set_TerrainSplatTextureDefault, addr 0x3a439f4, size 0x54, virtual false, abstract: false, final false
  static inline void set_TerrainSplatTextureDefault(::StringW value);

  /// @brief Method set_TransformChangeTriggersCooks, addr 0x3a4198c, size 0x54, virtual false, abstract: false, final false
  static inline void set_TransformChangeTriggersCooks(bool value);

  /// @brief Method set_UnityInputMeshAttr, addr 0x3a42908, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityInputMeshAttr(::StringW value);

  /// @brief Method set_UnityInstanceAttr, addr 0x3a4283c, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityInstanceAttr(::StringW value);

  /// @brief Method set_UnityLayerAttributeName, addr 0x3a42184, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityLayerAttributeName(::StringW value);

  /// @brief Method set_UnityMaterialAttribName, addr 0x3a41cbc, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityMaterialAttribName(::StringW value);

  /// @brief Method set_UnityScriptAttributeName, addr 0x3a420b8, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityScriptAttributeName(::StringW value);

  /// @brief Method set_UnityStaticAttributeName, addr 0x3a41fec, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityStaticAttributeName(::StringW value);

  /// @brief Method set_UnitySubMaterialAttribName, addr 0x3a41d88, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnitySubMaterialAttribName(::StringW value);

  /// @brief Method set_UnitySubMaterialIndexAttribName, addr 0x3a41e54, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnitySubMaterialIndexAttribName(::StringW value);

  /// @brief Method set_UnityTagAttributeName, addr 0x3a41f20, size 0x54, virtual false, abstract: false, final false
  static inline void set_UnityTagAttributeName(::StringW value);

  /// @brief Method set_UseFullPathNamesForOutput, addr 0x3a433cc, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseFullPathNamesForOutput(bool value);

  /// @brief Method set_UseHDRColor, addr 0x3a44dc4, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseHDRColor(bool value);

  /// @brief Method set_UseLegacyShaders, addr 0x3a44e6c, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseLegacyShaders(bool value);

  /// @brief Method set_UseSpecularShader, addr 0x3a44e18, size 0x54, virtual false, abstract: false, final false
  static inline void set_UseSpecularShader(bool value);

  /// @brief Method set_WriteCookLogs, addr 0x3a44d0c, size 0x54, virtual false, abstract: false, final false
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
