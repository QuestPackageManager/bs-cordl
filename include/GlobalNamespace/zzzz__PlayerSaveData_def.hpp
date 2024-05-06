#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "GlobalNamespace/zzzz__VersionSaveData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSaveData)
namespace GlobalNamespace {
class __PlayerSaveData__ColorScheme;
}
namespace GlobalNamespace {
class __PlayerSaveData__ColorSchemesSettings;
}
namespace GlobalNamespace {
class __PlayerSaveData__GameplayModifiers;
}
namespace GlobalNamespace {
struct __PlayerSaveData__GameplayModifiers__EnabledObstacleType;
}
namespace GlobalNamespace {
struct __PlayerSaveData__GameplayModifiers__EnergyType;
}
namespace GlobalNamespace {
struct __PlayerSaveData__GameplayModifiers__SongSpeed;
}
namespace GlobalNamespace {
class __PlayerSaveData__GuestPlayer;
}
namespace GlobalNamespace {
class __PlayerSaveData__LocalPlayer;
}
namespace GlobalNamespace {
class __PlayerSaveData__MultiplayerModeSettings;
}
namespace GlobalNamespace {
class __PlayerSaveData__OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerAgreementsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerLevelStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerMissionStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerOverallStatsData;
}
namespace GlobalNamespace {
struct __PlayerSaveData__PlayerSensitivityFlagSaveData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct __PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData;
}
namespace GlobalNamespace {
struct __PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData;
}
namespace GlobalNamespace {
struct __PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PracticeSettings;
}
namespace GlobalNamespace {
struct __PlayerSaveData__UserAgeCategorySaveData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct __PlayerSaveData__GameplayModifiers__EnabledObstacleType;
}
namespace GlobalNamespace {
struct __PlayerSaveData__GameplayModifiers__EnergyType;
}
namespace GlobalNamespace {
struct __PlayerSaveData__GameplayModifiers__SongSpeed;
}
namespace GlobalNamespace {
struct __PlayerSaveData__PlayerSensitivityFlagSaveData;
}
namespace GlobalNamespace {
struct __PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData;
}
namespace GlobalNamespace {
struct __PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData;
}
namespace GlobalNamespace {
struct __PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData;
}
namespace GlobalNamespace {
struct __PlayerSaveData__UserAgeCategorySaveData;
}
namespace GlobalNamespace {
class PlayerSaveData;
}
namespace GlobalNamespace {
class __PlayerSaveData__ColorScheme;
}
namespace GlobalNamespace {
class __PlayerSaveData__ColorSchemesSettings;
}
namespace GlobalNamespace {
class __PlayerSaveData__GameplayModifiers;
}
namespace GlobalNamespace {
class __PlayerSaveData__GuestPlayer;
}
namespace GlobalNamespace {
class __PlayerSaveData__LocalPlayer;
}
namespace GlobalNamespace {
class __PlayerSaveData__MultiplayerModeSettings;
}
namespace GlobalNamespace {
class __PlayerSaveData__OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerAgreementsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerLevelStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerMissionStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerSpecificSettings;
}
namespace GlobalNamespace {
class __PlayerSaveData__PracticeSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType);
MARK_VAL_T(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType);
MARK_VAL_T(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed);
MARK_VAL_T(::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData);
MARK_VAL_T(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData);
MARK_VAL_T(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData);
MARK_VAL_T(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData);
MARK_VAL_T(::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveData);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveData__ColorScheme);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveData__GameplayModifiers);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveData__GuestPlayer);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveData__LocalPlayer);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveData__PracticeSettings);
// Type: ::EnabledObstacleType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerSaveData::GameplayModifiers::EnabledObstacleType
struct CORDL_TYPE __PlayerSaveData__GameplayModifiers__EnabledObstacleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlayerSaveData__GameplayModifiers__EnabledObstacleType_Unwrapped
  enum struct ____PlayerSaveData__GameplayModifiers__EnabledObstacleType_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_FullHeightOnly = static_cast<int32_t>(0x1),
    __E_None = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlayerSaveData__GameplayModifiers__EnabledObstacleType_Unwrapped() const noexcept {
    return static_cast<____PlayerSaveData__GameplayModifiers__EnabledObstacleType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__GameplayModifiers__EnabledObstacleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__GameplayModifiers__EnabledObstacleType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType const All;

  /// @brief Field FullHeightOnly value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType const FullHeightOnly;

  /// @brief Field None value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EnergyType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerSaveData::GameplayModifiers::EnergyType
struct CORDL_TYPE __PlayerSaveData__GameplayModifiers__EnergyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlayerSaveData__GameplayModifiers__EnergyType_Unwrapped
  enum struct ____PlayerSaveData__GameplayModifiers__EnergyType_Unwrapped : int32_t {
    __E_Bar = static_cast<int32_t>(0x0),
    __E_Battery = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlayerSaveData__GameplayModifiers__EnergyType_Unwrapped() const noexcept {
    return static_cast<____PlayerSaveData__GameplayModifiers__EnergyType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__GameplayModifiers__EnergyType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__GameplayModifiers__EnergyType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bar value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType const Bar;

  /// @brief Field Battery value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType const Battery;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SongSpeed
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerSaveData::GameplayModifiers::SongSpeed
struct CORDL_TYPE __PlayerSaveData__GameplayModifiers__SongSpeed {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlayerSaveData__GameplayModifiers__SongSpeed_Unwrapped
  enum struct ____PlayerSaveData__GameplayModifiers__SongSpeed_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Faster = static_cast<int32_t>(0x1),
    __E_Slower = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlayerSaveData__GameplayModifiers__SongSpeed_Unwrapped() const noexcept {
    return static_cast<____PlayerSaveData__GameplayModifiers__SongSpeed_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__GameplayModifiers__SongSpeed();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__GameplayModifiers__SongSpeed(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Faster value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed const Faster;

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed const Normal;

  /// @brief Field Slower value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed const Slower;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplayModifiers
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData::GameplayModifiers*
class CORDL_TYPE __PlayerSaveData__GameplayModifiers : public ::System::Object {
public:
  // Declarations
  using EnabledObstacleType = ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType;

  using EnergyType = ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType;

  using SongSpeed = ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed;

  /// @brief Field disappearingArrows, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get_disappearingArrows, put = __cordl_internal_set_disappearingArrows)) bool disappearingArrows;

  /// @brief Field enabledObstacleType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_enabledObstacleType,
                      put = __cordl_internal_set_enabledObstacleType))::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType enabledObstacleType;

  /// @brief Field energyType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_energyType, put = __cordl_internal_set_energyType))::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType energyType;

  /// @brief Field failOnSaberClash, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_failOnSaberClash, put = __cordl_internal_set_failOnSaberClash)) bool failOnSaberClash;

  /// @brief Field fastNotes, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_fastNotes, put = __cordl_internal_set_fastNotes)) bool fastNotes;

  /// @brief Field ghostNotes, offset 0x1f, size 0x1
  __declspec(property(get = __cordl_internal_get_ghostNotes, put = __cordl_internal_set_ghostNotes)) bool ghostNotes;

  /// @brief Field instaFail, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_instaFail, put = __cordl_internal_set_instaFail)) bool instaFail;

  /// @brief Field noArrows, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_noArrows, put = __cordl_internal_set_noArrows)) bool noArrows;

  /// @brief Field noBombs, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_noBombs, put = __cordl_internal_set_noBombs)) bool noBombs;

  /// @brief Field noFailOn0Energy, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_noFailOn0Energy, put = __cordl_internal_set_noFailOn0Energy)) bool noFailOn0Energy;

  /// @brief Field proMode, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_proMode, put = __cordl_internal_set_proMode)) bool proMode;

  /// @brief Field smallCubes, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_smallCubes, put = __cordl_internal_set_smallCubes)) bool smallCubes;

  /// @brief Field songSpeed, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_songSpeed, put = __cordl_internal_set_songSpeed))::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed songSpeed;

  /// @brief Field strictAngles, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_strictAngles, put = __cordl_internal_set_strictAngles)) bool strictAngles;

  /// @brief Field zenMode, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get_zenMode, put = __cordl_internal_set_zenMode)) bool zenMode;

  static inline ::GlobalNamespace::__PlayerSaveData__GameplayModifiers* New_ctor();

  constexpr bool const& __cordl_internal_get_disappearingArrows() const;

  constexpr bool& __cordl_internal_get_disappearingArrows();

  constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType const& __cordl_internal_get_enabledObstacleType() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType& __cordl_internal_get_enabledObstacleType();

  constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType const& __cordl_internal_get_energyType() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType& __cordl_internal_get_energyType();

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

  constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed const& __cordl_internal_get_songSpeed() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed& __cordl_internal_get_songSpeed();

  constexpr bool const& __cordl_internal_get_strictAngles() const;

  constexpr bool& __cordl_internal_get_strictAngles();

  constexpr bool const& __cordl_internal_get_zenMode() const;

  constexpr bool& __cordl_internal_get_zenMode();

  constexpr void __cordl_internal_set_disappearingArrows(bool value);

  constexpr void __cordl_internal_set_enabledObstacleType(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType value);

  constexpr void __cordl_internal_set_energyType(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType value);

  constexpr void __cordl_internal_set_failOnSaberClash(bool value);

  constexpr void __cordl_internal_set_fastNotes(bool value);

  constexpr void __cordl_internal_set_ghostNotes(bool value);

  constexpr void __cordl_internal_set_instaFail(bool value);

  constexpr void __cordl_internal_set_noArrows(bool value);

  constexpr void __cordl_internal_set_noBombs(bool value);

  constexpr void __cordl_internal_set_noFailOn0Energy(bool value);

  constexpr void __cordl_internal_set_proMode(bool value);

  constexpr void __cordl_internal_set_smallCubes(bool value);

  constexpr void __cordl_internal_set_songSpeed(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed value);

  constexpr void __cordl_internal_set_strictAngles(bool value);

  constexpr void __cordl_internal_set_zenMode(bool value);

  /// @brief Method .ctor, addr 0x14e69a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__GameplayModifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__GameplayModifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__GameplayModifiers(__PlayerSaveData__GameplayModifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__GameplayModifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__GameplayModifiers(__PlayerSaveData__GameplayModifiers const&) = delete;

  /// @brief Field energyType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType ___energyType;

  /// @brief Field instaFail, offset: 0x14, size: 0x1, def value: None
  bool ___instaFail;

  /// @brief Field failOnSaberClash, offset: 0x15, size: 0x1, def value: None
  bool ___failOnSaberClash;

  /// @brief Field enabledObstacleType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType ___enabledObstacleType;

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
  ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed ___songSpeed;

  /// @brief Field noArrows, offset: 0x28, size: 0x1, def value: None
  bool ___noArrows;

  /// @brief Field noFailOn0Energy, offset: 0x29, size: 0x1, def value: None
  bool ___noFailOn0Energy;

  /// @brief Field proMode, offset: 0x2a, size: 0x1, def value: None
  bool ___proMode;

  /// @brief Field zenMode, offset: 0x2b, size: 0x1, def value: None
  bool ___zenMode;

  /// @brief Field smallCubes, offset: 0x2c, size: 0x1, def value: None
  bool ___smallCubes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__GameplayModifiers, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___energyType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___instaFail) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___failOnSaberClash) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___enabledObstacleType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___fastNotes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___strictAngles) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___disappearingArrows) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___ghostNotes) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___noBombs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___songSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___noArrows) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___noFailOn0Energy) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___proMode) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___zenMode) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GameplayModifiers, ___smallCubes) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EnvironmentEffectsFilterPresetSaveData
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerSaveData::PlayerSpecificSettings::EnvironmentEffectsFilterPresetSaveData
struct CORDL_TYPE __PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData_Unwrapped
  enum struct ____PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData_Unwrapped : int32_t {
    __E_AllEffects = static_cast<int32_t>(0x0),
    __E_StrobeFilter = static_cast<int32_t>(0x1),
    __E_NoEffects = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData_Unwrapped() const noexcept {
    return static_cast<____PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AllEffects value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const AllEffects;

  /// @brief Field NoEffects value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const NoEffects;

  /// @brief Field StrobeFilter value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const StrobeFilter;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ArcVisibilityTypeSaveData
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerSaveData::PlayerSpecificSettings::ArcVisibilityTypeSaveData
struct CORDL_TYPE __PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData_Unwrapped
  enum struct ____PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Low = static_cast<int32_t>(0x1),
    __E_Standard = static_cast<int32_t>(0x2),
    __E_High = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData_Unwrapped() const noexcept {
    return static_cast<____PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field High value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const High;

  /// @brief Field Low value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const Low;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const None;

  /// @brief Field Standard value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const Standard;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteJumpDurationTypeSettingsSaveData
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerSaveData::PlayerSpecificSettings::NoteJumpDurationTypeSettingsSaveData
struct CORDL_TYPE __PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData_Unwrapped
  enum struct ____PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData_Unwrapped : int32_t {
    __E_Dynamic = static_cast<int32_t>(0x0),
    __E_Static = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData_Unwrapped() const noexcept {
    return static_cast<____PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Dynamic value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData const Dynamic;

  /// @brief Field Static value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData const Static;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerSpecificSettings
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData::PlayerSpecificSettings*
class CORDL_TYPE __PlayerSaveData__PlayerSpecificSettings : public ::System::Object {
public:
  // Declarations
  using ArcVisibilityTypeSaveData = ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData;

  using EnvironmentEffectsFilterPresetSaveData = ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData;

  using NoteJumpDurationTypeSettingsSaveData = ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData;

  /// @brief Field _noteJumpDurationTypeSettingsSaveData, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__noteJumpDurationTypeSettingsSaveData,
                      put = __cordl_internal_set__noteJumpDurationTypeSettingsSaveData))::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData
      _noteJumpDurationTypeSettingsSaveData;

  /// @brief Field adaptiveSfx, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_adaptiveSfx, put = __cordl_internal_set_adaptiveSfx)) bool adaptiveSfx;

  /// @brief Field advancedHud, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_advancedHud, put = __cordl_internal_set_advancedHud)) bool advancedHud;

  /// @brief Field arcsHapticFeedback, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_arcsHapticFeedback, put = __cordl_internal_set_arcsHapticFeedback)) bool arcsHapticFeedback;

  /// @brief Field arcsVisibleSaveData, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_arcsVisibleSaveData,
                      put = __cordl_internal_set_arcsVisibleSaveData))::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData arcsVisibleSaveData;

  /// @brief Field autoRestart, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_autoRestart, put = __cordl_internal_set_autoRestart)) bool autoRestart;

  /// @brief Field automaticPlayerHeight, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_automaticPlayerHeight, put = __cordl_internal_set_automaticPlayerHeight)) bool automaticPlayerHeight;

  /// @brief Field environmentEffectsFilterDefaultPreset, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_environmentEffectsFilterDefaultPreset,
                      put = __cordl_internal_set_environmentEffectsFilterDefaultPreset))::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData
      environmentEffectsFilterDefaultPreset;

  /// @brief Field environmentEffectsFilterExpertPlusPreset, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_environmentEffectsFilterExpertPlusPreset,
                      put = __cordl_internal_set_environmentEffectsFilterExpertPlusPreset))::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData
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

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings* New_ctor();

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData const& __cordl_internal_get__noteJumpDurationTypeSettingsSaveData() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData& __cordl_internal_get__noteJumpDurationTypeSettingsSaveData();

  constexpr bool const& __cordl_internal_get_adaptiveSfx() const;

  constexpr bool& __cordl_internal_get_adaptiveSfx();

  constexpr bool const& __cordl_internal_get_advancedHud() const;

  constexpr bool& __cordl_internal_get_advancedHud();

  constexpr bool const& __cordl_internal_get_arcsHapticFeedback() const;

  constexpr bool& __cordl_internal_get_arcsHapticFeedback();

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const& __cordl_internal_get_arcsVisibleSaveData() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData& __cordl_internal_get_arcsVisibleSaveData();

  constexpr bool const& __cordl_internal_get_autoRestart() const;

  constexpr bool& __cordl_internal_get_autoRestart();

  constexpr bool const& __cordl_internal_get_automaticPlayerHeight() const;

  constexpr bool& __cordl_internal_get_automaticPlayerHeight();

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const& __cordl_internal_get_environmentEffectsFilterDefaultPreset() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData& __cordl_internal_get_environmentEffectsFilterDefaultPreset();

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const& __cordl_internal_get_environmentEffectsFilterExpertPlusPreset() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData& __cordl_internal_get_environmentEffectsFilterExpertPlusPreset();

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

  constexpr void __cordl_internal_set__noteJumpDurationTypeSettingsSaveData(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData value);

  constexpr void __cordl_internal_set_adaptiveSfx(bool value);

  constexpr void __cordl_internal_set_advancedHud(bool value);

  constexpr void __cordl_internal_set_arcsHapticFeedback(bool value);

  constexpr void __cordl_internal_set_arcsVisibleSaveData(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData value);

  constexpr void __cordl_internal_set_autoRestart(bool value);

  constexpr void __cordl_internal_set_automaticPlayerHeight(bool value);

  constexpr void __cordl_internal_set_environmentEffectsFilterDefaultPreset(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData value);

  constexpr void __cordl_internal_set_environmentEffectsFilterExpertPlusPreset(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData value);

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

  /// @brief Method .ctor, addr 0x14e69ac, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerSpecificSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerSpecificSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__PlayerSpecificSettings(__PlayerSaveData__PlayerSpecificSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerSpecificSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__PlayerSpecificSettings(__PlayerSaveData__PlayerSpecificSettings const&) = delete;

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
  ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData ____noteJumpDurationTypeSettingsSaveData;

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
  ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData ___arcsVisibleSaveData;

  /// @brief Field environmentEffectsFilterDefaultPreset, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData ___environmentEffectsFilterDefaultPreset;

  /// @brief Field environmentEffectsFilterExpertPlusPreset, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData ___environmentEffectsFilterExpertPlusPreset;

  /// @brief Field headsetHapticIntensity, offset: 0x48, size: 0x4, def value: None
  float_t ___headsetHapticIntensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___staticLights) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___leftHanded) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___playerHeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___automaticPlayerHeight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___sfxVolume) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___reduceDebris) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___noTextsAndHuds) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___advancedHud) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___saberTrailIntensity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ____noteJumpDurationTypeSettingsSaveData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___noteJumpFixedDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___autoRestart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___noFailEffects) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___noteJumpBeatOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___hideNoteSpawnEffect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___adaptiveSfx) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___arcsHapticFeedback) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___arcsVisibleSaveData) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___environmentEffectsFilterDefaultPreset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___environmentEffectsFilterExpertPlusPreset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings, ___headsetHapticIntensity) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerAllOverallStatsData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData::PlayerAllOverallStatsData*
