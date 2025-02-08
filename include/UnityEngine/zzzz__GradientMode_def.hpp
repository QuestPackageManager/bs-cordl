#pragma once
// IWYU pragma private; include "UnityEngine/GradientMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GradientMode)
// Forward declare root types
namespace UnityEngine {
struct GradientMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::GradientMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.GradientMode
struct CORDL_TYPE GradientMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GradientMode_Unwrapped
  enum struct __GradientMode_Unwrapped : int32_t {
    __E_Blend = static_cast<int32_t>(0x0),
    __E_Fixed = static_cast<int32_t>(0x1),
    __E_PerceptualBlend = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GradientMode_Unwrapped() const noexcept {
    return static_cast<__GradientMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GradientMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GradientMode(int32_t value__) noexcept;

  /// @brief Field Blend value: I32(0)
  static ::UnityEngine::GradientMode const Blend;

  /// @brief Field Fixed value: I32(1)
  static ::UnityEngine::GradientMode const Fixed;

  /// @brief Field PerceptualBlend value: I32(2)
  static ::UnityEngine::GradientMode const PerceptualBlend;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10817 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GradientMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::GradientMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GradientMode, "UnityEngine", "GradientMode");
