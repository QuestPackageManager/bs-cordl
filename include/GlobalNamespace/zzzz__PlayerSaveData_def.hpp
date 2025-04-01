#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "GlobalNamespace/zzzz__VersionSaveData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSaveData)
namespace GlobalNamespace {
struct GameplayModifiers_PlayerSaveData_EnabledObstacleType;
}
namespace GlobalNamespace {
struct GameplayModifiers_PlayerSaveData_EnergyType;
}
namespace GlobalNamespace {
struct GameplayModifiers_PlayerSaveData_SongSpeed;
}
namespace GlobalNamespace {
struct PlayerSaveData_ColorOverrideType;
}
namespace GlobalNamespace {
class PlayerSaveData_ColorScheme;
}
namespace GlobalNamespace {
class PlayerSaveData_ColorSchemesSettings;
}
namespace GlobalNamespace {
class PlayerSaveData_GameplayModifiers;
}
namespace GlobalNamespace {
class PlayerSaveData_GuestPlayer;
}
namespace GlobalNamespace {
class PlayerSaveData_LocalPlayer;
}
namespace GlobalNamespace {
class PlayerSaveData_MultiplayerModeSettings;
}
namespace GlobalNamespace {
class PlayerSaveData_OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class PlayerSaveData_PlayerAgreementsData;
}
namespace GlobalNamespace {
class PlayerSaveData_PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class PlayerSaveData_PlayerLevelStatsData;
}
namespace GlobalNamespace {
class PlayerSaveData_PlayerMissionStatsData;
}
namespace GlobalNamespace {
class PlayerSaveData_PlayerOverallStatsData;
}
namespace GlobalNamespace {
struct PlayerSaveData_PlayerSensitivityFlagSaveData;
}
namespace GlobalNamespace {
class PlayerSaveData_PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PlayerSaveData_PracticeSettings;
}
namespace GlobalNamespace {
struct PlayerSaveData_UserAgeCategorySaveData;
}
namespace GlobalNamespace {
struct PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData;
}
namespace GlobalNamespace {
struct PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData;
}
namespace GlobalNamespace {
struct PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameplayModifiers_PlayerSaveData_EnabledObstacleType;
}
namespace GlobalNamespace {
struct GameplayModifiers_PlayerSaveData_EnergyType;
}
namespace GlobalNamespace {
struct GameplayModifiers_PlayerSaveData_SongSpeed;
}
namespace GlobalNamespace {
struct PlayerSaveData_ColorOverrideType;
}
namespace GlobalNamespace {
struct PlayerSaveData_PlayerSensitivityFlagSaveData;
}
namespace GlobalNamespace {
struct PlayerSaveData_UserAgeCategorySaveData;
}
namespace GlobalNamespace {
struct PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData;
}
namespace GlobalNamespace {
struct PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData;
}
namespace GlobalNamespace {
struct PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData;
}
namespace GlobalNamespace {
class PlayerSaveData;
}
namespace GlobalNamespace {
class PlayerSaveData_ColorScheme;
}
namespace GlobalNamespace {
class PlayerSaveData_ColorSchemesSettings;
}
namespace GlobalNamespace {
class PlayerSaveData_GameplayModifiers;
}
namespace GlobalNamespace {
class PlayerSaveData_GuestPlayer;
}
namespace GlobalNamespace {
class PlayerSaveData_LocalPlayer;
}
namespace GlobalNamespace {
class PlayerSaveData_MultiplayerModeSettings;
}
namespace GlobalNamespace {
class PlayerSaveData_OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class PlayerSaveData_PlayerAgreementsData;
}
namespace GlobalNamespace {
class PlayerSaveData_PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class PlayerSaveData_PlayerLevelStatsData;
}
namespace GlobalNamespace {
class PlayerSaveData_PlayerMissionStatsData;
}
namespace GlobalNamespace {
class PlayerSaveData_PlayerOverallStatsData;
}
namespace GlobalNamespace {
class PlayerSaveData_PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PlayerSaveData_PracticeSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType);
MARK_VAL_T(::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType);
MARK_VAL_T(::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed);
MARK_VAL_T(::GlobalNamespace::PlayerSaveData_ColorOverrideType);
MARK_VAL_T(::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData);
MARK_VAL_T(::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData);
MARK_VAL_T(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData);
MARK_VAL_T(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData);
MARK_VAL_T(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData_ColorScheme);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData_ColorSchemesSettings);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData_GameplayModifiers);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData_GuestPlayer);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData_LocalPlayer);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData_PlayerAgreementsData);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData_PracticeSettings);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSaveData/GameplayModifiers/EnabledObstacleType
struct CORDL_TYPE GameplayModifiers_PlayerSaveData_EnabledObstacleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameplayModifiers_PlayerSaveData_EnabledObstacleType_Unwrapped
  enum struct __GameplayModifiers_PlayerSaveData_EnabledObstacleType_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_FullHeightOnly = static_cast<int32_t>(0x1),
    __E_None = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayModifiers_PlayerSaveData_EnabledObstacleType_Unwrapped() const noexcept {
    return static_cast<__GameplayModifiers_PlayerSaveData_EnabledObstacleType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiers_PlayerSaveData_EnabledObstacleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameplayModifiers_PlayerSaveData_EnabledObstacleType(int32_t value__) noexcept;

  /// @brief Field All value: I32(0)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType const All;

  /// @brief Field FullHeightOnly value: I32(1)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType const FullHeightOnly;

  /// @brief Field None value: I32(2)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13283 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSaveData/GameplayModifiers/EnergyType
struct CORDL_TYPE GameplayModifiers_PlayerSaveData_EnergyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameplayModifiers_PlayerSaveData_EnergyType_Unwrapped
  enum struct __GameplayModifiers_PlayerSaveData_EnergyType_Unwrapped : int32_t {
    __E_Bar = static_cast<int32_t>(0x0),
    __E_Battery = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayModifiers_PlayerSaveData_EnergyType_Unwrapped() const noexcept {
    return static_cast<__GameplayModifiers_PlayerSaveData_EnergyType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiers_PlayerSaveData_EnergyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameplayModifiers_PlayerSaveData_EnergyType(int32_t value__) noexcept;

  /// @brief Field Bar value: I32(0)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType const Bar;

  /// @brief Field Battery value: I32(1)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType const Battery;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13284 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSaveData/GameplayModifiers/SongSpeed
struct CORDL_TYPE GameplayModifiers_PlayerSaveData_SongSpeed {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameplayModifiers_PlayerSaveData_SongSpeed_Unwrapped
  enum struct __GameplayModifiers_PlayerSaveData_SongSpeed_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Faster = static_cast<int32_t>(0x1),
    __E_Slower = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayModifiers_PlayerSaveData_SongSpeed_Unwrapped() const noexcept {
    return static_cast<__GameplayModifiers_PlayerSaveData_SongSpeed_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiers_PlayerSaveData_SongSpeed();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameplayModifiers_PlayerSaveData_SongSpeed(int32_t value__) noexcept;

  /// @brief Field Faster value: I32(1)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed const Faster;

  /// @brief Field Normal value: I32(0)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed const Normal;

  /// @brief Field Slower value: I32(2)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed const Slower;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13285 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PlayerSaveData::GameplayModifiers::EnabledObstacleType, PlayerSaveData::GameplayModifiers::EnergyType, PlayerSaveData::GameplayModifiers::SongSpeed, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData/GameplayModifiers
class CORDL_TYPE PlayerSaveData_GameplayModifiers : public ::System::Object {
public:
  // Declarations
  using EnabledObstacleType = ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType;

  using EnergyType = ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType;

  using SongSpeed = ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed;

  /// @brief Field disappearingArrows, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get_disappearingArrows, put = __cordl_internal_set_disappearingArrows)) bool disappearingArrows;

  /// @brief Field enabledObstacleType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_enabledObstacleType,
                      put = __cordl_internal_set_enabledObstacleType)) ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType enabledObstacleType;

  /// @brief Field energyType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_energyType, put = __cordl_internal_set_energyType)) ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType energyType;

  /// @brief Field failOnSaberClash, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get_failOnSaberClash, put = __cordl_internal_set_failOnSaberClash)) bool failOnSaberClash;

  /// @brief Field fastNotes, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_fastNotes, put = __cordl_internal_set_fastNotes)) bool fastNotes;

  /// @brief Field ghostNotes, offset 0x1f, size 0x1
  __declspec(property(get = __cordl_internal_get_ghostNotes, put = __cordl_internal_set_ghostNotes)) bool ghostNotes;

  /// @brief Field instaFail, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_instaFail, put = __cordl_internal_set_instaFail)) bool instaFail;

  /// @brief Field noArrows, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_noArrows, put = __cordl_internal_set_noArrows)) bool noArrows;

  /// @brief Field noBombs, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_noBombs, put = __cordl_internal_set_noBombs)) bool noBombs;

  /// @brief Field noFailOn0Energy, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_noFailOn0Energy, put = __cordl_internal_set_noFailOn0Energy)) bool noFailOn0Energy;

  /// @brief Field proMode, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_proMode, put = __cordl_internal_set_proMode)) bool proMode;

  /// @brief Field smallCubes, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get_smallCubes, put = __cordl_internal_set_smallCubes)) bool smallCubes;

  /// @brief Field songSpeed, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_songSpeed, put = __cordl_internal_set_songSpeed)) ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed songSpeed;

  /// @brief Field strictAngles, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_strictAngles, put = __cordl_internal_set_strictAngles)) bool strictAngles;

  /// @brief Field zenMode, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_zenMode, put = __cordl_internal_set_zenMode)) bool zenMode;

  static inline ::GlobalNamespace::PlayerSaveData_GameplayModifiers* New_ctor();

  constexpr bool const& __cordl_internal_get_disappearingArrows() const;

  constexpr bool& __cordl_internal_get_disappearingArrows();

  constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType const& __cordl_internal_get_enabledObstacleType() const;

  constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType& __cordl_internal_get_enabledObstacleType();

  constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType const& __cordl_internal_get_energyType() const;

  constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType& __cordl_internal_get_energyType();

  constexpr bool const& __cordl_internal_get_failOnSaberClash() const;

  constexpr bool& __cordl_internal_get_failOnSaberClash();

  constexpr bool const& __cordl_internal_get_fastNotes() const;

  constexpr bool& __cordl_internal_get_fastNotes();

  constexpr bool const& __cordl_internal_get_ghostNotes() const;

  constexpr bool& __cordl_internal_get_ghostNotes();

  constexpr bool const& __cordl_internal_get_instaFail() const;

  constexpr bool& __cordl_internal_get_instaFail();

  constexpr bool const& __cordl_internal_get_noArrows() const;

  constexpr bool& __cordl_internal_get_noArrows();

  constexpr bool const& __cordl_internal_get_noBombs() const;

  constexpr bool& __cordl_internal_get_noBombs();

  constexpr bool const& __cordl_internal_get_noFailOn0Energy() const;

  constexpr bool& __cordl_internal_get_noFailOn0Energy();

  constexpr bool const& __cordl_internal_get_proMode() const;

  constexpr bool& __cordl_internal_get_proMode();

  constexpr bool const& __cordl_internal_get_smallCubes() const;

  constexpr bool& __cordl_internal_get_smallCubes();

  constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed const& __cordl_internal_get_songSpeed() const;

  constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed& __cordl_internal_get_songSpeed();

  constexpr bool const& __cordl_internal_get_strictAngles() const;

  constexpr bool& __cordl_internal_get_strictAngles();

  constexpr bool const& __cordl_internal_get_zenMode() const;

  constexpr bool& __cordl_internal_get_zenMode();

  constexpr void __cordl_internal_set_disappearingArrows(bool value);

  constexpr void __cordl_internal_set_enabledObstacleType(::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType value);

  constexpr void __cordl_internal_set_energyType(::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType value);

  constexpr void __cordl_internal_set_failOnSaberClash(bool value);

  constexpr void __cordl_internal_set_fastNotes(bool value);

  constexpr void __cordl_internal_set_ghostNotes(bool value);

  constexpr void __cordl_internal_set_instaFail(bool value);

  constexpr void __cordl_internal_set_noArrows(bool value);

  constexpr void __cordl_internal_set_noBombs(bool value);

  constexpr void __cordl_internal_set_noFailOn0Energy(bool value);

  constexpr void __cordl_internal_set_proMode(bool value);

  constexpr void __cordl_internal_set_smallCubes(bool value);

  constexpr void __cordl_internal_set_songSpeed(::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed value);

  constexpr void __cordl_internal_set_strictAngles(bool value);

  constexpr void __cordl_internal_set_zenMode(bool value);

  /// @brief Method .ctor, addr 0x26f1ec0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_GameplayModifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_GameplayModifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData_GameplayModifiers(PlayerSaveData_GameplayModifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_GameplayModifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData_GameplayModifiers(PlayerSaveData_GameplayModifiers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13286 };

  /// @brief Field energyType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType ___energyType;

  /// @brief Field noFailOn0Energy, offset: 0x14, size: 0x1, def value: None
  bool ___noFailOn0Energy;

  /// @brief Field instaFail, offset: 0x15, size: 0x1, def value: None
  bool ___instaFail;

  /// @brief Field failOnSaberClash, offset: 0x16, size: 0x1, def value: None
  bool ___failOnSaberClash;

  /// @brief Field enabledObstacleType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType ___enabledObstacleType;

  /// @brief Field fastNotes, offset: 0x1c, size: 0x1, def value: None
  bool ___fastNotes;

  /// @brief Field strictAngles, offset: 0x1d, size: 0x1, def value: None
  bool ___strictAngles;

  /// @brief Field disappearingArrows, offset: 0x1e, size: 0x1, def value: None
  bool ___disappearingArrows;

  /// @brief Field ghostNotes, offset: 0x1f, size: 0x1, def value: None
  bool ___ghostNotes;

  /// @brief Field noBombs, offset: 0x20, size: 0x1, def value: None
  bool ___noBombs;

  /// @brief Field songSpeed, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed ___songSpeed;

  /// @brief Field noArrows, offset: 0x28, size: 0x1, def value: None
  bool ___noArrows;

  /// @brief Field proMode, offset: 0x29, size: 0x1, def value: None
  bool ___proMode;

  /// @brief Field zenMode, offset: 0x2a, size: 0x1, def value: None
  bool ___zenMode;

  /// @brief Field smallCubes, offset: 0x2b, size: 0x1, def value: None
  bool ___smallCubes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___energyType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___noFailOn0Energy) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___instaFail) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___failOnSaberClash) == 0x16, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___enabledObstacleType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___fastNotes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___strictAngles) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___disappearingArrows) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___ghostNotes) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___noBombs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___songSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___noArrows) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___proMode) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___zenMode) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GameplayModifiers, ___smallCubes) == 0x2b, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_GameplayModifiers, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSaveData/ColorOverrideType
