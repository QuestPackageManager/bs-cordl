#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_EditorUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_EditorUtility)
namespace HoudiniEngineUnity {
class HEU_HoudiniAssetRoot;
}
namespace HoudiniEngineUnity {
struct __HEU_EditorUtility__HEU_ReplacePrefabOptions;
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
struct __HEU_EditorUtility__HEU_ReplacePrefabOptions;
}
namespace HoudiniEngineUnity {
class HEU_EditorUtility;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions);
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_EditorUtility);
// Type: ::HEU_ReplacePrefabOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HEU_EditorUtility::HEU_ReplacePrefabOptions
struct CORDL_TYPE __HEU_EditorUtility__HEU_ReplacePrefabOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HEU_EditorUtility__HEU_ReplacePrefabOptions_Unwrapped
  enum struct ____HEU_EditorUtility__HEU_ReplacePrefabOptions_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_ConnectToPrefab = static_cast<int32_t>(0x1),
    __E_ReplaceNameBased = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HEU_EditorUtility__HEU_ReplacePrefabOptions_Unwrapped() const noexcept {
    return static_cast<____HEU_EditorUtility__HEU_ReplacePrefabOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_EditorUtility__HEU_ReplacePrefabOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_EditorUtility__HEU_ReplacePrefabOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ConnectToPrefab value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions const ConnectToPrefab;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions const Default;

  /// @brief Field ReplaceNameBased value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions const ReplaceNameBased;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_EditorUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_EditorUtility*
class CORDL_TYPE HEU_EditorUtility : public ::System::Object {
public:
  // Declarations
  using HEU_ReplacePrefabOptions = ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions;

  /// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityW<::UnityEngine::Component> AddComponent(::UnityEngine::GameObject* target, bool bRegisterUndo);

  /// @brief Method BakeAndReplaceAllInScene, addr 0x25ae618, size 0x10, virtual false, abstract: false, final false
  static inline void BakeAndReplaceAllInScene();

  /// @brief Method BakeAndReplaceAssets, addr 0x25ae54c, size 0xcc, virtual false, abstract: false, final false
  static inline void BakeAndReplaceAssets(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets);

  /// @brief Method BakeAndReplaceSelectedInScene, addr 0x25ae53c, size 0x10, virtual false, abstract: false, final false
  static inline void BakeAndReplaceSelectedInScene();

  /// @brief Method ClearProgressBar, addr 0x25ae0e8, size 0x44, virtual false, abstract: false, final false
  static inline void ClearProgressBar();

  /// @brief Method CollectDependencies, addr 0x25adfc0, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> CollectDependencies(::UnityEngine::Object* obj);

  /// @brief Method CookAll, addr 0x25ae43c, size 0x10, virtual false, abstract: false, final false
  static inline void CookAll();

  /// @brief Method CookAssets, addr 0x25ae360, size 0xdc, virtual false, abstract: false, final false
  static inline void CookAssets(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets);

  /// @brief Method CookSelected, addr 0x25ae350, size 0x10, virtual false, abstract: false, final false
  static inline void CookSelected();

  /// @brief Method DisconnectPrefabInstance, addr 0x25adea4, size 0x44, virtual false, abstract: false, final false
  static inline void DisconnectPrefabInstance(::UnityEngine::GameObject* instance);

  /// @brief Method DisplayDialog, addr 0x25ae15c, size 0x6c, virtual false, abstract: false, final false
  static inline bool DisplayDialog(::StringW title, ::StringW message, ::StringW ok, ::StringW cancel);

  /// @brief Method DisplayErrorDialog, addr 0x25ae1c8, size 0x84, virtual false, abstract: false, final false
  static inline bool DisplayErrorDialog(::StringW title, ::StringW message, ::StringW ok, ::StringW cancel);

  /// @brief Method DisplayProgressBar, addr 0x25ae0a4, size 0x44, virtual false, abstract: false, final false
  static inline void DisplayProgressBar(::StringW title, ::StringW info, float_t progress);

  /// @brief Method EditorSaveFolderPanel, addr 0x25aed54, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW EditorSaveFolderPanel(::StringW title, ::StringW folder, ::StringW defaultName);

  /// @brief Method ExportAllAssetsToGeoFiles, addr 0x25aed44, size 0x10, virtual false, abstract: false, final false
  static inline void ExportAllAssetsToGeoFiles();

  /// @brief Method ExportAssetsToGeoFiles, addr 0x25ae638, size 0x70c, virtual false, abstract: false, final false
  static inline void ExportAssetsToGeoFiles(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets);

  /// @brief Method ExportSelectedAssetsToGeoFiles, addr 0x25ae628, size 0x10, virtual false, abstract: false, final false
  static inline void ExportSelectedAssetsToGeoFiles();

  /// @brief Method GetAllAssetRoots, addr 0x25ae2ec, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot>, ::Array<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot>>*> GetAllAssetRoots();

  /// @brief Method GetObjectParentFolder, addr 0x25aeda4, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW GetObjectParentFolder(::UnityEngine::GameObject* parentObject, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Material>>* generatedMaterials);

  /// @brief Method GetObjectParentFolderHelper, addr 0x25aede4, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW GetObjectParentFolderHelper(int32_t instanceID);

  /// @brief Method GetPrefabAsset, addr 0x25ade0c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> GetPrefabAsset(::UnityEngine::GameObject* go);

  /// @brief Method GetPrefabAssetPath, addr 0x25ade58, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetPrefabAssetPath(::UnityEngine::Object* obj);

  /// @brief Method GetSelectedAssetRoots, addr 0x25ae264, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot>, ::Array<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot>>*> GetSelectedAssetRoots();

  /// @brief Method GetSelectedObjects, addr 0x25ae25c, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> GetSelectedObjects();

  /// @brief Method GetSelectedObjectsMeanPosition, addr 0x25adbdc, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetSelectedObjectsMeanPosition();

  /// @brief Method GetSelectedObjectsMeanTransform, addr 0x25adc20, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetSelectedObjectsMeanTransform();

  /// @brief Method GetUniqueNameForSibling, addr 0x25ae058, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueNameForSibling(::UnityEngine::Transform* parentTransform, ::StringW name);

  /// @brief Method InstantiateGameObject, addr 0x25adf34, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> InstantiateGameObject(::UnityEngine::GameObject* sourceGameObject, ::UnityEngine::Transform* parentTransform, bool instantiateInWorldSpace,
                                                                          bool bRegisterUndo);

  /// @brief Method InstantiatePrefab, addr 0x25adee8, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> InstantiatePrefab(::UnityEngine::GameObject* prefabOriginal);

  /// @brief Method IsDisconnectedPrefabInstance, addr 0x25addc0, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsDisconnectedPrefabInstance(::UnityEngine::GameObject* go);

  /// @brief Method IsEditingInPrefabMode, addr 0x25addb8, size 0x8, virtual false, abstract: false, final false
  static inline bool IsEditingInPrefabMode(::UnityEngine::GameObject* obj);

  /// @brief Method IsEditorNotInPlayModeAndNotGoingToPlayMode, addr 0x25ae12c, size 0x30, virtual false, abstract: false, final false
  static inline bool IsEditorNotInPlayModeAndNotGoingToPlayMode();

  /// @brief Method IsEditorPlaying, addr 0x25adccc, size 0x8, virtual false, abstract: false, final false
  static inline bool IsEditorPlaying();

  /// @brief Method IsPersistant, addr 0x25ae00c, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPersistant(::UnityEngine::Object* obj);

  /// @brief Method IsPrefabAsset, addr 0x25add6c, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPrefabAsset(::UnityEngine::GameObject* go);

  /// @brief Method IsPrefabInstance, addr 0x25add20, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPrefabInstance(::UnityEngine::GameObject* go);

  /// @brief Method MarkSceneDirty, addr 0x25adbd0, size 0x4, virtual false, abstract: false, final false
  static inline void MarkSceneDirty();

  /// @brief Method PrefabIsAddedComponentOverride, addr 0x25adcc4, size 0x8, virtual false, abstract: false, final false
  static inline bool PrefabIsAddedComponentOverride(::UnityEngine::Component* comp);

  /// @brief Method QuerySelectedMeshTopology, addr 0x25aeda0, size 0x4, virtual false, abstract: false, final false
  static inline void QuerySelectedMeshTopology();

  /// @brief Method RebuildAll, addr 0x25ae52c, size 0x10, virtual false, abstract: false, final false
  static inline void RebuildAll();

  /// @brief Method RebuildAssets, addr 0x25ae45c, size 0xd0, virtual false, abstract: false, final false
  static inline void RebuildAssets(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets);

  /// @brief Method RebuildSelected, addr 0x25ae44c, size 0x10, virtual false, abstract: false, final false
  static inline void RebuildSelected();

  /// @brief Method ReleasedMouse, addr 0x25aee2c, size 0x8, virtual false, abstract: false, final false
  static inline bool ReleasedMouse();

  /// @brief Method RepaintScene, addr 0x25aee24, size 0x4, virtual false, abstract: false, final false
  static inline void RepaintScene();

  /// @brief Method ReplacePrefab, addr 0x25adcd4, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> ReplacePrefab(::UnityEngine::GameObject* go, ::UnityEngine::Object* targetPrefab,
                                                                  ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions heuOptions);

  /// @brief Method RevealInFinder, addr 0x25ae24c, size 0x4, virtual false, abstract: false, final false
  static inline void RevealInFinder(::StringW path);

  /// @brief Method SaveAsPrefabAsset, addr 0x25adc78, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::GameObject> SaveAsPrefabAsset(::StringW path, ::UnityEngine::GameObject* go);

  /// @brief Method SelectObject, addr 0x25adbd4, size 0x4, virtual false, abstract: false, final false
  static inline void SelectObject(::UnityEngine::GameObject* gameObject);

  /// @brief Method SelectObjects, addr 0x25adbd8, size 0x4, virtual false, abstract: false, final false
  static inline void SelectObjects(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> gameObjects);

  /// @brief Method SetIsHidden, addr 0x25ae258, size 0x4, virtual false, abstract: false, final false
  static inline void SetIsHidden(::UnityEngine::GameObject* go, bool isHidden, bool bIncludeChildren);

  /// @brief Method SetObjectDirtyForEditorUpdate, addr 0x25ae250, size 0x4, virtual false, abstract: false, final false
  static inline void SetObjectDirtyForEditorUpdate(::UnityEngine::Object* obj);

  /// @brief Method SetStatic, addr 0x25ae254, size 0x4, virtual false, abstract: false, final false
  static inline void SetStatic(::UnityEngine::GameObject* go, bool bStatic, bool bIncludeChildren);

  /// @brief Method SetTextureToNormalMap, addr 0x25aee28, size 0x4, virtual false, abstract: false, final false
  static inline void SetTextureToNormalMap(::StringW filename);

  /// @brief Method UndoCollapseCurrentGroup, addr 0x25adfbc, size 0x4, virtual false, abstract: false, final false
  static inline void UndoCollapseCurrentGroup();

  /// @brief Method UndoRecordObject, addr 0x25adfb8, size 0x4, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_EditorUtility, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions, "HoudiniEngineUnity", "HEU_EditorUtility/HEU_ReplacePrefabOptions");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_EditorUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_EditorUtility*, "HoudiniEngineUnity", "HEU_EditorUtility");
