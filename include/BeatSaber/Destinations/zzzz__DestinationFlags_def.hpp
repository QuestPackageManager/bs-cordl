#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/DestinationFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DestinationFlags)
// Forward declare root types
namespace BeatSaber::Destinations {
struct DestinationFlags;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Destinations::DestinationFlags);
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::DestinationFlags, "BeatSaber.Destinations", "DestinationFlags");
// Dependencies
namespace BeatSaber::Destinations {
// Is value type: true
// CS Name: BeatSaber.Destinations.DestinationFlags
struct CORDL_TYPE DestinationFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DestinationFlags_Unwrapped
  enum struct __DestinationFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LoadMenu = static_cast<int32_t>(0x1),
    __E_RequiresHealthWarning = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DestinationFlags_Unwrapped() const noexcept {
    return static_cast<__DestinationFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DestinationFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DestinationFlags(int32_t value__) noexcept;

  /// @brief Field LoadMenu value: I32(1)
  static ::BeatSaber::Destinations::DestinationFlags const LoadMenu;

  /// @brief Field None value: I32(0)
  static ::BeatSaber::Destinations::DestinationFlags const None;

  /// @brief Field RequiresHealthWarning value: I32(2)
  static ::BeatSaber::Destinations::DestinationFlags const RequiresHealthWarning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23062 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::DestinationFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::Destinations::DestinationFlags) == 0x4, "Size mismatch!");

} // namespace BeatSaber::Destinations