struct CORDL_TYPE PlayerSaveData_ColorOverrideType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlayerSaveData_ColorOverrideType_Unwrapped
  enum struct __PlayerSaveData_ColorOverrideType_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_NotesOnly = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlayerSaveData_ColorOverrideType_Unwrapped() const noexcept {
    return static_cast<__PlayerSaveData_ColorOverrideType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_ColorOverrideType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayerSaveData_ColorOverrideType(int32_t value__) noexcept;

  /// @brief Field All value: I32(0)
  static ::GlobalNamespace::PlayerSaveData_ColorOverrideType const All;

  /// @brief Field NotesOnly value: I32(1)
  static ::GlobalNamespace::PlayerSaveData_ColorOverrideType const NotesOnly;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13287 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_ColorOverrideType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_ColorOverrideType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData
struct CORDL_TYPE PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData_Unwrapped
  enum struct __PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData_Unwrapped : int32_t {
    __E_AllEffects = static_cast<int32_t>(0x0),
    __E_StrobeFilter = static_cast<int32_t>(0x1),
    __E_NoEffects = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData_Unwrapped() const noexcept {
    return static_cast<__PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData(int32_t value__) noexcept;

  /// @brief Field AllEffects value: I32(0)
  static ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData const AllEffects;

  /// @brief Field NoEffects value: I32(10)
  static ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData const NoEffects;

  /// @brief Field StrobeFilter value: I32(1)
  static ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData const StrobeFilter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13288 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSaveData/PlayerSpecificSettings/ArcVisibilityTypeSaveData
struct CORDL_TYPE PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData_Unwrapped
  enum struct __PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Standard = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData_Unwrapped() const noexcept {
    return static_cast<__PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData(int32_t value__) noexcept;

  /// @brief Field High value: I32(3)
  static ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData const High;

  /// @brief Field Low value: I32(1)
  static ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData const Low;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData const None;

  /// @brief Field Standard value: I32(2)
  static ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData const Standard;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13289 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData
struct CORDL_TYPE PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData_Unwrapped
  enum struct __PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData_Unwrapped : int32_t {
    __E_Dynamic = static_cast<int32_t>(0x0),
    __E_Static = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData_Unwrapped() const noexcept {
    return static_cast<__PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData(int32_t value__) noexcept;

  /// @brief Field Dynamic value: I32(0)
  static ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData const Dynamic;

  /// @brief Field Static value: I32(1)
  static ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData const Static;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13290 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PlayerSaveData::PlayerSpecificSettings::ArcVisibilityTypeSaveData, PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData,
// PlayerSaveData::PlayerSpecificSettings::NoteJumpDurationTypeSettingsSaveData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData/PlayerSpecificSettings
class CORDL_TYPE PlayerSaveData_PlayerSpecificSettings : public ::System::Object {
public:
  // Declarations
  using ArcVisibilityTypeSaveData = ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData;

  using EnvironmentEffectsFilterPresetSaveData = ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData;

  using NoteJumpDurationTypeSettingsSaveData = ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData;

  /// @brief Field _noteJumpDurationTypeSettingsSaveData, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__noteJumpDurationTypeSettingsSaveData,
                      put = __cordl_internal_set__noteJumpDurationTypeSettingsSaveData)) ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData
      _noteJumpDurationTypeSettingsSaveData;

  /// @brief Field adaptiveSfx, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_adaptiveSfx, put = __cordl_internal_set_adaptiveSfx)) bool adaptiveSfx;

  /// @brief Field advancedHud, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_advancedHud, put = __cordl_internal_set_advancedHud)) bool advancedHud;

  /// @brief Field arcsHapticFeedback, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_arcsHapticFeedback, put = __cordl_internal_set_arcsHapticFeedback)) bool arcsHapticFeedback;

  /// @brief Field arcsVisibleSaveData, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_arcsVisibleSaveData,
                      put = __cordl_internal_set_arcsVisibleSaveData)) ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData arcsVisibleSaveData;

  /// @brief Field autoRestart, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_autoRestart, put = __cordl_internal_set_autoRestart)) bool autoRestart;

  /// @brief Field automaticPlayerHeight, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_automaticPlayerHeight, put = __cordl_internal_set_automaticPlayerHeight)) bool automaticPlayerHeight;

  /// @brief Field environmentEffectsFilterDefaultPreset, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_environmentEffectsFilterDefaultPreset,
                      put = __cordl_internal_set_environmentEffectsFilterDefaultPreset)) ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData
      environmentEffectsFilterDefaultPreset;

  /// @brief Field environmentEffectsFilterExpertPlusPreset, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_environmentEffectsFilterExpertPlusPreset,
                      put = __cordl_internal_set_environmentEffectsFilterExpertPlusPreset)) ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData
      environmentEffectsFilterExpertPlusPreset;

  /// @brief Field headsetHapticIntensity, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_headsetHapticIntensity, put = __cordl_internal_set_headsetHapticIntensity)) float_t headsetHapticIntensity;

  /// @brief Field hideNoteSpawnEffect, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_hideNoteSpawnEffect, put = __cordl_internal_set_hideNoteSpawnEffect)) bool hideNoteSpawnEffect;

  /// @brief Field leftHanded, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_leftHanded, put = __cordl_internal_set_leftHanded)) bool leftHanded;

  /// @brief Field noFailEffects, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_noFailEffects, put = __cordl_internal_set_noFailEffects)) bool noFailEffects;

  /// @brief Field noTextsAndHuds, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_noTextsAndHuds, put = __cordl_internal_set_noTextsAndHuds)) bool noTextsAndHuds;

  /// @brief Field noteJumpBeatOffset, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_noteJumpBeatOffset, put = __cordl_internal_set_noteJumpBeatOffset)) float_t noteJumpBeatOffset;

  /// @brief Field noteJumpFixedDuration, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_noteJumpFixedDuration, put = __cordl_internal_set_noteJumpFixedDuration)) float_t noteJumpFixedDuration;

  /// @brief Field playerHeight, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_playerHeight, put = __cordl_internal_set_playerHeight)) float_t playerHeight;

  /// @brief Field reduceDebris, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_reduceDebris, put = __cordl_internal_set_reduceDebris)) bool reduceDebris;

  /// @brief Field saberTrailIntensity, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_saberTrailIntensity, put = __cordl_internal_set_saberTrailIntensity)) float_t saberTrailIntensity;

  /// @brief Field sfxVolume, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_sfxVolume, put = __cordl_internal_set_sfxVolume)) float_t sfxVolume;

  /// @brief Field staticLights, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_staticLights, put = __cordl_internal_set_staticLights)) bool staticLights;

  static inline ::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings* New_ctor();

  constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData const& __cordl_internal_get__noteJumpDurationTypeSettingsSaveData() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData& __cordl_internal_get__noteJumpDurationTypeSettingsSaveData();

  constexpr bool const& __cordl_internal_get_adaptiveSfx() const;

  constexpr bool& __cordl_internal_get_adaptiveSfx();

  constexpr bool const& __cordl_internal_get_advancedHud() const;

  constexpr bool& __cordl_internal_get_advancedHud();

  constexpr bool const& __cordl_internal_get_arcsHapticFeedback() const;

  constexpr bool& __cordl_internal_get_arcsHapticFeedback();

  constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData const& __cordl_internal_get_arcsVisibleSaveData() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData& __cordl_internal_get_arcsVisibleSaveData();

  constexpr bool const& __cordl_internal_get_autoRestart() const;

  constexpr bool& __cordl_internal_get_autoRestart();

  constexpr bool const& __cordl_internal_get_automaticPlayerHeight() const;

  constexpr bool& __cordl_internal_get_automaticPlayerHeight();

  constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData const& __cordl_internal_get_environmentEffectsFilterDefaultPreset() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData& __cordl_internal_get_environmentEffectsFilterDefaultPreset();

  constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData const& __cordl_internal_get_environmentEffectsFilterExpertPlusPreset() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData& __cordl_internal_get_environmentEffectsFilterExpertPlusPreset();

  constexpr float_t const& __cordl_internal_get_headsetHapticIntensity() const;

  constexpr float_t& __cordl_internal_get_headsetHapticIntensity();

  constexpr bool const& __cordl_internal_get_hideNoteSpawnEffect() const;

  constexpr bool& __cordl_internal_get_hideNoteSpawnEffect();

  constexpr bool const& __cordl_internal_get_leftHanded() const;

  constexpr bool& __cordl_internal_get_leftHanded();

  constexpr bool const& __cordl_internal_get_noFailEffects() const;

  constexpr bool& __cordl_internal_get_noFailEffects();

  constexpr bool const& __cordl_internal_get_noTextsAndHuds() const;

  constexpr bool& __cordl_internal_get_noTextsAndHuds();

  constexpr float_t const& __cordl_internal_get_noteJumpBeatOffset() const;

  constexpr float_t& __cordl_internal_get_noteJumpBeatOffset();

  constexpr float_t const& __cordl_internal_get_noteJumpFixedDuration() const;

  constexpr float_t& __cordl_internal_get_noteJumpFixedDuration();

  constexpr float_t const& __cordl_internal_get_playerHeight() const;

  constexpr float_t& __cordl_internal_get_playerHeight();

  constexpr bool const& __cordl_internal_get_reduceDebris() const;

  constexpr bool& __cordl_internal_get_reduceDebris();

  constexpr float_t const& __cordl_internal_get_saberTrailIntensity() const;

  constexpr float_t& __cordl_internal_get_saberTrailIntensity();

  constexpr float_t const& __cordl_internal_get_sfxVolume() const;

  constexpr float_t& __cordl_internal_get_sfxVolume();

  constexpr bool const& __cordl_internal_get_staticLights() const;

  constexpr bool& __cordl_internal_get_staticLights();

  constexpr void __cordl_internal_set__noteJumpDurationTypeSettingsSaveData(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData value);

  constexpr void __cordl_internal_set_adaptiveSfx(bool value);

  constexpr void __cordl_internal_set_advancedHud(bool value);

  constexpr void __cordl_internal_set_arcsHapticFeedback(bool value);

  constexpr void __cordl_internal_set_arcsVisibleSaveData(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData value);

  constexpr void __cordl_internal_set_autoRestart(bool value);

  constexpr void __cordl_internal_set_automaticPlayerHeight(bool value);

  constexpr void __cordl_internal_set_environmentEffectsFilterDefaultPreset(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData value);

  constexpr void __cordl_internal_set_environmentEffectsFilterExpertPlusPreset(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData value);

  constexpr void __cordl_internal_set_headsetHapticIntensity(float_t value);

  constexpr void __cordl_internal_set_hideNoteSpawnEffect(bool value);

  constexpr void __cordl_internal_set_leftHanded(bool value);

  constexpr void __cordl_internal_set_noFailEffects(bool value);

  constexpr void __cordl_internal_set_noTextsAndHuds(bool value);

  constexpr void __cordl_internal_set_noteJumpBeatOffset(float_t value);

  constexpr void __cordl_internal_set_noteJumpFixedDuration(float_t value);

  constexpr void __cordl_internal_set_playerHeight(float_t value);

  constexpr void __cordl_internal_set_reduceDebris(bool value);

  constexpr void __cordl_internal_set_saberTrailIntensity(float_t value);

  constexpr void __cordl_internal_set_sfxVolume(float_t value);

  constexpr void __cordl_internal_set_staticLights(bool value);

  /// @brief Method .ctor, addr 0x26f1ec8, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_PlayerSpecificSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_PlayerSpecificSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData_PlayerSpecificSettings(PlayerSaveData_PlayerSpecificSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_PlayerSpecificSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData_PlayerSpecificSettings(PlayerSaveData_PlayerSpecificSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13291 };

  /// @brief Field staticLights, offset: 0x10, size: 0x1, def value: None
  bool ___staticLights;

  /// @brief Field leftHanded, offset: 0x11, size: 0x1, def value: None
  bool ___leftHanded;

  /// @brief Field playerHeight, offset: 0x14, size: 0x4, def value: None
  float_t ___playerHeight;

  /// @brief Field automaticPlayerHeight, offset: 0x18, size: 0x1, def value: None
  bool ___automaticPlayerHeight;

  /// @brief Field sfxVolume, offset: 0x1c, size: 0x4, def value: None
  float_t ___sfxVolume;

  /// @brief Field reduceDebris, offset: 0x20, size: 0x1, def value: None
  bool ___reduceDebris;

  /// @brief Field noTextsAndHuds, offset: 0x21, size: 0x1, def value: None
  bool ___noTextsAndHuds;

  /// @brief Field advancedHud, offset: 0x22, size: 0x1, def value: None
  bool ___advancedHud;

  /// @brief Field saberTrailIntensity, offset: 0x24, size: 0x4, def value: None
  float_t ___saberTrailIntensity;

  /// @brief Field _noteJumpDurationTypeSettingsSaveData, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData ____noteJumpDurationTypeSettingsSaveData;

  /// @brief Field noteJumpFixedDuration, offset: 0x2c, size: 0x4, def value: None
  float_t ___noteJumpFixedDuration;

  /// @brief Field autoRestart, offset: 0x30, size: 0x1, def value: None
  bool ___autoRestart;

  /// @brief Field noFailEffects, offset: 0x31, size: 0x1, def value: None
  bool ___noFailEffects;

  /// @brief Field noteJumpBeatOffset, offset: 0x34, size: 0x4, def value: None
  float_t ___noteJumpBeatOffset;

  /// @brief Field hideNoteSpawnEffect, offset: 0x38, size: 0x1, def value: None
  bool ___hideNoteSpawnEffect;

  /// @brief Field adaptiveSfx, offset: 0x39, size: 0x1, def value: None
  bool ___adaptiveSfx;

  /// @brief Field arcsHapticFeedback, offset: 0x3a, size: 0x1, def value: None
  bool ___arcsHapticFeedback;

  /// @brief Field arcsVisibleSaveData, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData ___arcsVisibleSaveData;

  /// @brief Field environmentEffectsFilterDefaultPreset, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData ___environmentEffectsFilterDefaultPreset;

  /// @brief Field environmentEffectsFilterExpertPlusPreset, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData ___environmentEffectsFilterExpertPlusPreset;

  /// @brief Field headsetHapticIntensity, offset: 0x48, size: 0x4, def value: None
  float_t ___headsetHapticIntensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___staticLights) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___leftHanded) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___playerHeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___automaticPlayerHeight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___sfxVolume) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___reduceDebris) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___noTextsAndHuds) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___advancedHud) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___saberTrailIntensity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ____noteJumpDurationTypeSettingsSaveData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___noteJumpFixedDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___autoRestart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___noFailEffects) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___noteJumpBeatOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___hideNoteSpawnEffect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___adaptiveSfx) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___arcsHapticFeedback) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___arcsVisibleSaveData) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___environmentEffectsFilterDefaultPreset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___environmentEffectsFilterExpertPlusPreset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, ___headsetHapticIntensity) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData/PlayerAllOverallStatsData
