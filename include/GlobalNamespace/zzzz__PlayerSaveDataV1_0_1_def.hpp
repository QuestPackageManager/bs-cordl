#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveDataV1_0_1_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSaveDataV1_0_1)
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__AchievementsData;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__GameplayModifiers;
}
namespace GlobalNamespace {
struct __PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType;
}
namespace GlobalNamespace {
struct __PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType;
}
namespace GlobalNamespace {
struct __PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__GuestPlayer;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__LocalPlayer;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__PlayerLevelStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__PlayerMissionStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__PlayerSpecificSettings;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType;
}
namespace GlobalNamespace {
struct __PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType;
}
namespace GlobalNamespace {
struct __PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__AchievementsData;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__GameplayModifiers;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__GuestPlayer;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__LocalPlayer;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__PlayerLevelStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__PlayerMissionStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__PlayerSpecificSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType);
MARK_VAL_T(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType);
MARK_VAL_T(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed);
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveDataV1_0_1);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings);
// Type: ::EnabledObstacleType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4608))
// CS Name: ::PlayerSaveDataV1_0_1::GameplayModifiers::EnabledObstacleType
struct CORDL_TYPE __PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType_Unwrapped
  enum struct ____PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_FullHeightOnly = static_cast<int32_t>(0x1),
    __E_None = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType_Unwrapped() const noexcept {
    return static_cast<____PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field All value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType const All;

  /// @brief Field FullHeightOnly value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType const FullHeightOnly;

  /// @brief Field None value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType const None;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EnergyType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4609))
// CS Name: ::PlayerSaveDataV1_0_1::GameplayModifiers::EnergyType
struct CORDL_TYPE __PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType_Unwrapped
  enum struct ____PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType_Unwrapped : int32_t {
    __E_Bar = static_cast<int32_t>(0x0),
    __E_Battery = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType_Unwrapped() const noexcept {
    return static_cast<____PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Bar value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType const Bar;

  /// @brief Field Battery value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType const Battery;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SongSpeed
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4610))
// CS Name: ::PlayerSaveDataV1_0_1::GameplayModifiers::SongSpeed
struct CORDL_TYPE __PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed_Unwrapped
  enum struct ____PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Faster = static_cast<int32_t>(0x1),
    __E_Slower = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed_Unwrapped() const noexcept {
    return static_cast<____PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed const Normal;

  /// @brief Field Faster value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed const Faster;

  /// @brief Field Slower value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed const Slower;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplayModifiers
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(4608)), TypeDefinitionIndex(TypeDefinitionIndex(4609)),
// TypeDefinitionIndex(TypeDefinitionIndex(4610))] Self: TypeDefinitionIndex(TypeDefinitionIndex(4611)) CS Name: ::PlayerSaveDataV1_0_1::GameplayModifiers*
class CORDL_TYPE __PlayerSaveDataV1_0_1__GameplayModifiers : public ::System::Object {
public:
  // Declarations
  using SongSpeed = ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed;

  using EnergyType = ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType;

  using EnabledObstacleType = ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType;

  /// @brief Field energyType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_energyType, put = __cordl_internal_set_energyType))::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType energyType;

  /// @brief Field noFail, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_noFail, put = __cordl_internal_set_noFail)) bool noFail;

  /// @brief Field instaFail, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_instaFail, put = __cordl_internal_set_instaFail)) bool instaFail;

  /// @brief Field failOnSaberClash, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get_failOnSaberClash, put = __cordl_internal_set_failOnSaberClash)) bool failOnSaberClash;

  /// @brief Field enabledObstacleType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_enabledObstacleType,
                      put = __cordl_internal_set_enabledObstacleType))::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType enabledObstacleType;

  /// @brief Field fastNotes, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_fastNotes, put = __cordl_internal_set_fastNotes)) bool fastNotes;

  /// @brief Field strictAngles, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_strictAngles, put = __cordl_internal_set_strictAngles)) bool strictAngles;

  /// @brief Field disappearingArrows, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get_disappearingArrows, put = __cordl_internal_set_disappearingArrows)) bool disappearingArrows;

  /// @brief Field noBombs, offset 0x1f, size 0x1
  __declspec(property(get = __cordl_internal_get_noBombs, put = __cordl_internal_set_noBombs)) bool noBombs;

  /// @brief Field songSpeed, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_songSpeed, put = __cordl_internal_set_songSpeed))::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed songSpeed;

  constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType& __cordl_internal_get_energyType();

  constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType const& __cordl_internal_get_energyType() const;

  constexpr void __cordl_internal_set_energyType(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType value);

  constexpr bool& __cordl_internal_get_noFail();

  constexpr bool const& __cordl_internal_get_noFail() const;

  constexpr void __cordl_internal_set_noFail(bool value);

  constexpr bool& __cordl_internal_get_instaFail();

  constexpr bool const& __cordl_internal_get_instaFail() const;

  constexpr void __cordl_internal_set_instaFail(bool value);

  constexpr bool& __cordl_internal_get_failOnSaberClash();

  constexpr bool const& __cordl_internal_get_failOnSaberClash() const;

  constexpr void __cordl_internal_set_failOnSaberClash(bool value);

  constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType& __cordl_internal_get_enabledObstacleType();

  constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType const& __cordl_internal_get_enabledObstacleType() const;

  constexpr void __cordl_internal_set_enabledObstacleType(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType value);

  constexpr bool& __cordl_internal_get_fastNotes();

  constexpr bool const& __cordl_internal_get_fastNotes() const;

  constexpr void __cordl_internal_set_fastNotes(bool value);

  constexpr bool& __cordl_internal_get_strictAngles();

  constexpr bool const& __cordl_internal_get_strictAngles() const;

  constexpr void __cordl_internal_set_strictAngles(bool value);

  constexpr bool& __cordl_internal_get_disappearingArrows();

  constexpr bool const& __cordl_internal_get_disappearingArrows() const;

  constexpr void __cordl_internal_set_disappearingArrows(bool value);

  constexpr bool& __cordl_internal_get_noBombs();

  constexpr bool const& __cordl_internal_get_noBombs() const;

  constexpr void __cordl_internal_set_noBombs(bool value);

  constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed& __cordl_internal_get_songSpeed();

  constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed const& __cordl_internal_get_songSpeed() const;

  constexpr void __cordl_internal_set_songSpeed(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed value);

  static inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers* New_ctor();

  /// @brief Method .ctor, addr 0x236ad28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__GameplayModifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveDataV1_0_1__GameplayModifiers(__PlayerSaveDataV1_0_1__GameplayModifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__GameplayModifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveDataV1_0_1__GameplayModifiers(__PlayerSaveDataV1_0_1__GameplayModifiers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveDataV1_0_1__GameplayModifiers();

