#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayServerMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayServerMode)
// Forward declare root types
namespace GlobalNamespace {
struct GameplayServerMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameplayServerMode);
// Type: ::GameplayServerMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameplayServerMode
struct CORDL_TYPE GameplayServerMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GameplayServerMode_Unwrapped
  enum struct __GameplayServerMode_Unwrapped : int32_t {
    __E_Countdown = static_cast<int32_t>(0x0),
    __E_Managed = static_cast<int32_t>(0x1),
    __E_QuickStartOneSong = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GameplayServerMode_Unwrapped() const noexcept {
    return static_cast<__GameplayServerMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayServerMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GameplayServerMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Countdown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::GameplayServerMode const Countdown;

  /// @brief Field Managed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::GameplayServerMode const Managed;

  /// @brief Field QuickStartOneSong value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::GameplayServerMode const QuickStartOneSong;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14727 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayServerMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayServerMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayServerMode, "", "GameplayServerMode");
