#pragma once
// IWYU pragma private; include "UnityEngine/ContactPoint2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContactPoint2D)
// Forward declare root types
namespace UnityEngine {
struct ContactPoint2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ContactPoint2D);
// Dependencies UnityEngine.Vector2
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ContactPoint2D
struct CORDL_TYPE ContactPoint2D {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContactPoint2D();

  // Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
  // None }, CppParam { name: "m_RelativeVelocity", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_NormalImpulse", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TangentImpulse", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Collider", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OtherCollider", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Rigidbody", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_OtherRigidbody", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Enabled", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr ContactPoint2D(::UnityEngine::Vector2 m_Point, ::UnityEngine::Vector2 m_Normal, ::UnityEngine::Vector2 m_RelativeVelocity, float_t m_Separation, float_t m_NormalImpulse,
                           float_t m_TangentImpulse, int32_t m_Collider, int32_t m_OtherCollider, int32_t m_Rigidbody, int32_t m_OtherRigidbody, int32_t m_Enabled) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18657 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field m_Point, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Point;

  /// @brief Field m_Normal, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Normal;

  /// @brief Field m_RelativeVelocity, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_RelativeVelocity;

  /// @brief Field m_Separation, offset: 0x18, size: 0x4, def value: None
  float_t m_Separation;

  /// @brief Field m_NormalImpulse, offset: 0x1c, size: 0x4, def value: None
  float_t m_NormalImpulse;

  /// @brief Field m_TangentImpulse, offset: 0x20, size: 0x4, def value: None
  float_t m_TangentImpulse;

  /// @brief Field m_Collider, offset: 0x24, size: 0x4, def value: None
  int32_t m_Collider;

  /// @brief Field m_OtherCollider, offset: 0x28, size: 0x4, def value: None
  int32_t m_OtherCollider;

  /// @brief Field m_Rigidbody, offset: 0x2c, size: 0x4, def value: None
  int32_t m_Rigidbody;

  /// @brief Field m_OtherRigidbody, offset: 0x30, size: 0x4, def value: None
  int32_t m_OtherRigidbody;

  /// @brief Field m_Enabled, offset: 0x34, size: 0x4, def value: None
  int32_t m_Enabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ContactPoint2D, m_Point) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint2D, m_Normal) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint2D, m_RelativeVelocity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint2D, m_Separation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint2D, m_NormalImpulse) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint2D, m_TangentImpulse) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint2D, m_Collider) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint2D, m_OtherCollider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint2D, m_Rigidbody) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint2D, m_OtherRigidbody) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint2D, m_Enabled) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ContactPoint2D, 0x38>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContactPoint2D, "UnityEngine", "ContactPoint2D");