class CORDL_TYPE PlayerSaveData_PlayerAllOverallStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field campaignOverallStatsData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_campaignOverallStatsData,
                      put = __cordl_internal_set_campaignOverallStatsData)) ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* campaignOverallStatsData;

  /// @brief Field onlinePlayOverallStatsData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onlinePlayOverallStatsData,
                      put = __cordl_internal_set_onlinePlayOverallStatsData)) ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* onlinePlayOverallStatsData;

  /// @brief Field partyFreePlayOverallStatsData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_partyFreePlayOverallStatsData,
                      put = __cordl_internal_set_partyFreePlayOverallStatsData)) ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* partyFreePlayOverallStatsData;

  /// @brief Field soloFreePlayOverallStatsData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_soloFreePlayOverallStatsData,
                      put = __cordl_internal_set_soloFreePlayOverallStatsData)) ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* soloFreePlayOverallStatsData;

  static inline ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData* New_ctor();

  static inline ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData* New_ctor(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* campaignOverallStatsData,
                                                                                      ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* soloFreePlayOverallStatsData,
                                                                                      ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* partyFreePlayOverallStatsData,
                                                                                      ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* onlinePlayOverallStatsData);

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* const& __cordl_internal_get_campaignOverallStatsData() const;

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*& __cordl_internal_get_campaignOverallStatsData();

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* const& __cordl_internal_get_onlinePlayOverallStatsData() const;

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*& __cordl_internal_get_onlinePlayOverallStatsData();

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* const& __cordl_internal_get_partyFreePlayOverallStatsData() const;

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*& __cordl_internal_get_partyFreePlayOverallStatsData();

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* const& __cordl_internal_get_soloFreePlayOverallStatsData() const;

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*& __cordl_internal_get_soloFreePlayOverallStatsData();

  constexpr void __cordl_internal_set_campaignOverallStatsData(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* value);

  constexpr void __cordl_internal_set_onlinePlayOverallStatsData(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* value);

  constexpr void __cordl_internal_set_partyFreePlayOverallStatsData(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* value);

  constexpr void __cordl_internal_set_soloFreePlayOverallStatsData(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* value);

  /// @brief Method .ctor, addr 0x26f5804, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x26f5998, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* campaignOverallStatsData, ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* soloFreePlayOverallStatsData,
                    ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* partyFreePlayOverallStatsData, ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* onlinePlayOverallStatsData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_PlayerAllOverallStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_PlayerAllOverallStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData_PlayerAllOverallStatsData(PlayerSaveData_PlayerAllOverallStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_PlayerAllOverallStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData_PlayerAllOverallStatsData(PlayerSaveData_PlayerAllOverallStatsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13292 };

  /// @brief Field campaignOverallStatsData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* ___campaignOverallStatsData;

  /// @brief Field soloFreePlayOverallStatsData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* ___soloFreePlayOverallStatsData;

  /// @brief Field partyFreePlayOverallStatsData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* ___partyFreePlayOverallStatsData;

  /// @brief Field onlinePlayOverallStatsData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* ___onlinePlayOverallStatsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData, ___campaignOverallStatsData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData, ___soloFreePlayOverallStatsData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData, ___partyFreePlayOverallStatsData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData, ___onlinePlayOverallStatsData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData/PlayerOverallStatsData
class CORDL_TYPE PlayerSaveData_PlayerOverallStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field badCutsCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_badCutsCount, put = __cordl_internal_set_badCutsCount)) int32_t badCutsCount;

  /// @brief Field cleardLevelsCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_cleardLevelsCount, put = __cordl_internal_set_cleardLevelsCount)) int32_t cleardLevelsCount;

  /// @brief Field cummulativeCutScoreWithoutMultiplier, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_cummulativeCutScoreWithoutMultiplier, put = __cordl_internal_set_cummulativeCutScoreWithoutMultiplier)) int64_t cummulativeCutScoreWithoutMultiplier;

  /// @brief Field failedLevelsCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_failedLevelsCount, put = __cordl_internal_set_failedLevelsCount)) int32_t failedLevelsCount;

  /// @brief Field fullComboCount, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_fullComboCount, put = __cordl_internal_set_fullComboCount)) int32_t fullComboCount;

  /// @brief Field goodCutsCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_goodCutsCount, put = __cordl_internal_set_goodCutsCount)) int32_t goodCutsCount;

  /// @brief Field handDistanceTravelled, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_handDistanceTravelled, put = __cordl_internal_set_handDistanceTravelled)) int32_t handDistanceTravelled;

  /// @brief Field missedCutsCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_missedCutsCount, put = __cordl_internal_set_missedCutsCount)) int32_t missedCutsCount;

  /// @brief Field playedLevelsCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_playedLevelsCount, put = __cordl_internal_set_playedLevelsCount)) int32_t playedLevelsCount;

  /// @brief Field timePlayed, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_timePlayed, put = __cordl_internal_set_timePlayed)) float_t timePlayed;

  /// @brief Field totalScore, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_totalScore, put = __cordl_internal_set_totalScore)) int64_t totalScore;

  static inline ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* New_ctor();

  static inline ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* New_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount,
                                                                                   int32_t clearedLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed,
                                                                                   int32_t handDistanceTravelled, int64_t cumulativeCutScoreWithoutMultiplier);

  constexpr int32_t const& __cordl_internal_get_badCutsCount() const;

  constexpr int32_t& __cordl_internal_get_badCutsCount();

  constexpr int32_t const& __cordl_internal_get_cleardLevelsCount() const;

  constexpr int32_t& __cordl_internal_get_cleardLevelsCount();

  constexpr int64_t const& __cordl_internal_get_cummulativeCutScoreWithoutMultiplier() const;

  constexpr int64_t& __cordl_internal_get_cummulativeCutScoreWithoutMultiplier();

  constexpr int32_t const& __cordl_internal_get_failedLevelsCount() const;

  constexpr int32_t& __cordl_internal_get_failedLevelsCount();

  constexpr int32_t const& __cordl_internal_get_fullComboCount() const;

  constexpr int32_t& __cordl_internal_get_fullComboCount();

  constexpr int32_t const& __cordl_internal_get_goodCutsCount() const;

  constexpr int32_t& __cordl_internal_get_goodCutsCount();

  constexpr int32_t const& __cordl_internal_get_handDistanceTravelled() const;

  constexpr int32_t& __cordl_internal_get_handDistanceTravelled();

  constexpr int32_t const& __cordl_internal_get_missedCutsCount() const;

  constexpr int32_t& __cordl_internal_get_missedCutsCount();

  constexpr int32_t const& __cordl_internal_get_playedLevelsCount() const;

  constexpr int32_t& __cordl_internal_get_playedLevelsCount();

  constexpr float_t const& __cordl_internal_get_timePlayed() const;

  constexpr float_t& __cordl_internal_get_timePlayed();

  constexpr int64_t const& __cordl_internal_get_totalScore() const;

  constexpr int64_t& __cordl_internal_get_totalScore();

  constexpr void __cordl_internal_set_badCutsCount(int32_t value);

  constexpr void __cordl_internal_set_cleardLevelsCount(int32_t value);

  constexpr void __cordl_internal_set_cummulativeCutScoreWithoutMultiplier(int64_t value);

  constexpr void __cordl_internal_set_failedLevelsCount(int32_t value);

  constexpr void __cordl_internal_set_fullComboCount(int32_t value);

  constexpr void __cordl_internal_set_goodCutsCount(int32_t value);

  constexpr void __cordl_internal_set_handDistanceTravelled(int32_t value);

  constexpr void __cordl_internal_set_missedCutsCount(int32_t value);

  constexpr void __cordl_internal_set_playedLevelsCount(int32_t value);

  constexpr void __cordl_internal_set_timePlayed(float_t value);

  constexpr void __cordl_internal_set_totalScore(int64_t value);

  /// @brief Method .ctor, addr 0x26f59d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x26f59e0, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t clearedLevelsCount, int32_t failedLevelsCount,
                    int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t cumulativeCutScoreWithoutMultiplier);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_PlayerOverallStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_PlayerOverallStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData_PlayerOverallStatsData(PlayerSaveData_PlayerOverallStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_PlayerOverallStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData_PlayerOverallStatsData(PlayerSaveData_PlayerOverallStatsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13293 };

  /// @brief Field goodCutsCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___goodCutsCount;

  /// @brief Field badCutsCount, offset: 0x14, size: 0x4, def value: None
  int32_t ___badCutsCount;

  /// @brief Field missedCutsCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___missedCutsCount;

  /// @brief Field totalScore, offset: 0x20, size: 0x8, def value: None
  int64_t ___totalScore;

  /// @brief Field playedLevelsCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___playedLevelsCount;

  /// @brief Field cleardLevelsCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ___cleardLevelsCount;

  /// @brief Field failedLevelsCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___failedLevelsCount;

  /// @brief Field fullComboCount, offset: 0x34, size: 0x4, def value: None
  int32_t ___fullComboCount;

  /// @brief Field timePlayed, offset: 0x38, size: 0x4, def value: None
  float_t ___timePlayed;

  /// @brief Field handDistanceTravelled, offset: 0x3c, size: 0x4, def value: None
  int32_t ___handDistanceTravelled;

  /// @brief Field cummulativeCutScoreWithoutMultiplier, offset: 0x40, size: 0x8, def value: None
  int64_t ___cummulativeCutScoreWithoutMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData, ___goodCutsCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData, ___badCutsCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData, ___missedCutsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData, ___totalScore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData, ___playedLevelsCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData, ___cleardLevelsCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData, ___failedLevelsCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData, ___fullComboCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData, ___timePlayed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData, ___handDistanceTravelled) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData, ___cummulativeCutScoreWithoutMultiplier) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficulty, RankModel::Rank, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData/PlayerLevelStatsData