class CORDL_TYPE __PlayerSaveData__PlayerAllOverallStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field campaignOverallStatsData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_campaignOverallStatsData,
                      put = __cordl_internal_set_campaignOverallStatsData))::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* campaignOverallStatsData;

  /// @brief Field onlinePlayOverallStatsData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onlinePlayOverallStatsData,
                      put = __cordl_internal_set_onlinePlayOverallStatsData))::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* onlinePlayOverallStatsData;

  /// @brief Field partyFreePlayOverallStatsData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_partyFreePlayOverallStatsData,
                      put = __cordl_internal_set_partyFreePlayOverallStatsData))::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* partyFreePlayOverallStatsData;

  /// @brief Field soloFreePlayOverallStatsData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_soloFreePlayOverallStatsData,
                      put = __cordl_internal_set_soloFreePlayOverallStatsData))::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* soloFreePlayOverallStatsData;

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* New_ctor();

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* New_ctor(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* campaignOverallStatsData,
                                                                                         ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* soloFreePlayOverallStatsData,
                                                                                         ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* partyFreePlayOverallStatsData,
                                                                                         ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* onlinePlayOverallStatsData);

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*& __cordl_internal_get_campaignOverallStatsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> const& __cordl_internal_get_campaignOverallStatsData() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*& __cordl_internal_get_onlinePlayOverallStatsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> const& __cordl_internal_get_onlinePlayOverallStatsData() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*& __cordl_internal_get_partyFreePlayOverallStatsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> const& __cordl_internal_get_partyFreePlayOverallStatsData() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*& __cordl_internal_get_soloFreePlayOverallStatsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> const& __cordl_internal_get_soloFreePlayOverallStatsData() const;

  constexpr void __cordl_internal_set_campaignOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* value);

  constexpr void __cordl_internal_set_onlinePlayOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* value);

  constexpr void __cordl_internal_set_partyFreePlayOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* value);

  constexpr void __cordl_internal_set_soloFreePlayOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* value);

  /// @brief Method .ctor, addr 0x14ea398, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x14ea544, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* campaignOverallStatsData, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* soloFreePlayOverallStatsData,
                    ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* partyFreePlayOverallStatsData,
                    ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* onlinePlayOverallStatsData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerAllOverallStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerAllOverallStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__PlayerAllOverallStatsData(__PlayerSaveData__PlayerAllOverallStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerAllOverallStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__PlayerAllOverallStatsData(__PlayerSaveData__PlayerAllOverallStatsData const&) = delete;

  /// @brief Field campaignOverallStatsData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* ___campaignOverallStatsData;

  /// @brief Field soloFreePlayOverallStatsData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* ___soloFreePlayOverallStatsData;

  /// @brief Field partyFreePlayOverallStatsData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* ___partyFreePlayOverallStatsData;

  /// @brief Field onlinePlayOverallStatsData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* ___onlinePlayOverallStatsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData, ___campaignOverallStatsData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData, ___soloFreePlayOverallStatsData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData, ___partyFreePlayOverallStatsData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData, ___onlinePlayOverallStatsData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerOverallStatsData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData::PlayerOverallStatsData*
class CORDL_TYPE __PlayerSaveData__PlayerOverallStatsData : public ::System::Object {
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

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* New_ctor();

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* New_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore,
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

  /// @brief Method .ctor, addr 0x14ea584, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x14ea58c, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount,
                    int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerOverallStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerOverallStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__PlayerOverallStatsData(__PlayerSaveData__PlayerOverallStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerOverallStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__PlayerOverallStatsData(__PlayerSaveData__PlayerOverallStatsData const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData, ___goodCutsCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData, ___badCutsCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData, ___missedCutsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData, ___totalScore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData, ___playedLevelsCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData, ___cleardLevelsCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData, ___failedLevelsCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData, ___fullComboCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData, ___timePlayed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData, ___handDistanceTravelled) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData, ___cummulativeCutScoreWithoutMultiplier) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerLevelStatsData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData::PlayerLevelStatsData*
class CORDL_TYPE __PlayerSaveData__PlayerLevelStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapCharacteristicName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristicName, put = __cordl_internal_set_beatmapCharacteristicName))::StringW beatmapCharacteristicName;

  /// @brief Field difficulty, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_difficulty, put = __cordl_internal_set_difficulty))::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field fullCombo, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_fullCombo, put = __cordl_internal_set_fullCombo)) bool fullCombo;

  /// @brief Field highScore, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_highScore, put = __cordl_internal_set_highScore)) int32_t highScore;

  /// @brief Field levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelId, put = __cordl_internal_set_levelId))::StringW levelId;

  /// @brief Field maxCombo, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxCombo, put = __cordl_internal_set_maxCombo)) int32_t maxCombo;

  /// @brief Field maxRank, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_maxRank, put = __cordl_internal_set_maxRank))::GlobalNamespace::__RankModel__Rank maxRank;

  /// @brief Field playCount, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_playCount, put = __cordl_internal_set_playCount)) int32_t playCount;

  /// @brief Field validScore, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_validScore, put = __cordl_internal_set_validScore)) bool validScore;

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData* New_ctor();

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

  constexpr ::GlobalNamespace::__RankModel__Rank const& __cordl_internal_get_maxRank() const;

  constexpr ::GlobalNamespace::__RankModel__Rank& __cordl_internal_get_maxRank();

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

  constexpr void __cordl_internal_set_maxRank(::GlobalNamespace::__RankModel__Rank value);

  constexpr void __cordl_internal_set_playCount(int32_t value);

  constexpr void __cordl_internal_set_validScore(bool value);

  /// @brief Method .ctor, addr 0x14e6af0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerLevelStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerLevelStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__PlayerLevelStatsData(__PlayerSaveData__PlayerLevelStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerLevelStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__PlayerLevelStatsData(__PlayerSaveData__PlayerLevelStatsData const&) = delete;

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
  ::GlobalNamespace::__RankModel__Rank ___maxRank;

  /// @brief Field validScore, offset: 0x38, size: 0x1, def value: None
  bool ___validScore;

  /// @brief Field playCount, offset: 0x3c, size: 0x4, def value: None
  int32_t ___playCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData, ___levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData, ___difficulty) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData, ___beatmapCharacteristicName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData, ___highScore) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData, ___maxCombo) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData, ___fullCombo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData, ___maxRank) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData, ___validScore) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData, ___playCount) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerMissionStatsData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData::PlayerMissionStatsData*
