#pragma once
// IWYU pragma private; include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
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
namespace System {
class Action;
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
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScenesTransitionSetupDataSO
class CORDL_TYPE ScenesTransitionSetupDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _sceneSetupDataArray, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupDataArray,
                      put = __cordl_internal_set__sceneSetupDataArray)) ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*>
      _sceneSetupDataArray;

  /// @brief Field <scenes>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scenes_k__BackingField,
                      put = __cordl_internal_set__scenes_k__BackingField)) ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*>
      _scenes_k__BackingField;

  /// @brief Field beforeScenesWillBeActivatedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_beforeScenesWillBeActivatedEvent, put = __cordl_internal_set_beforeScenesWillBeActivatedEvent)) ::System::Action* beforeScenesWillBeActivatedEvent;

  __declspec(property(get = get_scenes, put = set_scenes)) ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> scenes;

  /// @brief Method BeforeScenesWillBeActivated, addr 0x229aa38, size 0x1c, virtual true, abstract: false, final false
  inline void BeforeScenesWillBeActivated();

  /// @brief Method BeforeScenesWillBeActivatedAsync, addr 0x229aa54, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* BeforeScenesWillBeActivatedAsync();

  /// @brief Method Init, addr 0x229a8ac, size 0x8, virtual false, abstract: false, final false
  inline void Init(::ArrayW<::GlobalNamespace::SceneInfo*, ::Array<::GlobalNamespace::SceneInfo*>*> scenes,
                   ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> sceneSetupData);

  /// @brief Method InstallBindings, addr 0x2298548, size 0x12c, virtual false, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::ScenesTransitionSetupDataSO* New_ctor();

  /// @brief Method <BeforeScenesWillBeActivatedAsync>b__10_0, addr 0x229aaf8, size 0x1c, virtual false, abstract: false, final false
  inline void _BeforeScenesWillBeActivatedAsync_b__10_0();

  constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> const& __cordl_internal_get__sceneSetupDataArray() const;

  constexpr ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*>& __cordl_internal_get__sceneSetupDataArray();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> const& __cordl_internal_get__scenes_k__BackingField() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*>& __cordl_internal_get__scenes_k__BackingField();

  constexpr ::System::Action* const& __cordl_internal_get_beforeScenesWillBeActivatedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_beforeScenesWillBeActivatedEvent();

  constexpr void __cordl_internal_set__sceneSetupDataArray(::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> value);

  constexpr void __cordl_internal_set__scenes_k__BackingField(::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> value);

  constexpr void __cordl_internal_set_beforeScenesWillBeActivatedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x229a8bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_beforeScenesWillBeActivatedEvent, addr 0x229a900, size 0x9c, virtual false, abstract: false, final false
  inline void add_beforeScenesWillBeActivatedEvent(::System::Action* value);

  /// @brief Method get_scenes, addr 0x229a8f0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> get_scenes();

  /// @brief Method remove_beforeScenesWillBeActivatedEvent, addr 0x229a99c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_beforeScenesWillBeActivatedEvent(::System::Action* value);

  /// @brief Method set_scenes, addr 0x229a8f8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17634 };

  /// @brief Field <scenes>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::SceneInfo>, ::Array<::UnityW<::GlobalNamespace::SceneInfo>>*> ____scenes_k__BackingField;

  /// @brief Field _sceneSetupDataArray, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SceneSetupData*, ::Array<::GlobalNamespace::SceneSetupData*>*> ____sceneSetupDataArray;

  /// @brief Field beforeScenesWillBeActivatedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___beforeScenesWillBeActivatedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScenesTransitionSetupDataSO, ____scenes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenesTransitionSetupDataSO, ____sceneSetupDataArray) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScenesTransitionSetupDataSO, ___beforeScenesWillBeActivatedEvent) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScenesTransitionSetupDataSO, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScenesTransitionSetupDataSO*, "", "ScenesTransitionSetupDataSO");
