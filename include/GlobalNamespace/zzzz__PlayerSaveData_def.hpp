#pragma once
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
class __PlayerSaveData__GuestPlayer;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerAgreementsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__GameplayModifiers;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerSpecificSettings;
}
namespace GlobalNamespace {
struct __PlayerSaveData__PlayerSensitivityFlagSaveData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__ColorScheme;
}
namespace GlobalNamespace {
class __PlayerSaveData__OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__LocalPlayer;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __PlayerSaveData__ColorSchemesSettings;
}
namespace GlobalNamespace {
struct __PlayerSaveData__UserAgeCategorySaveData;
}
namespace GlobalNamespace {
class __PlayerSaveData__MultiplayerModeSettings;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerMissionStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerLevelStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PracticeSettings;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct __PlayerSaveData__GameplayModifiers__SongSpeed;
}
namespace GlobalNamespace {
struct __PlayerSaveData__GameplayModifiers__EnergyType;
}
namespace GlobalNamespace {
struct __PlayerSaveData__GameplayModifiers__EnabledObstacleType;
}
namespace GlobalNamespace {
struct __PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData;
}
namespace GlobalNamespace {
struct __PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData;
}
namespace GlobalNamespace {
struct __PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4634))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__GameplayModifiers__EnabledObstacleType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__GameplayModifiers__EnabledObstacleType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field All value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType const All;

  /// @brief Field FullHeightOnly value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType const FullHeightOnly;

  /// @brief Field None value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType const None;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::EnergyType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4635))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__GameplayModifiers__EnergyType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__GameplayModifiers__EnergyType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Bar value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType const Bar;

  /// @brief Field Battery value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType const Battery;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SongSpeed
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4636))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__GameplayModifiers__SongSpeed(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__GameplayModifiers__SongSpeed();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed const Normal;

  /// @brief Field Faster value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed const Faster;

  /// @brief Field Slower value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed const Slower;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplayModifiers
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4636)), TypeDefinitionIndex(TypeDefinitionIndex(4635)),
// TypeDefinitionIndex(TypeDefinitionIndex(4634))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4637)) CS Name: ::PlayerSaveData::GameplayModifiers*
class CORDL_TYPE __PlayerSaveData__GameplayModifiers : public ::System::Object {
public:
  // Declarations
  using SongSpeed = ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed;

  using EnergyType = ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType;

  using EnabledObstacleType = ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType;

  /// @brief Field energyType, offset 0x10, size 0x4
  __declspec(property(get = __get_energyType, put = __set_energyType))::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType energyType;

  /// @brief Field instaFail, offset 0x14, size 0x1
  __declspec(property(get = __get_instaFail, put = __set_instaFail)) bool instaFail;

  /// @brief Field failOnSaberClash, offset 0x15, size 0x1
  __declspec(property(get = __get_failOnSaberClash, put = __set_failOnSaberClash)) bool failOnSaberClash;

  /// @brief Field enabledObstacleType, offset 0x18, size 0x4
  __declspec(property(get = __get_enabledObstacleType, put = __set_enabledObstacleType))::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType enabledObstacleType;

  /// @brief Field fastNotes, offset 0x1c, size 0x1
  __declspec(property(get = __get_fastNotes, put = __set_fastNotes)) bool fastNotes;

  /// @brief Field strictAngles, offset 0x1d, size 0x1
  __declspec(property(get = __get_strictAngles, put = __set_strictAngles)) bool strictAngles;

  /// @brief Field disappearingArrows, offset 0x1e, size 0x1
  __declspec(property(get = __get_disappearingArrows, put = __set_disappearingArrows)) bool disappearingArrows;

  /// @brief Field ghostNotes, offset 0x1f, size 0x1
  __declspec(property(get = __get_ghostNotes, put = __set_ghostNotes)) bool ghostNotes;

  /// @brief Field noBombs, offset 0x20, size 0x1
  __declspec(property(get = __get_noBombs, put = __set_noBombs)) bool noBombs;

  /// @brief Field songSpeed, offset 0x24, size 0x4
  __declspec(property(get = __get_songSpeed, put = __set_songSpeed))::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed songSpeed;

  /// @brief Field noArrows, offset 0x28, size 0x1
  __declspec(property(get = __get_noArrows, put = __set_noArrows)) bool noArrows;

  /// @brief Field noFailOn0Energy, offset 0x29, size 0x1
  __declspec(property(get = __get_noFailOn0Energy, put = __set_noFailOn0Energy)) bool noFailOn0Energy;

  /// @brief Field proMode, offset 0x2a, size 0x1
  __declspec(property(get = __get_proMode, put = __set_proMode)) bool proMode;

  /// @brief Field zenMode, offset 0x2b, size 0x1
  __declspec(property(get = __get_zenMode, put = __set_zenMode)) bool zenMode;

  /// @brief Field smallCubes, offset 0x2c, size 0x1
  __declspec(property(get = __get_smallCubes, put = __set_smallCubes)) bool smallCubes;

  constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType& __get_energyType();

  constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType const& __get_energyType() const;

  constexpr void __set_energyType(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType value);

  constexpr bool& __get_instaFail();

  constexpr bool const& __get_instaFail() const;

  constexpr void __set_instaFail(bool value);

  constexpr bool& __get_failOnSaberClash();

  constexpr bool const& __get_failOnSaberClash() const;

  constexpr void __set_failOnSaberClash(bool value);

  constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType& __get_enabledObstacleType();

  constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType const& __get_enabledObstacleType() const;

  constexpr void __set_enabledObstacleType(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType value);

  constexpr bool& __get_fastNotes();

  constexpr bool const& __get_fastNotes() const;

  constexpr void __set_fastNotes(bool value);

  constexpr bool& __get_strictAngles();

  constexpr bool const& __get_strictAngles() const;

  constexpr void __set_strictAngles(bool value);

  constexpr bool& __get_disappearingArrows();

  constexpr bool const& __get_disappearingArrows() const;

  constexpr void __set_disappearingArrows(bool value);

  constexpr bool& __get_ghostNotes();

  constexpr bool const& __get_ghostNotes() const;

  constexpr void __set_ghostNotes(bool value);

  constexpr bool& __get_noBombs();

  constexpr bool const& __get_noBombs() const;

  constexpr void __set_noBombs(bool value);

  constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed& __get_songSpeed();

  constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed const& __get_songSpeed() const;

  constexpr void __set_songSpeed(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed value);

  constexpr bool& __get_noArrows();

  constexpr bool const& __get_noArrows() const;

  constexpr void __set_noArrows(bool value);

  constexpr bool& __get_noFailOn0Energy();

  constexpr bool const& __get_noFailOn0Energy() const;

  constexpr void __set_noFailOn0Energy(bool value);

  constexpr bool& __get_proMode();

  constexpr bool const& __get_proMode() const;

  constexpr void __set_proMode(bool value);

  constexpr bool& __get_zenMode();

  constexpr bool const& __get_zenMode() const;

  constexpr void __set_zenMode(bool value);

  constexpr bool& __get_smallCubes();

  constexpr bool const& __get_smallCubes() const;

  constexpr void __set_smallCubes(bool value);

  static inline ::GlobalNamespace::__PlayerSaveData__GameplayModifiers* New_ctor();

