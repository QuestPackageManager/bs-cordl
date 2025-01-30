#pragma once
// IWYU pragma private; include "UnityEngine/CollisionDetectionMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollisionDetectionMode)
// Forward declare root types
namespace UnityEngine {
struct CollisionDetectionMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::CollisionDetectionMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.CollisionDetectionMode
struct CORDL_TYPE CollisionDetectionMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CollisionDetectionMode_Unwrapped
  enum struct __CollisionDetectionMode_Unwrapped : int32_t {
    __E_Discrete = static_cast<int32_t>(0x0),
    __E_Continuous = static_cast<int32_t>(0x1),
    __E_ContinuousDynamic = static_cast<int32_t>(0x2),
    __E_ContinuousSpeculative = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CollisionDetectionMode_Unwrapped() const noexcept {
    return static_cast<__CollisionDetectionMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CollisionDetectionMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CollisionDetectionMode(int32_t value__) noexcept;

  /// @brief Field Continuous value: I32(1)
  static ::UnityEngine::CollisionDetectionMode const Continuous;

  /// @brief Field ContinuousDynamic value: I32(2)
  static ::UnityEngine::CollisionDetectionMode const ContinuousDynamic;

  /// @brief Field ContinuousSpeculative value: I32(3)
  static ::UnityEngine::CollisionDetectionMode const ContinuousSpeculative;

  /// @brief Field Discrete value: I32(0)
  static ::UnityEngine::CollisionDetectionMode const Discrete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15727 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CollisionDetectionMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::CollisionDetectionMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CollisionDetectionMode, "UnityEngine", "CollisionDetectionMode");