public:
  /// @brief Field energyType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType ___energyType;

  /// @brief Field noFail, offset: 0x14, size: 0x1, def value: None
  bool ___noFail;

  /// @brief Field instaFail, offset: 0x15, size: 0x1, def value: None
  bool ___instaFail;

  /// @brief Field failOnSaberClash, offset: 0x16, size: 0x1, def value: None
  bool ___failOnSaberClash;

  /// @brief Field enabledObstacleType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType ___enabledObstacleType;

  /// @brief Field fastNotes, offset: 0x1c, size: 0x1, def value: None
  bool ___fastNotes;

  /// @brief Field strictAngles, offset: 0x1d, size: 0x1, def value: None
  bool ___strictAngles;

  /// @brief Field disappearingArrows, offset: 0x1e, size: 0x1, def value: None
  bool ___disappearingArrows;

  /// @brief Field noBombs, offset: 0x1f, size: 0x1, def value: None
  bool ___noBombs;

  /// @brief Field songSpeed, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed ___songSpeed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers, ___energyType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers, ___noFail) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers, ___instaFail) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers, ___failOnSaberClash) == 0x16, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers, ___enabledObstacleType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers, ___fastNotes) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers, ___strictAngles) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers, ___disappearingArrows) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers, ___noBombs) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers, ___songSpeed) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerSpecificSettings
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4612))
// CS Name: ::PlayerSaveDataV1_0_1::PlayerSpecificSettings*
class CORDL_TYPE __PlayerSaveDataV1_0_1__PlayerSpecificSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field staticLights, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_staticLights, put = __cordl_internal_set_staticLights)) bool staticLights;

  /// @brief Field leftHanded, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_leftHanded, put = __cordl_internal_set_leftHanded)) bool leftHanded;

  /// @brief Field swapColors, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_swapColors, put = __cordl_internal_set_swapColors)) bool swapColors;

  /// @brief Field playerHeight, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_playerHeight, put = __cordl_internal_set_playerHeight)) float_t playerHeight;

  /// @brief Field disableSFX, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_disableSFX, put = __cordl_internal_set_disableSFX)) bool disableSFX;

  /// @brief Field reduceDebris, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_reduceDebris, put = __cordl_internal_set_reduceDebris)) bool reduceDebris;

  /// @brief Field advancedHud, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_advancedHud, put = __cordl_internal_set_advancedHud)) bool advancedHud;

  /// @brief Field noTextsAndHuds, offset 0x1b, size 0x1
  __declspec(property(get = __cordl_internal_get_noTextsAndHuds, put = __cordl_internal_set_noTextsAndHuds)) bool noTextsAndHuds;

  constexpr bool& __cordl_internal_get_staticLights();

  constexpr bool const& __cordl_internal_get_staticLights() const;

  constexpr void __cordl_internal_set_staticLights(bool value);

  constexpr bool& __cordl_internal_get_leftHanded();

  constexpr bool const& __cordl_internal_get_leftHanded() const;

  constexpr void __cordl_internal_set_leftHanded(bool value);

  constexpr bool& __cordl_internal_get_swapColors();

  constexpr bool const& __cordl_internal_get_swapColors() const;

  constexpr void __cordl_internal_set_swapColors(bool value);

  constexpr float_t& __cordl_internal_get_playerHeight();

  constexpr float_t const& __cordl_internal_get_playerHeight() const;

  constexpr void __cordl_internal_set_playerHeight(float_t value);

  constexpr bool& __cordl_internal_get_disableSFX();

  constexpr bool const& __cordl_internal_get_disableSFX() const;

  constexpr void __cordl_internal_set_disableSFX(bool value);

  constexpr bool& __cordl_internal_get_reduceDebris();

  constexpr bool const& __cordl_internal_get_reduceDebris() const;

  constexpr void __cordl_internal_set_reduceDebris(bool value);

  constexpr bool& __cordl_internal_get_advancedHud();

  constexpr bool const& __cordl_internal_get_advancedHud() const;

  constexpr void __cordl_internal_set_advancedHud(bool value);

  constexpr bool& __cordl_internal_get_noTextsAndHuds();

  constexpr bool const& __cordl_internal_get_noTextsAndHuds() const;

  constexpr void __cordl_internal_set_noTextsAndHuds(bool value);

  static inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings* New_ctor();

  /// @brief Method .ctor, addr 0x236ad30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__PlayerSpecificSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveDataV1_0_1__PlayerSpecificSettings(__PlayerSaveDataV1_0_1__PlayerSpecificSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__PlayerSpecificSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveDataV1_0_1__PlayerSpecificSettings(__PlayerSaveDataV1_0_1__PlayerSpecificSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveDataV1_0_1__PlayerSpecificSettings();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings, ___staticLights) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings, ___leftHanded) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings, ___swapColors) == 0x12, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings, ___playerHeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings, ___disableSFX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings, ___reduceDebris) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings, ___advancedHud) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings, ___noTextsAndHuds) == 0x1b, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerAllOverallStatsData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4613))