  /// @brief Method .ctor addr 0x2372854 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__GameplayModifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__GameplayModifiers(__PlayerSaveData__GameplayModifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__GameplayModifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__GameplayModifiers(__PlayerSaveData__GameplayModifiers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__GameplayModifiers();

public:
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

} // namespace GlobalNamespace
// Type: ::EnvironmentEffectsFilterPresetSaveData
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4638))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AllEffects value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const AllEffects;

  /// @brief Field StrobeFilter value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const StrobeFilter;

  /// @brief Field NoEffects value: static_cast<int32_t>(0xa)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const NoEffects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ArcVisibilityTypeSaveData
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4639))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const None;

  /// @brief Field Low value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const Low;

  /// @brief Field Standard value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const Standard;

  /// @brief Field High value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const High;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteJumpDurationTypeSettingsSaveData
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4640))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Dynamic value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData const Dynamic;

  /// @brief Field Static value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData const Static;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerSpecificSettings
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4640)), TypeDefinitionIndex(TypeDefinitionIndex(4639)),
// TypeDefinitionIndex(TypeDefinitionIndex(4638))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4641)) CS Name: ::PlayerSaveData::PlayerSpecificSettings*
class CORDL_TYPE __PlayerSaveData__PlayerSpecificSettings : public ::System::Object {
public:
  // Declarations
  using NoteJumpDurationTypeSettingsSaveData = ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData;

  using ArcVisibilityTypeSaveData = ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData;

  using EnvironmentEffectsFilterPresetSaveData = ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData;

  /// @brief Field staticLights, offset 0x10, size 0x1
  __declspec(property(get = __get_staticLights, put = __set_staticLights)) bool staticLights;

  /// @brief Field leftHanded, offset 0x11, size 0x1
  __declspec(property(get = __get_leftHanded, put = __set_leftHanded)) bool leftHanded;

  /// @brief Field playerHeight, offset 0x14, size 0x4
  __declspec(property(get = __get_playerHeight, put = __set_playerHeight)) float_t playerHeight;

  /// @brief Field automaticPlayerHeight, offset 0x18, size 0x1
  __declspec(property(get = __get_automaticPlayerHeight, put = __set_automaticPlayerHeight)) bool automaticPlayerHeight;

  /// @brief Field sfxVolume, offset 0x1c, size 0x4
  __declspec(property(get = __get_sfxVolume, put = __set_sfxVolume)) float_t sfxVolume;

  /// @brief Field reduceDebris, offset 0x20, size 0x1
  __declspec(property(get = __get_reduceDebris, put = __set_reduceDebris)) bool reduceDebris;

  /// @brief Field noTextsAndHuds, offset 0x21, size 0x1
  __declspec(property(get = __get_noTextsAndHuds, put = __set_noTextsAndHuds)) bool noTextsAndHuds;

  /// @brief Field advancedHud, offset 0x22, size 0x1
  __declspec(property(get = __get_advancedHud, put = __set_advancedHud)) bool advancedHud;

  /// @brief Field saberTrailIntensity, offset 0x24, size 0x4
  __declspec(property(get = __get_saberTrailIntensity, put = __set_saberTrailIntensity)) float_t saberTrailIntensity;

  /// @brief Field _noteJumpDurationTypeSettingsSaveData, offset 0x28, size 0x4
  __declspec(property(get = __get__noteJumpDurationTypeSettingsSaveData,
                      put = __set__noteJumpDurationTypeSettingsSaveData))::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData
      _noteJumpDurationTypeSettingsSaveData;

  /// @brief Field noteJumpFixedDuration, offset 0x2c, size 0x4
  __declspec(property(get = __get_noteJumpFixedDuration, put = __set_noteJumpFixedDuration)) float_t noteJumpFixedDuration;

  /// @brief Field autoRestart, offset 0x30, size 0x1
  __declspec(property(get = __get_autoRestart, put = __set_autoRestart)) bool autoRestart;

  /// @brief Field noFailEffects, offset 0x31, size 0x1
  __declspec(property(get = __get_noFailEffects, put = __set_noFailEffects)) bool noFailEffects;

  /// @brief Field noteJumpBeatOffset, offset 0x34, size 0x4
  __declspec(property(get = __get_noteJumpBeatOffset, put = __set_noteJumpBeatOffset)) float_t noteJumpBeatOffset;

  /// @brief Field hideNoteSpawnEffect, offset 0x38, size 0x1
  __declspec(property(get = __get_hideNoteSpawnEffect, put = __set_hideNoteSpawnEffect)) bool hideNoteSpawnEffect;

  /// @brief Field adaptiveSfx, offset 0x39, size 0x1
  __declspec(property(get = __get_adaptiveSfx, put = __set_adaptiveSfx)) bool adaptiveSfx;

  /// @brief Field arcsHapticFeedback, offset 0x3a, size 0x1
  __declspec(property(get = __get_arcsHapticFeedback, put = __set_arcsHapticFeedback)) bool arcsHapticFeedback;

  /// @brief Field arcsVisibleSaveData, offset 0x3c, size 0x4
  __declspec(property(get = __get_arcsVisibleSaveData, put = __set_arcsVisibleSaveData))::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData arcsVisibleSaveData;

  /// @brief Field environmentEffectsFilterDefaultPreset, offset 0x40, size 0x4
  __declspec(property(get = __get_environmentEffectsFilterDefaultPreset,
                      put = __set_environmentEffectsFilterDefaultPreset))::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData
      environmentEffectsFilterDefaultPreset;

  /// @brief Field environmentEffectsFilterExpertPlusPreset, offset 0x44, size 0x4
  __declspec(property(get = __get_environmentEffectsFilterExpertPlusPreset,
                      put = __set_environmentEffectsFilterExpertPlusPreset))::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData
      environmentEffectsFilterExpertPlusPreset;

  /// @brief Field headsetHapticIntensity, offset 0x48, size 0x4
  __declspec(property(get = __get_headsetHapticIntensity, put = __set_headsetHapticIntensity)) float_t headsetHapticIntensity;

  constexpr bool& __get_staticLights();

  constexpr bool const& __get_staticLights() const;

  constexpr void __set_staticLights(bool value);

  constexpr bool& __get_leftHanded();

  constexpr bool const& __get_leftHanded() const;

  constexpr void __set_leftHanded(bool value);

  constexpr float_t& __get_playerHeight();

  constexpr float_t const& __get_playerHeight() const;

  constexpr void __set_playerHeight(float_t value);

  constexpr bool& __get_automaticPlayerHeight();

  constexpr bool const& __get_automaticPlayerHeight() const;

  constexpr void __set_automaticPlayerHeight(bool value);

  constexpr float_t& __get_sfxVolume();

  constexpr float_t const& __get_sfxVolume() const;

  constexpr void __set_sfxVolume(float_t value);

  constexpr bool& __get_reduceDebris();

  constexpr bool const& __get_reduceDebris() const;

  constexpr void __set_reduceDebris(bool value);

  constexpr bool& __get_noTextsAndHuds();

  constexpr bool const& __get_noTextsAndHuds() const;

  constexpr void __set_noTextsAndHuds(bool value);

  constexpr bool& __get_advancedHud();

  constexpr bool const& __get_advancedHud() const;

  constexpr void __set_advancedHud(bool value);

  constexpr float_t& __get_saberTrailIntensity();

  constexpr float_t const& __get_saberTrailIntensity() const;

  constexpr void __set_saberTrailIntensity(float_t value);

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData& __get__noteJumpDurationTypeSettingsSaveData();

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData const& __get__noteJumpDurationTypeSettingsSaveData() const;