class CORDL_TYPE __PlayerSaveData__PlayerMissionStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cleared, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_cleared, put = __cordl_internal_set_cleared)) bool cleared;

  /// @brief Field missionId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_missionId, put = __cordl_internal_set_missionId))::StringW missionId;

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData* New_ctor();

  constexpr bool const& __cordl_internal_get_cleared() const;

  constexpr bool& __cordl_internal_get_cleared();

  constexpr ::StringW const& __cordl_internal_get_missionId() const;

  constexpr ::StringW& __cordl_internal_get_missionId();

  constexpr void __cordl_internal_set_cleared(bool value);

  constexpr void __cordl_internal_set_missionId(::StringW value);

  /// @brief Method .ctor, addr 0x14e6af8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerMissionStatsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerMissionStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__PlayerMissionStatsData(__PlayerSaveData__PlayerMissionStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerMissionStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__PlayerMissionStatsData(__PlayerSaveData__PlayerMissionStatsData const&) = delete;

  /// @brief Field missionId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___missionId;

  /// @brief Field cleared, offset: 0x18, size: 0x1, def value: None
  bool ___cleared;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData, ___missionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData, ___cleared) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PracticeSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData::PracticeSettings*
class CORDL_TYPE __PlayerSaveData__PracticeSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field songSpeedMul, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_songSpeedMul, put = __cordl_internal_set_songSpeedMul)) float_t songSpeedMul;

  /// @brief Field startSongTime, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_startSongTime, put = __cordl_internal_set_startSongTime)) float_t startSongTime;

  static inline ::GlobalNamespace::__PlayerSaveData__PracticeSettings* New_ctor();

  constexpr float_t const& __cordl_internal_get_songSpeedMul() const;

  constexpr float_t& __cordl_internal_get_songSpeedMul();

  constexpr float_t const& __cordl_internal_get_startSongTime() const;

  constexpr float_t& __cordl_internal_get_startSongTime();

  constexpr void __cordl_internal_set_songSpeedMul(float_t value);

  constexpr void __cordl_internal_set_startSongTime(float_t value);

  /// @brief Method .ctor, addr 0x14e6a1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PracticeSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PracticeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__PracticeSettings(__PlayerSaveData__PracticeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PracticeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__PracticeSettings(__PlayerSaveData__PracticeSettings const&) = delete;

  /// @brief Field startSongTime, offset: 0x10, size: 0x4, def value: None
  float_t ___startSongTime;

  /// @brief Field songSpeedMul, offset: 0x14, size: 0x4, def value: None
  float_t ___songSpeedMul;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PracticeSettings, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PracticeSettings, ___startSongTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PracticeSettings, ___songSpeedMul) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorScheme
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData::ColorScheme*
class CORDL_TYPE __PlayerSaveData__ColorScheme : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorSchemeId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_colorSchemeId, put = __cordl_internal_set_colorSchemeId))::StringW colorSchemeId;

  /// @brief Field environmentColor0, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_environmentColor0, put = __cordl_internal_set_environmentColor0))::UnityEngine::Color environmentColor0;

  /// @brief Field environmentColor0Boost, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_environmentColor0Boost, put = __cordl_internal_set_environmentColor0Boost))::UnityEngine::Color environmentColor0Boost;

  /// @brief Field environmentColor1, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_environmentColor1, put = __cordl_internal_set_environmentColor1))::UnityEngine::Color environmentColor1;

  /// @brief Field environmentColor1Boost, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get_environmentColor1Boost, put = __cordl_internal_set_environmentColor1Boost))::UnityEngine::Color environmentColor1Boost;

  /// @brief Field obstaclesColor, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_obstaclesColor, put = __cordl_internal_set_obstaclesColor))::UnityEngine::Color obstaclesColor;

  /// @brief Field saberAColor, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_saberAColor, put = __cordl_internal_set_saberAColor))::UnityEngine::Color saberAColor;

  /// @brief Field saberBColor, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_saberBColor, put = __cordl_internal_set_saberBColor))::UnityEngine::Color saberBColor;

  static inline ::GlobalNamespace::__PlayerSaveData__ColorScheme* New_ctor(::StringW colorSchemeId, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor,
                                                                           ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1, ::UnityEngine::Color obstaclesColor,
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

  /// @brief Method .ctor, addr 0x14e6b08, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::StringW colorSchemeId, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1,
                    ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__ColorScheme();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__ColorScheme", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__ColorScheme(__PlayerSaveData__ColorScheme&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__ColorScheme", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__ColorScheme(__PlayerSaveData__ColorScheme const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__ColorScheme, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__ColorScheme, ___colorSchemeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__ColorScheme, ___saberAColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__ColorScheme, ___saberBColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__ColorScheme, ___environmentColor0) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__ColorScheme, ___environmentColor1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__ColorScheme, ___obstaclesColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__ColorScheme, ___environmentColor0Boost) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__ColorScheme, ___environmentColor1Boost) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorSchemesSettings
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData::ColorSchemesSettings*
class CORDL_TYPE __PlayerSaveData__ColorSchemesSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorSchemes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_colorSchemes,
                      put = __cordl_internal_set_colorSchemes))::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>* colorSchemes;

  /// @brief Field overrideDefaultColors, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideDefaultColors, put = __cordl_internal_set_overrideDefaultColors)) bool overrideDefaultColors;

  /// @brief Field selectedColorSchemeId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_selectedColorSchemeId, put = __cordl_internal_set_selectedColorSchemeId))::StringW selectedColorSchemeId;

  static inline ::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings* New_ctor(bool overrideDefaultColors, ::StringW selectedColorSchemeId,
                                                                                    ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>* colorSchemes);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*& __cordl_internal_get_colorSchemes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*> const& __cordl_internal_get_colorSchemes() const;

  constexpr bool const& __cordl_internal_get_overrideDefaultColors() const;

  constexpr bool& __cordl_internal_get_overrideDefaultColors();

  constexpr ::StringW const& __cordl_internal_get_selectedColorSchemeId() const;

  constexpr ::StringW& __cordl_internal_get_selectedColorSchemeId();

  constexpr void __cordl_internal_set_colorSchemes(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>* value);

  constexpr void __cordl_internal_set_overrideDefaultColors(bool value);

  constexpr void __cordl_internal_set_selectedColorSchemeId(::StringW value);

  /// @brief Method .ctor, addr 0x14e6bd8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(bool overrideDefaultColors, ::StringW selectedColorSchemeId, ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>* colorSchemes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__ColorSchemesSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__ColorSchemesSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__ColorSchemesSettings(__PlayerSaveData__ColorSchemesSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__ColorSchemesSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__ColorSchemesSettings(__PlayerSaveData__ColorSchemesSettings const&) = delete;

  /// @brief Field overrideDefaultColors, offset: 0x10, size: 0x1, def value: None
  bool ___overrideDefaultColors;

  /// @brief Field selectedColorSchemeId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___selectedColorSchemeId;

  /// @brief Field colorSchemes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>* ___colorSchemes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings, ___overrideDefaultColors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings, ___selectedColorSchemeId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings, ___colorSchemes) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OverrideEnvironmentSettings
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData::OverrideEnvironmentSettings*
class CORDL_TYPE __PlayerSaveData__OverrideEnvironmentSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field override360EnvironmentName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_override360EnvironmentName, put = __cordl_internal_set_override360EnvironmentName))::StringW override360EnvironmentName;

  /// @brief Field overrideEnvironments, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideEnvironments, put = __cordl_internal_set_overrideEnvironments)) bool overrideEnvironments;

  /// @brief Field overrideNormalEnvironmentName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_overrideNormalEnvironmentName, put = __cordl_internal_set_overrideNormalEnvironmentName))::StringW overrideNormalEnvironmentName;

  static inline ::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_override360EnvironmentName() const;

  constexpr ::StringW& __cordl_internal_get_override360EnvironmentName();

  constexpr bool const& __cordl_internal_get_overrideEnvironments() const;

  constexpr bool& __cordl_internal_get_overrideEnvironments();

  constexpr ::StringW const& __cordl_internal_get_overrideNormalEnvironmentName() const;

  constexpr ::StringW& __cordl_internal_get_overrideNormalEnvironmentName();

  constexpr void __cordl_internal_set_override360EnvironmentName(::StringW value);

  constexpr void __cordl_internal_set_overrideEnvironments(bool value);

  constexpr void __cordl_internal_set_overrideNormalEnvironmentName(::StringW value);

  /// @brief Method .ctor, addr 0x14e6c14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__OverrideEnvironmentSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__OverrideEnvironmentSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__OverrideEnvironmentSettings(__PlayerSaveData__OverrideEnvironmentSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__OverrideEnvironmentSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__OverrideEnvironmentSettings(__PlayerSaveData__OverrideEnvironmentSettings const&) = delete;

  /// @brief Field overrideEnvironments, offset: 0x10, size: 0x1, def value: None
  bool ___overrideEnvironments;

  /// @brief Field overrideNormalEnvironmentName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___overrideNormalEnvironmentName;

  /// @brief Field override360EnvironmentName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___override360EnvironmentName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings, ___overrideEnvironments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings, ___overrideNormalEnvironmentName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings, ___override360EnvironmentName) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GuestPlayer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData::GuestPlayer*
