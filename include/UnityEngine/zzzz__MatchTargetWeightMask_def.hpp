#pragma once
// IWYU pragma private; include "UnityEngine/MatchTargetWeightMask.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MatchTargetWeightMask)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct MatchTargetWeightMask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::MatchTargetWeightMask);
// Type: UnityEngine::MatchTargetWeightMask
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::MatchTargetWeightMask
struct CORDL_TYPE MatchTargetWeightMask {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchTargetWeightMask();

  // Ctor Parameters [CppParam { name: "m_PositionXYZWeight", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_RotationWeight", ty: "float_t", modifiers: "",
  // def_value: None }]
  constexpr MatchTargetWeightMask(::UnityEngine::Vector3 m_PositionXYZWeight, float_t m_RotationWeight) noexcept;

  /// @brief Field m_PositionXYZWeight, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_PositionXYZWeight;

  /// @brief Field m_RotationWeight, offset: 0xc, size: 0x4, def value: None
  float_t m_RotationWeight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16827 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MatchTargetWeightMask, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::MatchTargetWeightMask, m_PositionXYZWeight) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::MatchTargetWeightMask, m_RotationWeight) == 0xc, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MatchTargetWeightMask, "UnityEngine", "MatchTargetWeightMask");