  constexpr void __set__noteJumpDurationTypeSettingsSaveData(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData value);

  constexpr float_t& __get_noteJumpFixedDuration();

  constexpr float_t const& __get_noteJumpFixedDuration() const;

  constexpr void __set_noteJumpFixedDuration(float_t value);

  constexpr bool& __get_autoRestart();

  constexpr bool const& __get_autoRestart() const;

  constexpr void __set_autoRestart(bool value);

  constexpr bool& __get_noFailEffects();

  constexpr bool const& __get_noFailEffects() const;

  constexpr void __set_noFailEffects(bool value);

  constexpr float_t& __get_noteJumpBeatOffset();

  constexpr float_t const& __get_noteJumpBeatOffset() const;

  constexpr void __set_noteJumpBeatOffset(float_t value);

  constexpr bool& __get_hideNoteSpawnEffect();

  constexpr bool const& __get_hideNoteSpawnEffect() const;

  constexpr void __set_hideNoteSpawnEffect(bool value);

  constexpr bool& __get_adaptiveSfx();

  constexpr bool const& __get_adaptiveSfx() const;

  constexpr void __set_adaptiveSfx(bool value);

  constexpr bool& __get_arcsHapticFeedback();

  constexpr bool const& __get_arcsHapticFeedback() const;

  constexpr void __set_arcsHapticFeedback(bool value);

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData& __get_arcsVisibleSaveData();

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const& __get_arcsVisibleSaveData() const;

  constexpr void __set_arcsVisibleSaveData(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData value);

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData& __get_environmentEffectsFilterDefaultPreset();

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const& __get_environmentEffectsFilterDefaultPreset() const;

  constexpr void __set_environmentEffectsFilterDefaultPreset(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData value);

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData& __get_environmentEffectsFilterExpertPlusPreset();

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const& __get_environmentEffectsFilterExpertPlusPreset() const;

  constexpr void __set_environmentEffectsFilterExpertPlusPreset(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData value);

  constexpr float_t& __get_headsetHapticIntensity();

  constexpr float_t const& __get_headsetHapticIntensity() const;

  constexpr void __set_headsetHapticIntensity(float_t value);

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings* New_ctor();

