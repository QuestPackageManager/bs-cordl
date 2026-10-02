#pragma once
// IWYU pragma private; include "UnityEngine/JointLimitRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(JointLimitRange)
// Forward declare root types
namespace UnityEngine {
struct JointLimitRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::JointLimitRange);
DEFINE_IL2CPP_CLASS(::UnityEngine::JointLimitRange, "UnityEngine", "JointLimitRange");
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.JointLimitRange
struct CORDL_TYPE JointLimitRange {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr JointLimitRange();

  // Ctor Parameters [CppParam { name: "min", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "max", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr JointLimitRange(float_t min, float_t max) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19070 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field min, offset: 0x0, size: 0x4, def value: None
  float_t min;

  /// @brief Field max, offset: 0x4, size: 0x4, def value: None
  float_t max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::JointLimitRange, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::JointLimitRange, max) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::JointLimitRange) == 0x8, "Size mismatch!");

} // namespace UnityEngine
