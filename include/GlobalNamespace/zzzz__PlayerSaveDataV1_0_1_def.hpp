#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSaveDataV1_0_1)
namespace GlobalNamespace {
struct GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType;
}
namespace GlobalNamespace {
struct GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType;
}
namespace GlobalNamespace {
struct GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_AchievementsData;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_GameplayModifiers;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_GuestPlayer;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_LocalPlayer;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_PlayerLevelStatsData;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_PlayerMissionStatsData;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_PlayerOverallStatsData;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_PlayerSpecificSettings;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType;
}
namespace GlobalNamespace {
struct GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType;
}
namespace GlobalNamespace {
struct GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_AchievementsData;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_GameplayModifiers;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_GuestPlayer;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_LocalPlayer;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_PlayerLevelStatsData;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_PlayerMissionStatsData;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_PlayerOverallStatsData;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_PlayerSpecificSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType);
MARK_VAL_T(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType);
MARK_VAL_T(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveDataV1_0_1);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSaveDataV1_0_1/GameplayModifiers/EnabledObstacleType
struct CORDL_TYPE GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType_Unwrapped
  enum struct __GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_FullHeightOnly = static_cast<int32_t>(0x1),
    __E_None = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType_Unwrapped() const noexcept {
    return static_cast<__GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType(int32_t value__) noexcept;

  /// @brief Field All value: I32(0)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType const All;

  /// @brief Field FullHeightOnly value: I32(1)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType const FullHeightOnly;

  /// @brief Field None value: I32(2)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13272 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSaveDataV1_0_1/GameplayModifiers/EnergyType
struct CORDL_TYPE GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType_Unwrapped
  enum struct __GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType_Unwrapped : int32_t {
    __E_Bar = static_cast<int32_t>(0x0),
    __E_Battery = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType_Unwrapped() const noexcept {
    return static_cast<__GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType(int32_t value__) noexcept;

  /// @brief Field Bar value: I32(0)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType const Bar;

  /// @brief Field Battery value: I32(1)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType const Battery;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13273 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSaveDataV1_0_1/GameplayModifiers/SongSpeed
struct CORDL_TYPE GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed_Unwrapped
  enum struct __GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Faster = static_cast<int32_t>(0x1),
    __E_Slower = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed_Unwrapped() const noexcept {
    return static_cast<__GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed(int32_t value__) noexcept;

  /// @brief Field Faster value: I32(1)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed const Faster;

  /// @brief Field Normal value: I32(0)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed const Normal;

  /// @brief Field Slower value: I32(2)
  static ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed const Slower;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13274 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PlayerSaveDataV1_0_1::GameplayModifiers::EnabledObstacleType, PlayerSaveDataV1_0_1::GameplayModifiers::EnergyType, PlayerSaveDataV1_0_1::GameplayModifiers::SongSpeed, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveDataV1_0_1/GameplayModifiers
class CORDL_TYPE PlayerSaveDataV1_0_1_GameplayModifiers : public ::System::Object {
public:
  // Declarations
  using EnabledObstacleType = ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType;

  using EnergyType = ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType;

  using SongSpeed = ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed;

  /// @brief Field disappearingArrows, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get_disappearingArrows, put = __cordl_internal_set_disappearingArrows)) bool disappearingArrows;

  /// @brief Field enabledObstacleType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_enabledObstacleType,
                      put = __cordl_internal_set_enabledObstacleType)) ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType enabledObstacleType;

  /// @brief Field energyType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_energyType, put = __cordl_internal_set_energyType)) ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType energyType;

  /// @brief Field failOnSaberClash, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get_failOnSaberClash, put = __cordl_internal_set_failOnSaberClash)) bool failOnSaberClash;

  /// @brief Field fastNotes, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_fastNotes, put = __cordl_internal_set_fastNotes)) bool fastNotes;

  /// @brief Field instaFail, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_instaFail, put = __cordl_internal_set_instaFail)) bool instaFail;

  /// @brief Field noBombs, offset 0x1f, size 0x1
  __declspec(property(get = __cordl_internal_get_noBombs, put = __cordl_internal_set_noBombs)) bool noBombs;

  /// @brief Field noFail, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_noFail, put = __cordl_internal_set_noFail)) bool noFail;

  /// @brief Field songSpeed, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_songSpeed, put = __cordl_internal_set_songSpeed)) ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed songSpeed;

  /// @brief Field strictAngles, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_strictAngles, put = __cordl_internal_set_strictAngles)) bool strictAngles;

  static inline ::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers* New_ctor();

  constexpr bool const& __cordl_internal_get_disappearingArrows() const;

  constexpr bool& __cordl_internal_get_disappearingArrows();

  constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType const& __cordl_internal_get_enabledObstacleType() const;

  constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType& __cordl_internal_get_enabledObstacleType();

  constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType const& __cordl_internal_get_energyType() const;

  constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType& __cordl_internal_get_energyType();

  constexpr bool const& __cordl_internal_get_failOnSaberClash() const;

  constexpr bool& __cordl_internal_get_failOnSaberClash();

  constexpr bool const& __cordl_internal_get_fastNotes() const;

  constexpr bool& __cordl_internal_get_fastNotes();

  constexpr bool const& __cordl_internal_get_instaFail() const;

  constexpr bool& __cordl_internal_get_instaFail();

  constexpr bool const& __cordl_internal_get_noBombs() const;

  constexpr bool& __cordl_internal_get_noBombs();

  constexpr bool const& __cordl_internal_get_noFail() const;

  constexpr bool& __cordl_internal_get_noFail();

  constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed const& __cordl_internal_get_songSpeed() const;

  constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed& __cordl_internal_get_songSpeed();

  constexpr bool const& __cordl_internal_get_strictAngles() const;

  constexpr bool& __cordl_internal_get_strictAngles();

  constexpr void __cordl_internal_set_disappearingArrows(bool value);

  constexpr void __cordl_internal_set_enabledObstacleType(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType value);

  constexpr void __cordl_internal_set_energyType(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType value);

  constexpr void __cordl_internal_set_failOnSaberClash(bool value);

  constexpr void __cordl_internal_set_fastNotes(bool value);

  constexpr void __cordl_internal_set_instaFail(bool value);

  constexpr void __cordl_internal_set_noBombs(bool value);

  constexpr void __cordl_internal_set_noFail(bool value);

  constexpr void __cordl_internal_set_songSpeed(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed value);

  constexpr void __cordl_internal_set_strictAngles(bool value);

  /// @brief Method .ctor, addr 0x26ff804, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveDataV1_0_1_GameplayModifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_GameplayModifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveDataV1_0_1_GameplayModifiers(PlayerSaveDataV1_0_1_GameplayModifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_GameplayModifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveDataV1_0_1_GameplayModifiers(PlayerSaveDataV1_0_1_GameplayModifiers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13275 };

  /// @brief Field energyType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType ___energyType;

  /// @brief Field noFail, offset: 0x14, size: 0x1, def value: None
  bool ___noFail;

  /// @brief Field instaFail, offset: 0x15, size: 0x1, def value: None
  bool ___instaFail;

  /// @brief Field failOnSaberClash, offset: 0x16, size: 0x1, def value: None
  bool ___failOnSaberClash;

  /// @brief Field enabledObstacleType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType ___enabledObstacleType;

  /// @brief Field fastNotes, offset: 0x1c, size: 0x1, def value: None
  bool ___fastNotes;

  /// @brief Field strictAngles, offset: 0x1d, size: 0x1, def value: None
  bool ___strictAngles;

  /// @brief Field disappearingArrows, offset: 0x1e, size: 0x1, def value: None
  bool ___disappearingArrows;

  /// @brief Field noBombs, offset: 0x1f, size: 0x1, def value: None
  bool ___noBombs;

  /// @brief Field songSpeed, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed ___songSpeed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers, ___energyType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers, ___noFail) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers, ___instaFail) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers, ___failOnSaberClash) == 0x16, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers, ___enabledObstacleType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers, ___fastNotes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers, ___strictAngles) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers, ___disappearingArrows) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers, ___noBombs) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers, ___songSpeed) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveDataV1_0_1/PlayerSpecificSettings
class CORDL_TYPE PlayerSaveDataV1_0_1_PlayerSpecificSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field advancedHud, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_advancedHud, put = __cordl_internal_set_advancedHud)) bool advancedHud;

  /// @brief Field disableSFX, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_disableSFX, put = __cordl_internal_set_disableSFX)) bool disableSFX;

  /// @brief Field leftHanded, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_leftHanded, put = __cordl_internal_set_leftHanded)) bool leftHanded;

  /// @brief Field noTextsAndHuds, offset 0x1b, size 0x1
  __declspec(property(get = __cordl_internal_get_noTextsAndHuds, put = __cordl_internal_set_noTextsAndHuds)) bool noTextsAndHuds;

  /// @brief Field playerHeight, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_playerHeight, put = __cordl_internal_set_playerHeight)) float_t playerHeight;

  /// @brief Field reduceDebris, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_reduceDebris, put = __cordl_internal_set_reduceDebris)) bool reduceDebris;

  /// @brief Field staticLights, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_staticLights, put = __cordl_internal_set_staticLights)) bool staticLights;

  /// @brief Field swapColors, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_swapColors, put = __cordl_internal_set_swapColors)) bool swapColors;

  static inline ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings* New_ctor();

  constexpr bool const& __cordl_internal_get_advancedHud() const;

  constexpr bool& __cordl_internal_get_advancedHud();

  constexpr bool const& __cordl_internal_get_disableSFX() const;

  constexpr bool& __cordl_internal_get_disableSFX();

  constexpr bool const& __cordl_internal_get_leftHanded() const;

  constexpr bool& __cordl_internal_get_leftHanded();

  constexpr bool const& __cordl_internal_get_noTextsAndHuds() const;

  constexpr bool& __cordl_internal_get_noTextsAndHuds();

  constexpr float_t const& __cordl_internal_get_playerHeight() const;

  constexpr float_t& __cordl_internal_get_playerHeight();

  constexpr bool const& __cordl_internal_get_reduceDebris() const;

  constexpr bool& __cordl_internal_get_reduceDebris();

  constexpr bool const& __cordl_internal_get_staticLights() const;

  constexpr bool& __cordl_internal_get_staticLights();

  constexpr bool const& __cordl_internal_get_swapColors() const;

  constexpr bool& __cordl_internal_get_swapColors();

  constexpr void __cordl_internal_set_advancedHud(bool value);

  constexpr void __cordl_internal_set_disableSFX(bool value);

  constexpr void __cordl_internal_set_leftHanded(bool value);

  constexpr void __cordl_internal_set_noTextsAndHuds(bool value);

  constexpr void __cordl_internal_set_playerHeight(float_t value);

  constexpr void __cordl_internal_set_reduceDebris(bool value);

  constexpr void __cordl_internal_set_staticLights(bool value);

  constexpr void __cordl_internal_set_swapColors(bool value);

  /// @brief Method .ctor, addr 0x26ff80c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveDataV1_0_1_PlayerSpecificSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_PlayerSpecificSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveDataV1_0_1_PlayerSpecificSettings(PlayerSaveDataV1_0_1_PlayerSpecificSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_PlayerSpecificSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveDataV1_0_1_PlayerSpecificSettings(PlayerSaveDataV1_0_1_PlayerSpecificSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13276 };

  /// @brief Field staticLights, offset: 0x10, size: 0x1, def value: None
  bool ___staticLights;

  /// @brief Field leftHanded, offset: 0x11, size: 0x1, def value: None
  bool ___leftHanded;

  /// @brief Field swapColors, offset: 0x12, size: 0x1, def value: None
  bool ___swapColors;

  /// @brief Field playerHeight, offset: 0x14, size: 0x4, def value: None
  float_t ___playerHeight;

  /// @brief Field disableSFX, offset: 0x18, size: 0x1, def value: None
  bool ___disableSFX;

  /// @brief Field reduceDebris, offset: 0x19, size: 0x1, def value: None
  bool ___reduceDebris;

  /// @brief Field advancedHud, offset: 0x1a, size: 0x1, def value: None
  bool ___advancedHud;

  /// @brief Field noTextsAndHuds, offset: 0x1b, size: 0x1, def value: None
  bool ___noTextsAndHuds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings, ___staticLights) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings, ___leftHanded) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings, ___swapColors) == 0x12, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings, ___playerHeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings, ___disableSFX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings, ___reduceDebris) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings, ___advancedHud) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings, ___noTextsAndHuds) == 0x1b, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveDataV1_0_1/PlayerAllOverallStatsData
