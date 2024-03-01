#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class SceneSetupData;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScenesTransitionSetupDataSO);
// Type: ::ScenesTransitionSetupDataSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScenesTransitionSetupDataSO*
class CORDL_TYPE ScenesTransitionSetupDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _sceneSetupDataArray, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupDataArray,
                      put = __cordl_internal_set__sceneSetupDataArray))::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> _sceneSetupDataArray;

  /// @brief Field <scenes>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scenes_k__BackingField,
                      put = __cordl_internal_set__scenes_k__BackingField))::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> _scenes_k__BackingField;

  __declspec(property(get = get_scenes, put = set_scenes))::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> scenes;

  /// @brief Method BeforeScenesWillBeActivatedAsync, addr 0xe8b270, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* BeforeScenesWillBeActivatedAsync();

  /// @brief Method Init, addr 0xe8b230, size 0x8, virtual false, abstract: false, final false
  inline void Init(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> scenes,
                   ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> sceneSetupData);

  /// @brief Method InstallBindings, addr 0xe8939c, size 0x12c, virtual false, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::ScenesTransitionSetupDataSO* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> const& __cordl_internal_get__sceneSetupDataArray() const;

  constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*>& __cordl_internal_get__sceneSetupDataArray();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> const& __cordl_internal_get__scenes_k__BackingField() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*>& __cordl_internal_get__scenes_k__BackingField();

  constexpr void __cordl_internal_set__sceneSetupDataArray(::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> value);

  constexpr void __cordl_internal_set__scenes_k__BackingField(::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> value);

  /// @brief Method .ctor, addr 0xe8b240, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_scenes, addr 0xe8b260, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> get_scenes();

  /// @brief Method set_scenes, addr 0xe8b268, size 0x8, virtual false, abstract: false, final false
  inline void set_scenes(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScenesTransitionSetupDataSO(ScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScenesTransitionSetupDataSO(ScenesTransitionSetupDataSO const&) = delete;

  /// @brief Field <scenes>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> ____scenes_k__BackingField;

  /// @brief Field _sceneSetupDataArray, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> ____sceneSetupDataArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScenesTransitionSetupDataSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenesTransitionSetupDataSO, ____scenes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenesTransitionSetupDataSO, ____sceneSetupDataArray) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScenesTransitionSetupDataSO*, "", "ScenesTransitionSetupDataSO");
