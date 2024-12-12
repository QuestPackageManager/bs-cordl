#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayServerControlSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayServerControlSettings)
// Forward declare root types
namespace GlobalNamespace {
struct GameplayServerControlSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameplayServerControlSettings);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameplayServerControlSettings
struct CORDL_TYPE GameplayServerControlSettings {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameplayServerControlSettings_Unwrapped
  enum struct __GameplayServerControlSettings_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_AllowModifierSelection = static_cast<int32_t>(0x1),
    __E_AllowSpectate = static_cast<int32_t>(0x2),
    __E_All = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayServerControlSettings_Unwrapped() const noexcept {
    return static_cast<__GameplayServerControlSettings_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayServerControlSettings();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameplayServerControlSettings(int32_t value__) noexcept;

  /// @brief Field All value: I32(3)
  static ::GlobalNamespace::GameplayServerControlSettings const All;

  /// @brief Field AllowModifierSelection value: I32(1)
  static ::GlobalNamespace::GameplayServerControlSettings const AllowModifierSelection;

  /// @brief Field AllowSpectate value: I32(2)
  static ::GlobalNamespace::GameplayServerControlSettings const AllowSpectate;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::GameplayServerControlSettings const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14762 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayServerControlSettings, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayServerControlSettings, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayServerControlSettings, "", "GameplayServerControlSettings");