class CORDL_TYPE PlayerSaveDataV1_0_1_PlayerAllOverallStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field campaignOverallStatsData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_campaignOverallStatsData,
                      put = __cordl_internal_set_campaignOverallStatsData)) ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* campaignOverallStatsData;

  /// @brief Field partyFreePlayOverallStatsData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_partyFreePlayOverallStatsData,
                      put = __cordl_internal_set_partyFreePlayOverallStatsData)) ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* partyFreePlayOverallStatsData;

  /// @brief Field soloFreePlayOverallStatsData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_soloFreePlayOverallStatsData,
                      put = __cordl_internal_set_soloFreePlayOverallStatsData)) ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* soloFreePlayOverallStatsData;

  static inline ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData* New_ctor();

  static inline ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData* New_ctor(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* campaignOverallStatsData,
                                                                                            ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* soloFreePlayOverallStatsData,
                                                                                            ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* partyFreePlayOverallStatsData);

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* const& __cordl_internal_get_campaignOverallStatsData() const;

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*& __cordl_internal_get_campaignOverallStatsData();

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* const& __cordl_internal_get_partyFreePlayOverallStatsData() const;

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*& __cordl_internal_get_partyFreePlayOverallStatsData();

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* const& __cordl_internal_get_soloFreePlayOverallStatsData() const;

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*& __cordl_internal_get_soloFreePlayOverallStatsData();

  constexpr void __cordl_internal_set_campaignOverallStatsData(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* value);

  constexpr void __cordl_internal_set_partyFreePlayOverallStatsData(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* value);

  constexpr void __cordl_internal_set_soloFreePlayOverallStatsData(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* value);

  /// @brief Method .ctor, addr 0x26ff814, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x26ff8b0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* campaignOverallStatsData,
                    ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* soloFreePlayOverallStatsData,
                    ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* partyFreePlayOverallStatsData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveDataV1_0_1_PlayerAllOverallStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_PlayerAllOverallStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveDataV1_0_1_PlayerAllOverallStatsData(PlayerSaveDataV1_0_1_PlayerAllOverallStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_PlayerAllOverallStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveDataV1_0_1_PlayerAllOverallStatsData(PlayerSaveDataV1_0_1_PlayerAllOverallStatsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13277 };

  /// @brief Field campaignOverallStatsData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* ___campaignOverallStatsData;

  /// @brief Field soloFreePlayOverallStatsData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* ___soloFreePlayOverallStatsData;

  /// @brief Field partyFreePlayOverallStatsData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* ___partyFreePlayOverallStatsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData, ___campaignOverallStatsData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData, ___soloFreePlayOverallStatsData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData, ___partyFreePlayOverallStatsData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveDataV1_0_1/PlayerOverallStatsData
class CORDL_TYPE PlayerSaveDataV1_0_1_PlayerOverallStatsData : public ::System::Object {
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

  static inline ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* New_ctor();

  static inline ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* New_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore,
                                                                                         int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount,
                                                                                         float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier);

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

  /// @brief Method .ctor, addr 0x26ff8a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x26ff8ec, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount,
                    int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveDataV1_0_1_PlayerOverallStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_PlayerOverallStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveDataV1_0_1_PlayerOverallStatsData(PlayerSaveDataV1_0_1_PlayerOverallStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_PlayerOverallStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveDataV1_0_1_PlayerOverallStatsData(PlayerSaveDataV1_0_1_PlayerOverallStatsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13278 };

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
static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData, ___goodCutsCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData, ___badCutsCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData, ___missedCutsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData, ___totalScore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData, ___playedLevelsCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData, ___cleardLevelsCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData, ___failedLevelsCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData, ___fullComboCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData, ___timePlayed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData, ___handDistanceTravelled) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData, ___cummulativeCutScoreWithoutMultiplier) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficulty, RankModel::Rank, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveDataV1_0_1/PlayerLevelStatsData
class CORDL_TYPE PlayerSaveDataV1_0_1_PlayerLevelStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field difficulty, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_difficulty, put = __cordl_internal_set_difficulty)) ::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field fullCombo, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_fullCombo, put = __cordl_internal_set_fullCombo)) bool fullCombo;

  /// @brief Field highScore, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_highScore, put = __cordl_internal_set_highScore)) int32_t highScore;

  /// @brief Field levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelId, put = __cordl_internal_set_levelId)) ::StringW levelId;

  /// @brief Field maxCombo, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_maxCombo, put = __cordl_internal_set_maxCombo)) int32_t maxCombo;

  /// @brief Field maxRank, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_maxRank, put = __cordl_internal_set_maxRank)) ::GlobalNamespace::RankModel_Rank maxRank;

  /// @brief Field playCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_playCount, put = __cordl_internal_set_playCount)) int32_t playCount;

  /// @brief Field validScore, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_validScore, put = __cordl_internal_set_validScore)) bool validScore;

  static inline ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData* New_ctor();

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

  constexpr void __cordl_internal_set_difficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set_fullCombo(bool value);

  constexpr void __cordl_internal_set_highScore(int32_t value);

  constexpr void __cordl_internal_set_levelId(::StringW value);

  constexpr void __cordl_internal_set_maxCombo(int32_t value);

  constexpr void __cordl_internal_set_maxRank(::GlobalNamespace::RankModel_Rank value);

  constexpr void __cordl_internal_set_playCount(int32_t value);

  constexpr void __cordl_internal_set_validScore(bool value);

  /// @brief Method .ctor, addr 0x26ff99c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveDataV1_0_1_PlayerLevelStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_PlayerLevelStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveDataV1_0_1_PlayerLevelStatsData(PlayerSaveDataV1_0_1_PlayerLevelStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_PlayerLevelStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveDataV1_0_1_PlayerLevelStatsData(PlayerSaveDataV1_0_1_PlayerLevelStatsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13279 };

  /// @brief Field levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___levelId;

  /// @brief Field difficulty, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___difficulty;

  /// @brief Field highScore, offset: 0x1c, size: 0x4, def value: None
  int32_t ___highScore;

  /// @brief Field maxCombo, offset: 0x20, size: 0x4, def value: None
  int32_t ___maxCombo;

  /// @brief Field fullCombo, offset: 0x24, size: 0x1, def value: None
  bool ___fullCombo;

  /// @brief Field maxRank, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::RankModel_Rank ___maxRank;

  /// @brief Field validScore, offset: 0x2c, size: 0x1, def value: None
  bool ___validScore;

  /// @brief Field playCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___playCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData, ___levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData, ___difficulty) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData, ___highScore) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData, ___maxCombo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData, ___fullCombo) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData, ___maxRank) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData, ___validScore) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData, ___playCount) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveDataV1_0_1/PlayerMissionStatsData
