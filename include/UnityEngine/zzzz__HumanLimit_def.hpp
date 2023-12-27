#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HumanLimit)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct HumanLimit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::HumanLimit);
// Type: UnityEngine::HumanLimit
// SizeInfo { instance_size: 44, native_size: 44, calculated_instance_size: 44, calculated_native_size: 60, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14850))
// CS Name: ::UnityEngine::HumanLimit
struct CORDL_TYPE HumanLimit {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_Min", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Max", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None
  // }, CppParam { name: "m_Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AxisLength", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_UseDefaultValues", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HumanLimit(::UnityEngine::Vector3 m_Min, ::UnityEngine::Vector3 m_Max, ::UnityEngine::Vector3 m_Center, float_t m_AxisLength, int32_t m_UseDefaultValues) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HumanLimit();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::HumanLimit, 0x2c>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HumanLimit, "UnityEngine", "HumanLimit");
