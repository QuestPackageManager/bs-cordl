#pragma once
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
// Type: ::GameplayServerControlSettings
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameplayServerControlSettings
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
  constexpr operator int32_t() const noexcept {
    return static_cast<__GameplayServerControlSettings_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayServerControlSettings();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameplayServerControlSettings(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::GameplayServerControlSettings const All;

  /// @brief Field AllowModifierSelection value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::GameplayServerControlSettings const AllowModifierSelection;

  /// @brief Field AllowSpectate value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::GameplayServerControlSettings const AllowSpectate;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::GameplayServerControlSettings const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayServerControlSettings, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerControlSettings, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayServerControlSettings, "", "GameplayServerControlSettings");