class CORDL_TYPE PlayerSaveDataV1_0_1_PlayerMissionStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cleared, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_cleared, put = __cordl_internal_set_cleared)) bool cleared;

  /// @brief Field missionId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_missionId, put = __cordl_internal_set_missionId)) ::StringW missionId;

  static inline ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData* New_ctor();

  constexpr bool const& __cordl_internal_get_cleared() const;

  constexpr bool& __cordl_internal_get_cleared();

  constexpr ::StringW const& __cordl_internal_get_missionId() const;

  constexpr ::StringW& __cordl_internal_get_missionId();

  constexpr void __cordl_internal_set_cleared(bool value);

  constexpr void __cordl_internal_set_missionId(::StringW value);

  /// @brief Method .ctor, addr 0x26ff9a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveDataV1_0_1_PlayerMissionStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_PlayerMissionStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveDataV1_0_1_PlayerMissionStatsData(PlayerSaveDataV1_0_1_PlayerMissionStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_PlayerMissionStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveDataV1_0_1_PlayerMissionStatsData(PlayerSaveDataV1_0_1_PlayerMissionStatsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13280 };

  /// @brief Field missionId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___missionId;

  /// @brief Field cleared, offset: 0x18, size: 0x1, def value: None
  bool ___cleared;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData, ___missionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData, ___cleared) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveDataV1_0_1/AchievementsData
