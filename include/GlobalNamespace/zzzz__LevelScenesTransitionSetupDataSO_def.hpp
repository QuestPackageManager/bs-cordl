#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(LevelScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelScenesTransitionSetupDataSO);
// Type: ::LevelScenesTransitionSetupDataSO
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelScenesTransitionSetupDataSO*
class CORDL_TYPE LevelScenesTransitionSetupDataSO : public ::GlobalNamespace::ScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Field <gameplayCoreSceneSetupData>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayCoreSceneSetupData_k__BackingField,
                      put = __cordl_internal_set__gameplayCoreSceneSetupData_k__BackingField)) ::GlobalNamespace::GameplayCoreSceneSetupData* _gameplayCoreSceneSetupData_k__BackingField;

  __declspec(property(get = get_gameplayCoreSceneSetupData, put = set_gameplayCoreSceneSetupData)) ::GlobalNamespace::GameplayCoreSceneSetupData* gameplayCoreSceneSetupData;

  __declspec(property(get = get_transformedBeatmapData)) ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData;

  /// @brief Method BeforeScenesWillBeActivated, addr 0x3ac7070, size 0x24, virtual true, abstract: false, final false
  inline void BeforeScenesWillBeActivated();

  /// @brief Method BeforeScenesWillBeActivatedAsync, addr 0x3ac6f70, size 0x100, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* BeforeScenesWillBeActivatedAsync();

  static inline ::GlobalNamespace::LevelScenesTransitionSetupDataSO* New_ctor();

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__gameplayCoreSceneSetupData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __cordl_internal_get__gameplayCoreSceneSetupData_k__BackingField() const;

  constexpr void __cordl_internal_set__gameplayCoreSceneSetupData_k__BackingField(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  /// @brief Method .ctor, addr 0x3ac7094, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameplayCoreSceneSetupData, addr 0x3ac6f60, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayCoreSceneSetupData* get_gameplayCoreSceneSetupData();

  /// @brief Method get_transformedBeatmapData, addr 0x3ac6f44, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IReadonlyBeatmapData* get_transformedBeatmapData();

  /// @brief Method set_gameplayCoreSceneSetupData, addr 0x3ac6f68, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayCoreSceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelScenesTransitionSetupDataSO(LevelScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelScenesTransitionSetupDataSO(LevelScenesTransitionSetupDataSO const&) = delete;

  /// @brief Field <gameplayCoreSceneSetupData>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____gameplayCoreSceneSetupData_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5231 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelScenesTransitionSetupDataSO, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelScenesTransitionSetupDataSO, ____gameplayCoreSceneSetupData_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelScenesTransitionSetupDataSO*, "", "LevelScenesTransitionSetupDataSO");