  /// @brief Method .ctor addr 0x237285c size 0x38 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerSpecificSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__PlayerSpecificSettings(__PlayerSaveData__PlayerSpecificSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerSpecificSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__PlayerSpecificSettings(__PlayerSaveData__PlayerSpecificSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerSpecificSettings();

public:
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

} // namespace GlobalNamespace
// Type: ::PlayerAllOverallStatsData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4642))
// CS Name: ::PlayerSaveData::PlayerAllOverallStatsData*
class CORDL_TYPE __PlayerSaveData__PlayerAllOverallStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field campaignOverallStatsData, offset 0x10, size 0x8
  __declspec(property(get = __get_campaignOverallStatsData, put = __set_campaignOverallStatsData))::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* campaignOverallStatsData;

  /// @brief Field soloFreePlayOverallStatsData, offset 0x18, size 0x8
  __declspec(property(get = __get_soloFreePlayOverallStatsData, put = __set_soloFreePlayOverallStatsData))::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* soloFreePlayOverallStatsData;

  /// @brief Field partyFreePlayOverallStatsData, offset 0x20, size 0x8
  __declspec(property(get = __get_partyFreePlayOverallStatsData, put = __set_partyFreePlayOverallStatsData))::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* partyFreePlayOverallStatsData;

  /// @brief Field onlinePlayOverallStatsData, offset 0x28, size 0x8
  __declspec(property(get = __get_onlinePlayOverallStatsData, put = __set_onlinePlayOverallStatsData))::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* onlinePlayOverallStatsData;

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*& __get_campaignOverallStatsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> const& __get_campaignOverallStatsData() const;

  constexpr void __set_campaignOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* value);

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*& __get_soloFreePlayOverallStatsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> const& __get_soloFreePlayOverallStatsData() const;

  constexpr void __set_soloFreePlayOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* value);

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*& __get_partyFreePlayOverallStatsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> const& __get_partyFreePlayOverallStatsData() const;

  constexpr void __set_partyFreePlayOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* value);

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*& __get_onlinePlayOverallStatsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> const& __get_onlinePlayOverallStatsData() const;

  constexpr void __set_onlinePlayOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* value);

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* New_ctor();

  /// @brief Method .ctor addr 0x237239c size 0xc0 virtual false final false
  inline void _ctor();

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* New_ctor(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* campaignOverallStatsData,
                                                                                         ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* soloFreePlayOverallStatsData,
                                                                                         ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* partyFreePlayOverallStatsData,
                                                                                         ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* onlinePlayOverallStatsData);

  /// @brief Method .ctor addr 0x2372548 size 0x40 virtual false final false
  inline void _ctor(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* campaignOverallStatsData, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* soloFreePlayOverallStatsData,
                    ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* partyFreePlayOverallStatsData,
                    ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* onlinePlayOverallStatsData);

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerAllOverallStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__PlayerAllOverallStatsData(__PlayerSaveData__PlayerAllOverallStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerAllOverallStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__PlayerAllOverallStatsData(__PlayerSaveData__PlayerAllOverallStatsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerAllOverallStatsData();

public:
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

} // namespace GlobalNamespace
// Type: ::PlayerOverallStatsData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4643))
// CS Name: ::PlayerSaveData::PlayerOverallStatsData*
class CORDL_TYPE __PlayerSaveData__PlayerOverallStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field goodCutsCount, offset 0x10, size 0x4
  __declspec(property(get = __get_goodCutsCount, put = __set_goodCutsCount)) int32_t goodCutsCount;

  /// @brief Field badCutsCount, offset 0x14, size 0x4
  __declspec(property(get = __get_badCutsCount, put = __set_badCutsCount)) int32_t badCutsCount;

  /// @brief Field missedCutsCount, offset 0x18, size 0x4
  __declspec(property(get = __get_missedCutsCount, put = __set_missedCutsCount)) int32_t missedCutsCount;

  /// @brief Field totalScore, offset 0x20, size 0x8
  __declspec(property(get = __get_totalScore, put = __set_totalScore)) int64_t totalScore;

  /// @brief Field playedLevelsCount, offset 0x28, size 0x4
  __declspec(property(get = __get_playedLevelsCount, put = __set_playedLevelsCount)) int32_t playedLevelsCount;

  /// @brief Field cleardLevelsCount, offset 0x2c, size 0x4
  __declspec(property(get = __get_cleardLevelsCount, put = __set_cleardLevelsCount)) int32_t cleardLevelsCount;

  /// @brief Field failedLevelsCount, offset 0x30, size 0x4
  __declspec(property(get = __get_failedLevelsCount, put = __set_failedLevelsCount)) int32_t failedLevelsCount;

  /// @brief Field fullComboCount, offset 0x34, size 0x4
  __declspec(property(get = __get_fullComboCount, put = __set_fullComboCount)) int32_t fullComboCount;

  /// @brief Field timePlayed, offset 0x38, size 0x4
  __declspec(property(get = __get_timePlayed, put = __set_timePlayed)) float_t timePlayed;

  /// @brief Field handDistanceTravelled, offset 0x3c, size 0x4
  __declspec(property(get = __get_handDistanceTravelled, put = __set_handDistanceTravelled)) int32_t handDistanceTravelled;

  /// @brief Field cummulativeCutScoreWithoutMultiplier, offset 0x40, size 0x8
  __declspec(property(get = __get_cummulativeCutScoreWithoutMultiplier, put = __set_cummulativeCutScoreWithoutMultiplier)) int64_t cummulativeCutScoreWithoutMultiplier;

  constexpr int32_t& __get_goodCutsCount();

  constexpr int32_t const& __get_goodCutsCount() const;

  constexpr void __set_goodCutsCount(int32_t value);

  constexpr int32_t& __get_badCutsCount();

  constexpr int32_t const& __get_badCutsCount() const;

  constexpr void __set_badCutsCount(int32_t value);

  constexpr int32_t& __get_missedCutsCount();

  constexpr int32_t const& __get_missedCutsCount() const;

  constexpr void __set_missedCutsCount(int32_t value);

  constexpr int64_t& __get_totalScore();

  constexpr int64_t const& __get_totalScore() const;

  constexpr void __set_totalScore(int64_t value);

  constexpr int32_t& __get_playedLevelsCount();

  constexpr int32_t const& __get_playedLevelsCount() const;

  constexpr void __set_playedLevelsCount(int32_t value);

  constexpr int32_t& __get_cleardLevelsCount();

  constexpr int32_t const& __get_cleardLevelsCount() const;

  constexpr void __set_cleardLevelsCount(int32_t value);

  constexpr int32_t& __get_failedLevelsCount();

  constexpr int32_t const& __get_failedLevelsCount() const;

  constexpr void __set_failedLevelsCount(int32_t value);

  constexpr int32_t& __get_fullComboCount();

  constexpr int32_t const& __get_fullComboCount() const;

  constexpr void __set_fullComboCount(int32_t value);

  constexpr float_t& __get_timePlayed();

  constexpr float_t const& __get_timePlayed() const;

  constexpr void __set_timePlayed(float_t value);

  constexpr int32_t& __get_handDistanceTravelled();

  constexpr int32_t const& __get_handDistanceTravelled() const;

  constexpr void __set_handDistanceTravelled(int32_t value);

  constexpr int64_t& __get_cummulativeCutScoreWithoutMultiplier();

  constexpr int64_t const& __get_cummulativeCutScoreWithoutMultiplier() const;

  constexpr void __set_cummulativeCutScoreWithoutMultiplier(int64_t value);

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* New_ctor();

  /// @brief Method .ctor addr 0x2372588 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* New_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore,
                                                                                      int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount,
                                                                                      float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier);

  /// @brief Method .ctor addr 0x2372590 size 0xb0 virtual false final false
  inline void _ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount,
                    int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier);

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerOverallStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__PlayerOverallStatsData(__PlayerSaveData__PlayerOverallStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerOverallStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__PlayerOverallStatsData(__PlayerSaveData__PlayerOverallStatsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerOverallStatsData();

public:
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

} // namespace GlobalNamespace
// Type: ::PlayerLevelStatsData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14717)), TypeDefinitionIndex(TypeDefinitionIndex(15034))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4644))
// CS Name: ::PlayerSaveData::PlayerLevelStatsData*
class CORDL_TYPE __PlayerSaveData__PlayerLevelStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelId, offset 0x10, size 0x8
  __declspec(property(get = __get_levelId, put = __set_levelId))::StringW levelId;

  /// @brief Field difficulty, offset 0x18, size 0x4
  __declspec(property(get = __get_difficulty, put = __set_difficulty))::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field beatmapCharacteristicName, offset 0x20, size 0x8
  __declspec(property(get = __get_beatmapCharacteristicName, put = __set_beatmapCharacteristicName))::StringW beatmapCharacteristicName;

  /// @brief Field highScore, offset 0x28, size 0x4
  __declspec(property(get = __get_highScore, put = __set_highScore)) int32_t highScore;

  /// @brief Field maxCombo, offset 0x2c, size 0x4
  __declspec(property(get = __get_maxCombo, put = __set_maxCombo)) int32_t maxCombo;

  /// @brief Field fullCombo, offset 0x30, size 0x1
  __declspec(property(get = __get_fullCombo, put = __set_fullCombo)) bool fullCombo;

  /// @brief Field maxRank, offset 0x34, size 0x4
  __declspec(property(get = __get_maxRank, put = __set_maxRank))::GlobalNamespace::__RankModel__Rank maxRank;

  /// @brief Field validScore, offset 0x38, size 0x1
  __declspec(property(get = __get_validScore, put = __set_validScore)) bool validScore;

  /// @brief Field playCount, offset 0x3c, size 0x4
  __declspec(property(get = __get_playCount, put = __set_playCount)) int32_t playCount;

  constexpr ::StringW& __get_levelId();

  constexpr ::StringW const& __get_levelId() const;

  constexpr void __set_levelId(::StringW value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get_difficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_difficulty() const;

  constexpr void __set_difficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::StringW& __get_beatmapCharacteristicName();

  constexpr ::StringW const& __get_beatmapCharacteristicName() const;

  constexpr void __set_beatmapCharacteristicName(::StringW value);

  constexpr int32_t& __get_highScore();

  constexpr int32_t const& __get_highScore() const;

  constexpr void __set_highScore(int32_t value);

  constexpr int32_t& __get_maxCombo();

  constexpr int32_t const& __get_maxCombo() const;

  constexpr void __set_maxCombo(int32_t value);

  constexpr bool& __get_fullCombo();

  constexpr bool const& __get_fullCombo() const;

  constexpr void __set_fullCombo(bool value);

  constexpr ::GlobalNamespace::__RankModel__Rank& __get_maxRank();

  constexpr ::GlobalNamespace::__RankModel__Rank const& __get_maxRank() const;

  constexpr void __set_maxRank(::GlobalNamespace::__RankModel__Rank value);

  constexpr bool& __get_validScore();

  constexpr bool const& __get_validScore() const;

  constexpr void __set_validScore(bool value);

  constexpr int32_t& __get_playCount();

  constexpr int32_t const& __get_playCount() const;

  constexpr void __set_playCount(int32_t value);

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData* New_ctor();

  /// @brief Method .ctor addr 0x2372894 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerLevelStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__PlayerLevelStatsData(__PlayerSaveData__PlayerLevelStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerLevelStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__PlayerLevelStatsData(__PlayerSaveData__PlayerLevelStatsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerLevelStatsData();

public:
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

} // namespace GlobalNamespace
// Type: ::PlayerMissionStatsData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4645))
// CS Name: ::PlayerSaveData::PlayerMissionStatsData*
class CORDL_TYPE __PlayerSaveData__PlayerMissionStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field missionId, offset 0x10, size 0x8
  __declspec(property(get = __get_missionId, put = __set_missionId))::StringW missionId;

  /// @brief Field cleared, offset 0x18, size 0x1
  __declspec(property(get = __get_cleared, put = __set_cleared)) bool cleared;

  constexpr ::StringW& __get_missionId();

  constexpr ::StringW const& __get_missionId() const;

  constexpr void __set_missionId(::StringW value);

  constexpr bool& __get_cleared();

  constexpr bool const& __get_cleared() const;

  constexpr void __set_cleared(bool value);

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData* New_ctor();

  /// @brief Method .ctor addr 0x237289c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerMissionStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__PlayerMissionStatsData(__PlayerSaveData__PlayerMissionStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerMissionStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__PlayerMissionStatsData(__PlayerSaveData__PlayerMissionStatsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerMissionStatsData();

public:
  /// @brief Field missionId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___missionId;

  /// @brief Field cleared, offset: 0x18, size: 0x1, def value: None
  bool ___cleared;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PracticeSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4646))