class CORDL_TYPE __PlayerSaveData__GuestPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_playerName, put = __cordl_internal_set_playerName))::StringW playerName;

  static inline ::GlobalNamespace::__PlayerSaveData__GuestPlayer* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_playerName() const;

  constexpr ::StringW& __cordl_internal_get_playerName();

  constexpr void __cordl_internal_set_playerName(::StringW value);

  /// @brief Method .ctor, addr 0x14e6b00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__GuestPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__GuestPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__GuestPlayer(__PlayerSaveData__GuestPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__GuestPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__GuestPlayer(__PlayerSaveData__GuestPlayer const&) = delete;

  /// @brief Field playerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___playerName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__GuestPlayer, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__GuestPlayer, ___playerName) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerModeSettings
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData::MultiplayerModeSettings*
class CORDL_TYPE __PlayerSaveData__MultiplayerModeSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field createServerNumberOfPlayers, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_createServerNumberOfPlayers, put = __cordl_internal_set_createServerNumberOfPlayers)) int32_t createServerNumberOfPlayers;

  /// @brief Field quickPlayDifficulty, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_quickPlayDifficulty, put = __cordl_internal_set_quickPlayDifficulty))::StringW quickPlayDifficulty;

  /// @brief Field quickPlayEnableLevelSelection, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_quickPlayEnableLevelSelection, put = __cordl_internal_set_quickPlayEnableLevelSelection)) bool quickPlayEnableLevelSelection;

  /// @brief Field quickPlaySongPackMask, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_quickPlaySongPackMask, put = __cordl_internal_set_quickPlaySongPackMask))::ArrayW<uint8_t, ::Array<uint8_t>*> quickPlaySongPackMask;

  /// @brief Field quickPlaySongPackMaskSerializedName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_quickPlaySongPackMaskSerializedName, put = __cordl_internal_set_quickPlaySongPackMaskSerializedName))::StringW quickPlaySongPackMaskSerializedName;

  static inline ::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings* New_ctor();

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

  /// @brief Method .ctor, addr 0x14e6c1c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__MultiplayerModeSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__MultiplayerModeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__MultiplayerModeSettings(__PlayerSaveData__MultiplayerModeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__MultiplayerModeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__MultiplayerModeSettings(__PlayerSaveData__MultiplayerModeSettings const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings, ___createServerNumberOfPlayers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings, ___quickPlayDifficulty) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings, ___quickPlaySongPackMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings, ___quickPlaySongPackMaskSerializedName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings, ___quickPlayEnableLevelSelection) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerAgreementsData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData::PlayerAgreementsData*
