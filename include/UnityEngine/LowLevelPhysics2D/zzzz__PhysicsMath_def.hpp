#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsMath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PhysicsMath)
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorld_TransformPlane;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsMath;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics2D::PhysicsMath);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsMath, "UnityEngine.LowLevelPhysics2D", "PhysicsMath");
// [IsReadOnly]
// Dependencies
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsMath
#pragma pack(push, 0)
struct CORDL_TYPE PhysicsMath {
public:
  // Declarations
  /// @brief Method AngularVelocityToQuaternion, addr 0x6fd8b30, size 0x1c8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion AngularVelocityToQuaternion(float_t angularVelocity, float_t deltaTime, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane);

  /// @brief Method Atan2, addr 0x6fd88ac, size 0x40, virtual false, abstract: false, final false
  static inline float_t Atan2(float_t y, float_t x);

  /// @brief Method Swizzle, addr 0x6fd88ec, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Swizzle(::UnityEngine::Vector3 position, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane);

  /// @brief Method ToPosition3D, addr 0x6fd8978, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ToPosition3D(::UnityEngine::Vector2 position, ::UnityEngine::Vector3 reference, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane);

  /// @brief Method ToRotation2D, addr 0x6fd8a0c, size 0x124, virtual false, abstract: false, final false
  static inline float_t ToRotation2D(::UnityEngine::Quaternion quaternion, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane);

  /// @brief Method ToRotationFast3D, addr 0x6fd8cf8, size 0x144, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion ToRotationFast3D(float_t angle, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane);

  /// @brief Method ToRotationSlow3D, addr 0x6fd8e3c, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion ToRotationSlow3D(float_t angle, ::UnityEngine::Quaternion reference, ::UnityEngine::LowLevelPhysics2D::PhysicsWorld_TransformPlane transformPlane);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsMath();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21581 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsMath) == 0x1, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