// CS Name: ::PlayerSaveData::PracticeSettings*
class CORDL_TYPE __PlayerSaveData__PracticeSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field startSongTime, offset 0x10, size 0x4
  __declspec(property(get = __get_startSongTime, put = __set_startSongTime)) float_t startSongTime;

  /// @brief Field songSpeedMul, offset 0x14, size 0x4
  __declspec(property(get = __get_songSpeedMul, put = __set_songSpeedMul)) float_t songSpeedMul;

  constexpr float_t& __get_startSongTime();

  constexpr float_t const& __get_startSongTime() const;

  constexpr void __set_startSongTime(float_t value);

  constexpr float_t& __get_songSpeedMul();

  constexpr float_t const& __get_songSpeedMul() const;

  constexpr void __set_songSpeedMul(float_t value);

  static inline ::GlobalNamespace::__PlayerSaveData__PracticeSettings* New_ctor();

  /// @brief Method .ctor addr 0x23728a4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PracticeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__PracticeSettings(__PlayerSaveData__PracticeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PracticeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__PracticeSettings(__PlayerSaveData__PracticeSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PracticeSettings();

public:
  /// @brief Field startSongTime, offset: 0x10, size: 0x4, def value: None
  float_t ___startSongTime;

  /// @brief Field songSpeedMul, offset: 0x14, size: 0x4, def value: None
  float_t ___songSpeedMul;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PracticeSettings, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ColorScheme
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4647))
// CS Name: ::PlayerSaveData::ColorScheme*
class CORDL_TYPE __PlayerSaveData__ColorScheme : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorSchemeId, offset 0x10, size 0x8
  __declspec(property(get = __get_colorSchemeId, put = __set_colorSchemeId))::StringW colorSchemeId;

  /// @brief Field saberAColor, offset 0x18, size 0x10
  __declspec(property(get = __get_saberAColor, put = __set_saberAColor))::UnityEngine::Color saberAColor;

  /// @brief Field saberBColor, offset 0x28, size 0x10
  __declspec(property(get = __get_saberBColor, put = __set_saberBColor))::UnityEngine::Color saberBColor;

  /// @brief Field environmentColor0, offset 0x38, size 0x10
  __declspec(property(get = __get_environmentColor0, put = __set_environmentColor0))::UnityEngine::Color environmentColor0;

  /// @brief Field environmentColor1, offset 0x48, size 0x10
  __declspec(property(get = __get_environmentColor1, put = __set_environmentColor1))::UnityEngine::Color environmentColor1;

  /// @brief Field obstaclesColor, offset 0x58, size 0x10
  __declspec(property(get = __get_obstaclesColor, put = __set_obstaclesColor))::UnityEngine::Color obstaclesColor;

  /// @brief Field environmentColor0Boost, offset 0x68, size 0x10
  __declspec(property(get = __get_environmentColor0Boost, put = __set_environmentColor0Boost))::UnityEngine::Color environmentColor0Boost;

  /// @brief Field environmentColor1Boost, offset 0x78, size 0x10
  __declspec(property(get = __get_environmentColor1Boost, put = __set_environmentColor1Boost))::UnityEngine::Color environmentColor1Boost;

  constexpr ::StringW& __get_colorSchemeId();

  constexpr ::StringW const& __get_colorSchemeId() const;

  constexpr void __set_colorSchemeId(::StringW value);

  constexpr ::UnityEngine::Color& __get_saberAColor();

  constexpr ::UnityEngine::Color const& __get_saberAColor() const;

  constexpr void __set_saberAColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_saberBColor();

  constexpr ::UnityEngine::Color const& __get_saberBColor() const;

  constexpr void __set_saberBColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_environmentColor0();

  constexpr ::UnityEngine::Color const& __get_environmentColor0() const;

  constexpr void __set_environmentColor0(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_environmentColor1();

  constexpr ::UnityEngine::Color const& __get_environmentColor1() const;

  constexpr void __set_environmentColor1(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_obstaclesColor();

  constexpr ::UnityEngine::Color const& __get_obstaclesColor() const;

  constexpr void __set_obstaclesColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_environmentColor0Boost();

  constexpr ::UnityEngine::Color const& __get_environmentColor0Boost() const;

  constexpr void __set_environmentColor0Boost(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_environmentColor1Boost();

  constexpr ::UnityEngine::Color const& __get_environmentColor1Boost() const;

  constexpr void __set_environmentColor1Boost(::UnityEngine::Color value);

  static inline ::GlobalNamespace::__PlayerSaveData__ColorScheme* New_ctor(::StringW colorSchemeId, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor,
                                                                           ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1, ::UnityEngine::Color obstaclesColor,
                                                                           ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost);

  /// @brief Method .ctor addr 0x23728ac size 0xd0 virtual false final false
  inline void _ctor(::StringW colorSchemeId, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1,
                    ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost);

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__ColorScheme", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__ColorScheme(__PlayerSaveData__ColorScheme&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__ColorScheme", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__ColorScheme(__PlayerSaveData__ColorScheme const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__ColorScheme();

public:
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

} // namespace GlobalNamespace
// Type: ::ColorSchemesSettings
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4648))
// CS Name: ::PlayerSaveData::ColorSchemesSettings*
class CORDL_TYPE __PlayerSaveData__ColorSchemesSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field overrideDefaultColors, offset 0x10, size 0x1
  __declspec(property(get = __get_overrideDefaultColors, put = __set_overrideDefaultColors)) bool overrideDefaultColors;

  /// @brief Field selectedColorSchemeId, offset 0x18, size 0x8
  __declspec(property(get = __get_selectedColorSchemeId, put = __set_selectedColorSchemeId))::StringW selectedColorSchemeId;

  /// @brief Field colorSchemes, offset 0x20, size 0x8
  __declspec(property(get = __get_colorSchemes, put = __set_colorSchemes))::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>* colorSchemes;

  constexpr bool& __get_overrideDefaultColors();

  constexpr bool const& __get_overrideDefaultColors() const;

  constexpr void __set_overrideDefaultColors(bool value);

  constexpr ::StringW& __get_selectedColorSchemeId();

  constexpr ::StringW const& __get_selectedColorSchemeId() const;

  constexpr void __set_selectedColorSchemeId(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*& __get_colorSchemes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*> const& __get_colorSchemes() const;

  constexpr void __set_colorSchemes(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>* value);

  static inline ::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings* New_ctor(bool overrideDefaultColors, ::StringW selectedColorSchemeId,
                                                                                    ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>* colorSchemes);

  /// @brief Method .ctor addr 0x237297c size 0x3c virtual false final false
  inline void _ctor(bool overrideDefaultColors, ::StringW selectedColorSchemeId, ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>* colorSchemes);

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__ColorSchemesSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__ColorSchemesSettings(__PlayerSaveData__ColorSchemesSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__ColorSchemesSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__ColorSchemesSettings(__PlayerSaveData__ColorSchemesSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__ColorSchemesSettings();

public:
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

} // namespace GlobalNamespace
// Type: ::OverrideEnvironmentSettings
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4649))
// CS Name: ::PlayerSaveData::OverrideEnvironmentSettings*
class CORDL_TYPE __PlayerSaveData__OverrideEnvironmentSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field overrideEnvironments, offset 0x10, size 0x1
  __declspec(property(get = __get_overrideEnvironments, put = __set_overrideEnvironments)) bool overrideEnvironments;

  /// @brief Field overrideNormalEnvironmentName, offset 0x18, size 0x8
  __declspec(property(get = __get_overrideNormalEnvironmentName, put = __set_overrideNormalEnvironmentName))::StringW overrideNormalEnvironmentName;

  /// @brief Field override360EnvironmentName, offset 0x20, size 0x8
  __declspec(property(get = __get_override360EnvironmentName, put = __set_override360EnvironmentName))::StringW override360EnvironmentName;

  constexpr bool& __get_overrideEnvironments();

  constexpr bool const& __get_overrideEnvironments() const;

  constexpr void __set_overrideEnvironments(bool value);

  constexpr ::StringW& __get_overrideNormalEnvironmentName();

  constexpr ::StringW const& __get_overrideNormalEnvironmentName() const;

  constexpr void __set_overrideNormalEnvironmentName(::StringW value);

  constexpr ::StringW& __get_override360EnvironmentName();

  constexpr ::StringW const& __get_override360EnvironmentName() const;

  constexpr void __set_override360EnvironmentName(::StringW value);

  static inline ::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings* New_ctor();

  /// @brief Method .ctor addr 0x23729b8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__OverrideEnvironmentSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__OverrideEnvironmentSettings(__PlayerSaveData__OverrideEnvironmentSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__OverrideEnvironmentSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__OverrideEnvironmentSettings(__PlayerSaveData__OverrideEnvironmentSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__OverrideEnvironmentSettings();

public:
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

} // namespace GlobalNamespace
// Type: ::GuestPlayer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4650))
// CS Name: ::PlayerSaveData::GuestPlayer*
class CORDL_TYPE __PlayerSaveData__GuestPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerName, offset 0x10, size 0x8
  __declspec(property(get = __get_playerName, put = __set_playerName))::StringW playerName;

  constexpr ::StringW& __get_playerName();

  constexpr ::StringW const& __get_playerName() const;

  constexpr void __set_playerName(::StringW value);

  static inline ::GlobalNamespace::__PlayerSaveData__GuestPlayer* New_ctor();

  /// @brief Method .ctor addr 0x23729c0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__GuestPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__GuestPlayer(__PlayerSaveData__GuestPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__GuestPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__GuestPlayer(__PlayerSaveData__GuestPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__GuestPlayer();