class CORDL_TYPE __PlayerSaveData__PlayerAgreementsData : public ::System::Object {
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

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData* New_ctor();

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

  /// @brief Method .ctor, addr 0x14e6c90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerAgreementsData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerAgreementsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__PlayerAgreementsData(__PlayerSaveData__PlayerAgreementsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerAgreementsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__PlayerAgreementsData(__PlayerSaveData__PlayerAgreementsData const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData, ___eulaVersion) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData, ___privacyPolicyVersion) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData, ___healthAndSafetyVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData, ___playerSensitivityFlagVersion) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData, ___endOfLifeVersion) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::UserAgeCategorySaveData
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerSaveData::UserAgeCategorySaveData
struct CORDL_TYPE __PlayerSaveData__UserAgeCategorySaveData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlayerSaveData__UserAgeCategorySaveData_Unwrapped
  enum struct ____PlayerSaveData__UserAgeCategorySaveData_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Child = static_cast<int32_t>(0x1),
    __E_Teen = static_cast<int32_t>(0x2),
    __E_Adult = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlayerSaveData__UserAgeCategorySaveData_Unwrapped() const noexcept {
    return static_cast<____PlayerSaveData__UserAgeCategorySaveData_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__UserAgeCategorySaveData();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__UserAgeCategorySaveData(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Adult value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData const Adult;

  /// @brief Field Child value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData const Child;

  /// @brief Field Teen value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData const Teen;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerSensitivityFlagSaveData
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerSaveData::PlayerSensitivityFlagSaveData
struct CORDL_TYPE __PlayerSaveData__PlayerSensitivityFlagSaveData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlayerSaveData__PlayerSensitivityFlagSaveData_Unwrapped
  enum struct ____PlayerSaveData__PlayerSensitivityFlagSaveData_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Safe = static_cast<int32_t>(0x1),
    __E_Themes = static_cast<int32_t>(0x2),
    __E_Explicit = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlayerSaveData__PlayerSensitivityFlagSaveData_Unwrapped() const noexcept {
    return static_cast<____PlayerSaveData__PlayerSensitivityFlagSaveData_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerSensitivityFlagSaveData();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__PlayerSensitivityFlagSaveData(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Explicit value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData const Explicit;

  /// @brief Field Safe value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData const Safe;

  /// @brief Field Themes value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData const Themes;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LocalPlayer
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData::LocalPlayer*
class CORDL_TYPE __PlayerSaveData__LocalPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field agreedToEula, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_agreedToEula, put = __cordl_internal_set_agreedToEula)) bool agreedToEula;

  /// @brief Field agreedToMultiplayerDisclaimer, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_agreedToMultiplayerDisclaimer, put = __cordl_internal_set_agreedToMultiplayerDisclaimer)) bool agreedToMultiplayerDisclaimer;

  /// @brief Field colorSchemesSettings, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_colorSchemesSettings, put = __cordl_internal_set_colorSchemesSettings))::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings* colorSchemesSettings;

  /// @brief Field currentDlcPromoDisplayCount, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_currentDlcPromoDisplayCount, put = __cordl_internal_set_currentDlcPromoDisplayCount)) int32_t currentDlcPromoDisplayCount;

  /// @brief Field currentDlcPromoId, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_currentDlcPromoId, put = __cordl_internal_set_currentDlcPromoId))::StringW currentDlcPromoId;

  /// @brief Field desiredSensitivityFlag, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_desiredSensitivityFlag,
                      put = __cordl_internal_set_desiredSensitivityFlag))::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData desiredSensitivityFlag;