// CS Name: ::PlayerSaveDataV1_0_1::PlayerAllOverallStatsData*
class CORDL_TYPE __PlayerSaveDataV1_0_1__PlayerAllOverallStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field campaignOverallStatsData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_campaignOverallStatsData,
                      put = __cordl_internal_set_campaignOverallStatsData))::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* campaignOverallStatsData;

  /// @brief Field soloFreePlayOverallStatsData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_soloFreePlayOverallStatsData,
                      put = __cordl_internal_set_soloFreePlayOverallStatsData))::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* soloFreePlayOverallStatsData;

  /// @brief Field partyFreePlayOverallStatsData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_partyFreePlayOverallStatsData,
                      put = __cordl_internal_set_partyFreePlayOverallStatsData))::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* partyFreePlayOverallStatsData;

  constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*& __cordl_internal_get_campaignOverallStatsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*> const& __cordl_internal_get_campaignOverallStatsData() const;

  constexpr void __cordl_internal_set_campaignOverallStatsData(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* value);

  constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*& __cordl_internal_get_soloFreePlayOverallStatsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*> const& __cordl_internal_get_soloFreePlayOverallStatsData() const;

  constexpr void __cordl_internal_set_soloFreePlayOverallStatsData(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* value);

  constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*& __cordl_internal_get_partyFreePlayOverallStatsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*> const& __cordl_internal_get_partyFreePlayOverallStatsData() const;

  constexpr void __cordl_internal_set_partyFreePlayOverallStatsData(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* value);

  static inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData* New_ctor();

  /// @brief Method .ctor, addr 0x236ad38, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData* New_ctor(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* campaignOverallStatsData,
                                                                                               ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* soloFreePlayOverallStatsData,
                                                                                               ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* partyFreePlayOverallStatsData);

  /// @brief Method .ctor, addr 0x236ade4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* campaignOverallStatsData,
                    ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* soloFreePlayOverallStatsData,
                    ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* partyFreePlayOverallStatsData);

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveDataV1_0_1__PlayerAllOverallStatsData(__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveDataV1_0_1__PlayerAllOverallStatsData(__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveDataV1_0_1__PlayerAllOverallStatsData();

public:
  /// @brief Field campaignOverallStatsData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* ___campaignOverallStatsData;

  /// @brief Field soloFreePlayOverallStatsData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* ___soloFreePlayOverallStatsData;

  /// @brief Field partyFreePlayOverallStatsData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* ___partyFreePlayOverallStatsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData, ___campaignOverallStatsData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData, ___soloFreePlayOverallStatsData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData, ___partyFreePlayOverallStatsData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerOverallStatsData
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4614))
// CS Name: ::PlayerSaveDataV1_0_1::PlayerOverallStatsData*
class CORDL_TYPE __PlayerSaveDataV1_0_1__PlayerOverallStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field goodCutsCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_goodCutsCount, put = __cordl_internal_set_goodCutsCount)) int32_t goodCutsCount;

  /// @brief Field badCutsCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_badCutsCount, put = __cordl_internal_set_badCutsCount)) int32_t badCutsCount;

  /// @brief Field missedCutsCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_missedCutsCount, put = __cordl_internal_set_missedCutsCount)) int32_t missedCutsCount;

  /// @brief Field totalScore, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_totalScore, put = __cordl_internal_set_totalScore)) int64_t totalScore;

  /// @brief Field playedLevelsCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_playedLevelsCount, put = __cordl_internal_set_playedLevelsCount)) int32_t playedLevelsCount;

  /// @brief Field cleardLevelsCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_cleardLevelsCount, put = __cordl_internal_set_cleardLevelsCount)) int32_t cleardLevelsCount;

  /// @brief Field failedLevelsCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_failedLevelsCount, put = __cordl_internal_set_failedLevelsCount)) int32_t failedLevelsCount;

  /// @brief Field fullComboCount, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_fullComboCount, put = __cordl_internal_set_fullComboCount)) int32_t fullComboCount;

  /// @brief Field timePlayed, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_timePlayed, put = __cordl_internal_set_timePlayed)) float_t timePlayed;

  /// @brief Field handDistanceTravelled, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_handDistanceTravelled, put = __cordl_internal_set_handDistanceTravelled)) int32_t handDistanceTravelled;

  /// @brief Field cummulativeCutScoreWithoutMultiplier, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_cummulativeCutScoreWithoutMultiplier, put = __cordl_internal_set_cummulativeCutScoreWithoutMultiplier)) int64_t cummulativeCutScoreWithoutMultiplier;

  constexpr int32_t& __cordl_internal_get_goodCutsCount();

  constexpr int32_t const& __cordl_internal_get_goodCutsCount() const;

  constexpr void __cordl_internal_set_goodCutsCount(int32_t value);

  constexpr int32_t& __cordl_internal_get_badCutsCount();

  constexpr int32_t const& __cordl_internal_get_badCutsCount() const;

  constexpr void __cordl_internal_set_badCutsCount(int32_t value);

  constexpr int32_t& __cordl_internal_get_missedCutsCount();

  constexpr int32_t const& __cordl_internal_get_missedCutsCount() const;

  constexpr void __cordl_internal_set_missedCutsCount(int32_t value);

  constexpr int64_t& __cordl_internal_get_totalScore();

  constexpr int64_t const& __cordl_internal_get_totalScore() const;

  constexpr void __cordl_internal_set_totalScore(int64_t value);

  constexpr int32_t& __cordl_internal_get_playedLevelsCount();

  constexpr int32_t const& __cordl_internal_get_playedLevelsCount() const;

  constexpr void __cordl_internal_set_playedLevelsCount(int32_t value);

  constexpr int32_t& __cordl_internal_get_cleardLevelsCount();

  constexpr int32_t const& __cordl_internal_get_cleardLevelsCount() const;

  constexpr void __cordl_internal_set_cleardLevelsCount(int32_t value);

  constexpr int32_t& __cordl_internal_get_failedLevelsCount();

  constexpr int32_t const& __cordl_internal_get_failedLevelsCount() const;

  constexpr void __cordl_internal_set_failedLevelsCount(int32_t value);

  constexpr int32_t& __cordl_internal_get_fullComboCount();

  constexpr int32_t const& __cordl_internal_get_fullComboCount() const;

  constexpr void __cordl_internal_set_fullComboCount(int32_t value);

  constexpr float_t& __cordl_internal_get_timePlayed();

  constexpr float_t const& __cordl_internal_get_timePlayed() const;

  constexpr void __cordl_internal_set_timePlayed(float_t value);

  constexpr int32_t& __cordl_internal_get_handDistanceTravelled();

  constexpr int32_t const& __cordl_internal_get_handDistanceTravelled() const;

  constexpr void __cordl_internal_set_handDistanceTravelled(int32_t value);

  constexpr int64_t& __cordl_internal_get_cummulativeCutScoreWithoutMultiplier();

  constexpr int64_t const& __cordl_internal_get_cummulativeCutScoreWithoutMultiplier() const;

  constexpr void __cordl_internal_set_cummulativeCutScoreWithoutMultiplier(int64_t value);

  static inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* New_ctor();

  /// @brief Method .ctor, addr 0x236addc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* New_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore,
                                                                                            int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount,
                                                                                            float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier);

  /// @brief Method .ctor, addr 0x236ae20, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount, int32_t cleardLevelsCount, int32_t failedLevelsCount,
                    int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier);

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__PlayerOverallStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveDataV1_0_1__PlayerOverallStatsData(__PlayerSaveDataV1_0_1__PlayerOverallStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__PlayerOverallStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveDataV1_0_1__PlayerOverallStatsData(__PlayerSaveDataV1_0_1__PlayerOverallStatsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveDataV1_0_1__PlayerOverallStatsData();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData, ___goodCutsCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData, ___badCutsCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData, ___missedCutsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData, ___totalScore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData, ___playedLevelsCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData, ___cleardLevelsCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData, ___failedLevelsCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData, ___fullComboCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData, ___timePlayed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData, ___handDistanceTravelled) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData, ___cummulativeCutScoreWithoutMultiplier) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerLevelStatsData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14717)), TypeDefinitionIndex(TypeDefinitionIndex(15034))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4615))
// CS Name: ::PlayerSaveDataV1_0_1::PlayerLevelStatsData*
class CORDL_TYPE __PlayerSaveDataV1_0_1__PlayerLevelStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelId, put = __cordl_internal_set_levelId))::StringW levelId;

  /// @brief Field difficulty, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_difficulty, put = __cordl_internal_set_difficulty))::GlobalNamespace::BeatmapDifficulty difficulty;

  /// @brief Field highScore, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_highScore, put = __cordl_internal_set_highScore)) int32_t highScore;

  /// @brief Field maxCombo, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_maxCombo, put = __cordl_internal_set_maxCombo)) int32_t maxCombo;

  /// @brief Field fullCombo, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_fullCombo, put = __cordl_internal_set_fullCombo)) bool fullCombo;

  /// @brief Field maxRank, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_maxRank, put = __cordl_internal_set_maxRank))::GlobalNamespace::__RankModel__Rank maxRank;

  /// @brief Field validScore, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_validScore, put = __cordl_internal_set_validScore)) bool validScore;

  /// @brief Field playCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_playCount, put = __cordl_internal_set_playCount)) int32_t playCount;

  constexpr ::StringW& __cordl_internal_get_levelId();

  constexpr ::StringW const& __cordl_internal_get_levelId() const;

  constexpr void __cordl_internal_set_levelId(::StringW value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_difficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_difficulty() const;

  constexpr void __cordl_internal_set_difficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr int32_t& __cordl_internal_get_highScore();

  constexpr int32_t const& __cordl_internal_get_highScore() const;

  constexpr void __cordl_internal_set_highScore(int32_t value);

  constexpr int32_t& __cordl_internal_get_maxCombo();

  constexpr int32_t const& __cordl_internal_get_maxCombo() const;

  constexpr void __cordl_internal_set_maxCombo(int32_t value);

  constexpr bool& __cordl_internal_get_fullCombo();

  constexpr bool const& __cordl_internal_get_fullCombo() const;

  constexpr void __cordl_internal_set_fullCombo(bool value);

  constexpr ::GlobalNamespace::__RankModel__Rank& __cordl_internal_get_maxRank();

  constexpr ::GlobalNamespace::__RankModel__Rank const& __cordl_internal_get_maxRank() const;

  constexpr void __cordl_internal_set_maxRank(::GlobalNamespace::__RankModel__Rank value);

  constexpr bool& __cordl_internal_get_validScore();

  constexpr bool const& __cordl_internal_get_validScore() const;

  constexpr void __cordl_internal_set_validScore(bool value);

  constexpr int32_t& __cordl_internal_get_playCount();

  constexpr int32_t const& __cordl_internal_get_playCount() const;

  constexpr void __cordl_internal_set_playCount(int32_t value);

  static inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData* New_ctor();

  /// @brief Method .ctor, addr 0x236aed0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__PlayerLevelStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveDataV1_0_1__PlayerLevelStatsData(__PlayerSaveDataV1_0_1__PlayerLevelStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__PlayerLevelStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveDataV1_0_1__PlayerLevelStatsData(__PlayerSaveDataV1_0_1__PlayerLevelStatsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveDataV1_0_1__PlayerLevelStatsData();

public:
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
  ::GlobalNamespace::__RankModel__Rank ___maxRank;

  /// @brief Field validScore, offset: 0x2c, size: 0x1, def value: None
  bool ___validScore;

  /// @brief Field playCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___playCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData, ___levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData, ___difficulty) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData, ___highScore) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData, ___maxCombo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData, ___fullCombo) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData, ___maxRank) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData, ___validScore) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData, ___playCount) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerMissionStatsData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4616))
// CS Name: ::PlayerSaveDataV1_0_1::PlayerMissionStatsData*
class CORDL_TYPE __PlayerSaveDataV1_0_1__PlayerMissionStatsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field missionId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_missionId, put = __cordl_internal_set_missionId))::StringW missionId;

  /// @brief Field cleared, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_cleared, put = __cordl_internal_set_cleared)) bool cleared;

  constexpr ::StringW& __cordl_internal_get_missionId();

  constexpr ::StringW const& __cordl_internal_get_missionId() const;

  constexpr void __cordl_internal_set_missionId(::StringW value);

  constexpr bool& __cordl_internal_get_cleared();

  constexpr bool const& __cordl_internal_get_cleared() const;

  constexpr void __cordl_internal_set_cleared(bool value);

  static inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData* New_ctor();

  /// @brief Method .ctor, addr 0x236aed8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__PlayerMissionStatsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveDataV1_0_1__PlayerMissionStatsData(__PlayerSaveDataV1_0_1__PlayerMissionStatsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__PlayerMissionStatsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveDataV1_0_1__PlayerMissionStatsData(__PlayerSaveDataV1_0_1__PlayerMissionStatsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveDataV1_0_1__PlayerMissionStatsData();