public:
  /// @brief Field playerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___playerName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__GuestPlayer, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerModeSettings
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4651))
// CS Name: ::PlayerSaveData::MultiplayerModeSettings*
class CORDL_TYPE __PlayerSaveData__MultiplayerModeSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field createServerNumberOfPlayers, offset 0x10, size 0x4
  __declspec(property(get = __get_createServerNumberOfPlayers, put = __set_createServerNumberOfPlayers)) int32_t createServerNumberOfPlayers;

  /// @brief Field quickPlayDifficulty, offset 0x18, size 0x8
  __declspec(property(get = __get_quickPlayDifficulty, put = __set_quickPlayDifficulty))::StringW quickPlayDifficulty;

  /// @brief Field quickPlaySongPackMask, offset 0x20, size 0x8
  __declspec(property(get = __get_quickPlaySongPackMask, put = __set_quickPlaySongPackMask))::ArrayW<uint8_t, ::Array<uint8_t>*> quickPlaySongPackMask;

  /// @brief Field quickPlaySongPackMaskSerializedName, offset 0x28, size 0x8
  __declspec(property(get = __get_quickPlaySongPackMaskSerializedName, put = __set_quickPlaySongPackMaskSerializedName))::StringW quickPlaySongPackMaskSerializedName;

  /// @brief Field quickPlayEnableLevelSelection, offset 0x30, size 0x1
  __declspec(property(get = __get_quickPlayEnableLevelSelection, put = __set_quickPlayEnableLevelSelection)) bool quickPlayEnableLevelSelection;

  constexpr int32_t& __get_createServerNumberOfPlayers();

  constexpr int32_t const& __get_createServerNumberOfPlayers() const;

  constexpr void __set_createServerNumberOfPlayers(int32_t value);

  constexpr ::StringW& __get_quickPlayDifficulty();

  constexpr ::StringW const& __get_quickPlayDifficulty() const;

  constexpr void __set_quickPlayDifficulty(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_quickPlaySongPackMask();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_quickPlaySongPackMask() const;

  constexpr void __set_quickPlaySongPackMask(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::StringW& __get_quickPlaySongPackMaskSerializedName();

  constexpr ::StringW const& __get_quickPlaySongPackMaskSerializedName() const;

  constexpr void __set_quickPlaySongPackMaskSerializedName(::StringW value);

  constexpr bool& __get_quickPlayEnableLevelSelection();

  constexpr bool const& __get_quickPlayEnableLevelSelection() const;

  constexpr void __set_quickPlayEnableLevelSelection(bool value);

  static inline ::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings* New_ctor();

  /// @brief Method .ctor addr 0x23729c8 size 0x74 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__MultiplayerModeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__MultiplayerModeSettings(__PlayerSaveData__MultiplayerModeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__MultiplayerModeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__MultiplayerModeSettings(__PlayerSaveData__MultiplayerModeSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__MultiplayerModeSettings();

public:
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

} // namespace GlobalNamespace
// Type: ::PlayerAgreementsData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4652))
// CS Name: ::PlayerSaveData::PlayerAgreementsData*
class CORDL_TYPE __PlayerSaveData__PlayerAgreementsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field eulaVersion, offset 0x10, size 0x4
  __declspec(property(get = __get_eulaVersion, put = __set_eulaVersion)) int32_t eulaVersion;

  /// @brief Field privacyPolicyVersion, offset 0x14, size 0x4
  __declspec(property(get = __get_privacyPolicyVersion, put = __set_privacyPolicyVersion)) int32_t privacyPolicyVersion;

  /// @brief Field healthAndSafetyVersion, offset 0x18, size 0x4
  __declspec(property(get = __get_healthAndSafetyVersion, put = __set_healthAndSafetyVersion)) int32_t healthAndSafetyVersion;

  /// @brief Field playerSensitivityFlagVersion, offset 0x1c, size 0x4
  __declspec(property(get = __get_playerSensitivityFlagVersion, put = __set_playerSensitivityFlagVersion)) int32_t playerSensitivityFlagVersion;

  constexpr int32_t& __get_eulaVersion();

  constexpr int32_t const& __get_eulaVersion() const;

  constexpr void __set_eulaVersion(int32_t value);

  constexpr int32_t& __get_privacyPolicyVersion();

  constexpr int32_t const& __get_privacyPolicyVersion() const;

  constexpr void __set_privacyPolicyVersion(int32_t value);

  constexpr int32_t& __get_healthAndSafetyVersion();

  constexpr int32_t const& __get_healthAndSafetyVersion() const;

  constexpr void __set_healthAndSafetyVersion(int32_t value);

  constexpr int32_t& __get_playerSensitivityFlagVersion();

  constexpr int32_t const& __get_playerSensitivityFlagVersion() const;

  constexpr void __set_playerSensitivityFlagVersion(int32_t value);

  static inline ::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData* New_ctor();

  /// @brief Method .ctor addr 0x2372a3c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerAgreementsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__PlayerAgreementsData(__PlayerSaveData__PlayerAgreementsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__PlayerAgreementsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__PlayerAgreementsData(__PlayerSaveData__PlayerAgreementsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerAgreementsData();

public:
  /// @brief Field eulaVersion, offset: 0x10, size: 0x4, def value: None
  int32_t ___eulaVersion;

  /// @brief Field privacyPolicyVersion, offset: 0x14, size: 0x4, def value: None
  int32_t ___privacyPolicyVersion;

  /// @brief Field healthAndSafetyVersion, offset: 0x18, size: 0x4, def value: None
  int32_t ___healthAndSafetyVersion;

  /// @brief Field playerSensitivityFlagVersion, offset: 0x1c, size: 0x4, def value: None
  int32_t ___playerSensitivityFlagVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::UserAgeCategorySaveData
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4653))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__UserAgeCategorySaveData(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__UserAgeCategorySaveData();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData const Unknown;

  /// @brief Field Child value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData const Child;

  /// @brief Field Teen value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData const Teen;

  /// @brief Field Adult value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData const Adult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerSensitivityFlagSaveData
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4654))
// CS Name: ::PlayerSaveData::PlayerSensitivityFlagSaveData
struct CORDL_TYPE __PlayerSaveData__PlayerSensitivityFlagSaveData {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlayerSaveData__PlayerSensitivityFlagSaveData_Unwrapped
  enum struct ____PlayerSaveData__PlayerSensitivityFlagSaveData_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Safe = static_cast<int32_t>(0x1),
    __E_Explicit = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlayerSaveData__PlayerSensitivityFlagSaveData_Unwrapped() const noexcept {
    return static_cast<____PlayerSaveData__PlayerSensitivityFlagSaveData_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveData__PlayerSensitivityFlagSaveData(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__PlayerSensitivityFlagSaveData();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData const Unknown;

  /// @brief Field Safe value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData const Safe;

  /// @brief Field Explicit value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData const Explicit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LocalPlayer
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4653)), TypeDefinitionIndex(TypeDefinitionIndex(14717)), TypeDefinitionIndex(TypeDefinitionIndex(4654)),
// TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4655)) CS Name: ::PlayerSaveData::LocalPlayer*
class CORDL_TYPE __PlayerSaveData__LocalPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerId, offset 0x10, size 0x8
  __declspec(property(get = __get_playerId, put = __set_playerId))::StringW playerId;