  /// @brief Field didSelectLanguage, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get_didSelectLanguage, put = __cordl_internal_set_didSelectLanguage)) bool didSelectLanguage;

  /// @brief Field didSelectRegionVersion, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_didSelectRegionVersion, put = __cordl_internal_set_didSelectRegionVersion)) int32_t didSelectRegionVersion;

  /// @brief Field favoritesLevelIds, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_favoritesLevelIds, put = __cordl_internal_set_favoritesLevelIds))::System::Collections::Generic::List_1<::StringW>* favoritesLevelIds;

  /// @brief Field gameplayModifiers, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers))::GlobalNamespace::__PlayerSaveData__GameplayModifiers* gameplayModifiers;

  /// @brief Field lastSelectedBeatmapCharacteristicName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_lastSelectedBeatmapCharacteristicName,
                      put = __cordl_internal_set_lastSelectedBeatmapCharacteristicName))::StringW lastSelectedBeatmapCharacteristicName;

  /// @brief Field lastSelectedBeatmapDifficulty, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_lastSelectedBeatmapDifficulty,
                      put = __cordl_internal_set_lastSelectedBeatmapDifficulty))::GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty;

  /// @brief Field levelsStatsData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_levelsStatsData,
                      put = __cordl_internal_set_levelsStatsData))::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>* levelsStatsData;

  /// @brief Field missionsStatsData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_missionsStatsData,
                      put = __cordl_internal_set_missionsStatsData))::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>* missionsStatsData;

  /// @brief Field multiplayerModeSettings, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_multiplayerModeSettings,
                      put = __cordl_internal_set_multiplayerModeSettings))::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings* multiplayerModeSettings;

  /// @brief Field overrideEnvironmentSettings, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_overrideEnvironmentSettings,
                      put = __cordl_internal_set_overrideEnvironmentSettings))::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings* overrideEnvironmentSettings;

  /// @brief Field playerAgreements, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_playerAgreements, put = __cordl_internal_set_playerAgreements))::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData* playerAgreements;

  /// @brief Field playerAllOverallStatsData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_playerAllOverallStatsData,
                      put = __cordl_internal_set_playerAllOverallStatsData))::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* playerAllOverallStatsData;

  /// @brief Field playerId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_playerId, put = __cordl_internal_set_playerId))::StringW playerId;

  /// @brief Field playerName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerName, put = __cordl_internal_set_playerName))::StringW playerName;

  /// @brief Field playerSpecificSettings, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings,
                      put = __cordl_internal_set_playerSpecificSettings))::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field practiceSettings, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_practiceSettings, put = __cordl_internal_set_practiceSettings))::GlobalNamespace::__PlayerSaveData__PracticeSettings* practiceSettings;

  /// @brief Field selectedAvatarSystemTypeId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_selectedAvatarSystemTypeId, put = __cordl_internal_set_selectedAvatarSystemTypeId))::StringW selectedAvatarSystemTypeId;

  /// @brief Field shouldShow360Warning, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldShow360Warning, put = __cordl_internal_set_shouldShow360Warning)) bool shouldShow360Warning;

  /// @brief Field shouldShowTutorialPrompt, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldShowTutorialPrompt, put = __cordl_internal_set_shouldShowTutorialPrompt)) bool shouldShowTutorialPrompt;

  /// @brief Field showedMissionHelpIds, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_showedMissionHelpIds, put = __cordl_internal_set_showedMissionHelpIds))::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds;

  /// @brief Field userAgeCategory, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_userAgeCategory, put = __cordl_internal_set_userAgeCategory))::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData userAgeCategory;

  static inline ::GlobalNamespace::__PlayerSaveData__LocalPlayer* New_ctor();

  constexpr bool const& __cordl_internal_get_agreedToEula() const;

  constexpr bool& __cordl_internal_get_agreedToEula();

  constexpr bool const& __cordl_internal_get_agreedToMultiplayerDisclaimer() const;

  constexpr bool& __cordl_internal_get_agreedToMultiplayerDisclaimer();

  constexpr ::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*& __cordl_internal_get_colorSchemesSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*> const& __cordl_internal_get_colorSchemesSettings() const;

  constexpr int32_t const& __cordl_internal_get_currentDlcPromoDisplayCount() const;

  constexpr int32_t& __cordl_internal_get_currentDlcPromoDisplayCount();

  constexpr ::StringW const& __cordl_internal_get_currentDlcPromoId() const;

  constexpr ::StringW& __cordl_internal_get_currentDlcPromoId();

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData const& __cordl_internal_get_desiredSensitivityFlag() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData& __cordl_internal_get_desiredSensitivityFlag();

  constexpr bool const& __cordl_internal_get_didSelectLanguage() const;

  constexpr bool& __cordl_internal_get_didSelectLanguage();

  constexpr int32_t const& __cordl_internal_get_didSelectRegionVersion() const;

  constexpr int32_t& __cordl_internal_get_didSelectRegionVersion();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_favoritesLevelIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_favoritesLevelIds() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__GameplayModifiers*> const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::StringW const& __cordl_internal_get_lastSelectedBeatmapCharacteristicName() const;

  constexpr ::StringW& __cordl_internal_get_lastSelectedBeatmapCharacteristicName();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_lastSelectedBeatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_lastSelectedBeatmapDifficulty();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>*& __cordl_internal_get_levelsStatsData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>*> const&
  __cordl_internal_get_levelsStatsData() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>*& __cordl_internal_get_missionsStatsData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>*> const&
  __cordl_internal_get_missionsStatsData() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*& __cordl_internal_get_multiplayerModeSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*> const& __cordl_internal_get_multiplayerModeSettings() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*& __cordl_internal_get_overrideEnvironmentSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*> const& __cordl_internal_get_overrideEnvironmentSettings() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*& __cordl_internal_get_playerAgreements();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*> const& __cordl_internal_get_playerAgreements() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*& __cordl_internal_get_playerAllOverallStatsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*> const& __cordl_internal_get_playerAllOverallStatsData() const;

  constexpr ::StringW const& __cordl_internal_get_playerId() const;

  constexpr ::StringW& __cordl_internal_get_playerId();

  constexpr ::StringW const& __cordl_internal_get_playerName() const;

  constexpr ::StringW& __cordl_internal_get_playerName();

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*> const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__PracticeSettings*& __cordl_internal_get_practiceSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PracticeSettings*> const& __cordl_internal_get_practiceSettings() const;

  constexpr ::StringW const& __cordl_internal_get_selectedAvatarSystemTypeId() const;

  constexpr ::StringW& __cordl_internal_get_selectedAvatarSystemTypeId();

  constexpr bool const& __cordl_internal_get_shouldShow360Warning() const;

  constexpr bool& __cordl_internal_get_shouldShow360Warning();

  constexpr bool const& __cordl_internal_get_shouldShowTutorialPrompt() const;

  constexpr bool& __cordl_internal_get_shouldShowTutorialPrompt();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_showedMissionHelpIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_showedMissionHelpIds() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData const& __cordl_internal_get_userAgeCategory() const;

  constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData& __cordl_internal_get_userAgeCategory();

  constexpr void __cordl_internal_set_agreedToEula(bool value);

  constexpr void __cordl_internal_set_agreedToMultiplayerDisclaimer(bool value);

  constexpr void __cordl_internal_set_colorSchemesSettings(::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings* value);

  constexpr void __cordl_internal_set_currentDlcPromoDisplayCount(int32_t value);

  constexpr void __cordl_internal_set_currentDlcPromoId(::StringW value);

  constexpr void __cordl_internal_set_desiredSensitivityFlag(::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData value);

  constexpr void __cordl_internal_set_didSelectLanguage(bool value);

  constexpr void __cordl_internal_set_didSelectRegionVersion(int32_t value);

  constexpr void __cordl_internal_set_favoritesLevelIds(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::__PlayerSaveData__GameplayModifiers* value);

  constexpr void __cordl_internal_set_lastSelectedBeatmapCharacteristicName(::StringW value);

  constexpr void __cordl_internal_set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set_levelsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>* value);

  constexpr void __cordl_internal_set_missionsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>* value);

  constexpr void __cordl_internal_set_multiplayerModeSettings(::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings* value);

  constexpr void __cordl_internal_set_overrideEnvironmentSettings(::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings* value);

  constexpr void __cordl_internal_set_playerAgreements(::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData* value);

  constexpr void __cordl_internal_set_playerAllOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* value);

  constexpr void __cordl_internal_set_playerId(::StringW value);

  constexpr void __cordl_internal_set_playerName(::StringW value);

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set_practiceSettings(::GlobalNamespace::__PlayerSaveData__PracticeSettings* value);

  constexpr void __cordl_internal_set_selectedAvatarSystemTypeId(::StringW value);

  constexpr void __cordl_internal_set_shouldShow360Warning(bool value);

  constexpr void __cordl_internal_set_shouldShowTutorialPrompt(bool value);

  constexpr void __cordl_internal_set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_userAgeCategory(::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData value);

  /// @brief Method .ctor, addr 0x14e698c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__LocalPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__LocalPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__LocalPlayer(__PlayerSaveData__LocalPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__LocalPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__LocalPlayer(__PlayerSaveData__LocalPlayer const&) = delete;

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
  ::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData* ___playerAgreements;

  /// @brief Field lastSelectedBeatmapDifficulty, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___lastSelectedBeatmapDifficulty;

  /// @brief Field lastSelectedBeatmapCharacteristicName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___lastSelectedBeatmapCharacteristicName;

  /// @brief Field gameplayModifiers, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveData__GameplayModifiers* ___gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings* ___playerSpecificSettings;

  /// @brief Field practiceSettings, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveData__PracticeSettings* ___practiceSettings;

  /// @brief Field playerAllOverallStatsData, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* ___playerAllOverallStatsData;

  /// @brief Field levelsStatsData, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>* ___levelsStatsData;

  /// @brief Field missionsStatsData, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>* ___missionsStatsData;

  /// @brief Field showedMissionHelpIds, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___showedMissionHelpIds;

  /// @brief Field colorSchemesSettings, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings* ___colorSchemesSettings;

  /// @brief Field overrideEnvironmentSettings, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings* ___overrideEnvironmentSettings;

  /// @brief Field favoritesLevelIds, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___favoritesLevelIds;

  /// @brief Field multiplayerModeSettings, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings* ___multiplayerModeSettings;

  /// @brief Field currentDlcPromoDisplayCount, offset: 0xa8, size: 0x4, def value: None
  int32_t ___currentDlcPromoDisplayCount;

  /// @brief Field currentDlcPromoId, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___currentDlcPromoId;

  /// @brief Field userAgeCategory, offset: 0xb8, size: 0x4, def value: None
  ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData ___userAgeCategory;

  /// @brief Field desiredSensitivityFlag, offset: 0xbc, size: 0x4, def value: None
  ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData ___desiredSensitivityFlag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__LocalPlayer, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___playerId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___playerName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___shouldShowTutorialPrompt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___shouldShow360Warning) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___agreedToEula) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___didSelectLanguage) == 0x23, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___agreedToMultiplayerDisclaimer) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___didSelectRegionVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___selectedAvatarSystemTypeId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___playerAgreements) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___lastSelectedBeatmapDifficulty) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___lastSelectedBeatmapCharacteristicName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___gameplayModifiers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___playerSpecificSettings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___practiceSettings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___playerAllOverallStatsData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___levelsStatsData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___missionsStatsData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___showedMissionHelpIds) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___colorSchemesSettings) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___overrideEnvironmentSettings) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___favoritesLevelIds) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___multiplayerModeSettings) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___currentDlcPromoDisplayCount) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___currentDlcPromoId) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___userAgeCategory) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveData__LocalPlayer, ___desiredSensitivityFlag) == 0xbc, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerSaveData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveData*
