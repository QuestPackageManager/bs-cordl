#pragma once
// IWYU pragma private; include "UnityEngine/IntegrationLimits.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntegrationLimits)
namespace UnityEngine {
struct ArticulationJointType;
}
namespace UnityEngine {
struct IntegrationLimits__m_Joints_e__FixedBuffer;
}
namespace UnityEngine {
struct JointLimitRange;
}
// Forward declare root types
namespace UnityEngine {
struct IntegrationLimits;
}
namespace UnityEngine {
struct IntegrationLimits__m_Joints_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::IntegrationLimits);
MARK_VAL_T(::UnityEngine::IntegrationLimits__m_Joints_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::UnityEngine::IntegrationLimits, "UnityEngine", "IntegrationLimits");
DEFINE_IL2CPP_CLASS(::UnityEngine::IntegrationLimits__m_Joints_e__FixedBuffer, "UnityEngine", "IntegrationLimits/<m_Joints>e__FixedBuffer");
// [UnsafeValueType]
// [CompilerGenerated]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.IntegrationLimits/<m_Joints>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE IntegrationLimits__m_Joints_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegrationLimits__m_Joints_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr IntegrationLimits__m_Joints_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19071 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x38 - 0x4 = 0x34, packed as 0x34
  uint8_t _cordl_size_padding[0x34];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::IntegrationLimits__m_Joints_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::IntegrationLimits__m_Joints_e__FixedBuffer) == 0x38, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.IntegrationLimits::<m_Joints>e__FixedBuffer
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.IntegrationLimits
struct CORDL_TYPE IntegrationLimits {
public:
  // Declarations
  using _m_Joints_e__FixedBuffer = ::UnityEngine::IntegrationLimits__m_Joints_e__FixedBuffer;

  /// @brief Method GetJointLimit, addr 0x6ffe740, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::JointLimitRange GetJointLimit(::UnityEngine::ArticulationJointType jointType);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegrationLimits();

  // Ctor Parameters [CppParam { name: "m_Joints", ty: "::UnityEngine::IntegrationLimits__m_Joints_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
  constexpr IntegrationLimits(::UnityEngine::IntegrationLimits__m_Joints_e__FixedBuffer m_Joints) noexcept;

  /// @brief Field JointTypeCount offset 0xffffffff size 0x4
  static constexpr int32_t JointTypeCount{ static_cast<int32_t>(0x7) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19072 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// [FixedBuffer(typeof(System.Single), 14)]
  /// @brief Field m_Joints, offset: 0x0, size: 0x38, def value: None
  ::UnityEngine::IntegrationLimits__m_Joints_e__FixedBuffer m_Joints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::IntegrationLimits, m_Joints) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::IntegrationLimits) == 0x38, "Size mismatch!");

} // namespace UnityEngine