public:
  /// @brief Field missionId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___missionId;

  /// @brief Field cleared, offset: 0x18, size: 0x1, def value: None
  bool ___cleared;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData, ___missionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData, ___cleared) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AchievementsData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4617))
// CS Name: ::PlayerSaveDataV1_0_1::AchievementsData*
class CORDL_TYPE __PlayerSaveDataV1_0_1__AchievementsData : public ::System::Object {
public:
  // Declarations
  /// @brief Field unlockedAchievements, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_unlockedAchievements, put = __cordl_internal_set_unlockedAchievements))::ArrayW<::StringW, ::Array<::StringW>*> unlockedAchievements;

  /// @brief Field unlockedAchievementsToUpload, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_unlockedAchievementsToUpload,
                      put = __cordl_internal_set_unlockedAchievementsToUpload))::ArrayW<::StringW, ::Array<::StringW>*> unlockedAchievementsToUpload;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_unlockedAchievements();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_unlockedAchievements() const;

  constexpr void __cordl_internal_set_unlockedAchievements(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_unlockedAchievementsToUpload();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_unlockedAchievementsToUpload() const;

  constexpr void __cordl_internal_set_unlockedAchievementsToUpload(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData* New_ctor();

  /// @brief Method .ctor, addr 0x236aee0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__AchievementsData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveDataV1_0_1__AchievementsData(__PlayerSaveDataV1_0_1__AchievementsData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__AchievementsData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveDataV1_0_1__AchievementsData(__PlayerSaveDataV1_0_1__AchievementsData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveDataV1_0_1__AchievementsData();

public:
  /// @brief Field unlockedAchievements, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___unlockedAchievements;

  /// @brief Field unlockedAchievementsToUpload, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___unlockedAchievementsToUpload;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData, ___unlockedAchievements) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData, ___unlockedAchievementsToUpload) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LocalPlayer
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4618))
// CS Name: ::PlayerSaveDataV1_0_1::LocalPlayer*
class CORDL_TYPE __PlayerSaveDataV1_0_1__LocalPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_playerId, put = __cordl_internal_set_playerId))::StringW playerId;

  /// @brief Field playerName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerName, put = __cordl_internal_set_playerName))::StringW playerName;

  /// @brief Field shouldShowTutorialPrompt, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldShowTutorialPrompt, put = __cordl_internal_set_shouldShowTutorialPrompt)) bool shouldShowTutorialPrompt;

  /// @brief Field gameplayModifiers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers))::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers* gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings,
                      put = __cordl_internal_set_playerSpecificSettings))::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings* playerSpecificSettings;

  /// @brief Field playerAllOverallStatsData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_playerAllOverallStatsData,
                      put = __cordl_internal_set_playerAllOverallStatsData))::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData* playerAllOverallStatsData;

  /// @brief Field levelsStatsData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_levelsStatsData,
                      put = __cordl_internal_set_levelsStatsData))::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>* levelsStatsData;

  /// @brief Field missionsStatsData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_missionsStatsData,
                      put = __cordl_internal_set_missionsStatsData))::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>* missionsStatsData;

  /// @brief Field showedMissionHelpIds, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_showedMissionHelpIds, put = __cordl_internal_set_showedMissionHelpIds))::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds;

  /// @brief Field achievementsData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_achievementsData, put = __cordl_internal_set_achievementsData))::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData* achievementsData;

  constexpr ::StringW& __cordl_internal_get_playerId();

  constexpr ::StringW const& __cordl_internal_get_playerId() const;

  constexpr void __cordl_internal_set_playerId(::StringW value);

  constexpr ::StringW& __cordl_internal_get_playerName();

  constexpr ::StringW const& __cordl_internal_get_playerName() const;

  constexpr void __cordl_internal_set_playerName(::StringW value);

  constexpr bool& __cordl_internal_get_shouldShowTutorialPrompt();

  constexpr bool const& __cordl_internal_get_shouldShowTutorialPrompt() const;

  constexpr void __cordl_internal_set_shouldShowTutorialPrompt(bool value);

  constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers*> const& __cordl_internal_get_gameplayModifiers() const;

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers* value);

  constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*> const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings* value);

  constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*& __cordl_internal_get_playerAllOverallStatsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*> const& __cordl_internal_get_playerAllOverallStatsData() const;

  constexpr void __cordl_internal_set_playerAllOverallStatsData(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>*& __cordl_internal_get_levelsStatsData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>*> const&
  __cordl_internal_get_levelsStatsData() const;

  constexpr void __cordl_internal_set_levelsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>*& __cordl_internal_get_missionsStatsData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>*> const&
  __cordl_internal_get_missionsStatsData() const;

  constexpr void __cordl_internal_set_missionsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_showedMissionHelpIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_showedMissionHelpIds() const;

  constexpr void __cordl_internal_set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData*& __cordl_internal_get_achievementsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData*> const& __cordl_internal_get_achievementsData() const;

  constexpr void __cordl_internal_set_achievementsData(::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData* value);

  static inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer* New_ctor();

  /// @brief Method .ctor, addr 0x236aee8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__LocalPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveDataV1_0_1__LocalPlayer(__PlayerSaveDataV1_0_1__LocalPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__LocalPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveDataV1_0_1__LocalPlayer(__PlayerSaveDataV1_0_1__LocalPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveDataV1_0_1__LocalPlayer();

public:
  /// @brief Field playerId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___playerId;

  /// @brief Field playerName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___playerName;

  /// @brief Field shouldShowTutorialPrompt, offset: 0x20, size: 0x1, def value: None
  bool ___shouldShowTutorialPrompt;

  /// @brief Field gameplayModifiers, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers* ___gameplayModifiers;

  /// @brief Field playerSpecificSettings, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings* ___playerSpecificSettings;

  /// @brief Field playerAllOverallStatsData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData* ___playerAllOverallStatsData;

  /// @brief Field levelsStatsData, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*>* ___levelsStatsData;

  /// @brief Field missionsStatsData, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*>* ___missionsStatsData;

  /// @brief Field showedMissionHelpIds, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___showedMissionHelpIds;

  /// @brief Field achievementsData, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData* ___achievementsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer, ___playerId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer, ___playerName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer, ___shouldShowTutorialPrompt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer, ___gameplayModifiers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer, ___playerSpecificSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer, ___playerAllOverallStatsData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer, ___levelsStatsData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer, ___missionsStatsData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer, ___showedMissionHelpIds) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer, ___achievementsData) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GuestPlayer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4619))
// CS Name: ::PlayerSaveDataV1_0_1::GuestPlayer*
class CORDL_TYPE __PlayerSaveDataV1_0_1__GuestPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field playerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_playerName, put = __cordl_internal_set_playerName))::StringW playerName;

  /// @brief Field playerSpecificSettings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_playerSpecificSettings,
                      put = __cordl_internal_set_playerSpecificSettings))::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings* playerSpecificSettings;

  constexpr ::StringW& __cordl_internal_get_playerName();

  constexpr ::StringW const& __cordl_internal_get_playerName() const;

  constexpr void __cordl_internal_set_playerName(::StringW value);

  constexpr ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*& __cordl_internal_get_playerSpecificSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*> const& __cordl_internal_get_playerSpecificSettings() const;

  constexpr void __cordl_internal_set_playerSpecificSettings(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings* value);

  static inline ::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer* New_ctor();

  /// @brief Method .ctor, addr 0x236aef8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__GuestPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerSaveDataV1_0_1__GuestPlayer(__PlayerSaveDataV1_0_1__GuestPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerSaveDataV1_0_1__GuestPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerSaveDataV1_0_1__GuestPlayer(__PlayerSaveDataV1_0_1__GuestPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerSaveDataV1_0_1__GuestPlayer();

