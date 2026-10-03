#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsDistanceJointDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsTransform_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PhysicsDistanceJointDefinition)
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsDistanceJointDefinition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, "UnityEngine.LowLevelPhysics2D", "PhysicsDistanceJointDefinition");
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsBody, UnityEngine.LowLevelPhysics2D.PhysicsTransform
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsDistanceJointDefinition
struct CORDL_TYPE PhysicsDistanceJointDefinition {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6fd392c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6fd1964, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(bool useSettings);

  /// @brief Method get_defaultDefinition, addr 0x6fd395c, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition get_defaultDefinition();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsDistanceJointDefinition();

  // Ctor Parameters [CppParam { name: "m_BodyA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BodyB", ty:
  // "::UnityEngine::LowLevelPhysics2D::PhysicsBody", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LocalAnchorA", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LocalAnchorB", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsTransform", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EnableSpring", ty: "bool", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_SpringFrequency", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SpringDamping", ty: "float_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "m_SpringLowerForce", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SpringUpperForce", ty: "float_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "m_EnableMotor", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MotorSpeed", ty: "float_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "m_MaxMotorForce", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EnableLimit", ty: "bool", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "m_MinDistanceLimit", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MaxDistanceLimit", ty: "float_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_ForceThreshold", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TorqueThreshold", ty: "float_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TuningFrequency", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TuningDamping", ty:
  // "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DrawScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CollideConnected",
  // ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr PhysicsDistanceJointDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyA, ::UnityEngine::LowLevelPhysics2D::PhysicsBody m_BodyB,
                                           ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorA, ::UnityEngine::LowLevelPhysics2D::PhysicsTransform m_LocalAnchorB, float_t m_Distance,
                                           bool m_EnableSpring, float_t m_SpringFrequency, float_t m_SpringDamping, float_t m_SpringLowerForce, float_t m_SpringUpperForce, bool m_EnableMotor,
                                           float_t m_MotorSpeed, float_t m_MaxMotorForce, bool m_EnableLimit, float_t m_MinDistanceLimit, float_t m_MaxDistanceLimit, float_t m_ForceThreshold,
                                           float_t m_TorqueThreshold, float_t m_TuningFrequency, float_t m_TuningDamping, float_t m_DrawScale, bool m_CollideConnected) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21509 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

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

  /// [Min(0.000000000000000000000000000000000000000000001)]
  /// [SerializeField]
  /// @brief Field m_Distance, offset: 0x30, size: 0x4, def value: None
  float_t m_Distance;

  /// [SerializeField]
  /// @brief Field m_EnableSpring, offset: 0x34, size: 0x1, def value: None
  bool m_EnableSpring;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_SpringFrequency, offset: 0x38, size: 0x4, def value: None
  float_t m_SpringFrequency;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_SpringDamping, offset: 0x3c, size: 0x4, def value: None
  float_t m_SpringDamping;

  /// [SerializeField]
  /// @brief Field m_SpringLowerForce, offset: 0x40, size: 0x4, def value: None
  float_t m_SpringLowerForce;

  /// [SerializeField]
  /// @brief Field m_SpringUpperForce, offset: 0x44, size: 0x4, def value: None
  float_t m_SpringUpperForce;

  /// [SerializeField]
  /// @brief Field m_EnableMotor, offset: 0x48, size: 0x1, def value: None
  bool m_EnableMotor;

  /// [SerializeField]
  /// @brief Field m_MotorSpeed, offset: 0x4c, size: 0x4, def value: None
  float_t m_MotorSpeed;

  /// [SerializeField]
  /// @brief Field m_MaxMotorForce, offset: 0x50, size: 0x4, def value: None
  float_t m_MaxMotorForce;

  /// [SerializeField]
  /// @brief Field m_EnableLimit, offset: 0x54, size: 0x1, def value: None
  bool m_EnableLimit;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_MinDistanceLimit, offset: 0x58, size: 0x4, def value: None
  float_t m_MinDistanceLimit;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_MaxDistanceLimit, offset: 0x5c, size: 0x4, def value: None
  float_t m_MaxDistanceLimit;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_ForceThreshold, offset: 0x60, size: 0x4, def value: None
  float_t m_ForceThreshold;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_TorqueThreshold, offset: 0x64, size: 0x4, def value: None
  float_t m_TorqueThreshold;

  /// [SerializeField]
  /// [Range(0, 1000)]
  /// @brief Field m_TuningFrequency, offset: 0x68, size: 0x4, def value: None
  float_t m_TuningFrequency;

  /// [SerializeField]
  /// [Range(0, 10)]
  /// @brief Field m_TuningDamping, offset: 0x6c, size: 0x4, def value: None
  float_t m_TuningDamping;

  /// [SerializeField]
  /// [Range(0.001, 10)]
  /// @brief Field m_DrawScale, offset: 0x70, size: 0x4, def value: None
  float_t m_DrawScale;

  /// [SerializeField]
  /// @brief Field m_CollideConnected, offset: 0x74, size: 0x1, def value: None
  bool m_CollideConnected;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_BodyA) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_BodyB) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_LocalAnchorA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_LocalAnchorB) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_Distance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_EnableSpring) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_SpringFrequency) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_SpringDamping) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_SpringLowerForce) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_SpringUpperForce) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_EnableMotor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_MotorSpeed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_MaxMotorForce) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_EnableLimit) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_MinDistanceLimit) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_MaxDistanceLimit) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_ForceThreshold) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_TorqueThreshold) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_TuningFrequency) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_TuningDamping) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_DrawScale) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition, m_CollideConnected) == 0x74, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition) == 0x78, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
