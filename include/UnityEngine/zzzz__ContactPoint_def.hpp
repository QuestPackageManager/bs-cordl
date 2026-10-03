#pragma once
// IWYU pragma private; include "UnityEngine/ContactPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ContactPoint)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct ContactPoint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ContactPoint);
DEFINE_IL2CPP_CLASS(::UnityEngine::ContactPoint, "UnityEngine", "ContactPoint");
// Dependencies UnityEngine.EntityId, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ContactPoint
struct CORDL_TYPE ContactPoint {
public:
  // Declarations
  __declspec(property(get = get_impulse)) ::UnityEngine::Vector3 impulse;

  __declspec(property(get = get_normal)) ::UnityEngine::Vector3 normal;

  __declspec(property(get = get_otherCollider)) ::UnityW<::UnityEngine::Collider> otherCollider;

  __declspec(property(get = get_point)) ::UnityEngine::Vector3 point;

  __declspec(property(get = get_separation)) float_t separation;

  __declspec(property(get = get_thisCollider)) ::UnityW<::UnityEngine::Collider> thisCollider;

  /// @brief Method .ctor, addr 0x6fdce64, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 impulse, float_t separation, ::UnityEngine::EntityId thisEntityId,
                    ::UnityEngine::EntityId otherEntityId);

  /// @brief Method get_impulse, addr 0x6fdcc50, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_impulse();

  /// @brief Method get_normal, addr 0x6fdcc44, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_normal();

  /// @brief Method get_otherCollider, addr 0x6fdce00, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_otherCollider();

  /// @brief Method get_point, addr 0x6fdcc38, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point();

  /// @brief Method get_separation, addr 0x6fdce5c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_separation();

  /// @brief Method get_thisCollider, addr 0x6fdcc5c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_thisCollider();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContactPoint();

  // Ctor Parameters [CppParam { name: "m_Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "m_Impulse", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ThisColliderEntityId", ty:
  // "::UnityEngine::EntityId", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OtherColliderEntityId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "m_Separation", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr ContactPoint(::UnityEngine::Vector3 m_Point, ::UnityEngine::Vector3 m_Normal, ::UnityEngine::Vector3 m_Impulse, ::UnityEngine::EntityId m_ThisColliderEntityId,
                         ::UnityEngine::EntityId m_OtherColliderEntityId, float_t m_Separation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19022 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_Point, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Point;

  /// @brief Field m_Normal, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Normal;

  /// @brief Field m_Impulse, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Impulse;

  /// @brief Field m_ThisColliderEntityId, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::EntityId m_ThisColliderEntityId;

  /// @brief Field m_OtherColliderEntityId, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::EntityId m_OtherColliderEntityId;

  /// @brief Field m_Separation, offset: 0x2c, size: 0x4, def value: None
  float_t m_Separation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ContactPoint, m_Point) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint, m_Normal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint, m_Impulse) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint, m_ThisColliderEntityId) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint, m_OtherColliderEntityId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPoint, m_Separation) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ContactPoint) == 0x30, "Size mismatch!");

} // namespace UnityEngine
