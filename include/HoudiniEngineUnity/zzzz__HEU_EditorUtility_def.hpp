#pragma once
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
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
namespace HoudiniEngineUnity {
struct __HEU_EditorUtility__HEU_ReplacePrefabOptions;
}
namespace UnityEngine {
class Component;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9819))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HEU_EditorUtility__HEU_ReplacePrefabOptions(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HEU_EditorUtility__HEU_ReplacePrefabOptions();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions const Default;

  /// @brief Field ConnectToPrefab value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions const ConnectToPrefab;

  /// @brief Field ReplaceNameBased value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions const ReplaceNameBased;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9820))
// CS Name: ::HoudiniEngineUnity::HEU_EditorUtility*
class CORDL_TYPE HEU_EditorUtility : public ::System::Object {
public:
  // Declarations
  using HEU_ReplacePrefabOptions = ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions;

  /// @brief Method MarkSceneDirty, addr 0x21b1d94, size 0x4, virtual false, abstract: false, final false
  static inline void MarkSceneDirty();

  /// @brief Method SelectObject, addr 0x21b1d98, size 0x4, virtual false, abstract: false, final false
  static inline void SelectObject(::UnityEngine::GameObject* gameObject);

  /// @brief Method SelectObjects, addr 0x21b1d9c, size 0x4, virtual false, abstract: false, final false
  static inline void SelectObjects(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> gameObjects);

  /// @brief Method GetSelectedObjectsMeanPosition, addr 0x21b1da0, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetSelectedObjectsMeanPosition();

  /// @brief Method GetSelectedObjectsMeanTransform, addr 0x21b1de4, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 GetSelectedObjectsMeanTransform();

  /// @brief Method SaveAsPrefabAsset, addr 0x21b1e3c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GameObject* SaveAsPrefabAsset(::StringW path, ::UnityEngine::GameObject* go);

  /// @brief Method PrefabIsAddedComponentOverride, addr 0x21b1e88, size 0x8, virtual false, abstract: false, final false
  static inline bool PrefabIsAddedComponentOverride(::UnityEngine::Component* comp);

  /// @brief Method IsEditorPlaying, addr 0x21b1e90, size 0x8, virtual false, abstract: false, final false
  static inline bool IsEditorPlaying();

  /// @brief Method ReplacePrefab, addr 0x21b1e98, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GameObject* ReplacePrefab(::UnityEngine::GameObject* go, ::UnityEngine::Object* targetPrefab,
                                                         ::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions heuOptions);

  /// @brief Method IsPrefabInstance, addr 0x21b1ee4, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPrefabInstance(::UnityEngine::GameObject* go);

  /// @brief Method IsPrefabAsset, addr 0x21b1f30, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPrefabAsset(::UnityEngine::GameObject* go);

  /// @brief Method IsEditingInPrefabMode, addr 0x21b1f7c, size 0x8, virtual false, abstract: false, final false
  static inline bool IsEditingInPrefabMode(::UnityEngine::GameObject* obj);

  /// @brief Method IsDisconnectedPrefabInstance, addr 0x21b1f84, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsDisconnectedPrefabInstance(::UnityEngine::GameObject* go);

  /// @brief Method GetPrefabAsset, addr 0x21b1fd0, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Object* GetPrefabAsset(::UnityEngine::GameObject* go);

  /// @brief Method GetPrefabAssetPath, addr 0x21b201c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetPrefabAssetPath(::UnityEngine::Object* obj);

  /// @brief Method DisconnectPrefabInstance, addr 0x21b2068, size 0x44, virtual false, abstract: false, final false
  static inline void DisconnectPrefabInstance(::UnityEngine::GameObject* instance);

  /// @brief Method InstantiatePrefab, addr 0x21b20ac, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Object* InstantiatePrefab(::UnityEngine::GameObject* prefabOriginal);

  /// @brief Method InstantiateGameObject, addr 0x21b20f8, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::GameObject* InstantiateGameObject(::UnityEngine::GameObject* sourceGameObject, ::UnityEngine::Transform* parentTransform, bool instantiateInWorldSpace,
                                                                 bool bRegisterUndo);

  /// @brief Method AddComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::Component* AddComponent(::UnityEngine::GameObject* target, bool bRegisterUndo);

  /// @brief Method UndoRecordObject, addr 0x21b217c, size 0x4, virtual false, abstract: false, final false
  static inline void UndoRecordObject(::UnityEngine::Object* objectToUndo, ::StringW name);

  /// @brief Method UndoCollapseCurrentGroup, addr 0x21b2180, size 0x4, virtual false, abstract: false, final false
  static inline void UndoCollapseCurrentGroup();

  /// @brief Method CollectDependencies, addr 0x21b2184, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Object*, ::Array<::UnityEngine::Object*>*> CollectDependencies(::UnityEngine::Object* obj);

  /// @brief Method IsPersistant, addr 0x21b21d0, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsPersistant(::UnityEngine::Object* obj);

  /// @brief Method GetUniqueNameForSibling, addr 0x21b221c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueNameForSibling(::UnityEngine::Transform* parentTransform, ::StringW name);

  /// @brief Method DisplayProgressBar, addr 0x21b2268, size 0x44, virtual false, abstract: false, final false
  static inline void DisplayProgressBar(::StringW title, ::StringW info, float_t progress);

  /// @brief Method ClearProgressBar, addr 0x21b22ac, size 0x44, virtual false, abstract: false, final false
  static inline void ClearProgressBar();

  /// @brief Method IsEditorNotInPlayModeAndNotGoingToPlayMode, addr 0x21b22f0, size 0x30, virtual false, abstract: false, final false
  static inline bool IsEditorNotInPlayModeAndNotGoingToPlayMode();

  /// @brief Method DisplayDialog, addr 0x21b2320, size 0x6c, virtual false, abstract: false, final false
  /// @param cancel: ::StringW (default: u"")
  static inline bool DisplayDialog(::StringW title, ::StringW message, ::StringW ok, ::StringW cancel = u"");

  /// @brief Method DisplayErrorDialog, addr 0x21b238c, size 0x84, virtual false, abstract: false, final false
  /// @param cancel: ::StringW (default: u"")
  static inline bool DisplayErrorDialog(::StringW title, ::StringW message, ::StringW ok, ::StringW cancel = u"");

  /// @brief Method RevealInFinder, addr 0x21b2410, size 0x4, virtual false, abstract: false, final false
  static inline void RevealInFinder(::StringW path);

  /// @brief Method SetObjectDirtyForEditorUpdate, addr 0x21b2414, size 0x4, virtual false, abstract: false, final false
  static inline void SetObjectDirtyForEditorUpdate(::UnityEngine::Object* obj);

  /// @brief Method SetStatic, addr 0x21b2418, size 0x4, virtual false, abstract: false, final false
  static inline void SetStatic(::UnityEngine::GameObject* go, bool bStatic, bool bIncludeChildren);

  /// @brief Method SetIsHidden, addr 0x21b241c, size 0x4, virtual false, abstract: false, final false
  static inline void SetIsHidden(::UnityEngine::GameObject* go, bool isHidden, bool bIncludeChildren);

  /// @brief Method GetSelectedObjects, addr 0x21b2420, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> GetSelectedObjects();

  /// @brief Method GetSelectedAssetRoots, addr 0x21b2428, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> GetSelectedAssetRoots();

  /// @brief Method GetAllAssetRoots, addr 0x21b24b0, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> GetAllAssetRoots();

  /// @brief Method CookSelected, addr 0x21b2514, size 0x10, virtual false, abstract: false, final false
  static inline void CookSelected();

  /// @brief Method CookAll, addr 0x21b2600, size 0x10, virtual false, abstract: false, final false
  static inline void CookAll();

  /// @brief Method CookAssets, addr 0x21b2524, size 0xdc, virtual false, abstract: false, final false
  static inline void CookAssets(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets);

  /// @brief Method RebuildSelected, addr 0x21b2610, size 0x10, virtual false, abstract: false, final false
  static inline void RebuildSelected();

  /// @brief Method RebuildAll, addr 0x21b26f0, size 0x10, virtual false, abstract: false, final false
  static inline void RebuildAll();

  /// @brief Method RebuildAssets, addr 0x21b2620, size 0xd0, virtual false, abstract: false, final false
  static inline void RebuildAssets(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets);

  /// @brief Method BakeAndReplaceSelectedInScene, addr 0x21b2700, size 0x10, virtual false, abstract: false, final false
  static inline void BakeAndReplaceSelectedInScene();

  /// @brief Method BakeAndReplaceAllInScene, addr 0x21b27dc, size 0x10, virtual false, abstract: false, final false
  static inline void BakeAndReplaceAllInScene();

  /// @brief Method BakeAndReplaceAssets, addr 0x21b2710, size 0xcc, virtual false, abstract: false, final false
  static inline void BakeAndReplaceAssets(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets);

  /// @brief Method ExportSelectedAssetsToGeoFiles, addr 0x21b27ec, size 0x10, virtual false, abstract: false, final false
  static inline void ExportSelectedAssetsToGeoFiles();

  /// @brief Method ExportAllAssetsToGeoFiles, addr 0x21b2f08, size 0x10, virtual false, abstract: false, final false
  static inline void ExportAllAssetsToGeoFiles();

  /// @brief Method ExportAssetsToGeoFiles, addr 0x21b27fc, size 0x70c, virtual false, abstract: false, final false
  static inline void ExportAssetsToGeoFiles(::ArrayW<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*, ::Array<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*> rootAssets);

  /// @brief Method EditorSaveFolderPanel, addr 0x21b2f18, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW EditorSaveFolderPanel(::StringW title, ::StringW folder, ::StringW defaultName);

  /// @brief Method QuerySelectedMeshTopology, addr 0x21b2f64, size 0x4, virtual false, abstract: false, final false
  static inline void QuerySelectedMeshTopology();

  /// @brief Method GetObjectParentFolder, addr 0x21b2f68, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW GetObjectParentFolder(::UnityEngine::GameObject* parentObject, ::System::Collections::Generic::HashSet_1<::UnityEngine::Material*>* generatedMaterials);

  /// @brief Method GetObjectParentFolderHelper, addr 0x21b2fa8, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW GetObjectParentFolderHelper(int32_t instanceID);

  /// @brief Method RepaintScene, addr 0x21b2fe8, size 0x4, virtual false, abstract: false, final false
  static inline void RepaintScene();

  /// @brief Method SetTextureToNormalMap, addr 0x21b2fec, size 0x4, virtual false, abstract: false, final false
  static inline void SetTextureToNormalMap(::StringW filename);

  /// @brief Method ReleasedMouse, addr 0x21b2ff0, size 0x8, virtual false, abstract: false, final false
  static inline bool ReleasedMouse();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_EditorUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_EditorUtility(HEU_EditorUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_EditorUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_EditorUtility(HEU_EditorUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_EditorUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_EditorUtility, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__HEU_EditorUtility__HEU_ReplacePrefabOptions, "HoudiniEngineUnity", "HEU_EditorUtility/HEU_ReplacePrefabOptions");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_EditorUtility);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_EditorUtility*, "HoudiniEngineUnity", "HEU_EditorUtility");
