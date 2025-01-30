#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ColorWriteMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorWriteMask)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ColorWriteMask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ColorWriteMask);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ColorWriteMask
struct CORDL_TYPE ColorWriteMask {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ColorWriteMask_Unwrapped
  enum struct __ColorWriteMask_Unwrapped : int32_t {
    __E_Alpha = static_cast<int32_t>(0x1),
    __E_Blue = static_cast<int32_t>(0x2),
    __E_Green = static_cast<int32_t>(0x4),
    __E_Red = static_cast<int32_t>(0x8),
    __E_All = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ColorWriteMask_Unwrapped() const noexcept {
    return static_cast<__ColorWriteMask_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorWriteMask();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColorWriteMask(int32_t value__) noexcept;

  /// @brief Field All value: I32(15)
  static ::UnityEngine::Rendering::ColorWriteMask const All;

  /// @brief Field Alpha value: I32(1)
  static ::UnityEngine::Rendering::ColorWriteMask const Alpha;

  /// @brief Field Blue value: I32(2)
  static ::UnityEngine::Rendering::ColorWriteMask const Blue;

  /// @brief Field Green value: I32(4)
  static ::UnityEngine::Rendering::ColorWriteMask const Green;

  /// @brief Field Red value: I32(8)
  static ::UnityEngine::Rendering::ColorWriteMask const Red;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11186 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ColorWriteMask, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ColorWriteMask, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ColorWriteMask, "UnityEngine.Rendering", "ColorWriteMask");
