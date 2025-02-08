#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemGradientMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemGradientMode)
// Forward declare root types
namespace UnityEngine {
struct ParticleSystemGradientMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemGradientMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemGradientMode
struct CORDL_TYPE ParticleSystemGradientMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParticleSystemGradientMode_Unwrapped
  enum struct __ParticleSystemGradientMode_Unwrapped : int32_t {
    __E_Color = static_cast<int32_t>(0x0),
    __E_Gradient = static_cast<int32_t>(0x1),
    __E_TwoColors = static_cast<int32_t>(0x2),
    __E_TwoGradients = static_cast<int32_t>(0x3),
    __E_RandomColor = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParticleSystemGradientMode_Unwrapped() const noexcept {
    return static_cast<__ParticleSystemGradientMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemGradientMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParticleSystemGradientMode(int32_t value__) noexcept;

  /// @brief Field Color value: I32(0)
  static ::UnityEngine::ParticleSystemGradientMode const Color;

  /// @brief Field Gradient value: I32(1)
  static ::UnityEngine::ParticleSystemGradientMode const Gradient;

  /// @brief Field RandomColor value: I32(4)
  static ::UnityEngine::ParticleSystemGradientMode const RandomColor;

  /// @brief Field TwoColors value: I32(2)
  static ::UnityEngine::ParticleSystemGradientMode const TwoColors;

  /// @brief Field TwoGradients value: I32(3)
  static ::UnityEngine::ParticleSystemGradientMode const TwoGradients;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17288 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemGradientMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ParticleSystemGradientMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystemGradientMode, "UnityEngine", "ParticleSystemGradientMode");
