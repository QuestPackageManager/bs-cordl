#pragma once
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
// Type: ::GameplayModifierMask
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameplayModifierMask
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
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayModifierMask_Unwrapped() const noexcept {
    return static_cast<__GameplayModifierMask_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator uint16_t() const noexcept {
    return static_cast<__GameplayModifierMask_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifierMask();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr GameplayModifierMask(uint16_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  /// @brief Field All value: static_cast<uint16_t>(0xffffu)
  static ::GlobalNamespace::GameplayModifierMask const All;

  /// @brief Field BatteryEnergy value: static_cast<uint16_t>(0x1u)
  static ::GlobalNamespace::GameplayModifierMask const BatteryEnergy;

  /// @brief Field DisappearingArrows value: static_cast<uint16_t>(0x80u)
  static ::GlobalNamespace::GameplayModifierMask const DisappearingArrows;

  /// @brief Field FastNotes value: static_cast<uint16_t>(0x20u)
  static ::GlobalNamespace::GameplayModifierMask const FastNotes;

  /// @brief Field FasterSong value: static_cast<uint16_t>(0x100u)
  static ::GlobalNamespace::GameplayModifierMask const FasterSong;

  /// @brief Field GhostNotes value: static_cast<uint16_t>(0x800u)
  static ::GlobalNamespace::GameplayModifierMask const GhostNotes;

  /// @brief Field InstaFail value: static_cast<uint16_t>(0x4u)
  static ::GlobalNamespace::GameplayModifierMask const InstaFail;

  /// @brief Field NoArrows value: static_cast<uint16_t>(0x400u)
  static ::GlobalNamespace::GameplayModifierMask const NoArrows;

  /// @brief Field NoBombs value: static_cast<uint16_t>(0x10u)
  static ::GlobalNamespace::GameplayModifierMask const NoBombs;

  /// @brief Field NoFail value: static_cast<uint16_t>(0x2u)
  static ::GlobalNamespace::GameplayModifierMask const NoFail;

  /// @brief Field NoObstacles value: static_cast<uint16_t>(0x8u)
  static ::GlobalNamespace::GameplayModifierMask const NoObstacles;

  /// @brief Field None value: static_cast<uint16_t>(0x0u)
  static ::GlobalNamespace::GameplayModifierMask const None;

  /// @brief Field ProMode value: static_cast<uint16_t>(0x2000u)
  static ::GlobalNamespace::GameplayModifierMask const ProMode;

  /// @brief Field SlowerSong value: static_cast<uint16_t>(0x200u)
  static ::GlobalNamespace::GameplayModifierMask const SlowerSong;

  /// @brief Field SmallCubes value: static_cast<uint16_t>(0x8000u)
  static ::GlobalNamespace::GameplayModifierMask const SmallCubes;

  /// @brief Field StrictAngles value: static_cast<uint16_t>(0x40u)
  static ::GlobalNamespace::GameplayModifierMask const StrictAngles;

  /// @brief Field SuperFastSong value: static_cast<uint16_t>(0x1000u)
  static ::GlobalNamespace::GameplayModifierMask const SuperFastSong;

  /// @brief Field ZenMode value: static_cast<uint16_t>(0x4000u)
  static ::GlobalNamespace::GameplayModifierMask const ZenMode;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifierMask, 0x2>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierMask, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierMask, "", "GameplayModifierMask");
