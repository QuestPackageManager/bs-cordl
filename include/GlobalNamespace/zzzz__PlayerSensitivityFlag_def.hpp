#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSensitivityFlag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerSensitivityFlag)
// Forward declare root types
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerSensitivityFlag);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerSensitivityFlag
struct CORDL_TYPE PlayerSensitivityFlag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlayerSensitivityFlag_Unwrapped
  enum struct __PlayerSensitivityFlag_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Safe = static_cast<int32_t>(0x1),
    __E_Themes = static_cast<int32_t>(0x2),
    __E_Explicit = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlayerSensitivityFlag_Unwrapped() const noexcept {
    return static_cast<__PlayerSensitivityFlag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSensitivityFlag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlayerSensitivityFlag(int32_t value__) noexcept;

  /// @brief Field Explicit value: I32(3)
  static ::GlobalNamespace::PlayerSensitivityFlag const Explicit;

  /// @brief Field Safe value: I32(1)
  static ::GlobalNamespace::PlayerSensitivityFlag const Safe;

  /// @brief Field Themes value: I32(2)
  static ::GlobalNamespace::PlayerSensitivityFlag const Themes;

  /// @brief Field Unknown value: I32(0)
  static ::GlobalNamespace::PlayerSensitivityFlag const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13238 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerSensitivityFlag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSensitivityFlag, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSensitivityFlag, "", "PlayerSensitivityFlag");
