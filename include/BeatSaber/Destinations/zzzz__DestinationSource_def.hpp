#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/DestinationSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DestinationSource)
// Forward declare root types
namespace BeatSaber::Destinations {
struct DestinationSource;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Destinations::DestinationSource);
// Dependencies
namespace BeatSaber::Destinations {
// Is value type: true
// CS Name: BeatSaber.Destinations.DestinationSource
struct CORDL_TYPE DestinationSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DestinationSource_Unwrapped
  enum struct __DestinationSource_Unwrapped : int32_t {
    __E_GameInitialization = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DestinationSource_Unwrapped() const noexcept {
    return static_cast<__DestinationSource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DestinationSource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DestinationSource(int32_t value__) noexcept;

  /// @brief Field GameInitialization value: I32(0)
  static ::BeatSaber::Destinations::DestinationSource const GameInitialization;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22740 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Destinations::DestinationSource, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Destinations::DestinationSource, 0x4>, "Size mismatch!");

} // namespace BeatSaber::Destinations
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::DestinationSource, "BeatSaber.Destinations", "DestinationSource");
