#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsBodyDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBody_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsRotate_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PhysicsBodyDefinition)
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBodyDefinition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, "UnityEngine.LowLevelPhysics2D", "PhysicsBodyDefinition");
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsBody::BodyConstraints, UnityEngine.LowLevelPhysics2D.PhysicsBody::BodyType, UnityEngine.LowLevelPhysics2D.PhysicsBody::TransformWriteMode,
// UnityEngine.LowLevelPhysics2D.PhysicsRotate, UnityEngine.Vector2
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsBodyDefinition
struct CORDL_TYPE PhysicsBodyDefinition {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6fd53e4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6fd17f0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(bool useSettings);

  /// @brief Method get_defaultDefinition, addr 0x6fd5414, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition get_defaultDefinition();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsBodyDefinition();

  // Ctor Parameters [CppParam { name: "m_BodyType", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_BodyConstraints", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TransformWriteMode", ty:
  // "::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector2", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::LowLevelPhysics2D::PhysicsRotate", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_LinearVelocity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AngularVelocity", ty: "float_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "m_LinearDamping", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AngularDamping", ty: "float_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_GravityScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SleepThreshold", ty: "float_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "m_CollisionThreshold", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FastCollisionsAllowed", ty: "bool", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "m_FastRotationAllowed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SleepingAllowed", ty: "bool",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Awake", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Enabled", ty: "bool", modifiers: "",
  // def_value: None, comment: None }]
  constexpr PhysicsBodyDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType m_BodyType, ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints m_BodyConstraints,
                                  ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode m_TransformWriteMode, ::UnityEngine::Vector2 m_Position,
                                  ::UnityEngine::LowLevelPhysics2D::PhysicsRotate m_Rotation, ::UnityEngine::Vector2 m_LinearVelocity, float_t m_AngularVelocity, float_t m_LinearDamping,
                                  float_t m_AngularDamping, float_t m_GravityScale, float_t m_SleepThreshold, float_t m_CollisionThreshold, bool m_FastCollisionsAllowed, bool m_FastRotationAllowed,
                                  bool m_SleepingAllowed, bool m_Awake, bool m_Enabled) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21529 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x44 };

  /// [SerializeField]
  /// @brief Field m_BodyType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyType m_BodyType;

  /// [SerializeField]
  /// @brief Field m_BodyConstraints, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsBody_BodyConstraints m_BodyConstraints;

  /// [SerializeField]
  /// @brief Field m_TransformWriteMode, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsBody_TransformWriteMode m_TransformWriteMode;

  /// [SerializeField]
  /// @brief Field m_Position, offset: 0xc, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Position;

  /// [SerializeField]
  /// @brief Field m_Rotation, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsRotate m_Rotation;

  /// [SerializeField]
  /// @brief Field m_LinearVelocity, offset: 0x1c, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_LinearVelocity;

  /// [SerializeField]
  /// @brief Field m_AngularVelocity, offset: 0x24, size: 0x4, def value: None
  float_t m_AngularVelocity;

  /// [Min(0)]
  /// [SerializeField]
  /// @brief Field m_LinearDamping, offset: 0x28, size: 0x4, def value: None
  float_t m_LinearDamping;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_AngularDamping, offset: 0x2c, size: 0x4, def value: None
  float_t m_AngularDamping;

  /// [SerializeField]
  /// @brief Field m_GravityScale, offset: 0x30, size: 0x4, def value: None
  float_t m_GravityScale;

  /// [SerializeField]
  /// [Min(0)]
  /// @brief Field m_SleepThreshold, offset: 0x34, size: 0x4, def value: None
  float_t m_SleepThreshold;

  /// [SerializeField]
  /// [Range(0, 1)]
  /// @brief Field m_CollisionThreshold, offset: 0x38, size: 0x4, def value: None
  float_t m_CollisionThreshold;

  /// [SerializeField]
  /// @brief Field m_FastCollisionsAllowed, offset: 0x3c, size: 0x1, def value: None
  bool m_FastCollisionsAllowed;

  /// [SerializeField]
  /// @brief Field m_FastRotationAllowed, offset: 0x3d, size: 0x1, def value: None
  bool m_FastRotationAllowed;

  /// [SerializeField]
  /// @brief Field m_SleepingAllowed, offset: 0x3e, size: 0x1, def value: None
  bool m_SleepingAllowed;

  /// [SerializeField]
  /// @brief Field m_Awake, offset: 0x3f, size: 0x1, def value: None
  bool m_Awake;

  /// [SerializeField]
  /// @brief Field m_Enabled, offset: 0x40, size: 0x1, def value: None
  bool m_Enabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_BodyType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_BodyConstraints) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_TransformWriteMode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_Position) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_Rotation) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_LinearVelocity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_AngularVelocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_LinearDamping) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_AngularDamping) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_GravityScale) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_SleepThreshold) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_CollisionThreshold) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_FastCollisionsAllowed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_FastRotationAllowed) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_SleepingAllowed) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_Awake) == 0x3f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition, m_Enabled) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition) == 0x44, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
