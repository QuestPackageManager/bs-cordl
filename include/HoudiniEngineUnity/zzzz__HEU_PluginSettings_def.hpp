#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_PluginSettings)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace HoudiniEngineUnity {
struct SessionMode;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9603))
// CS Name: ::HoudiniEngineUnity::HEU_PluginSettings*
class CORDL_TYPE HEU_PluginSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_HoudiniEngineEnvFilePath addr 0x2033a3c size 0x78 virtual false final false
  static inline ::StringW get_HoudiniEngineEnvFilePath();

  /// @brief Method set_HoudiniEngineEnvFilePath addr 0x2033d98 size 0x60 virtual false final false
  static inline void set_HoudiniEngineEnvFilePath(::StringW value);

  /// @brief Method get_CookingEnabled addr 0x2034268 size 0x64 virtual false final false
  static inline bool get_CookingEnabled();

  /// @brief Method set_CookingEnabled addr 0x20343c0 size 0x54 virtual false final false
  static inline void set_CookingEnabled(bool value);

  /// @brief Method get_CookingTriggersDownstreamCooks addr 0x20344e0 size 0x64 virtual false final false
  static inline bool get_CookingTriggersDownstreamCooks();

  /// @brief Method set_CookingTriggersDownstreamCooks addr 0x2034544 size 0x54 virtual false final false
  static inline void set_CookingTriggersDownstreamCooks(bool value);

  /// @brief Method get_CookTemplatedGeos addr 0x2034598 size 0x64 virtual false final false
  static inline bool get_CookTemplatedGeos();

  /// @brief Method set_CookTemplatedGeos addr 0x20345fc size 0x54 virtual false final false
  static inline void set_CookTemplatedGeos(bool value);

  /// @brief Method get_PushUnityTransformToHoudini addr 0x2034650 size 0x64 virtual false final false
  static inline bool get_PushUnityTransformToHoudini();

  /// @brief Method set_PushUnityTransformToHoudini addr 0x20346b4 size 0x54 virtual false final false
  static inline void set_PushUnityTransformToHoudini(bool value);

  /// @brief Method get_TransformChangeTriggersCooks addr 0x2034708 size 0x64 virtual false final false
  static inline bool get_TransformChangeTriggersCooks();

  /// @brief Method set_TransformChangeTriggersCooks addr 0x203476c size 0x54 virtual false final false
  static inline void set_TransformChangeTriggersCooks(bool value);

  /// @brief Method get_CollisionGroupName addr 0x20347c0 size 0x78 virtual false final false
  static inline ::StringW get_CollisionGroupName();

  /// @brief Method set_CollisionGroupName addr 0x2034838 size 0x54 virtual false final false
  static inline void set_CollisionGroupName(::StringW value);

  /// @brief Method get_RenderedCollisionGroupName addr 0x203488c size 0x78 virtual false final false
  static inline ::StringW get_RenderedCollisionGroupName();

  /// @brief Method set_RenderedCollisionGroupName addr 0x2034904 size 0x54 virtual false final false
  static inline void set_RenderedCollisionGroupName(::StringW value);

  /// @brief Method get_RenderedConvexCollisionGroupName addr 0x2034958 size 0x78 virtual false final false
  static inline ::StringW get_RenderedConvexCollisionGroupName();

  /// @brief Method set_RenderedConvexCollisionGroupName addr 0x20349d0 size 0x54 virtual false final false
  static inline void set_RenderedConvexCollisionGroupName(::StringW value);

  /// @brief Method get_UnityMaterialAttribName addr 0x2034a24 size 0x78 virtual false final false
  static inline ::StringW get_UnityMaterialAttribName();

  /// @brief Method set_UnityMaterialAttribName addr 0x2034a9c size 0x54 virtual false final false
  static inline void set_UnityMaterialAttribName(::StringW value);

  /// @brief Method get_UnitySubMaterialAttribName addr 0x2034af0 size 0x78 virtual false final false
  static inline ::StringW get_UnitySubMaterialAttribName();

  /// @brief Method set_UnitySubMaterialAttribName addr 0x2034b68 size 0x54 virtual false final false
  static inline void set_UnitySubMaterialAttribName(::StringW value);

  /// @brief Method get_UnitySubMaterialIndexAttribName addr 0x2034bbc size 0x78 virtual false final false
  static inline ::StringW get_UnitySubMaterialIndexAttribName();

  /// @brief Method set_UnitySubMaterialIndexAttribName addr 0x2034c34 size 0x54 virtual false final false
  static inline void set_UnitySubMaterialIndexAttribName(::StringW value);

  /// @brief Method get_UnityTagAttributeName addr 0x2034c88 size 0x78 virtual false final false
  static inline ::StringW get_UnityTagAttributeName();

  /// @brief Method set_UnityTagAttributeName addr 0x2034d00 size 0x54 virtual false final false
  static inline void set_UnityTagAttributeName(::StringW value);

  /// @brief Method get_UnityStaticAttributeName addr 0x2034d54 size 0x78 virtual false final false
  static inline ::StringW get_UnityStaticAttributeName();

  /// @brief Method set_UnityStaticAttributeName addr 0x2034dcc size 0x54 virtual false final false
  static inline void set_UnityStaticAttributeName(::StringW value);

  /// @brief Method get_UnityScriptAttributeName addr 0x2034e20 size 0x78 virtual false final false
  static inline ::StringW get_UnityScriptAttributeName();

  /// @brief Method set_UnityScriptAttributeName addr 0x2034e98 size 0x54 virtual false final false
  static inline void set_UnityScriptAttributeName(::StringW value);

  /// @brief Method get_UnityLayerAttributeName addr 0x2034eec size 0x78 virtual false final false
  static inline ::StringW get_UnityLayerAttributeName();

  /// @brief Method set_UnityLayerAttributeName addr 0x2034f64 size 0x54 virtual false final false
  static inline void set_UnityLayerAttributeName(::StringW value);

  /// @brief Method get_ImageGamma addr 0x2034fb8 size 0x6c virtual false final false
  static inline float_t get_ImageGamma();

  /// @brief Method set_ImageGamma addr 0x2035158 size 0x54 virtual false final false
  static inline void set_ImageGamma(float_t value);

  /// @brief Method get_NormalGenerationThresholdAngle addr 0x2035284 size 0x68 virtual false final false
  static inline float_t get_NormalGenerationThresholdAngle();

  /// @brief Method set_NormalGenerationThresholdAngle addr 0x20352ec size 0x54 virtual false final false
  static inline void set_NormalGenerationThresholdAngle(float_t value);

  /// @brief Method get_LastLoadHDAPath addr 0x2035340 size 0x78 virtual false final false
  static inline ::StringW get_LastLoadHDAPath();

  /// @brief Method set_LastLoadHDAPath addr 0x20353b8 size 0x54 virtual false final false
  static inline void set_LastLoadHDAPath(::StringW value);

  /// @brief Method get_LastLoadHIPPath addr 0x203540c size 0x78 virtual false final false
  static inline ::StringW get_LastLoadHIPPath();

  /// @brief Method set_LastLoadHIPPath addr 0x2035484 size 0x54 virtual false final false
  static inline void set_LastLoadHIPPath(::StringW value);

  /// @brief Method get_InstanceAttr addr 0x20354d8 size 0x78 virtual false final false
  static inline ::StringW get_InstanceAttr();

  /// @brief Method set_InstanceAttr addr 0x2035550 size 0x54 virtual false final false
  static inline void set_InstanceAttr(::StringW value);

  /// @brief Method get_UnityInstanceAttr addr 0x20355a4 size 0x78 virtual false final false
  static inline ::StringW get_UnityInstanceAttr();

  /// @brief Method set_UnityInstanceAttr addr 0x203561c size 0x54 virtual false final false
  static inline void set_UnityInstanceAttr(::StringW value);

  /// @brief Method get_UnityInputMeshAttr addr 0x2035670 size 0x78 virtual false final false
  static inline ::StringW get_UnityInputMeshAttr();

  /// @brief Method set_UnityInputMeshAttr addr 0x20356e8 size 0x54 virtual false final false
  static inline void set_UnityInputMeshAttr(::StringW value);

  /// @brief Method get_LineColor addr 0x203573c size 0x80 virtual false final false
  static inline ::UnityEngine::Color get_LineColor();

  /// @brief Method set_LineColor addr 0x20357bc size 0x84 virtual false final false
  static inline void set_LineColor(::UnityEngine::Color value);

  /// @brief Method get_EditorOnly_Tag addr 0x202fb90 size 0x78 virtual false final false
  static inline ::StringW get_EditorOnly_Tag();

  /// @brief Method set_EditorOnly_Tag addr 0x2035840 size 0xf4 virtual false final false
  static inline void set_EditorOnly_Tag(::StringW value);

  /// @brief Method get_HDAData_Name addr 0x202fb18 size 0x78 virtual false final false
  static inline ::StringW get_HDAData_Name();

  /// @brief Method set_HDAData_Name addr 0x2035934 size 0x54 virtual false final false
  static inline void set_HDAData_Name(::StringW value);

  /// @brief Method get_Session_Mode addr 0x2035988 size 0x68 virtual false final false
  static inline ::HoudiniEngineUnity::SessionMode get_Session_Mode();

  /// @brief Method set_Session_Mode addr 0x2035ae4 size 0x54 virtual false final false
  static inline void set_Session_Mode(::HoudiniEngineUnity::SessionMode value);

  /// @brief Method get_Session_PipeName addr 0x2035c08 size 0x78 virtual false final false
  static inline ::StringW get_Session_PipeName();

  /// @brief Method set_Session_PipeName addr 0x2035c80 size 0x54 virtual false final false
  static inline void set_Session_PipeName(::StringW value);

  /// @brief Method get_Session_Localhost addr 0x2035cd4 size 0x78 virtual false final false
  static inline ::StringW get_Session_Localhost();

  /// @brief Method set_Session_Localhost addr 0x2035d4c size 0x54 virtual false final false
  static inline void set_Session_Localhost(::StringW value);

  /// @brief Method get_Session_Port addr 0x2035da0 size 0x64 virtual false final false
  static inline int32_t get_Session_Port();

  /// @brief Method set_Session_Port addr 0x2035e04 size 0x54 virtual false final false
  static inline void set_Session_Port(int32_t value);

  /// @brief Method get_Session_Timeout addr 0x2035e58 size 0x6c virtual false final false
  static inline float_t get_Session_Timeout();

  /// @brief Method set_Session_Timeout addr 0x2035ec4 size 0x54 virtual false final false
  static inline void set_Session_Timeout(float_t value);

  /// @brief Method get_Session_AutoClose addr 0x2035f18 size 0x64 virtual false final false
  static inline bool get_Session_AutoClose();

  /// @brief Method set_Session_AutoClose addr 0x2035f7c size 0x54 virtual false final false
  static inline void set_Session_AutoClose(bool value);

  /// @brief Method get_Curves_ShowInSceneView addr 0x2035fd0 size 0x64 virtual false final false
  static inline bool get_Curves_ShowInSceneView();

  /// @brief Method set_Curves_ShowInSceneView addr 0x2036034 size 0x54 virtual false final false
  static inline void set_Curves_ShowInSceneView(bool value);

  /// @brief Method get_AssetCachePath addr 0x2036088 size 0x78 virtual false final false
  static inline ::StringW get_AssetCachePath();

  /// @brief Method set_AssetCachePath addr 0x2036100 size 0x54 virtual false final false
  static inline void set_AssetCachePath(::StringW value);

  /// @brief Method get_UseFullPathNamesForOutput addr 0x2036154 size 0x64 virtual false final false
  static inline bool get_UseFullPathNamesForOutput();

  /// @brief Method set_UseFullPathNamesForOutput addr 0x20361b8 size 0x54 virtual false final false
  static inline void set_UseFullPathNamesForOutput(bool value);

  /// @brief Method get_HEngineToolsShelves addr 0x203620c size 0x60 virtual false final false
  static inline ::System::Collections::Generic::List_1<::StringW>* get_HEngineToolsShelves();

  /// @brief Method set_HEngineToolsShelves addr 0x2036438 size 0x58 virtual false final false
  static inline void set_HEngineToolsShelves(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method get_HEngineShelfSelectedIndex addr 0x20365e4 size 0x60 virtual false final false
  static inline int32_t get_HEngineShelfSelectedIndex();

  /// @brief Method set_HEngineShelfSelectedIndex addr 0x2036644 size 0x54 virtual false final false
  static inline void set_HEngineShelfSelectedIndex(int32_t value);

  /// @brief Method get_DefaultTerrainMaterial addr 0x2036698 size 0x78 virtual false final false
  static inline ::StringW get_DefaultTerrainMaterial();

  /// @brief Method set_DefaultTerrainMaterial addr 0x2036710 size 0x54 virtual false final false
  static inline void set_DefaultTerrainMaterial(::StringW value);

  /// @brief Method get_TerrainSplatTextureDefault addr 0x2036764 size 0x78 virtual false final false
  static inline ::StringW get_TerrainSplatTextureDefault();

  /// @brief Method set_TerrainSplatTextureDefault addr 0x20367dc size 0x54 virtual false final false
  static inline void set_TerrainSplatTextureDefault(::StringW value);

  /// @brief Method get_DefaultStandardShader addr 0x2036830 size 0x1a8 virtual false final false
  static inline ::StringW get_DefaultStandardShader();

  /// @brief Method set_DefaultStandardShader addr 0x2036a98 size 0x54 virtual false final false
  static inline void set_DefaultStandardShader(::StringW value);

  /// @brief Method get_DefaultVertexColorShader addr 0x2036aec size 0x1a8 virtual false final false
  static inline ::StringW get_DefaultVertexColorShader();

  /// @brief Method set_DefaultVertexColorShader addr 0x2036c94 size 0x54 virtual false final false
  static inline void set_DefaultVertexColorShader(::StringW value);

  /// @brief Method get_DefaultTransparentShader addr 0x2036ce8 size 0x1a8 virtual false final false
  static inline ::StringW get_DefaultTransparentShader();

  /// @brief Method set_DefaultTransparentShader addr 0x2036e90 size 0x54 virtual false final false
  static inline void set_DefaultTransparentShader(::StringW value);

  /// @brief Method get_DefaultCurveShader addr 0x2036ee4 size 0x148 virtual false final false
  static inline ::StringW get_DefaultCurveShader();

  /// @brief Method set_DefaultCurveShader addr 0x203702c size 0x54 virtual false final false
  static inline void set_DefaultCurveShader(::StringW value);

  /// @brief Method get_SupportHoudiniBoxType addr 0x2037080 size 0x60 virtual false final false
  static inline bool get_SupportHoudiniBoxType();

  /// @brief Method set_SupportHoudiniBoxType addr 0x20370e0 size 0x54 virtual false final false
  static inline void set_SupportHoudiniBoxType(bool value);

  /// @brief Method get_SupportHoudiniSphereType addr 0x2037134 size 0x60 virtual false final false
  static inline bool get_SupportHoudiniSphereType();

  /// @brief Method set_SupportHoudiniSphereType addr 0x2037194 size 0x54 virtual false final false
  static inline void set_SupportHoudiniSphereType(bool value);

  /// @brief Method get_SetCurrentThreadToInvariantCulture addr 0x20371e8 size 0x64 virtual false final false
  static inline bool get_SetCurrentThreadToInvariantCulture();

  /// @brief Method set_SetCurrentThreadToInvariantCulture addr 0x203724c size 0x60 virtual false final false
  static inline void set_SetCurrentThreadToInvariantCulture(bool value);

  /// @brief Method get_HoudiniDebugLaunchPath addr 0x20373b8 size 0xec virtual false final false
  static inline ::StringW get_HoudiniDebugLaunchPath();

  /// @brief Method set_HoudiniDebugLaunchPath addr 0x20374a4 size 0x54 virtual false final false
  static inline void set_HoudiniDebugLaunchPath(::StringW value);

  /// @brief Method get_LastExportPath addr 0x20374f8 size 0x78 virtual false final false
  static inline ::StringW get_LastExportPath();

  /// @brief Method set_LastExportPath addr 0x2037570 size 0x54 virtual false final false
  static inline void set_LastExportPath(::StringW value);

  /// @brief Method get_InputSelectionFilterLocation addr 0x20375c4 size 0x64 virtual false final false
  static inline int32_t get_InputSelectionFilterLocation();

  /// @brief Method set_InputSelectionFilterLocation addr 0x2037628 size 0x54 virtual false final false
  static inline void set_InputSelectionFilterLocation(int32_t value);

  /// @brief Method get_InputSelectionFilterState addr 0x203767c size 0x64 virtual false final false
  static inline int32_t get_InputSelectionFilterState();

  /// @brief Method set_InputSelectionFilterState addr 0x20376e0 size 0x54 virtual false final false
  static inline void set_InputSelectionFilterState(int32_t value);

  /// @brief Method get_InputSelectionFilterRoots addr 0x2037734 size 0x60 virtual false final false
  static inline bool get_InputSelectionFilterRoots();

  /// @brief Method set_InputSelectionFilterRoots addr 0x2037794 size 0x54 virtual false final false
  static inline void set_InputSelectionFilterRoots(bool value);

  /// @brief Method get_InputSelectionFilterName addr 0x20377e8 size 0x78 virtual false final false
  static inline ::StringW get_InputSelectionFilterName();

  /// @brief Method set_InputSelectionFilterName addr 0x2037860 size 0x54 virtual false final false
  static inline void set_InputSelectionFilterName(::StringW value);

  /// @brief Method get_CookOptionSplitGeosByGroup addr 0x20378b4 size 0x60 virtual false final false
  static inline bool get_CookOptionSplitGeosByGroup();

  /// @brief Method set_CookOptionSplitGeosByGroup addr 0x2037914 size 0x54 virtual false final false
  static inline void set_CookOptionSplitGeosByGroup(bool value);

  /// @brief Method get_MaxVerticesPerPrimitive addr 0x2037968 size 0x64 virtual false final false
  static inline int32_t get_MaxVerticesPerPrimitive();

  /// @brief Method set_MaxVerticesPerPrimitive addr 0x20379cc size 0x54 virtual false final false
  static inline void set_MaxVerticesPerPrimitive(int32_t value);

  /// @brief Method get_HoudiniInstallPath addr 0x2032e28 size 0x78 virtual false final false
  static inline ::StringW get_HoudiniInstallPath();

  /// @brief Method set_HoudiniInstallPath addr 0x2032f18 size 0x54 virtual false final false
  static inline void set_HoudiniInstallPath(::StringW value);

  /// @brief Method get_LastHoudiniVersion addr 0x2032ea0 size 0x78 virtual false final false
  static inline ::StringW get_LastHoudiniVersion();

  /// @brief Method set_LastHoudiniVersion addr 0x2032f6c size 0x54 virtual false final false
  static inline void set_LastHoudiniVersion(::StringW value);

  /// @brief Method get_SessionSyncAutoCook addr 0x2037a20 size 0x64 virtual false final false
  static inline bool get_SessionSyncAutoCook();

  /// @brief Method set_SessionSyncAutoCook addr 0x2037a84 size 0x54 virtual false final false
  static inline void set_SessionSyncAutoCook(bool value);

  /// @brief Method get_WriteCookLogs addr 0x20305e4 size 0x60 virtual false final false
  static inline bool get_WriteCookLogs();

  /// @brief Method set_WriteCookLogs addr 0x2037ad8 size 0x54 virtual false final false
  static inline void set_WriteCookLogs(bool value);

  /// @brief Method get_UseHDRColor addr 0x2037b2c size 0x64 virtual false final false
  static inline bool get_UseHDRColor();

  /// @brief Method set_UseHDRColor addr 0x2037b90 size 0x54 virtual false final false
  static inline void set_UseHDRColor(bool value);

  /// @brief Method get_UseSpecularShader addr 0x20369d8 size 0x60 virtual false final false
  static inline bool get_UseSpecularShader();

  /// @brief Method set_UseSpecularShader addr 0x2037be4 size 0x54 virtual false final false
  static inline void set_UseSpecularShader(bool value);

  /// @brief Method get_UseLegacyShaders addr 0x2036a38 size 0x60 virtual false final false
  static inline bool get_UseLegacyShaders();

  /// @brief Method set_UseLegacyShaders addr 0x2037c38 size 0x54 virtual false final false
  static inline void set_UseLegacyShaders(bool value);

  /// @brief Method get_ShortenFolderPaths addr 0x2037c8c size 0x60 virtual false final false
  static inline bool get_ShortenFolderPaths();

  /// @brief Method set_ShortenFolderPaths addr 0x2037cec size 0x54 virtual false final false
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