class CORDL_TYPE PlayerSaveData_PlayerLevelStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapCharacteristicName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristicName, put = __cordl_internal_set_beatmapCharacteristicName)) ::StringW beatmapCharacteristicName;

  /// @brief Field difficulty, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_difficulty, put = __cordl_internal_set_difficulty)) ::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field fullCombo, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_fullCombo, put = __cordl_internal_set_fullCombo)) bool fullCombo;

  /// @brief Field highScore, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_highScore, put = __cordl_internal_set_highScore)) int32_t highScore;

  /// @brief Field levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelId, put = __cordl_internal_set_levelId)) ::StringW levelId;

  /// @brief Field maxCombo, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxCombo, put = __cordl_internal_set_maxCombo)) int32_t maxCombo;

  /// @brief Field maxRank, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_maxRank, put = __cordl_internal_set_maxRank)) ::GlobalNamespace::RankModel_Rank maxRank;

  /// @brief Field playCount, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_playCount, put = __cordl_internal_set_playCount)) int32_t playCount;

  /// @brief Field validScore, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_validScore, put = __cordl_internal_set_validScore)) bool validScore;

  static inline ::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_beatmapCharacteristicName() const;

  constexpr ::StringW& __cordl_internal_get_beatmapCharacteristicName();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_difficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_difficulty();

  constexpr bool const& __cordl_internal_get_fullCombo() const;

  constexpr bool& __cordl_internal_get_fullCombo();

  constexpr int32_t const& __cordl_internal_get_highScore() const;

  constexpr int32_t& __cordl_internal_get_highScore();

  constexpr ::StringW const& __cordl_internal_get_levelId() const;

  constexpr ::StringW& __cordl_internal_get_levelId();

  constexpr int32_t const& __cordl_internal_get_maxCombo() const;

  constexpr int32_t& __cordl_internal_get_maxCombo();

  constexpr ::GlobalNamespace::RankModel_Rank const& __cordl_internal_get_maxRank() const;

  constexpr ::GlobalNamespace::RankModel_Rank& __cordl_internal_get_maxRank();

  constexpr int32_t const& __cordl_internal_get_playCount() const;

  constexpr int32_t& __cordl_internal_get_playCount();

  constexpr bool const& __cordl_internal_get_validScore() const;

  constexpr bool& __cordl_internal_get_validScore();

  constexpr void __cordl_internal_set_beatmapCharacteristicName(::StringW value);

  constexpr void __cordl_internal_set_difficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set_fullCombo(bool value);

  constexpr void __cordl_internal_set_highScore(int32_t value);

  constexpr void __cordl_internal_set_levelId(::StringW value);

  constexpr void __cordl_internal_set_maxCombo(int32_t value);

  constexpr void __cordl_internal_set_maxRank(::GlobalNamespace::RankModel_Rank value);

  constexpr void __cordl_internal_set_playCount(int32_t value);

  constexpr void __cordl_internal_set_validScore(bool value);

  /// @brief Method .ctor, addr 0x26f1ffc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_PlayerLevelStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_PlayerLevelStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData_PlayerLevelStatsData(PlayerSaveData_PlayerLevelStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_PlayerLevelStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData_PlayerLevelStatsData(PlayerSaveData_PlayerLevelStatsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13294 };

  /// @brief Field levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___levelId;

  /// @brief Field difficulty, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___difficulty;

  /// @brief Field beatmapCharacteristicName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___beatmapCharacteristicName;

  /// @brief Field highScore, offset: 0x28, size: 0x4, def value: None
  int32_t ___highScore;

  /// @brief Field maxCombo, offset: 0x2c, size: 0x4, def value: None
  int32_t ___maxCombo;

  /// @brief Field fullCombo, offset: 0x30, size: 0x1, def value: None
  bool ___fullCombo;

  /// @brief Field maxRank, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::RankModel_Rank ___maxRank;

  /// @brief Field validScore, offset: 0x38, size: 0x1, def value: None
  bool ___validScore;

  /// @brief Field playCount, offset: 0x3c, size: 0x4, def value: None
  int32_t ___playCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData, ___levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData, ___difficulty) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData, ___beatmapCharacteristicName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData, ___highScore) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData, ___maxCombo) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData, ___fullCombo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData, ___maxRank) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData, ___validScore) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData, ___playCount) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData/PlayerMissionStatsData
