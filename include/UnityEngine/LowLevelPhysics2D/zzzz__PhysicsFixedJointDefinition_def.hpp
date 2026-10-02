#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsFixedJointDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PhysicsFixedJointDefinition)
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsFixedJointDefinition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, "UnityEngine.LowLevelPhysics2D", "PhysicsFixedJointDefinition");
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsBody, UnityEngine.LowLevelPhysics2D.PhysicsTransform
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsFixedJointDefinition
struct CORDL_TYPE PhysicsFixedJointDefinition {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6fd39e4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6fd19f8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(bool useSettings);

  /// @brief Method get_defaultDefinition, addr 0x6fd3a14, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition get_defaultDefinition();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsFixedJointDefinition();

  // Ctor Parameters [CppParam { name: "m_BodyA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BodyB", ty:
  // "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LocalAnchorA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LocalAnchorB", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_LinearFrequency", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LinearDamping", ty: "float_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "m_AngularFrequency", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AngularDamping", ty: "float_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_ForceThreshold", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TorqueThreshold", ty: "float_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_TuningFrequency", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TuningDamping", ty: "float_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DrawScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CollideConnected", ty: "bool",
  // modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsFixedJointDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyA, ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyB,
                                        ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorA, ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorB, float_t m_LinearFrequency,
                                        float_t m_LinearDamping, float_t m_AngularFrequency, float_t m_AngularDamping, float_t m_ForceThreshold, float_t m_TorqueThreshold, float_t m_TuningFrequency,
                                        float_t m_TuningDamping, float_t m_DrawScale, bool m_CollideConnected) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21510 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// [SerializeField]
  /// @brief Field m_BodyA, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyA;

  /// [SerializeField]
  /// @brief Field m_BodyB, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyB;

  /// [SerializeField]
  /// @brief Field m_LocalAnchorA, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorA;

  /// [SerializeField]
  /// @brief Field m_LocalAnchorB, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorB;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_LinearFrequency, offset: 0x30, size: 0x4, def value: None
  float_t m_LinearFrequency;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_LinearDamping, offset: 0x34, size: 0x4, def value: None
  float_t m_LinearDamping;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_AngularFrequency, offset: 0x38, size: 0x4, def value: None
  float_t m_AngularFrequency;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_AngularDamping, offset: 0x3c, size: 0x4, def value: None
  float_t m_AngularDamping;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_ForceThreshold, offset: 0x40, size: 0x4, def value: None
  float_t m_ForceThreshold;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_TorqueThreshold, offset: 0x44, size: 0x4, def value: None
  float_t m_TorqueThreshold;

  /// [SerializeField]
  /// [Range(0, 1000)]
  /// @brief Field m_TuningFrequency, offset: 0x48, size: 0x4, def value: None
  float_t m_TuningFrequency;

  /// [Range(0, 10)]
  /// [SerializeField]
  /// @brief Field m_TuningDamping, offset: 0x4c, size: 0x4, def value: None
  float_t m_TuningDamping;

  /// [SerializeField]
  /// [Range(0.001, 10)]
  /// @brief Field m_DrawScale, offset: 0x50, size: 0x4, def value: None
  float_t m_DrawScale;

  /// [SerializeField]
  /// @brief Field m_CollideConnected, offset: 0x54, size: 0x1, def value: None
  bool m_CollideConnected;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, m_BodyA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, m_BodyB) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, m_LocalAnchorA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, m_LocalAnchorB) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, m_LinearFrequency) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, m_LinearDamping) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, m_AngularFrequency) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, m_AngularDamping) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, m_ForceThreshold) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, m_TorqueThreshold) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, m_TuningFrequency) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, m_TuningDamping) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, m_DrawScale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition, m_CollideConnected) == 0x54, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition) == 0x58, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
