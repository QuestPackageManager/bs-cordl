#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsRelativeJointDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PhysicsRelativeJointDefinition)
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsRelativeJointDefinition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, "UnityEngine.LowLevelPhysics2D", "PhysicsRelativeJointDefinition");
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsBody, UnityEngine.LowLevelPhysics2D.PhysicsTransform, UnityEngine.Vector2
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsRelativeJointDefinition
struct CORDL_TYPE PhysicsRelativeJointDefinition {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6fd3f84, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6fd1b0c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(bool useSettings);

  /// @brief Method get_defaultDefinition, addr 0x6fd3fb4, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition get_defaultDefinition();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsRelativeJointDefinition();

  // Ctor Parameters [CppParam { name: "m_BodyA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BodyB", ty:
  // "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LocalAnchorA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LocalAnchorB", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_LinearVelocity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AngularVelocity", ty: "float_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "m_MaxForce", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MaxTorque", ty: "float_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "m_SpringLinearFrequency", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SpringAngularFrequency", ty: "float_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SpringLinearDamping", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_SpringAngularDamping", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SpringMaxForce", ty: "float_t", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_SpringMaxTorque", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ForceThreshold", ty: "float_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "m_TorqueThreshold", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TuningFrequency", ty: "float_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_TuningDamping", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DrawScale", ty: "float_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_CollideConnected", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsRelativeJointDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyA, ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyB,
                                           ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorA, ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorB,
                                           ::UnityEngine::Vector2 m_LinearVelocity, float_t m_AngularVelocity, float_t m_MaxForce, float_t m_MaxTorque, float_t m_SpringLinearFrequency,
                                           float_t m_SpringAngularFrequency, float_t m_SpringLinearDamping, float_t m_SpringAngularDamping, float_t m_SpringMaxForce, float_t m_SpringMaxTorque,
                                           float_t m_ForceThreshold, float_t m_TorqueThreshold, float_t m_TuningFrequency, float_t m_TuningDamping, float_t m_DrawScale,
                                           bool m_CollideConnected) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21514 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x74 };

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

  /// [SerializeField]
  /// @brief Field m_LinearVelocity, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_LinearVelocity;

  /// [SerializeField]
  /// @brief Field m_AngularVelocity, offset: 0x38, size: 0x4, def value: None
  float_t m_AngularVelocity;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_MaxForce, offset: 0x3c, size: 0x4, def value: None
  float_t m_MaxForce;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_MaxTorque, offset: 0x40, size: 0x4, def value: None
  float_t m_MaxTorque;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_SpringLinearFrequency, offset: 0x44, size: 0x4, def value: None
  float_t m_SpringLinearFrequency;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_SpringAngularFrequency, offset: 0x48, size: 0x4, def value: None
  float_t m_SpringAngularFrequency;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_SpringLinearDamping, offset: 0x4c, size: 0x4, def value: None
  float_t m_SpringLinearDamping;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_SpringAngularDamping, offset: 0x50, size: 0x4, def value: None
  float_t m_SpringAngularDamping;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_SpringMaxForce, offset: 0x54, size: 0x4, def value: None
  float_t m_SpringMaxForce;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_SpringMaxTorque, offset: 0x58, size: 0x4, def value: None
  float_t m_SpringMaxTorque;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_ForceThreshold, offset: 0x5c, size: 0x4, def value: None
  float_t m_ForceThreshold;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_TorqueThreshold, offset: 0x60, size: 0x4, def value: None
  float_t m_TorqueThreshold;

  /// [Range(0, 1000)]
  /// [SerializeField]
  /// @brief Field m_TuningFrequency, offset: 0x64, size: 0x4, def value: None
  float_t m_TuningFrequency;

  /// [SerializeField]
  /// [Range(0, 10)]
  /// @brief Field m_TuningDamping, offset: 0x68, size: 0x4, def value: None
  float_t m_TuningDamping;

  /// [SerializeField]
  /// [Range(0.001, 10)]
  /// @brief Field m_DrawScale, offset: 0x6c, size: 0x4, def value: None
  float_t m_DrawScale;

  /// [SerializeField]
  /// @brief Field m_CollideConnected, offset: 0x70, size: 0x1, def value: None
  bool m_CollideConnected;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_BodyA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_BodyB) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_LocalAnchorA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_LocalAnchorB) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_LinearVelocity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_AngularVelocity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_MaxForce) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_MaxTorque) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_SpringLinearFrequency) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_SpringAngularFrequency) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_SpringLinearDamping) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_SpringAngularDamping) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_SpringMaxForce) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_SpringMaxTorque) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_ForceThreshold) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_TorqueThreshold) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_TuningFrequency) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_TuningDamping) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_DrawScale) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition, m_CollideConnected) == 0x70, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition) == 0x74, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
