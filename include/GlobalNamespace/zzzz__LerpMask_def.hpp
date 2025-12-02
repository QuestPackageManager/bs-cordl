#pragma once
// IWYU pragma private; include "GlobalNamespace/LerpMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LerpMask)
// Forward declare root types
namespace GlobalNamespace {
struct LerpMask;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LerpMask);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LerpMask
struct CORDL_TYPE LerpMask {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LerpMask_Unwrapped
  enum struct __LerpMask_Unwrapped : int32_t {
    __E_Color = static_cast<int32_t>(0x1),
    __E_Color0 = static_cast<int32_t>(0x10),
    __E_Color1 = static_cast<int32_t>(0x100),
    __E_GlobalLightTintIntensity = static_cast<int32_t>(0x1000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LerpMask_Unwrapped() const noexcept {
    return static_cast<__LerpMask_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LerpMask();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LerpMask(int32_t value__) noexcept;

  /// @brief Field Color value: I32(1)
  static ::GlobalNamespace::LerpMask const Color;

  /// @brief Field Color0 value: I32(16)
  static ::GlobalNamespace::LerpMask const Color0;

  /// @brief Field Color1 value: I32(256)
  static ::GlobalNamespace::LerpMask const Color1;

  /// @brief Field GlobalLightTintIntensity value: I32(4096)
  static ::GlobalNamespace::LerpMask const GlobalLightTintIntensity;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22747 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LerpMask, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LerpMask, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LerpMask, "", "LerpMask");