class CORDL_TYPE PlayerSaveData : public ::GlobalNamespace::VersionSaveData {
public:
  // Declarations
  using ColorScheme = ::GlobalNamespace::__PlayerSaveData__ColorScheme;

  using ColorSchemesSettings = ::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings;

  using GameplayModifiers = ::GlobalNamespace::__PlayerSaveData__GameplayModifiers;

  using GuestPlayer = ::GlobalNamespace::__PlayerSaveData__GuestPlayer;

  using LocalPlayer = ::GlobalNamespace::__PlayerSaveData__LocalPlayer;

  using MultiplayerModeSettings = ::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings;

  using OverrideEnvironmentSettings = ::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings;

  using PlayerAgreementsData = ::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData;

  using PlayerAllOverallStatsData = ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData;

  using PlayerLevelStatsData = ::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData;

  using PlayerMissionStatsData = ::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData;

  using PlayerOverallStatsData = ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData;

  using PlayerSensitivityFlagSaveData = ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData;

  using PlayerSpecificSettings = ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings;

  using PracticeSettings = ::GlobalNamespace::__PlayerSaveData__PracticeSettings;

  using UserAgeCategorySaveData = ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData;

  /// @brief Field guestPlayers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_guestPlayers,
                      put = __cordl_internal_set_guestPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>* guestPlayers;

