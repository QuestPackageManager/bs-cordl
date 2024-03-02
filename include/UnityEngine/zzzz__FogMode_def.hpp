#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FogMode)
// Forward declare root types
namespace UnityEngine {
struct FogMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::FogMode);
// Type: UnityEngine::FogMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::FogMode
struct CORDL_TYPE FogMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FogMode_Unwrapped
  enum struct __FogMode_Unwrapped : int32_t {
    __E_Linear = static_cast<int32_t>(0x1),
    __E_Exponential = static_cast<int32_t>(0x2),
    __E_ExponentialSquared = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FogMode_Unwrapped() const noexcept {
    return static_cast<__FogMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FogMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FogMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Exponential value: static_cast<int32_t>(0x2)
  static ::UnityEngine::FogMode const Exponential;

  /// @brief Field ExponentialSquared value: static_cast<int32_t>(0x3)
  static ::UnityEngine::FogMode const ExponentialSquared;

  /// @brief Field Linear value: static_cast<int32_t>(0x1)
  static ::UnityEngine::FogMode const Linear;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::FogMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::FogMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FogMode, "UnityEngine", "FogMode");