class CORDL_TYPE PlayerSaveData_PlayerMissionStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cleared, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_cleared, put = __cordl_internal_set_cleared)) bool cleared;

  /// @brief Field missionId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_missionId, put = __cordl_internal_set_missionId)) ::StringW missionId;

  static inline ::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData* New_ctor();

  constexpr bool const& __cordl_internal_get_cleared() const;

  constexpr bool& __cordl_internal_get_cleared();

  constexpr ::StringW const& __cordl_internal_get_missionId() const;

  constexpr ::StringW& __cordl_internal_get_missionId();

  constexpr void __cordl_internal_set_cleared(bool value);

  constexpr void __cordl_internal_set_missionId(::StringW value);

  /// @brief Method .ctor, addr 0x26f2004, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_PlayerMissionStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_PlayerMissionStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData_PlayerMissionStatsData(PlayerSaveData_PlayerMissionStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_PlayerMissionStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData_PlayerMissionStatsData(PlayerSaveData_PlayerMissionStatsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13295 };

  /// @brief Field missionId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___missionId;

  /// @brief Field cleared, offset: 0x18, size: 0x1, def value: None
  bool ___cleared;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData, ___missionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData, ___cleared) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData/PracticeSettings
class CORDL_TYPE PlayerSaveData_PracticeSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field songSpeedMul, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_songSpeedMul, put = __cordl_internal_set_songSpeedMul)) float_t songSpeedMul;

  /// @brief Field startSongTime, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_startSongTime, put = __cordl_internal_set_startSongTime)) float_t startSongTime;

  static inline ::GlobalNamespace::PlayerSaveData_PracticeSettings* New_ctor();

  constexpr float_t const& __cordl_internal_get_songSpeedMul() const;

  constexpr float_t& __cordl_internal_get_songSpeedMul();

  constexpr float_t const& __cordl_internal_get_startSongTime() const;

  constexpr float_t& __cordl_internal_get_startSongTime();

  constexpr void __cordl_internal_set_songSpeedMul(float_t value);

  constexpr void __cordl_internal_set_startSongTime(float_t value);

  /// @brief Method .ctor, addr 0x26f1f30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_PracticeSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_PracticeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData_PracticeSettings(PlayerSaveData_PracticeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_PracticeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData_PracticeSettings(PlayerSaveData_PracticeSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13296 };

  /// @brief Field startSongTime, offset: 0x10, size: 0x4, def value: None
  float_t ___startSongTime;

  /// @brief Field songSpeedMul, offset: 0x14, size: 0x4, def value: None
  float_t ___songSpeedMul;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PracticeSettings, ___startSongTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PracticeSettings, ___songSpeedMul) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_PracticeSettings, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData/ColorScheme
class CORDL_TYPE PlayerSaveData_ColorScheme : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorSchemeId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_colorSchemeId, put = __cordl_internal_set_colorSchemeId)) ::StringW colorSchemeId;

  /// @brief Field environmentColor0, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_environmentColor0, put = __cordl_internal_set_environmentColor0)) ::UnityEngine::Color environmentColor0;

  /// @brief Field environmentColor0Boost, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_environmentColor0Boost, put = __cordl_internal_set_environmentColor0Boost)) ::UnityEngine::Color environmentColor0Boost;

  /// @brief Field environmentColor1, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_environmentColor1, put = __cordl_internal_set_environmentColor1)) ::UnityEngine::Color environmentColor1;

  /// @brief Field environmentColor1Boost, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get_environmentColor1Boost, put = __cordl_internal_set_environmentColor1Boost)) ::UnityEngine::Color environmentColor1Boost;

  /// @brief Field obstaclesColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_obstaclesColor, put = __cordl_internal_set_obstaclesColor)) ::UnityEngine::Color obstaclesColor;

  /// @brief Field saberAColor, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_saberAColor, put = __cordl_internal_set_saberAColor)) ::UnityEngine::Color saberAColor;

  /// @brief Field saberBColor, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_saberBColor, put = __cordl_internal_set_saberBColor)) ::UnityEngine::Color saberBColor;

  static inline ::GlobalNamespace::PlayerSaveData_ColorScheme* New_ctor(::StringW colorSchemeId, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor,
                                                                        ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1,
                                                                        ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost);

  constexpr ::StringW const& __cordl_internal_get_colorSchemeId() const;

  constexpr ::StringW& __cordl_internal_get_colorSchemeId();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_environmentColor0() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_environmentColor0();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_environmentColor0Boost() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_environmentColor0Boost();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_environmentColor1() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_environmentColor1();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_environmentColor1Boost() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_environmentColor1Boost();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_obstaclesColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_obstaclesColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_saberAColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_saberAColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_saberBColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_saberBColor();

  constexpr void __cordl_internal_set_colorSchemeId(::StringW value);

  constexpr void __cordl_internal_set_environmentColor0(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_environmentColor0Boost(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_environmentColor1(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_environmentColor1Boost(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_obstaclesColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_saberAColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_saberBColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x26f2014, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::StringW colorSchemeId, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0,
                    ::UnityEngine::Color environmentColor1, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_ColorScheme();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_ColorScheme", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData_ColorScheme(PlayerSaveData_ColorScheme&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_ColorScheme", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData_ColorScheme(PlayerSaveData_ColorScheme const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13297 };

  /// @brief Field colorSchemeId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___colorSchemeId;

  /// @brief Field saberAColor, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ___saberAColor;

  /// @brief Field saberBColor, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ___saberBColor;

  /// @brief Field environmentColor0, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ___environmentColor0;

  /// @brief Field environmentColor1, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ___environmentColor1;

  /// @brief Field obstaclesColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ___obstaclesColor;

  /// @brief Field environmentColor0Boost, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ___environmentColor0Boost;

  /// @brief Field environmentColor1Boost, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Color ___environmentColor1Boost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_ColorScheme, ___colorSchemeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_ColorScheme, ___saberAColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_ColorScheme, ___saberBColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_ColorScheme, ___environmentColor0) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_ColorScheme, ___environmentColor1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_ColorScheme, ___obstaclesColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_ColorScheme, ___environmentColor0Boost) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_ColorScheme, ___environmentColor1Boost) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_ColorScheme, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PlayerSaveData::ColorOverrideType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData/ColorSchemesSettings
class CORDL_TYPE PlayerSaveData_ColorSchemesSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorOverrideType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_colorOverrideType, put = __cordl_internal_set_colorOverrideType)) ::GlobalNamespace::PlayerSaveData_ColorOverrideType colorOverrideType;

  /// @brief Field colorSchemes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_colorSchemes,
                      put = __cordl_internal_set_colorSchemes)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>* colorSchemes;

  /// @brief Field overrideDefaultColors, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideDefaultColors, put = __cordl_internal_set_overrideDefaultColors)) bool overrideDefaultColors;

  /// @brief Field selectedColorSchemeId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_selectedColorSchemeId, put = __cordl_internal_set_selectedColorSchemeId)) ::StringW selectedColorSchemeId;

  static inline ::GlobalNamespace::PlayerSaveData_ColorSchemesSettings* New_ctor(bool overrideDefaultColors, ::StringW selectedColorSchemeId,
                                                                                 ::GlobalNamespace::PlayerSaveData_ColorOverrideType colorOverrideType,
                                                                                 ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>* colorSchemes);

  constexpr ::GlobalNamespace::PlayerSaveData_ColorOverrideType const& __cordl_internal_get_colorOverrideType() const;

  constexpr ::GlobalNamespace::PlayerSaveData_ColorOverrideType& __cordl_internal_get_colorOverrideType();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>* const& __cordl_internal_get_colorSchemes() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>*& __cordl_internal_get_colorSchemes();

  constexpr bool const& __cordl_internal_get_overrideDefaultColors() const;

  constexpr bool& __cordl_internal_get_overrideDefaultColors();

  constexpr ::StringW const& __cordl_internal_get_selectedColorSchemeId() const;

  constexpr ::StringW& __cordl_internal_get_selectedColorSchemeId();

  constexpr void __cordl_internal_set_colorOverrideType(::GlobalNamespace::PlayerSaveData_ColorOverrideType value);

  constexpr void __cordl_internal_set_colorSchemes(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>* value);

  constexpr void __cordl_internal_set_overrideDefaultColors(bool value);

  constexpr void __cordl_internal_set_selectedColorSchemeId(::StringW value);

  /// @brief Method .ctor, addr 0x26f20f0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool overrideDefaultColors, ::StringW selectedColorSchemeId, ::GlobalNamespace::PlayerSaveData_ColorOverrideType colorOverrideType,
                    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>* colorSchemes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_ColorSchemesSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_ColorSchemesSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData_ColorSchemesSettings(PlayerSaveData_ColorSchemesSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_ColorSchemesSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData_ColorSchemesSettings(PlayerSaveData_ColorSchemesSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13298 };

  /// @brief Field overrideDefaultColors, offset: 0x10, size: 0x1, def value: None
  bool ___overrideDefaultColors;

  /// @brief Field selectedColorSchemeId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___selectedColorSchemeId;

  /// @brief Field colorOverrideType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSaveData_ColorOverrideType ___colorOverrideType;

  /// @brief Field colorSchemes, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>* ___colorSchemes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_ColorSchemesSettings, ___overrideDefaultColors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_ColorSchemesSettings, ___selectedColorSchemeId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_ColorSchemesSettings, ___colorOverrideType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_ColorSchemesSettings, ___colorSchemes) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_ColorSchemesSettings, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData/OverrideEnvironmentSettings
class CORDL_TYPE PlayerSaveData_OverrideEnvironmentSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field override360EnvironmentName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_override360EnvironmentName, put = __cordl_internal_set_override360EnvironmentName)) ::StringW override360EnvironmentName;

  /// @brief Field overrideEnvironments, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideEnvironments, put = __cordl_internal_set_overrideEnvironments)) bool overrideEnvironments;

  /// @brief Field overrideNormalEnvironmentName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_overrideNormalEnvironmentName, put = __cordl_internal_set_overrideNormalEnvironmentName)) ::StringW overrideNormalEnvironmentName;

  static inline ::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_override360EnvironmentName() const;

  constexpr ::StringW& __cordl_internal_get_override360EnvironmentName();

  constexpr bool const& __cordl_internal_get_overrideEnvironments() const;

  constexpr bool& __cordl_internal_get_overrideEnvironments();

  constexpr ::StringW const& __cordl_internal_get_overrideNormalEnvironmentName() const;

  constexpr ::StringW& __cordl_internal_get_overrideNormalEnvironmentName();

  constexpr void __cordl_internal_set_override360EnvironmentName(::StringW value);

  constexpr void __cordl_internal_set_overrideEnvironments(bool value);

  constexpr void __cordl_internal_set_overrideNormalEnvironmentName(::StringW value);

  /// @brief Method .ctor, addr 0x26f2138, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_OverrideEnvironmentSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_OverrideEnvironmentSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData_OverrideEnvironmentSettings(PlayerSaveData_OverrideEnvironmentSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_OverrideEnvironmentSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData_OverrideEnvironmentSettings(PlayerSaveData_OverrideEnvironmentSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13299 };

  /// @brief Field overrideEnvironments, offset: 0x10, size: 0x1, def value: None
  bool ___overrideEnvironments;

  /// @brief Field overrideNormalEnvironmentName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___overrideNormalEnvironmentName;

  /// @brief Field override360EnvironmentName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___override360EnvironmentName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings, ___overrideEnvironments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings, ___overrideNormalEnvironmentName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings, ___override360EnvironmentName) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData/GuestPlayer
