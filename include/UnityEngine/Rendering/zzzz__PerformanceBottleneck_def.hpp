#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PerformanceBottleneck.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceBottleneck)
// Forward declare root types
namespace UnityEngine::Rendering {
struct PerformanceBottleneck;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PerformanceBottleneck);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.PerformanceBottleneck
struct CORDL_TYPE PerformanceBottleneck {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PerformanceBottleneck_Unwrapped
  enum struct __PerformanceBottleneck_Unwrapped : int32_t {
    __E_Indeterminate = static_cast<int32_t>(0x0),
    __E_PresentLimited = static_cast<int32_t>(0x1),
    __E_CPU = static_cast<int32_t>(0x2),
    __E_GPU = static_cast<int32_t>(0x3),
    __E_Balanced = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PerformanceBottleneck_Unwrapped() const noexcept {
    return static_cast<__PerformanceBottleneck_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceBottleneck();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PerformanceBottleneck(int32_t value__) noexcept;

  /// @brief Field Balanced value: I32(4)
  static ::UnityEngine::Rendering::PerformanceBottleneck const Balanced;

  /// @brief Field CPU value: I32(2)
  static ::UnityEngine::Rendering::PerformanceBottleneck const CPU;

  /// @brief Field GPU value: I32(3)
  static ::UnityEngine::Rendering::PerformanceBottleneck const GPU;

  /// @brief Field Indeterminate value: I32(0)
  static ::UnityEngine::Rendering::PerformanceBottleneck const Indeterminate;

  /// @brief Field PresentLimited value: I32(1)
  static ::UnityEngine::Rendering::PerformanceBottleneck const PresentLimited;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12011 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PerformanceBottleneck, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PerformanceBottleneck, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PerformanceBottleneck, "UnityEngine.Rendering", "PerformanceBottleneck");