class CORDL_TYPE PlayerSaveDataV1_0_1_AchievementsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field unlockedAchievements, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_unlockedAchievements, put = __cordl_internal_set_unlockedAchievements)) ::ArrayW<::StringW, ::Array<::StringW>*> unlockedAchievements;

  /// @brief Field unlockedAchievementsToUpload, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_unlockedAchievementsToUpload, put = __cordl_internal_set_unlockedAchievementsToUpload)) ::ArrayW<::StringW, ::Array<::StringW>*>
      unlockedAchievementsToUpload;

  static inline ::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData* New_ctor();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_unlockedAchievements() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_unlockedAchievements();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_unlockedAchievementsToUpload() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_unlockedAchievementsToUpload();

  constexpr void __cordl_internal_set_unlockedAchievements(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_unlockedAchievementsToUpload(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x26ff9ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveDataV1_0_1_AchievementsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_AchievementsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveDataV1_0_1_AchievementsData(PlayerSaveDataV1_0_1_AchievementsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_AchievementsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveDataV1_0_1_AchievementsData(PlayerSaveDataV1_0_1_AchievementsData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13281 };

  /// @brief Field unlockedAchievements, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___unlockedAchievements;

  /// @brief Field unlockedAchievementsToUpload, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___unlockedAchievementsToUpload;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData, ___unlockedAchievements) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData, ___unlockedAchievementsToUpload) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveDataV1_0_1/LocalPlayer
class CORDL_TYPE PlayerSaveDataV1_0_1_LocalPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field achievementsData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_achievementsData, put = __cordl_internal_set_achievementsData)) ::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData* achievementsData;

  /// @brief Field gameplayModifiers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers)) ::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers* gameplayModifiers;

  /// @brief Field levelsStatsData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_levelsStatsData,
                      put = __cordl_internal_set_levelsStatsData)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData*>* levelsStatsData;

  /// @brief Field missionsStatsData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_missionsStatsData,
                      put = __cordl_internal_set_missionsStatsData)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData*>* missionsStatsData;

  /// @brief Field playerAllOverallStatsData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_playerAllOverallStatsData,
                      put = __cordl_internal_set_playerAllOverallStatsData)) ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData* playerAllOverallStatsData;

  /// @brief Field playerId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_playerId, put = __cordl_internal_set_playerId)) ::StringW playerId;

  /// @brief Field playerName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerName, put = __cordl_internal_set_playerName)) ::StringW playerName;

  /// @brief Field playerSpecificSettings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings,
                      put = __cordl_internal_set_playerSpecificSettings)) ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field shouldShowTutorialPrompt, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldShowTutorialPrompt, put = __cordl_internal_set_shouldShowTutorialPrompt)) bool shouldShowTutorialPrompt;

  /// @brief Field showedMissionHelpIds, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_showedMissionHelpIds, put = __cordl_internal_set_showedMissionHelpIds)) ::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds;

  static inline ::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer* New_ctor();

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData* const& __cordl_internal_get_achievementsData() const;

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData*& __cordl_internal_get_achievementsData();

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers* const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData*>* const& __cordl_internal_get_levelsStatsData() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData*>*& __cordl_internal_get_levelsStatsData();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData*>* const& __cordl_internal_get_missionsStatsData() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData*>*& __cordl_internal_get_missionsStatsData();

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData* const& __cordl_internal_get_playerAllOverallStatsData() const;

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData*& __cordl_internal_get_playerAllOverallStatsData();

  constexpr ::StringW const& __cordl_internal_get_playerId() const;

  constexpr ::StringW& __cordl_internal_get_playerId();

  constexpr ::StringW const& __cordl_internal_get_playerName() const;

  constexpr ::StringW& __cordl_internal_get_playerName();

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings* const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr bool const& __cordl_internal_get_shouldShowTutorialPrompt() const;

  constexpr bool& __cordl_internal_get_shouldShowTutorialPrompt();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_showedMissionHelpIds() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_showedMissionHelpIds();

  constexpr void __cordl_internal_set_achievementsData(::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData* value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers* value);

  constexpr void __cordl_internal_set_levelsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData*>* value);

  constexpr void __cordl_internal_set_missionsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData*>* value);

  constexpr void __cordl_internal_set_playerAllOverallStatsData(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData* value);

  constexpr void __cordl_internal_set_playerId(::StringW value);

  constexpr void __cordl_internal_set_playerName(::StringW value);

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set_shouldShowTutorialPrompt(bool value);

  constexpr void __cordl_internal_set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x26ff9b4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveDataV1_0_1_LocalPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_LocalPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveDataV1_0_1_LocalPlayer(PlayerSaveDataV1_0_1_LocalPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_LocalPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveDataV1_0_1_LocalPlayer(PlayerSaveDataV1_0_1_LocalPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13282 };

  /// @brief Field playerId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___playerId;

  /// @brief Field playerName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___playerName;

  /// @brief Field shouldShowTutorialPrompt, offset: 0x20, size: 0x1, def value: None
  bool ___shouldShowTutorialPrompt;

  /// @brief Field gameplayModifiers, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers* ___gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings* ___playerSpecificSettings;

  /// @brief Field playerAllOverallStatsData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData* ___playerAllOverallStatsData;

  /// @brief Field levelsStatsData, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData*>* ___levelsStatsData;

  /// @brief Field missionsStatsData, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData*>* ___missionsStatsData;

  /// @brief Field showedMissionHelpIds, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___showedMissionHelpIds;

  /// @brief Field achievementsData, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData* ___achievementsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer, ___playerId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer, ___playerName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer, ___shouldShowTutorialPrompt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer, ___gameplayModifiers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer, ___playerSpecificSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer, ___playerAllOverallStatsData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer, ___levelsStatsData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer, ___missionsStatsData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer, ___showedMissionHelpIds) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer, ___achievementsData) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveDataV1_0_1/GuestPlayer
class CORDL_TYPE PlayerSaveDataV1_0_1_GuestPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_playerName, put = __cordl_internal_set_playerName)) ::StringW playerName;

  /// @brief Field playerSpecificSettings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings,
                      put = __cordl_internal_set_playerSpecificSettings)) ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings* playerSpecificSettings;

  static inline ::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_playerName() const;

  constexpr ::StringW& __cordl_internal_get_playerName();

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings* const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr void __cordl_internal_set_playerName(::StringW value);

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings* value);

  /// @brief Method .ctor, addr 0x26ff9c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveDataV1_0_1_GuestPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_GuestPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveDataV1_0_1_GuestPlayer(PlayerSaveDataV1_0_1_GuestPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1_GuestPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveDataV1_0_1_GuestPlayer(PlayerSaveDataV1_0_1_GuestPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13283 };

  /// @brief Field playerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___playerName;

  /// @brief Field playerSpecificSettings, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings* ___playerSpecificSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer, ___playerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer, ___playerSpecificSettings) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficulty, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveDataV1_0_1