class CORDL_TYPE PlayerSaveData_GuestPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_playerName, put = __cordl_internal_set_playerName)) ::StringW playerName;

  static inline ::GlobalNamespace::PlayerSaveData_GuestPlayer* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_playerName() const;

  constexpr ::StringW& __cordl_internal_get_playerName();

  constexpr void __cordl_internal_set_playerName(::StringW value);

  /// @brief Method .ctor, addr 0x26f200c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_GuestPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_GuestPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData_GuestPlayer(PlayerSaveData_GuestPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_GuestPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData_GuestPlayer(PlayerSaveData_GuestPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13300 };

  /// @brief Field playerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___playerName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_GuestPlayer, ___playerName) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_GuestPlayer, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData/MultiplayerModeSettings
class CORDL_TYPE PlayerSaveData_MultiplayerModeSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field createServerNumberOfPlayers, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_createServerNumberOfPlayers, put = __cordl_internal_set_createServerNumberOfPlayers)) int32_t createServerNumberOfPlayers;

  /// @brief Field quickPlayDifficulty, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_quickPlayDifficulty, put = __cordl_internal_set_quickPlayDifficulty)) ::StringW quickPlayDifficulty;

  /// @brief Field quickPlayEnableLevelSelection, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_quickPlayEnableLevelSelection, put = __cordl_internal_set_quickPlayEnableLevelSelection)) bool quickPlayEnableLevelSelection;

  /// @brief Field quickPlaySongPackMask, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_quickPlaySongPackMask, put = __cordl_internal_set_quickPlaySongPackMask)) ::ArrayW<uint8_t, ::Array<uint8_t>*> quickPlaySongPackMask;

  /// @brief Field quickPlaySongPackMaskSerializedName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_quickPlaySongPackMaskSerializedName, put = __cordl_internal_set_quickPlaySongPackMaskSerializedName)) ::StringW quickPlaySongPackMaskSerializedName;

  static inline ::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings* New_ctor();

  constexpr int32_t const& __cordl_internal_get_createServerNumberOfPlayers() const;

  constexpr int32_t& __cordl_internal_get_createServerNumberOfPlayers();

  constexpr ::StringW const& __cordl_internal_get_quickPlayDifficulty() const;

  constexpr ::StringW& __cordl_internal_get_quickPlayDifficulty();

  constexpr bool const& __cordl_internal_get_quickPlayEnableLevelSelection() const;

  constexpr bool& __cordl_internal_get_quickPlayEnableLevelSelection();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_quickPlaySongPackMask() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_quickPlaySongPackMask();

  constexpr ::StringW const& __cordl_internal_get_quickPlaySongPackMaskSerializedName() const;

  constexpr ::StringW& __cordl_internal_get_quickPlaySongPackMaskSerializedName();

  constexpr void __cordl_internal_set_createServerNumberOfPlayers(int32_t value);

  constexpr void __cordl_internal_set_quickPlayDifficulty(::StringW value);

  constexpr void __cordl_internal_set_quickPlayEnableLevelSelection(bool value);

  constexpr void __cordl_internal_set_quickPlaySongPackMask(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_quickPlaySongPackMaskSerializedName(::StringW value);

  /// @brief Method .ctor, addr 0x26f2140, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_MultiplayerModeSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_MultiplayerModeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData_MultiplayerModeSettings(PlayerSaveData_MultiplayerModeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_MultiplayerModeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData_MultiplayerModeSettings(PlayerSaveData_MultiplayerModeSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13301 };

  /// @brief Field createServerNumberOfPlayers, offset: 0x10, size: 0x4, def value: None
  int32_t ___createServerNumberOfPlayers;

  /// @brief Field quickPlayDifficulty, offset: 0x18, size: 0x8, def value: None
  ::StringW ___quickPlayDifficulty;

  /// @brief Field quickPlaySongPackMask, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___quickPlaySongPackMask;

  /// @brief Field quickPlaySongPackMaskSerializedName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___quickPlaySongPackMaskSerializedName;

  /// @brief Field quickPlayEnableLevelSelection, offset: 0x30, size: 0x1, def value: None
  bool ___quickPlayEnableLevelSelection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings, ___createServerNumberOfPlayers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings, ___quickPlayDifficulty) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings, ___quickPlaySongPackMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings, ___quickPlaySongPackMaskSerializedName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings, ___quickPlayEnableLevelSelection) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData/PlayerAgreementsData
class CORDL_TYPE PlayerSaveData_PlayerAgreementsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field endOfLifeVersion, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_endOfLifeVersion, put = __cordl_internal_set_endOfLifeVersion)) int32_t endOfLifeVersion;

  /// @brief Field eulaVersion, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_eulaVersion, put = __cordl_internal_set_eulaVersion)) int32_t eulaVersion;

  /// @brief Field healthAndSafetyVersion, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_healthAndSafetyVersion, put = __cordl_internal_set_healthAndSafetyVersion)) int32_t healthAndSafetyVersion;

  /// @brief Field playerSensitivityFlagVersion, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_playerSensitivityFlagVersion, put = __cordl_internal_set_playerSensitivityFlagVersion)) int32_t playerSensitivityFlagVersion;

  /// @brief Field privacyPolicyVersion, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_privacyPolicyVersion, put = __cordl_internal_set_privacyPolicyVersion)) int32_t privacyPolicyVersion;

  static inline ::GlobalNamespace::PlayerSaveData_PlayerAgreementsData* New_ctor();

  constexpr int32_t const& __cordl_internal_get_endOfLifeVersion() const;

  constexpr int32_t& __cordl_internal_get_endOfLifeVersion();

  constexpr int32_t const& __cordl_internal_get_eulaVersion() const;

  constexpr int32_t& __cordl_internal_get_eulaVersion();

  constexpr int32_t const& __cordl_internal_get_healthAndSafetyVersion() const;

  constexpr int32_t& __cordl_internal_get_healthAndSafetyVersion();

  constexpr int32_t const& __cordl_internal_get_playerSensitivityFlagVersion() const;

  constexpr int32_t& __cordl_internal_get_playerSensitivityFlagVersion();

  constexpr int32_t const& __cordl_internal_get_privacyPolicyVersion() const;

  constexpr int32_t& __cordl_internal_get_privacyPolicyVersion();

  constexpr void __cordl_internal_set_endOfLifeVersion(int32_t value);

  constexpr void __cordl_internal_set_eulaVersion(int32_t value);

  constexpr void __cordl_internal_set_healthAndSafetyVersion(int32_t value);

  constexpr void __cordl_internal_set_playerSensitivityFlagVersion(int32_t value);

  constexpr void __cordl_internal_set_privacyPolicyVersion(int32_t value);

  /// @brief Method .ctor, addr 0x26f21b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_PlayerAgreementsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_PlayerAgreementsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData_PlayerAgreementsData(PlayerSaveData_PlayerAgreementsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_PlayerAgreementsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData_PlayerAgreementsData(PlayerSaveData_PlayerAgreementsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13302 };

  /// @brief Field eulaVersion, offset: 0x10, size: 0x4, def value: None
  int32_t ___eulaVersion;

  /// @brief Field privacyPolicyVersion, offset: 0x14, size: 0x4, def value: None
  int32_t ___privacyPolicyVersion;

  /// @brief Field healthAndSafetyVersion, offset: 0x18, size: 0x4, def value: None
  int32_t ___healthAndSafetyVersion;

  /// @brief Field playerSensitivityFlagVersion, offset: 0x1c, size: 0x4, def value: None
  int32_t ___playerSensitivityFlagVersion;

  /// @brief Field endOfLifeVersion, offset: 0x20, size: 0x4, def value: None
  int32_t ___endOfLifeVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerAgreementsData, ___eulaVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerAgreementsData, ___privacyPolicyVersion) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerAgreementsData, ___healthAndSafetyVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerAgreementsData, ___playerSensitivityFlagVersion) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerAgreementsData, ___endOfLifeVersion) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_PlayerAgreementsData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSaveData/UserAgeCategorySaveData
