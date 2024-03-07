#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissionLevelNoTransitionInstaller)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class ColorSchemeSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelNoTransitionInstaller);
// Type: ::MissionLevelNoTransitionInstaller
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionLevelNoTransitionInstaller*
class CORDL_TYPE MissionLevelNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
  // Declarations
  /// @brief Field _backButtonText, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__backButtonText, put = __cordl_internal_set__backButtonText))::StringW _backButtonText;

  /// @brief Field _beatmapCharacteristic, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristic, put = __cordl_internal_set__beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> _beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapDifficulty, put = __cordl_internal_set__beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty _beatmapDifficulty;

  /// @brief Field _beatmapLevelSo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelSo, put = __cordl_internal_set__beatmapLevelSo))::UnityW<::GlobalNamespace::BeatmapLevelSO> _beatmapLevelSo;

  /// @brief Field _colorScheme, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme, put = __cordl_internal_set__colorScheme))::UnityW<::GlobalNamespace::ColorSchemeSO> _colorScheme;

  /// @brief Field _gameplayModifiers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers))::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _missionObjectives, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectives,
                      put = __cordl_internal_set__missionObjectives))::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> _missionObjectives;

  /// @brief Field _playerSpecificSettings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__playerSpecificSettings, put = __cordl_internal_set__playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings;

  /// @brief Field _scenesTransitionSetupData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__scenesTransitionSetupData,
                      put = __cordl_internal_set__scenesTransitionSetupData))::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> _scenesTransitionSetupData;

  /// @brief Method InstallBindings, addr 0x247a39c, size 0x158, virtual true, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::MissionLevelNoTransitionInstaller* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__backButtonText() const;

  constexpr ::StringW& __cordl_internal_get__backButtonText();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__beatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__beatmapCharacteristic();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__beatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__beatmapDifficulty();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& __cordl_internal_get__beatmapLevelSo() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& __cordl_internal_get__beatmapLevelSo();

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO> const& __cordl_internal_get__colorScheme() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeSO>& __cordl_internal_get__colorScheme();

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const& __cordl_internal_get__missionObjectives() const;

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>& __cordl_internal_get__missionObjectives();

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get__playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __cordl_internal_get__playerSpecificSettings() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get__scenesTransitionSetupData();

  constexpr void __cordl_internal_set__backButtonText(::StringW value);

  constexpr void __cordl_internal_set__beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set__beatmapLevelSo(::UnityW<::GlobalNamespace::BeatmapLevelSO> value);

  constexpr void __cordl_internal_set__colorScheme(::UnityW<::GlobalNamespace::ColorSchemeSO> value);

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value);

  constexpr void __cordl_internal_set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set__scenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x247a8dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelNoTransitionInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelNoTransitionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelNoTransitionInstaller(MissionLevelNoTransitionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelNoTransitionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelNoTransitionInstaller(MissionLevelNoTransitionInstaller const&) = delete;

  /// @brief Field _beatmapLevelSo, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelSO> ____beatmapLevelSo;

  /// @brief Field _beatmapCharacteristic, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____beatmapDifficulty;

  /// @brief Field _colorScheme, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSchemeSO> ____colorScheme;

  /// @brief Field _missionObjectives, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> ____missionObjectives;

  /// @brief Field _gameplayModifiers, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _playerSpecificSettings, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ____playerSpecificSettings;

  /// @brief Field _backButtonText, offset: 0x50, size: 0x8, def value: None
  ::StringW ____backButtonText;

  /// @brief Field _scenesTransitionSetupData, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ____scenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelNoTransitionInstaller, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelNoTransitionInstaller, ____beatmapLevelSo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelNoTransitionInstaller, ____beatmapCharacteristic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelNoTransitionInstaller, ____beatmapDifficulty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelNoTransitionInstaller, ____colorScheme) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelNoTransitionInstaller, ____missionObjectives) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelNoTransitionInstaller, ____gameplayModifiers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelNoTransitionInstaller, ____playerSpecificSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelNoTransitionInstaller, ____backButtonText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelNoTransitionInstaller, ____scenesTransitionSetupData) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelNoTransitionInstaller*, "", "MissionLevelNoTransitionInstaller");