class CORDL_TYPE PlayerSaveDataV1_0_1 : public ::System::Object {
public:
  // Declarations
  using AchievementsData = ::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData;

  using GameplayModifiers = ::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers;

  using GuestPlayer = ::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer;

  using LocalPlayer = ::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer;

  using PlayerAllOverallStatsData = ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData;

  using PlayerLevelStatsData = ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData;

  using PlayerMissionStatsData = ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData;

  using PlayerOverallStatsData = ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData;

  using PlayerSpecificSettings = ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings;

  /// @brief Field guestPlayers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_guestPlayers,
                      put = __cordl_internal_set_guestPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer*>* guestPlayers;

  /// @brief Field lastSelectedBeatmapDifficulty, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_lastSelectedBeatmapDifficulty,
                      put = __cordl_internal_set_lastSelectedBeatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty;

  /// @brief Field localPlayers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localPlayers,
                      put = __cordl_internal_set_localPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer*>* localPlayers;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::StringW version;

  static inline ::GlobalNamespace::PlayerSaveDataV1_0_1* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer*>* const& __cordl_internal_get_guestPlayers() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer*>*& __cordl_internal_get_guestPlayers();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_lastSelectedBeatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_lastSelectedBeatmapDifficulty();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer*>* const& __cordl_internal_get_localPlayers() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer*>*& __cordl_internal_get_localPlayers();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_guestPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer*>* value);

  constexpr void __cordl_internal_set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set_localPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer*>* value);

  constexpr void __cordl_internal_set_version(::StringW value);

  /// @brief Method .ctor, addr 0x26ff7f4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveDataV1_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveDataV1_0_1(PlayerSaveDataV1_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveDataV1_0_1(PlayerSaveDataV1_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13284 };

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"" };

  /// @brief Field kDefaulLastSelectedBeatmapDifficulty value: I32(1)
  static ::GlobalNamespace::BeatmapDifficulty const kDefaulLastSelectedBeatmapDifficulty;

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field localPlayers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer*>* ___localPlayers;

  /// @brief Field guestPlayers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer*>* ___guestPlayers;

  /// @brief Field lastSelectedBeatmapDifficulty, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___lastSelectedBeatmapDifficulty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1, ___localPlayers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1, ___guestPlayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1, ___lastSelectedBeatmapDifficulty) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveDataV1_0_1, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType, "", "PlayerSaveDataV1_0_1/GameplayModifiers/EnabledObstacleType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType, "", "PlayerSaveDataV1_0_1/GameplayModifiers/EnergyType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed, "", "PlayerSaveDataV1_0_1/GameplayModifiers/SongSpeed");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1*, "", "PlayerSaveDataV1_0_1");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData*, "", "PlayerSaveDataV1_0_1/AchievementsData");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers*, "", "PlayerSaveDataV1_0_1/GameplayModifiers");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer*, "", "PlayerSaveDataV1_0_1/GuestPlayer");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer*, "", "PlayerSaveDataV1_0_1/LocalPlayer");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData*, "", "PlayerSaveDataV1_0_1/PlayerAllOverallStatsData");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData*, "", "PlayerSaveDataV1_0_1/PlayerLevelStatsData");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData*, "", "PlayerSaveDataV1_0_1/PlayerMissionStatsData");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*, "", "PlayerSaveDataV1_0_1/PlayerOverallStatsData");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings*, "", "PlayerSaveDataV1_0_1/PlayerSpecificSettings");