struct CORDL_TYPE PlayerSaveData_UserAgeCategorySaveData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlayerSaveData_UserAgeCategorySaveData_Unwrapped
  enum struct __PlayerSaveData_UserAgeCategorySaveData_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Child = static_cast<int32_t>(0x1),
    __E_Teen = static_cast<int32_t>(0x2),
    __E_Adult = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlayerSaveData_UserAgeCategorySaveData_Unwrapped() const noexcept {
    return static_cast<__PlayerSaveData_UserAgeCategorySaveData_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_UserAgeCategorySaveData();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayerSaveData_UserAgeCategorySaveData(int32_t value__) noexcept;

  /// @brief Field Adult value: I32(3)
  static ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData const Adult;

  /// @brief Field Child value: I32(1)
  static ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData const Child;

  /// @brief Field Teen value: I32(2)
  static ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData const Teen;

  /// @brief Field Unknown value: I32(0)
  static ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13303 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSaveData/PlayerSensitivityFlagSaveData
struct CORDL_TYPE PlayerSaveData_PlayerSensitivityFlagSaveData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlayerSaveData_PlayerSensitivityFlagSaveData_Unwrapped
  enum struct __PlayerSaveData_PlayerSensitivityFlagSaveData_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Safe = static_cast<int32_t>(0x1),
    __E_Themes = static_cast<int32_t>(0x2),
    __E_Explicit = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlayerSaveData_PlayerSensitivityFlagSaveData_Unwrapped() const noexcept {
    return static_cast<__PlayerSaveData_PlayerSensitivityFlagSaveData_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_PlayerSensitivityFlagSaveData();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayerSaveData_PlayerSensitivityFlagSaveData(int32_t value__) noexcept;

  /// @brief Field Explicit value: I32(3)
  static ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData const Explicit;

  /// @brief Field Safe value: I32(1)
  static ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData const Safe;

  /// @brief Field Themes value: I32(2)
  static ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData const Themes;

  /// @brief Field Unknown value: I32(0)
  static ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13304 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficulty, PlayerSaveData::PlayerSensitivityFlagSaveData, PlayerSaveData::UserAgeCategorySaveData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData/LocalPlayer
class CORDL_TYPE PlayerSaveData_LocalPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field agreedToEula, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_agreedToEula, put = __cordl_internal_set_agreedToEula)) bool agreedToEula;

  /// @brief Field agreedToMultiplayerDisclaimer, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_agreedToMultiplayerDisclaimer, put = __cordl_internal_set_agreedToMultiplayerDisclaimer)) bool agreedToMultiplayerDisclaimer;

  /// @brief Field colorSchemesSettings, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_colorSchemesSettings, put = __cordl_internal_set_colorSchemesSettings)) ::GlobalNamespace::PlayerSaveData_ColorSchemesSettings* colorSchemesSettings;

  /// @brief Field currentDlcPromoDisplayCount, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_currentDlcPromoDisplayCount, put = __cordl_internal_set_currentDlcPromoDisplayCount)) int32_t currentDlcPromoDisplayCount;

  /// @brief Field currentDlcPromoId, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_currentDlcPromoId, put = __cordl_internal_set_currentDlcPromoId)) ::StringW currentDlcPromoId;

  /// @brief Field desiredSensitivityFlag, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_desiredSensitivityFlag,
                      put = __cordl_internal_set_desiredSensitivityFlag)) ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData desiredSensitivityFlag;

  /// @brief Field didSelectLanguage, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get_didSelectLanguage, put = __cordl_internal_set_didSelectLanguage)) bool didSelectLanguage;

  /// @brief Field didSelectRegionVersion, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_didSelectRegionVersion, put = __cordl_internal_set_didSelectRegionVersion)) int32_t didSelectRegionVersion;

  /// @brief Field favoritesLevelIds, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_favoritesLevelIds, put = __cordl_internal_set_favoritesLevelIds)) ::System::Collections::Generic::List_1<::StringW>* favoritesLevelIds;

  /// @brief Field gameplayModifiers, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers)) ::GlobalNamespace::PlayerSaveData_GameplayModifiers* gameplayModifiers;

  /// @brief Field lastSelectedBeatmapCharacteristicName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_lastSelectedBeatmapCharacteristicName,
                      put = __cordl_internal_set_lastSelectedBeatmapCharacteristicName)) ::StringW lastSelectedBeatmapCharacteristicName;

  /// @brief Field lastSelectedBeatmapDifficulty, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_lastSelectedBeatmapDifficulty,
                      put = __cordl_internal_set_lastSelectedBeatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty;

  /// @brief Field levelsStatsData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_levelsStatsData,
                      put = __cordl_internal_set_levelsStatsData)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData*>* levelsStatsData;

  /// @brief Field missionsStatsData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_missionsStatsData,
                      put = __cordl_internal_set_missionsStatsData)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData*>* missionsStatsData;

  /// @brief Field multiplayerModeSettings, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_multiplayerModeSettings,
                      put = __cordl_internal_set_multiplayerModeSettings)) ::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings* multiplayerModeSettings;

  /// @brief Field overrideEnvironmentSettings, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_overrideEnvironmentSettings,
                      put = __cordl_internal_set_overrideEnvironmentSettings)) ::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings* overrideEnvironmentSettings;

  /// @brief Field playerAgreements, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_playerAgreements, put = __cordl_internal_set_playerAgreements)) ::GlobalNamespace::PlayerSaveData_PlayerAgreementsData* playerAgreements;

  /// @brief Field playerAllOverallStatsData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_playerAllOverallStatsData,
                      put = __cordl_internal_set_playerAllOverallStatsData)) ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData* playerAllOverallStatsData;

  /// @brief Field playerId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_playerId, put = __cordl_internal_set_playerId)) ::StringW playerId;

  /// @brief Field playerName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerName, put = __cordl_internal_set_playerName)) ::StringW playerName;

  /// @brief Field playerSpecificSettings, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings,
                      put = __cordl_internal_set_playerSpecificSettings)) ::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field practiceSettings, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_practiceSettings, put = __cordl_internal_set_practiceSettings)) ::GlobalNamespace::PlayerSaveData_PracticeSettings* practiceSettings;

  /// @brief Field selectedAvatarSystemTypeId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_selectedAvatarSystemTypeId, put = __cordl_internal_set_selectedAvatarSystemTypeId)) ::StringW selectedAvatarSystemTypeId;

  /// @brief Field shouldShow360Warning, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldShow360Warning, put = __cordl_internal_set_shouldShow360Warning)) bool shouldShow360Warning;

  /// @brief Field shouldShowTutorialPrompt, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldShowTutorialPrompt, put = __cordl_internal_set_shouldShowTutorialPrompt)) bool shouldShowTutorialPrompt;

  /// @brief Field showedMissionHelpIds, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_showedMissionHelpIds, put = __cordl_internal_set_showedMissionHelpIds)) ::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds;

  /// @brief Field userAgeCategory, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_userAgeCategory, put = __cordl_internal_set_userAgeCategory)) ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData userAgeCategory;

  static inline ::GlobalNamespace::PlayerSaveData_LocalPlayer* New_ctor();

  constexpr bool const& __cordl_internal_get_agreedToEula() const;

  constexpr bool& __cordl_internal_get_agreedToEula();

  constexpr bool const& __cordl_internal_get_agreedToMultiplayerDisclaimer() const;

  constexpr bool& __cordl_internal_get_agreedToMultiplayerDisclaimer();

  constexpr ::GlobalNamespace::PlayerSaveData_ColorSchemesSettings* const& __cordl_internal_get_colorSchemesSettings() const;

  constexpr ::GlobalNamespace::PlayerSaveData_ColorSchemesSettings*& __cordl_internal_get_colorSchemesSettings();

  constexpr int32_t const& __cordl_internal_get_currentDlcPromoDisplayCount() const;

  constexpr int32_t& __cordl_internal_get_currentDlcPromoDisplayCount();

  constexpr ::StringW const& __cordl_internal_get_currentDlcPromoId() const;

  constexpr ::StringW& __cordl_internal_get_currentDlcPromoId();

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData const& __cordl_internal_get_desiredSensitivityFlag() const;

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData& __cordl_internal_get_desiredSensitivityFlag();

  constexpr bool const& __cordl_internal_get_didSelectLanguage() const;

  constexpr bool& __cordl_internal_get_didSelectLanguage();

  constexpr int32_t const& __cordl_internal_get_didSelectRegionVersion() const;

  constexpr int32_t& __cordl_internal_get_didSelectRegionVersion();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_favoritesLevelIds() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_favoritesLevelIds();

  constexpr ::GlobalNamespace::PlayerSaveData_GameplayModifiers* const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::GlobalNamespace::PlayerSaveData_GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr ::StringW const& __cordl_internal_get_lastSelectedBeatmapCharacteristicName() const;

  constexpr ::StringW& __cordl_internal_get_lastSelectedBeatmapCharacteristicName();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_lastSelectedBeatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_lastSelectedBeatmapDifficulty();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData*>* const& __cordl_internal_get_levelsStatsData() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData*>*& __cordl_internal_get_levelsStatsData();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData*>* const& __cordl_internal_get_missionsStatsData() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData*>*& __cordl_internal_get_missionsStatsData();

  constexpr ::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings* const& __cordl_internal_get_multiplayerModeSettings() const;

  constexpr ::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings*& __cordl_internal_get_multiplayerModeSettings();

  constexpr ::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings* const& __cordl_internal_get_overrideEnvironmentSettings() const;

  constexpr ::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings*& __cordl_internal_get_overrideEnvironmentSettings();

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerAgreementsData* const& __cordl_internal_get_playerAgreements() const;

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerAgreementsData*& __cordl_internal_get_playerAgreements();

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData* const& __cordl_internal_get_playerAllOverallStatsData() const;

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData*& __cordl_internal_get_playerAllOverallStatsData();

  constexpr ::StringW const& __cordl_internal_get_playerId() const;

  constexpr ::StringW& __cordl_internal_get_playerId();

  constexpr ::StringW const& __cordl_internal_get_playerName() const;

  constexpr ::StringW& __cordl_internal_get_playerName();

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings* const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr ::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr ::GlobalNamespace::PlayerSaveData_PracticeSettings* const& __cordl_internal_get_practiceSettings() const;

  constexpr ::GlobalNamespace::PlayerSaveData_PracticeSettings*& __cordl_internal_get_practiceSettings();

  constexpr ::StringW const& __cordl_internal_get_selectedAvatarSystemTypeId() const;

  constexpr ::StringW& __cordl_internal_get_selectedAvatarSystemTypeId();

  constexpr bool const& __cordl_internal_get_shouldShow360Warning() const;

  constexpr bool& __cordl_internal_get_shouldShow360Warning();

  constexpr bool const& __cordl_internal_get_shouldShowTutorialPrompt() const;

  constexpr bool& __cordl_internal_get_shouldShowTutorialPrompt();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_showedMissionHelpIds() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_showedMissionHelpIds();

  constexpr ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData const& __cordl_internal_get_userAgeCategory() const;

  constexpr ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData& __cordl_internal_get_userAgeCategory();

  constexpr void __cordl_internal_set_agreedToEula(bool value);

  constexpr void __cordl_internal_set_agreedToMultiplayerDisclaimer(bool value);

  constexpr void __cordl_internal_set_colorSchemesSettings(::GlobalNamespace::PlayerSaveData_ColorSchemesSettings* value);

  constexpr void __cordl_internal_set_currentDlcPromoDisplayCount(int32_t value);

  constexpr void __cordl_internal_set_currentDlcPromoId(::StringW value);

  constexpr void __cordl_internal_set_desiredSensitivityFlag(::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData value);

  constexpr void __cordl_internal_set_didSelectLanguage(bool value);

  constexpr void __cordl_internal_set_didSelectRegionVersion(int32_t value);

  constexpr void __cordl_internal_set_favoritesLevelIds(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::PlayerSaveData_GameplayModifiers* value);

  constexpr void __cordl_internal_set_lastSelectedBeatmapCharacteristicName(::StringW value);

  constexpr void __cordl_internal_set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set_levelsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData*>* value);

  constexpr void __cordl_internal_set_missionsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData*>* value);

  constexpr void __cordl_internal_set_multiplayerModeSettings(::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings* value);

  constexpr void __cordl_internal_set_overrideEnvironmentSettings(::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings* value);

  constexpr void __cordl_internal_set_playerAgreements(::GlobalNamespace::PlayerSaveData_PlayerAgreementsData* value);

  constexpr void __cordl_internal_set_playerAllOverallStatsData(::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData* value);

  constexpr void __cordl_internal_set_playerId(::StringW value);

  constexpr void __cordl_internal_set_playerName(::StringW value);

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set_practiceSettings(::GlobalNamespace::PlayerSaveData_PracticeSettings* value);

  constexpr void __cordl_internal_set_selectedAvatarSystemTypeId(::StringW value);

  constexpr void __cordl_internal_set_shouldShow360Warning(bool value);

  constexpr void __cordl_internal_set_shouldShowTutorialPrompt(bool value);

  constexpr void __cordl_internal_set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_userAgeCategory(::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData value);

  /// @brief Method .ctor, addr 0x26f1ea8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData_LocalPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_LocalPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData_LocalPlayer(PlayerSaveData_LocalPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData_LocalPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData_LocalPlayer(PlayerSaveData_LocalPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13305 };

  /// @brief Field playerId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___playerId;

  /// @brief Field playerName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___playerName;

  /// @brief Field shouldShowTutorialPrompt, offset: 0x20, size: 0x1, def value: None
  bool ___shouldShowTutorialPrompt;

  /// @brief Field shouldShow360Warning, offset: 0x21, size: 0x1, def value: None
  bool ___shouldShow360Warning;

  /// @brief Field agreedToEula, offset: 0x22, size: 0x1, def value: None
  bool ___agreedToEula;

  /// @brief Field didSelectLanguage, offset: 0x23, size: 0x1, def value: None
  bool ___didSelectLanguage;

  /// @brief Field agreedToMultiplayerDisclaimer, offset: 0x24, size: 0x1, def value: None
  bool ___agreedToMultiplayerDisclaimer;

  /// @brief Field didSelectRegionVersion, offset: 0x28, size: 0x4, def value: None
  int32_t ___didSelectRegionVersion;

  /// @brief Field selectedAvatarSystemTypeId, offset: 0x30, size: 0x8, def value: None
  ::StringW ___selectedAvatarSystemTypeId;

  /// @brief Field playerAgreements, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveData_PlayerAgreementsData* ___playerAgreements;

  /// @brief Field lastSelectedBeatmapDifficulty, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___lastSelectedBeatmapDifficulty;

  /// @brief Field lastSelectedBeatmapCharacteristicName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___lastSelectedBeatmapCharacteristicName;

  /// @brief Field gameplayModifiers, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveData_GameplayModifiers* ___gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings* ___playerSpecificSettings;

  /// @brief Field practiceSettings, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveData_PracticeSettings* ___practiceSettings;

  /// @brief Field playerAllOverallStatsData, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData* ___playerAllOverallStatsData;

  /// @brief Field levelsStatsData, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData*>* ___levelsStatsData;

  /// @brief Field missionsStatsData, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData*>* ___missionsStatsData;

  /// @brief Field showedMissionHelpIds, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___showedMissionHelpIds;

  /// @brief Field colorSchemesSettings, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveData_ColorSchemesSettings* ___colorSchemesSettings;

  /// @brief Field overrideEnvironmentSettings, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings* ___overrideEnvironmentSettings;

  /// @brief Field favoritesLevelIds, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___favoritesLevelIds;

  /// @brief Field multiplayerModeSettings, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings* ___multiplayerModeSettings;

  /// @brief Field currentDlcPromoDisplayCount, offset: 0xa8, size: 0x4, def value: None
  int32_t ___currentDlcPromoDisplayCount;

  /// @brief Field currentDlcPromoId, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___currentDlcPromoId;

  /// @brief Field userAgeCategory, offset: 0xb8, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData ___userAgeCategory;

  /// @brief Field desiredSensitivityFlag, offset: 0xbc, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData ___desiredSensitivityFlag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___playerId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___playerName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___shouldShowTutorialPrompt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___shouldShow360Warning) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___agreedToEula) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___didSelectLanguage) == 0x23, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___agreedToMultiplayerDisclaimer) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___didSelectRegionVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___selectedAvatarSystemTypeId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___playerAgreements) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___lastSelectedBeatmapDifficulty) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___lastSelectedBeatmapCharacteristicName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___gameplayModifiers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___playerSpecificSettings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___practiceSettings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___playerAllOverallStatsData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___levelsStatsData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___missionsStatsData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___showedMissionHelpIds) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___colorSchemesSettings) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___overrideEnvironmentSettings) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___favoritesLevelIds) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___multiplayerModeSettings) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___currentDlcPromoDisplayCount) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___currentDlcPromoId) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___userAgeCategory) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData_LocalPlayer, ___desiredSensitivityFlag) == 0xbc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData_LocalPlayer, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies VersionSaveData
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveData
class CORDL_TYPE PlayerSaveData : public ::GlobalNamespace::VersionSaveData {
public:
  // Declarations
  using ColorOverrideType = ::GlobalNamespace::PlayerSaveData_ColorOverrideType;

