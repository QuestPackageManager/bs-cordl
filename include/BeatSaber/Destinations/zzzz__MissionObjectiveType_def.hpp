#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/MissionObjectiveType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionObjectiveType)
// Forward declare root types
namespace BeatSaber::Destinations {
struct MissionObjectiveType;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Destinations::MissionObjectiveType);
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::MissionObjectiveType, "BeatSaber.Destinations", "MissionObjectiveType");
// Dependencies
namespace BeatSaber::Destinations {
// Is value type: true
// CS Name: BeatSaber.Destinations.MissionObjectiveType
struct CORDL_TYPE MissionObjectiveType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MissionObjectiveType_Unwrapped
  enum struct __MissionObjectiveType_Unwrapped : int32_t {
    __E_BadCuts = static_cast<int32_t>(0x0),
    __E_Combo = static_cast<int32_t>(0x1),
    __E_FullCombo = static_cast<int32_t>(0x2),
    __E_HandsMovement = static_cast<int32_t>(0x3),
    __E_Miss = static_cast<int32_t>(0x4),
    __E_Score = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MissionObjectiveType_Unwrapped() const noexcept {
    return static_cast<__MissionObjectiveType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionObjectiveType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MissionObjectiveType(int32_t value__) noexcept;

  /// @brief Field BadCuts value: I32(0)
  static ::BeatSaber::Destinations::MissionObjectiveType const BadCuts;

  /// @brief Field Combo value: I32(1)
  static ::BeatSaber::Destinations::MissionObjectiveType const Combo;

  /// @brief Field FullCombo value: I32(2)
  static ::BeatSaber::Destinations::MissionObjectiveType const FullCombo;

  /// @brief Field HandsMovement value: I32(3)
  static ::BeatSaber::Destinations::MissionObjectiveType const HandsMovement;

  /// @brief Field Miss value: I32(4)
  static ::BeatSaber::Destinations::MissionObjectiveType const Miss;

  /// @brief Field Score value: I32(5)
  static ::BeatSaber::Destinations::MissionObjectiveType const Score;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23057 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::MissionObjectiveType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Destinations::MissionObjectiveType) == 0x4, "Size mismatch!");

} // namespace BeatSaber::Destinations