  /// @brief Field localPlayers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localPlayers,
                      put = __cordl_internal_set_localPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>* localPlayers;

  static inline ::GlobalNamespace::PlayerSaveData* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>*& __cordl_internal_get_guestPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>*> const& __cordl_internal_get_guestPlayers() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>*& __cordl_internal_get_localPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>*> const& __cordl_internal_get_localPlayers() const;

  constexpr void __cordl_internal_set_guestPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>* value);

  constexpr void __cordl_internal_set_localPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>* value);

  /// @brief Method .ctor, addr 0x14e6938, size 0x54, virtual false, abstract: false, final false
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

  /// @brief Field localPlayers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>* ___localPlayers;

  /// @brief Field guestPlayers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>* ___guestPlayers;

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"2.0.27" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData, ___localPlayers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveData, ___guestPlayers) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType, "", "PlayerSaveData/GameplayModifiers/EnabledObstacleType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType, "", "PlayerSaveData/GameplayModifiers/EnergyType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed, "", "PlayerSaveData/GameplayModifiers/SongSpeed");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData, "", "PlayerSaveData/PlayerSensitivityFlagSaveData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData, "", "PlayerSaveData/PlayerSpecificSettings/ArcVisibilityTypeSaveData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, "",
                       "PlayerSaveData/PlayerSpecificSettings/EnvironmentEffectsFilterPresetSaveData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData, "",
                       "PlayerSaveData/PlayerSpecificSettings/NoteJumpDurationTypeSettingsSaveData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData, "", "PlayerSaveData/UserAgeCategorySaveData");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData*, "", "PlayerSaveData");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveData__ColorScheme);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__ColorScheme*, "", "PlayerSaveData/ColorScheme");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*, "", "PlayerSaveData/ColorSchemesSettings");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveData__GameplayModifiers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__GameplayModifiers*, "", "PlayerSaveData/GameplayModifiers");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveData__GuestPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__GuestPlayer*, "", "PlayerSaveData/GuestPlayer");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveData__LocalPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__LocalPlayer*, "", "PlayerSaveData/LocalPlayer");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*, "", "PlayerSaveData/MultiplayerModeSettings");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*, "", "PlayerSaveData/OverrideEnvironmentSettings");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*, "", "PlayerSaveData/PlayerAgreementsData");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*, "", "PlayerSaveData/PlayerAllOverallStatsData");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*, "", "PlayerSaveData/PlayerLevelStatsData");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*, "", "PlayerSaveData/PlayerMissionStatsData");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, "", "PlayerSaveData/PlayerOverallStatsData");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*, "", "PlayerSaveData/PlayerSpecificSettings");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveData__PracticeSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveData__PracticeSettings*, "", "PlayerSaveData/PracticeSettings");