  using ColorScheme = ::GlobalNamespace::PlayerSaveData_ColorScheme;

  using ColorSchemesSettings = ::GlobalNamespace::PlayerSaveData_ColorSchemesSettings;

  using GameplayModifiers = ::GlobalNamespace::PlayerSaveData_GameplayModifiers;

  using GuestPlayer = ::GlobalNamespace::PlayerSaveData_GuestPlayer;

  using LocalPlayer = ::GlobalNamespace::PlayerSaveData_LocalPlayer;

  using MultiplayerModeSettings = ::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings;

  using OverrideEnvironmentSettings = ::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings;

  using PlayerAgreementsData = ::GlobalNamespace::PlayerSaveData_PlayerAgreementsData;

  using PlayerAllOverallStatsData = ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData;

  using PlayerLevelStatsData = ::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData;

  using PlayerMissionStatsData = ::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData;

  using PlayerOverallStatsData = ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData;

  using PlayerSensitivityFlagSaveData = ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData;

  using PlayerSpecificSettings = ::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings;

  using PracticeSettings = ::GlobalNamespace::PlayerSaveData_PracticeSettings;

  using UserAgeCategorySaveData = ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData;

  /// @brief Field guestPlayers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_guestPlayers,
                      put = __cordl_internal_set_guestPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_GuestPlayer*>* guestPlayers;

  /// @brief Field localPlayers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localPlayers,
                      put = __cordl_internal_set_localPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_LocalPlayer*>* localPlayers;

  static inline ::GlobalNamespace::PlayerSaveData* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_GuestPlayer*>* const& __cordl_internal_get_guestPlayers() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_GuestPlayer*>*& __cordl_internal_get_guestPlayers();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_LocalPlayer*>* const& __cordl_internal_get_localPlayers() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_LocalPlayer*>*& __cordl_internal_get_localPlayers();

  constexpr void __cordl_internal_set_guestPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_GuestPlayer*>* value);

  constexpr void __cordl_internal_set_localPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_LocalPlayer*>* value);

  /// @brief Method .ctor, addr 0x26f1e54, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData(PlayerSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData(PlayerSaveData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13306 };

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"2.0.28" };

  /// @brief Field localPlayers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_LocalPlayer*>* ___localPlayers;

  /// @brief Field guestPlayers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_GuestPlayer*>* ___guestPlayers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveData, ___localPlayers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData, ___guestPlayers) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType, "", "PlayerSaveData/GameplayModifiers/EnabledObstacleType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType, "", "PlayerSaveData/GameplayModifiers/EnergyType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed, "", "PlayerSaveData/GameplayModifiers/SongSpeed");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_ColorOverrideType, "", "PlayerSaveData/ColorOverrideType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData, "", "PlayerSaveData/PlayerSensitivityFlagSaveData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData, "", "PlayerSaveData/UserAgeCategorySaveData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData, "", "PlayerSaveData/PlayerSpecificSettings/ArcVisibilityTypeSaveData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData, "",
                       "PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData, "", "PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData*, "", "PlayerSaveData");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData_ColorScheme);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_ColorScheme*, "", "PlayerSaveData/ColorScheme");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData_ColorSchemesSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_ColorSchemesSettings*, "", "PlayerSaveData/ColorSchemesSettings");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData_GameplayModifiers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_GameplayModifiers*, "", "PlayerSaveData/GameplayModifiers");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData_GuestPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_GuestPlayer*, "", "PlayerSaveData/GuestPlayer");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData_LocalPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_LocalPlayer*, "", "PlayerSaveData/LocalPlayer");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings*, "", "PlayerSaveData/MultiplayerModeSettings");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings*, "", "PlayerSaveData/OverrideEnvironmentSettings");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData_PlayerAgreementsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_PlayerAgreementsData*, "", "PlayerSaveData/PlayerAgreementsData");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData*, "", "PlayerSaveData/PlayerAllOverallStatsData");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData*, "", "PlayerSaveData/PlayerLevelStatsData");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData*, "", "PlayerSaveData/PlayerMissionStatsData");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*, "", "PlayerSaveData/PlayerOverallStatsData");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings*, "", "PlayerSaveData/PlayerSpecificSettings");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData_PracticeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData_PracticeSettings*, "", "PlayerSaveData/PracticeSettings");
