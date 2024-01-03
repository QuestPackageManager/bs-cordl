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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14717)), TypeDefinitionIndex(TypeDefinitionIndex(11176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6039))
// CS Name: ::MissionLevelNoTransitionInstaller*
class CORDL_TYPE MissionLevelNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
  // Declarations
  /// @brief Field _beatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapLevel, put = __set__beatmapLevel))::GlobalNamespace::BeatmapLevelSO* _beatmapLevel;

  /// @brief Field _beatmapCharacteristic, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapCharacteristic, put = __set__beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* _beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset 0x28, size 0x4
  __declspec(property(get = __get__beatmapDifficulty, put = __set__beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty _beatmapDifficulty;

  /// @brief Field _colorScheme, offset 0x30, size 0x8
  __declspec(property(get = __get__colorScheme, put = __set__colorScheme))::GlobalNamespace::ColorSchemeSO* _colorScheme;

  /// @brief Field _missionObjectives, offset 0x38, size 0x8
  __declspec(property(get = __get__missionObjectives, put = __set__missionObjectives))::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> _missionObjectives;

  /// @brief Field _gameplayModifiers, offset 0x40, size 0x8
  __declspec(property(get = __get__gameplayModifiers, put = __set__gameplayModifiers))::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _playerSpecificSettings, offset 0x48, size 0x8
  __declspec(property(get = __get__playerSpecificSettings, put = __set__playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings;

  /// @brief Field _backButtonText, offset 0x50, size 0x8
  __declspec(property(get = __get__backButtonText, put = __set__backButtonText))::StringW _backButtonText;

  /// @brief Field _scenesTransitionSetupData, offset 0x58, size 0x8
  __declspec(property(get = __get__scenesTransitionSetupData, put = __set__scenesTransitionSetupData))::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* _scenesTransitionSetupData;

  constexpr ::GlobalNamespace::BeatmapLevelSO*& __get__beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelSO*> const& __get__beatmapLevel() const;

  constexpr void __set__beatmapLevel(::GlobalNamespace::BeatmapLevelSO* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__beatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__beatmapCharacteristic() const;

  constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get__beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get__beatmapDifficulty() const;

  constexpr void __set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::GlobalNamespace::ColorSchemeSO*& __get__colorScheme();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeSO*> const& __get__colorScheme() const;

  constexpr void __set__colorScheme(::GlobalNamespace::ColorSchemeSO* value);

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>& __get__missionObjectives();

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const& __get__missionObjectives() const;

  constexpr void __set__missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get__gameplayModifiers() const;

  constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __get__playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __get__playerSpecificSettings() const;

  constexpr void __set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr ::StringW& __get__backButtonText();

  constexpr ::StringW const& __get__backButtonText() const;

  constexpr void __set__backButtonText(::StringW value);

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& __get__scenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> const& __get__scenesTransitionSetupData() const;

  constexpr void __set__scenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* value);

  /// @brief Method InstallBindings, addr 0x231b0f0, size 0xc4, virtual true, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::MissionLevelNoTransitionInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x231b6e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelNoTransitionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelNoTransitionInstaller(MissionLevelNoTransitionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelNoTransitionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelNoTransitionInstaller(MissionLevelNoTransitionInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelNoTransitionInstaller();

public:
  /// @brief Field _beatmapLevel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelSO* ____beatmapLevel;

  /// @brief Field _beatmapCharacteristic, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____beatmapCharacteristic;

  /// @brief Field _beatmapDifficulty, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____beatmapDifficulty;

  /// @brief Field _colorScheme, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeSO* ____colorScheme;

  /// @brief Field _missionObjectives, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> ____missionObjectives;

  /// @brief Field _gameplayModifiers, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _playerSpecificSettings, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ____playerSpecificSettings;

  /// @brief Field _backButtonText, offset: 0x50, size: 0x8, def value: None
  ::StringW ____backButtonText;

  /// @brief Field _scenesTransitionSetupData, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* ____scenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelNoTransitionInstaller, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelNoTransitionInstaller, ____beatmapLevel) == 0x18, "Offset mismatch!");

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
