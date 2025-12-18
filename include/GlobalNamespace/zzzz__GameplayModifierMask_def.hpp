#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifierMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayModifierMask)
// Forward declare root types
namespace GlobalNamespace {
struct GameplayModifierMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameplayModifierMask);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameplayModifierMask
struct CORDL_TYPE GameplayModifierMask {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __GameplayModifierMask_Unwrapped
  enum struct __GameplayModifierMask_Unwrapped : uint16_t {
    __E_None = static_cast<uint16_t>(0x0u),
    __E_BatteryEnergy = static_cast<uint16_t>(0x1u),
    __E_NoFail = static_cast<uint16_t>(0x2u),
    __E_InstaFail = static_cast<uint16_t>(0x4u),
    __E_NoObstacles = static_cast<uint16_t>(0x8u),
    __E_NoBombs = static_cast<uint16_t>(0x10u),
    __E_FastNotes = static_cast<uint16_t>(0x20u),
    __E_StrictAngles = static_cast<uint16_t>(0x40u),
    __E_DisappearingArrows = static_cast<uint16_t>(0x80u),
    __E_FasterSong = static_cast<uint16_t>(0x100u),
    __E_SlowerSong = static_cast<uint16_t>(0x200u),
    __E_NoArrows = static_cast<uint16_t>(0x400u),
    __E_GhostNotes = static_cast<uint16_t>(0x800u),
    __E_SuperFastSong = static_cast<uint16_t>(0x1000u),
    __E_ProMode = static_cast<uint16_t>(0x2000u),
    __E_ZenMode = static_cast<uint16_t>(0x4000u),
    __E_SmallCubes = static_cast<uint16_t>(0x8000u),
    __E_All = static_cast<uint16_t>(0xffffu),
    __E_MakingGameEasier = static_cast<uint16_t>(0x4618u),
    __E_MakingGameHarder = static_cast<uint16_t>(0xb9e0u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayModifierMask_Unwrapped() const noexcept {
    return static_cast<__GameplayModifierMask_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifierMask();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr GameplayModifierMask(uint16_t value__) noexcept;

  /// @brief Field All value: U16(65535)
  static ::GlobalNamespace::GameplayModifierMask const All;

  /// @brief Field BatteryEnergy value: U16(1)
  static ::GlobalNamespace::GameplayModifierMask const BatteryEnergy;

  /// @brief Field DisappearingArrows value: U16(128)
  static ::GlobalNamespace::GameplayModifierMask const DisappearingArrows;

  /// @brief Field FastNotes value: U16(32)
  static ::GlobalNamespace::GameplayModifierMask const FastNotes;

  /// @brief Field FasterSong value: U16(256)
  static ::GlobalNamespace::GameplayModifierMask const FasterSong;

  /// @brief Field GhostNotes value: U16(2048)
  static ::GlobalNamespace::GameplayModifierMask const GhostNotes;

  /// @brief Field InstaFail value: U16(4)
  static ::GlobalNamespace::GameplayModifierMask const InstaFail;

  /// @brief Field MakingGameEasier value: U16(17944)
  static ::GlobalNamespace::GameplayModifierMask const MakingGameEasier;

  /// @brief Field MakingGameHarder value: U16(47584)
  static ::GlobalNamespace::GameplayModifierMask const MakingGameHarder;

  /// @brief Field NoArrows value: U16(1024)
  static ::GlobalNamespace::GameplayModifierMask const NoArrows;

  /// @brief Field NoBombs value: U16(16)
  static ::GlobalNamespace::GameplayModifierMask const NoBombs;

  /// @brief Field NoFail value: U16(2)
  static ::GlobalNamespace::GameplayModifierMask const NoFail;

  /// @brief Field NoObstacles value: U16(8)
  static ::GlobalNamespace::GameplayModifierMask const NoObstacles;

  /// @brief Field None value: U16(0)
  static ::GlobalNamespace::GameplayModifierMask const None;

  /// @brief Field ProMode value: U16(8192)
  static ::GlobalNamespace::GameplayModifierMask const ProMode;

  /// @brief Field SlowerSong value: U16(512)
  static ::GlobalNamespace::GameplayModifierMask const SlowerSong;

  /// @brief Field SmallCubes value: U16(32768)
  static ::GlobalNamespace::GameplayModifierMask const SmallCubes;

  /// @brief Field StrictAngles value: U16(64)
  static ::GlobalNamespace::GameplayModifierMask const StrictAngles;

  /// @brief Field SuperFastSong value: U16(4096)
  static ::GlobalNamespace::GameplayModifierMask const SuperFastSong;

  /// @brief Field ZenMode value: U16(16384)
  static ::GlobalNamespace::GameplayModifierMask const ZenMode;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20841 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifierMask, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifierMask, 0x2>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierMask, "", "GameplayModifierMask");
