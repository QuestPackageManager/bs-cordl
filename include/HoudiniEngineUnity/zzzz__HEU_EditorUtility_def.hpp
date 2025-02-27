#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_EditorUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_EditorUtility)
namespace HoudiniEngineUnity {
struct HEU_EditorUtility_HEU_ReplacePrefabOptions;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAssetRoot;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_EditorUtility_HEU_ReplacePrefabOptions;
}
namespace HoudiniEngineUnity {
class HEU_EditorUtility;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_EditorUtility_HEU_ReplacePrefabOptions);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_EditorUtility);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HEU_EditorUtility/HEU_ReplacePrefabOptions
struct CORDL_TYPE HEU_EditorUtility_HEU_ReplacePrefabOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_EditorUtility_HEU_ReplacePrefabOptions_Unwrapped
  enum struct __HEU_EditorUtility_HEU_ReplacePrefabOptions_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_ConnectToPrefab = static_cast<int32_t>(0x1),
    __E_ReplaceNameBased = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_EditorUtility_HEU_ReplacePrefabOptions_Unwrapped() const noexcept {
    return static_cast<__HEU_EditorUtility_HEU_ReplacePrefabOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_EditorUtility_HEU_ReplacePrefabOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_EditorUtility_HEU_ReplacePrefabOptions(int32_t value__) noexcept;

  /// @brief Field ConnectToPrefab value: I32(1)
  static ::HoudiniEngineUnity::HEU_EditorUtility_HEU_ReplacePrefabOptions const ConnectToPrefab;

  /// @brief Field Default value: I32(0)
  static ::HoudiniEngineUnity::HEU_EditorUtility_HEU_ReplacePrefabOptions const Default;

  /// @brief Field ReplaceNameBased value: I32(2)
  static ::HoudiniEngineUnity::HEU_EditorUtility_HEU_ReplacePrefabOptions const ReplaceNameBased;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11806 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_EditorUtility_HEU_ReplacePrefabOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_EditorUtility_HEU_ReplacePrefabOptions, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_EditorUtility
class CORDL_TYPE HEU_EditorUtility : public ::System::Object {
public:
  // Declarations
  using HEU_ReplacePrefabOptions = ::HoudiniEngineUnity::HEU_EditorUtility_HEU_ReplacePrefabOptions;

  /// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityW<::UnityEngine::Component> AddComponent(::UnityEngine::GameObject* target, bool bRegisterUndo);

  /// @brief Method BakeAndReplaceAllInScene, addr 0x3a76d64, size 0x10, virtual false, abstract: false, final false
  static inline void BakeAndReplaceAllInScene();

  /// @brief Method BakeAndReplaceAssets, addr 0x3a76c98, size 0xcc, virtual false, abstract: false, final false
  static inline void BakeAndReplaceAssets(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets);

  /// @brief Method BakeAndReplaceSelectedInScene, addr 0x3a76c88, size 0x10, virtual false, abstract: false, final false
  static inline void BakeAndReplaceSelectedInScene();

  /// @brief Method ClearProgressBar, addr 0x3a767e4, size 0x44, virtual false, abstract: false, final false
  static inline void ClearProgressBar();

  /// @brief Method CollectDependencies, addr 0x3a766bc, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> CollectDependencies(::UnityEngine::Object* obj);

  /// @brief Method CookAll, addr 0x3a76b88, size 0x10, virtual false, abstract: false, final false
  static inline void CookAll();

  /// @brief Method CookAssets, addr 0x3a76aac, size 0xdc, virtual false, abstract: false, final false
  static inline void CookAssets(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets);

  /// @brief Method CookSelected, addr 0x3a76a9c, size 0x10, virtual false, abstract: false, final false
  static inline void CookSelected();

  /// @brief Method DisconnectPrefabInstance, addr 0x3a765a0, size 0x44, virtual false, abstract: false, final false
  static inline void DisconnectPrefabInstance(::UnityEngine::GameObject* instance);

  /// @brief Method DisplayDialog, addr 0x3a768a8, size 0x6c, virtual false, abstract: false, final false
  static inline bool DisplayDialog(::StringW title, ::StringW message, ::StringW ok, ::StringW cancel);

  /// @brief Method DisplayErrorDialog, addr 0x3a76914, size 0x84, virtual false, abstract: false, final false
  static inline bool DisplayErrorDialog(::StringW title, ::StringW message, ::StringW ok, ::StringW cancel);

  /// @brief Method DisplayProgressBar, addr 0x3a767a0, size 0x44, virtual false, abstract: false, final false
  static inline void DisplayProgressBar(::StringW title, ::StringW info, float_t progress);

  /// @brief Method EditorSaveFolderPanel, addr 0x3a774b8, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW EditorSaveFolderPanel(::StringW title, ::StringW folder, ::StringW defaultName);

  /// @brief Method ExportAllAssetsToGeoFiles, addr 0x3a774a8, size 0x10, virtual false, abstract: false, final false
  static inline void ExportAllAssetsToGeoFiles();

  /// @brief Method ExportAssetsToGeoFiles, addr 0x3a76d84, size 0x724, virtual false, abstract: false, final false
  static inline void ExportAssetsToGeoFiles(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets);

  /// @brief Method ExportSelectedAssetsToGeoFiles, addr 0x3a76d74, size 0x10, virtual false, abstract: false, final false
  static inline void ExportSelectedAssetsToGeoFiles();

  /// @brief Method GetAllAssetRoots, addr 0x3a76a38, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot>, ::Array<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot>>*> GetAllAssetRoots();

  /// @brief Method GetObjectParentFolder, addr 0x3a77508, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW GetObjectParentFolder(::UnityEngine::GameObject* parentObject, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>* generatedMaterials);

  /// @brief Method GetObjectParentFolderHelper, addr 0x3a77548, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW GetObjectParentFolderHelper(int32_t instanceID);

  /// @brief Method GetPrefabAsset, addr 0x3a76508, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> GetPrefabAsset(::UnityEngine::GameObject* go);

  /// @brief Method GetPrefabAssetPath, addr 0x3a76554, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetPrefabAssetPath(::UnityEngine::Object* obj);

  /// @brief Method GetSelectedAssetRoots, addr 0x3a769b0, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot>, ::Array<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot>>*> GetSelectedAssetRoots();

  /// @brief Method GetSelectedObjects, addr 0x3a769a8, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> GetSelectedObjects();

  /// @brief Method GetSelectedObjectsMeanPosition, addr 0x3a762d8, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetSelectedObjectsMeanPosition();

  /// @brief Method GetSelectedObjectsMeanTransform, addr 0x3a7631c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetSelectedObjectsMeanTransform();

  /// @brief Method GetUniqueNameForSibling, addr 0x3a76754, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueNameForSibling(::UnityEngine::Transform* parentTransform, ::StringW name);

  /// @brief Method InstantiateGameObject, addr 0x3a76630, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> InstantiateGameObject(::UnityEngine::GameObject* sourceGameObject, ::UnityEngine::Transform* parentTransform, bool instantiateInWorldSpace,
                                                                          bool bRegisterUndo);

  /// @brief Method InstantiatePrefab, addr 0x3a765e4, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> InstantiatePrefab(::UnityEngine::GameObject* prefabOriginal);

  /// @brief Method IsDisconnectedPrefabInstance, addr 0x3a764bc, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsDisconnectedPrefabInstance(::UnityEngine::GameObject* go);

  /// @brief Method IsEditingInPrefabMode, addr 0x3a764b4, size 0x8, virtual false, abstract: false, final false
  static inline bool IsEditingInPrefabMode(::UnityEngine::GameObject* obj);

  /// @brief Method IsEditorNotInPlayModeAndNotGoingToPlayMode, addr 0x3a76828, size 0x80, virtual false, abstract: false, final false
  static inline bool IsEditorNotInPlayModeAndNotGoingToPlayMode();

  /// @brief Method IsEditorPlaying, addr 0x3a763c8, size 0x8, virtual false, abstract: false, final false
  static inline bool IsEditorPlaying();

  /// @brief Method IsPersistant, addr 0x3a76708, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPersistant(::UnityEngine::Object* obj);

  /// @brief Method IsPrefabAsset, addr 0x3a76468, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPrefabAsset(::UnityEngine::GameObject* go);

  /// @brief Method IsPrefabInstance, addr 0x3a7641c, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPrefabInstance(::UnityEngine::GameObject* go);

  /// @brief Method MarkSceneDirty, addr 0x3a762cc, size 0x4, virtual false, abstract: false, final false
  static inline void MarkSceneDirty();

  /// @brief Method PrefabIsAddedComponentOverride, addr 0x3a763c0, size 0x8, virtual false, abstract: false, final false
  static inline bool PrefabIsAddedComponentOverride(::UnityEngine::Component* comp);

  /// @brief Method QuerySelectedMeshTopology, addr 0x3a77504, size 0x4, virtual false, abstract: false, final false
  static inline void QuerySelectedMeshTopology();

  /// @brief Method RebuildAll, addr 0x3a76c78, size 0x10, virtual false, abstract: false, final false
  static inline void RebuildAll();

  /// @brief Method RebuildAssets, addr 0x3a76ba8, size 0xd0, virtual false, abstract: false, final false
  static inline void RebuildAssets(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets);

  /// @brief Method RebuildSelected, addr 0x3a76b98, size 0x10, virtual false, abstract: false, final false
  static inline void RebuildSelected();

  /// @brief Method ReleasedMouse, addr 0x3a77590, size 0x8, virtual false, abstract: false, final false
  static inline bool ReleasedMouse();

  /// @brief Method RepaintScene, addr 0x3a77588, size 0x4, virtual false, abstract: false, final false
  static inline void RepaintScene();

  /// @brief Method ReplacePrefab, addr 0x3a763d0, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> ReplacePrefab(::UnityEngine::GameObject* go, ::UnityEngine::Object* targetPrefab,
                                                                  ::HoudiniEngineUnity::HEU_EditorUtility_HEU_ReplacePrefabOptions heuOptions);

  /// @brief Method RevealInFinder, addr 0x3a76998, size 0x4, virtual false, abstract: false, final false
  static inline void RevealInFinder(::StringW path);

  /// @brief Method SaveAsPrefabAsset, addr 0x3a76374, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> SaveAsPrefabAsset(::StringW path, ::UnityEngine::GameObject* go);

  /// @brief Method SelectObject, addr 0x3a762d0, size 0x4, virtual false, abstract: false, final false
  static inline void SelectObject(::UnityEngine::GameObject* gameObject);

  /// @brief Method SelectObjects, addr 0x3a762d4, size 0x4, virtual false, abstract: false, final false
  static inline void SelectObjects(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> gameObjects);

  /// @brief Method SetIsHidden, addr 0x3a769a4, size 0x4, virtual false, abstract: false, final false
  static inline void SetIsHidden(::UnityEngine::GameObject* go, bool isHidden, bool bIncludeChildren);

  /// @brief Method SetObjectDirtyForEditorUpdate, addr 0x3a7699c, size 0x4, virtual false, abstract: false, final false
  static inline void SetObjectDirtyForEditorUpdate(::UnityEngine::Object* obj);

  /// @brief Method SetStatic, addr 0x3a769a0, size 0x4, virtual false, abstract: false, final false
  static inline void SetStatic(::UnityEngine::GameObject* go, bool bStatic, bool bIncludeChildren);

  /// @brief Method SetTextureToNormalMap, addr 0x3a7758c, size 0x4, virtual false, abstract: false, final false
  static inline void SetTextureToNormalMap(::StringW filename);

  /// @brief Method UndoCollapseCurrentGroup, addr 0x3a766b8, size 0x4, virtual false, abstract: false, final false
  static inline void UndoCollapseCurrentGroup();

  /// @brief Method UndoRecordObject, addr 0x3a766b4, size 0x4, virtual false, abstract: false, final false
  static inline void UndoRecordObject(::UnityEngine::Object* objectToUndo, ::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_EditorUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_EditorUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_EditorUtility(HEU_EditorUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_EditorUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_EditorUtility(HEU_EditorUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11807 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_EditorUtility, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_EditorUtility_HEU_ReplacePrefabOptions, "HoudiniEngineUnity", "HEU_EditorUtility/HEU_ReplacePrefabOptions");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_EditorUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_EditorUtility*, "HoudiniEngineUnity", "HEU_EditorUtility");
