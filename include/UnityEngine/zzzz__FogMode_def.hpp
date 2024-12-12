#pragma once
// IWYU pragma private; include "UnityEngine/FogMode.hpp"
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
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.FogMode
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
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FogMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FogMode(int32_t value__) noexcept;

  /// @brief Field Exponential value: I32(2)
  static ::UnityEngine::FogMode const Exponential;

  /// @brief Field ExponentialSquared value: I32(3)
  static ::UnityEngine::FogMode const ExponentialSquared;

  /// @brief Field Linear value: I32(1)
  static ::UnityEngine::FogMode const Linear;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10747 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::FogMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::FogMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FogMode, "UnityEngine", "FogMode");