public:
  /// @brief Field playerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___playerName;

  /// @brief Field playerSpecificSettings, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings* ___playerSpecificSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer, ___playerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer, ___playerSpecificSettings) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerSaveDataV1_0_1
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14717))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4620))
// CS Name: ::PlayerSaveDataV1_0_1*
class CORDL_TYPE PlayerSaveDataV1_0_1 : public ::System::Object {
public:
  // Declarations
  using GuestPlayer = ::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer;

  using LocalPlayer = ::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer;

  using AchievementsData = ::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData;

  using PlayerMissionStatsData = ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData;

  using PlayerLevelStatsData = ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData;

  using PlayerOverallStatsData = ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData;

  using PlayerAllOverallStatsData = ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData;

  using PlayerSpecificSettings = ::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings;

  using GameplayModifiers = ::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::StringW version;

  /// @brief Field localPlayers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localPlayers,
                      put = __cordl_internal_set_localPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>* localPlayers;

  /// @brief Field guestPlayers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_guestPlayers,
                      put = __cordl_internal_set_guestPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>* guestPlayers;

  /// @brief Field lastSelectedBeatmapDifficulty, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_lastSelectedBeatmapDifficulty,
                      put = __cordl_internal_set_lastSelectedBeatmapDifficulty))::GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty;

  constexpr ::StringW& __cordl_internal_get_version();

  constexpr ::StringW const& __cordl_internal_get_version() const;

  constexpr void __cordl_internal_set_version(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>*& __cordl_internal_get_localPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>*> const& __cordl_internal_get_localPlayers() const;

  constexpr void __cordl_internal_set_localPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>*& __cordl_internal_get_guestPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>*> const& __cordl_internal_get_guestPlayers() const;

  constexpr void __cordl_internal_set_guestPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_lastSelectedBeatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_lastSelectedBeatmapDifficulty() const;

  constexpr void __cordl_internal_set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  static inline ::GlobalNamespace::PlayerSaveDataV1_0_1* New_ctor();

  /// @brief Method .ctor, addr 0x236ad18, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveDataV1_0_1(PlayerSaveDataV1_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataV1_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveDataV1_0_1(PlayerSaveDataV1_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveDataV1_0_1();

public:
  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field localPlayers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*>* ___localPlayers;

  /// @brief Field guestPlayers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*>* ___guestPlayers;

  /// @brief Field lastSelectedBeatmapDifficulty, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___lastSelectedBeatmapDifficulty;

  /// @brief Field kDefaulLastSelectedBeatmapDifficulty value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::BeatmapDifficulty const kDefaulLastSelectedBeatmapDifficulty;

  /// @brief Field kCurrentVersion offset 0xffffffff size 0x8
  static constexpr ::ConstString kCurrentVersion{ u"" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveDataV1_0_1, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1, ___localPlayers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1, ___guestPlayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerSaveDataV1_0_1, ___lastSelectedBeatmapDifficulty) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnabledObstacleType, "", "PlayerSaveDataV1_0_1/GameplayModifiers/EnabledObstacleType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__EnergyType, "", "PlayerSaveDataV1_0_1/GameplayModifiers/EnergyType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers__SongSpeed, "", "PlayerSaveDataV1_0_1/GameplayModifiers/SongSpeed");
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1*, "", "PlayerSaveDataV1_0_1");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveDataV1_0_1__AchievementsData*, "", "PlayerSaveDataV1_0_1/AchievementsData");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveDataV1_0_1__GameplayModifiers*, "", "PlayerSaveDataV1_0_1/GameplayModifiers");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveDataV1_0_1__GuestPlayer*, "", "PlayerSaveDataV1_0_1/GuestPlayer");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveDataV1_0_1__LocalPlayer*, "", "PlayerSaveDataV1_0_1/LocalPlayer");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData*, "", "PlayerSaveDataV1_0_1/PlayerAllOverallStatsData");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerLevelStatsData*, "", "PlayerSaveDataV1_0_1/PlayerLevelStatsData");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerMissionStatsData*, "", "PlayerSaveDataV1_0_1/PlayerMissionStatsData");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData*, "", "PlayerSaveDataV1_0_1/PlayerOverallStatsData");
NEED_NO_BOX(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerSpecificSettings*, "", "PlayerSaveDataV1_0_1/PlayerSpecificSettings");