  /// @brief Field playerName, offset 0x18, size 0x8
  __declspec(property(get = __get_playerName, put = __set_playerName))::StringW playerName;

  /// @brief Field shouldShowTutorialPrompt, offset 0x20, size 0x1
  __declspec(property(get = __get_shouldShowTutorialPrompt, put = __set_shouldShowTutorialPrompt)) bool shouldShowTutorialPrompt;

  /// @brief Field shouldShow360Warning, offset 0x21, size 0x1
  __declspec(property(get = __get_shouldShow360Warning, put = __set_shouldShow360Warning)) bool shouldShow360Warning;

  /// @brief Field agreedToEula, offset 0x22, size 0x1
  __declspec(property(get = __get_agreedToEula, put = __set_agreedToEula)) bool agreedToEula;

  /// @brief Field didSelectLanguage, offset 0x23, size 0x1
  __declspec(property(get = __get_didSelectLanguage, put = __set_didSelectLanguage)) bool didSelectLanguage;

  /// @brief Field agreedToMultiplayerDisclaimer, offset 0x24, size 0x1
  __declspec(property(get = __get_agreedToMultiplayerDisclaimer, put = __set_agreedToMultiplayerDisclaimer)) bool agreedToMultiplayerDisclaimer;

  /// @brief Field didSelectRegionVersion, offset 0x28, size 0x4
  __declspec(property(get = __get_didSelectRegionVersion, put = __set_didSelectRegionVersion)) int32_t didSelectRegionVersion;

  /// @brief Field selectedAvatarSystemTypeId, offset 0x30, size 0x8
  __declspec(property(get = __get_selectedAvatarSystemTypeId, put = __set_selectedAvatarSystemTypeId))::StringW selectedAvatarSystemTypeId;

  /// @brief Field playerAgreements, offset 0x38, size 0x8
  __declspec(property(get = __get_playerAgreements, put = __set_playerAgreements))::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData* playerAgreements;

  /// @brief Field lastSelectedBeatmapDifficulty, offset 0x40, size 0x4
  __declspec(property(get = __get_lastSelectedBeatmapDifficulty, put = __set_lastSelectedBeatmapDifficulty))::GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty;

  /// @brief Field lastSelectedBeatmapCharacteristicName, offset 0x48, size 0x8
  __declspec(property(get = __get_lastSelectedBeatmapCharacteristicName, put = __set_lastSelectedBeatmapCharacteristicName))::StringW lastSelectedBeatmapCharacteristicName;

  /// @brief Field gameplayModifiers, offset 0x50, size 0x8
  __declspec(property(get = __get_gameplayModifiers, put = __set_gameplayModifiers))::GlobalNamespace::__PlayerSaveData__GameplayModifiers* gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset 0x58, size 0x8
  __declspec(property(get = __get_playerSpecificSettings, put = __set_playerSpecificSettings))::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field practiceSettings, offset 0x60, size 0x8
  __declspec(property(get = __get_practiceSettings, put = __set_practiceSettings))::GlobalNamespace::__PlayerSaveData__PracticeSettings* practiceSettings;

  /// @brief Field playerAllOverallStatsData, offset 0x68, size 0x8
  __declspec(property(get = __get_playerAllOverallStatsData, put = __set_playerAllOverallStatsData))::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* playerAllOverallStatsData;

  /// @brief Field levelsStatsData, offset 0x70, size 0x8
  __declspec(property(get = __get_levelsStatsData, put = __set_levelsStatsData))::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>* levelsStatsData;

  /// @brief Field missionsStatsData, offset 0x78, size 0x8
  __declspec(property(get = __get_missionsStatsData,
                      put = __set_missionsStatsData))::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>* missionsStatsData;

  /// @brief Field showedMissionHelpIds, offset 0x80, size 0x8
  __declspec(property(get = __get_showedMissionHelpIds, put = __set_showedMissionHelpIds))::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds;

  /// @brief Field colorSchemesSettings, offset 0x88, size 0x8
  __declspec(property(get = __get_colorSchemesSettings, put = __set_colorSchemesSettings))::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings* colorSchemesSettings;

  /// @brief Field overrideEnvironmentSettings, offset 0x90, size 0x8
  __declspec(property(get = __get_overrideEnvironmentSettings, put = __set_overrideEnvironmentSettings))::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings* overrideEnvironmentSettings;

  /// @brief Field favoritesLevelIds, offset 0x98, size 0x8
  __declspec(property(get = __get_favoritesLevelIds, put = __set_favoritesLevelIds))::System::Collections::Generic::List_1<::StringW>* favoritesLevelIds;

  /// @brief Field multiplayerModeSettings, offset 0xa0, size 0x8
  __declspec(property(get = __get_multiplayerModeSettings, put = __set_multiplayerModeSettings))::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings* multiplayerModeSettings;

  /// @brief Field currentDlcPromoDisplayCount, offset 0xa8, size 0x4
  __declspec(property(get = __get_currentDlcPromoDisplayCount, put = __set_currentDlcPromoDisplayCount)) int32_t currentDlcPromoDisplayCount;

  /// @brief Field currentDlcPromoId, offset 0xb0, size 0x8
  __declspec(property(get = __get_currentDlcPromoId, put = __set_currentDlcPromoId))::StringW currentDlcPromoId;

  /// @brief Field userAgeCategory, offset 0xb8, size 0x4
  __declspec(property(get = __get_userAgeCategory, put = __set_userAgeCategory))::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData userAgeCategory;

