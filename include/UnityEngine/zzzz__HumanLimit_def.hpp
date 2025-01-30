#pragma once
// IWYU pragma private; include "UnityEngine/HumanLimit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HumanLimit)
// Forward declare root types
namespace UnityEngine {
struct HumanLimit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::HumanLimit);
// Dependencies UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.HumanLimit
struct CORDL_TYPE HumanLimit {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HumanLimit();

  // Ctor Parameters [CppParam { name: "m_Min", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Max", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None
  // }, CppParam { name: "m_Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AxisLength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_UseDefaultValues", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HumanLimit(::UnityEngine::Vector3 m_Min, ::UnityEngine::Vector3 m_Max, ::UnityEngine::Vector3 m_Center, float_t m_AxisLength, int32_t m_UseDefaultValues) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16877 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2c };

  /// @brief Field m_Min, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Min;

  /// @brief Field m_Max, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Max;

  /// @brief Field m_Center, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Center;

  /// @brief Field m_AxisLength, offset: 0x24, size: 0x4, def value: None
  float_t m_AxisLength;

  /// @brief Field m_UseDefaultValues, offset: 0x28, size: 0x4, def value: None
  int32_t m_UseDefaultValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::HumanLimit, m_Min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanLimit, m_Max) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanLimit, m_Center) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanLimit, m_AxisLength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::HumanLimit, m_UseDefaultValues) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::HumanLimit, 0x2c>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanLimit, "UnityEngine", "HumanLimit");
