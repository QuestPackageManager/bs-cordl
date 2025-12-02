#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/DestinationTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DestinationTarget)
// Forward declare root types
namespace BeatSaber::Destinations {
struct DestinationTarget;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Destinations::DestinationTarget);
// Dependencies
namespace BeatSaber::Destinations {
// Is value type: true
// CS Name: BeatSaber.Destinations.DestinationTarget
struct CORDL_TYPE DestinationTarget {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DestinationTarget_Unwrapped
  enum struct __DestinationTarget_Unwrapped : int32_t {
    __E_MainMenu = static_cast<int32_t>(0x1),
    __E_StartupError = static_cast<int32_t>(0x3),
    __E_StandardLevel = static_cast<int32_t>(0x4),
    __E_MultiplayerLevel = static_cast<int32_t>(0x5),
    __E_MissionLevel = static_cast<int32_t>(0x6),
    __E_Tutorial = static_cast<int32_t>(0x7),
    __E_Credits = static_cast<int32_t>(0x8),
    __E_RecordingTool = static_cast<int32_t>(0x9),
    __E_LaunchRecordingTool = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DestinationTarget_Unwrapped() const noexcept {
    return static_cast<__DestinationTarget_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DestinationTarget();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DestinationTarget(int32_t value__) noexcept;

  /// @brief Field Credits value: I32(8)
  static ::BeatSaber::Destinations::DestinationTarget const Credits;

  /// @brief Field LaunchRecordingTool value: I32(10)
  static ::BeatSaber::Destinations::DestinationTarget const LaunchRecordingTool;

  /// @brief Field MainMenu value: I32(1)
  static ::BeatSaber::Destinations::DestinationTarget const MainMenu;

  /// @brief Field MissionLevel value: I32(6)
  static ::BeatSaber::Destinations::DestinationTarget const MissionLevel;

  /// @brief Field MultiplayerLevel value: I32(5)
  static ::BeatSaber::Destinations::DestinationTarget const MultiplayerLevel;

  /// @brief Field RecordingTool value: I32(9)
  static ::BeatSaber::Destinations::DestinationTarget const RecordingTool;

  /// @brief Field StandardLevel value: I32(4)
  static ::BeatSaber::Destinations::DestinationTarget const StandardLevel;

  /// @brief Field StartupError value: I32(3)
  static ::BeatSaber::Destinations::DestinationTarget const StartupError;

  /// @brief Field Tutorial value: I32(7)
  static ::BeatSaber::Destinations::DestinationTarget const Tutorial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22649 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::DestinationTarget, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::DestinationTarget, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Destinations
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::DestinationTarget, "BeatSaber.Destinations", "DestinationTarget");