  /// @brief Field desiredSensitivityFlag, offset 0xbc, size 0x4
  __declspec(property(get = __get_desiredSensitivityFlag, put = __set_desiredSensitivityFlag))::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData desiredSensitivityFlag;

  constexpr ::StringW& __get_playerId();

  constexpr ::StringW const& __get_playerId() const;

  constexpr void __set_playerId(::StringW value);

  constexpr ::StringW& __get_playerName();

  constexpr ::StringW const& __get_playerName() const;

  constexpr void __set_playerName(::StringW value);

  constexpr bool& __get_shouldShowTutorialPrompt();

  constexpr bool const& __get_shouldShowTutorialPrompt() const;

  constexpr void __set_shouldShowTutorialPrompt(bool value);

  constexpr bool& __get_shouldShow360Warning();

  constexpr bool const& __get_shouldShow360Warning() const;

  constexpr void __set_shouldShow360Warning(bool value);

  constexpr bool& __get_agreedToEula();

  constexpr bool const& __get_agreedToEula() const;

  constexpr void __set_agreedToEula(bool value);

  constexpr bool& __get_didSelectLanguage();

  constexpr bool const& __get_didSelectLanguage() const;

  constexpr void __set_didSelectLanguage(bool value);

  constexpr bool& __get_agreedToMultiplayerDisclaimer();

  constexpr bool const& __get_agreedToMultiplayerDisclaimer() const;

  constexpr void __set_agreedToMultiplayerDisclaimer(bool value);

  constexpr int32_t& __get_didSelectRegionVersion();

  constexpr int32_t const& __get_didSelectRegionVersion() const;

  constexpr void __set_didSelectRegionVersion(int32_t value);

  constexpr ::StringW& __get_selectedAvatarSystemTypeId();

  constexpr ::StringW const& __get_selectedAvatarSystemTypeId() const;

  constexpr void __set_selectedAvatarSystemTypeId(::StringW value);

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*& __get_playerAgreements();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*> const& __get_playerAgreements() const;

  constexpr void __set_playerAgreements(::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get_lastSelectedBeatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_lastSelectedBeatmapDifficulty() const;

  constexpr void __set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::StringW& __get_lastSelectedBeatmapCharacteristicName();

  constexpr ::StringW const& __get_lastSelectedBeatmapCharacteristicName() const;

  constexpr void __set_lastSelectedBeatmapCharacteristicName(::StringW value);

  constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers*& __get_gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__GameplayModifiers*> const& __get_gameplayModifiers() const;

  constexpr void __set_gameplayModifiers(::GlobalNamespace::__PlayerSaveData__GameplayModifiers* value);

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*& __get_playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*> const& __get_playerSpecificSettings() const;

  constexpr void __set_playerSpecificSettings(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings* value);

  constexpr ::GlobalNamespace::__PlayerSaveData__PracticeSettings*& __get_practiceSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PracticeSettings*> const& __get_practiceSettings() const;

  constexpr void __set_practiceSettings(::GlobalNamespace::__PlayerSaveData__PracticeSettings* value);

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*& __get_playerAllOverallStatsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*> const& __get_playerAllOverallStatsData() const;

  constexpr void __set_playerAllOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>*& __get_levelsStatsData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>*> const& __get_levelsStatsData() const;

  constexpr void __set_levelsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>*& __get_missionsStatsData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>*> const& __get_missionsStatsData() const;

  constexpr void __set_missionsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_showedMissionHelpIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_showedMissionHelpIds() const;

  constexpr void __set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*& __get_colorSchemesSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*> const& __get_colorSchemesSettings() const;

  constexpr void __set_colorSchemesSettings(::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings* value);

  constexpr ::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*& __get_overrideEnvironmentSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*> const& __get_overrideEnvironmentSettings() const;

  constexpr void __set_overrideEnvironmentSettings(::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_favoritesLevelIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_favoritesLevelIds() const;

  constexpr void __set_favoritesLevelIds(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*& __get_multiplayerModeSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*> const& __get_multiplayerModeSettings() const;

  constexpr void __set_multiplayerModeSettings(::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings* value);

  constexpr int32_t& __get_currentDlcPromoDisplayCount();

  constexpr int32_t const& __get_currentDlcPromoDisplayCount() const;

  constexpr void __set_currentDlcPromoDisplayCount(int32_t value);

  constexpr ::StringW& __get_currentDlcPromoId();

  constexpr ::StringW const& __get_currentDlcPromoId() const;

  constexpr void __set_currentDlcPromoId(::StringW value);

  constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData& __get_userAgeCategory();

  constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData const& __get_userAgeCategory() const;

  constexpr void __set_userAgeCategory(::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData value);

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData& __get_desiredSensitivityFlag();

  constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData const& __get_desiredSensitivityFlag() const;

  constexpr void __set_desiredSensitivityFlag(::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData value);

  static inline ::GlobalNamespace::__PlayerSaveData__LocalPlayer* New_ctor();

  /// @brief Method .ctor addr 0x2372a44 size 0x18 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__LocalPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveData__LocalPlayer(__PlayerSaveData__LocalPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveData__LocalPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveData__LocalPlayer(__PlayerSaveData__LocalPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveData__LocalPlayer();

public:
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

} // namespace GlobalNamespace
// Type: ::PlayerSaveData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4685))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4656))
// CS Name: ::PlayerSaveData*
class CORDL_TYPE PlayerSaveData : public ::GlobalNamespace::VersionSaveData {
public:
  // Declarations
  using LocalPlayer = ::GlobalNamespace::__PlayerSaveData__LocalPlayer;

  using PlayerSensitivityFlagSaveData = ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData;

  using UserAgeCategorySaveData = ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData;

  using PlayerAgreementsData = ::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData;

  using MultiplayerModeSettings = ::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings;

  using GuestPlayer = ::GlobalNamespace::__PlayerSaveData__GuestPlayer;

  using OverrideEnvironmentSettings = ::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings;

  using ColorSchemesSettings = ::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings;

  using ColorScheme = ::GlobalNamespace::__PlayerSaveData__ColorScheme;

  using PracticeSettings = ::GlobalNamespace::__PlayerSaveData__PracticeSettings;

  using PlayerMissionStatsData = ::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData;

  using PlayerLevelStatsData = ::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData;

  using PlayerOverallStatsData = ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData;

  using PlayerAllOverallStatsData = ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData;

  using PlayerSpecificSettings = ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings;

  using GameplayModifiers = ::GlobalNamespace::__PlayerSaveData__GameplayModifiers;

  /// @brief Field localPlayers, offset 0x18, size 0x8
  __declspec(property(get = __get_localPlayers, put = __set_localPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>* localPlayers;

  /// @brief Field guestPlayers, offset 0x20, size 0x8
  __declspec(property(get = __get_guestPlayers, put = __set_guestPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>* guestPlayers;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>*& __get_localPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>*> const& __get_localPlayers() const;

  constexpr void __set_localPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>*& __get_guestPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>*> const& __get_guestPlayers() const;

  constexpr void __set_guestPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>* value);

  static inline ::GlobalNamespace::PlayerSaveData* New_ctor();

  /// @brief Method .ctor addr 0x23727f8 size 0x54 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveData(PlayerSaveData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveData(PlayerSaveData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveData();

public:
  /// @brief Field localPlayers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>* ___localPlayers;

  /// @brief Field guestPlayers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>* ___guestPlayers;

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"2.0.26" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveData, 0x28>, "Size mismatch!");

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
