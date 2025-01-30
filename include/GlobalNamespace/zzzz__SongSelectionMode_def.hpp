#pragma once
// IWYU pragma private; include "GlobalNamespace/SongSelectionMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SongSelectionMode)
// Forward declare root types
namespace GlobalNamespace {
struct SongSelectionMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SongSelectionMode);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SongSelectionMode
struct CORDL_TYPE SongSelectionMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SongSelectionMode_Unwrapped
  enum struct __SongSelectionMode_Unwrapped : int32_t {
    __E_Vote = static_cast<int32_t>(0x0),
    __E_Random = static_cast<int32_t>(0x1),
    __E_OwnerPicks = static_cast<int32_t>(0x2),
    __E_RandomPlayerPicks = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SongSelectionMode_Unwrapped() const noexcept {
    return static_cast<__SongSelectionMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SongSelectionMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SongSelectionMode(int32_t value__) noexcept;

  /// @brief Field OwnerPicks value: I32(2)
  static ::GlobalNamespace::SongSelectionMode const OwnerPicks;

  /// @brief Field Random value: I32(1)
  static ::GlobalNamespace::SongSelectionMode const Random;

  /// @brief Field RandomPlayerPicks value: I32(3)
  static ::GlobalNamespace::SongSelectionMode const RandomPlayerPicks;

  /// @brief Field Vote value: I32(0)
  static ::GlobalNamespace::SongSelectionMode const Vote;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14968 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongSelectionMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongSelectionMode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongSelectionMode, "", "SongSelectionMode");
