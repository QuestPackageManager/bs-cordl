#pragma once
// IWYU pragma private; include "UnityEngine/ControllerColliderHit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerColliderHit)
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class ControllerColliderHit;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ControllerColliderHit);
// Dependencies System.Object, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ControllerColliderHit
class CORDL_TYPE ControllerColliderHit : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_collider)) ::UnityW<::UnityEngine::Collider> collider;

  __declspec(property(get = get_controller)) ::UnityW<::UnityEngine::CharacterController> controller;

  __declspec(property(get = get_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  /// @brief Field m_Collider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Collider, put = __cordl_internal_set_m_Collider)) ::UnityW<::UnityEngine::Collider> m_Collider;

  /// @brief Field m_Controller, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Controller, put = __cordl_internal_set_m_Controller)) ::UnityW<::UnityEngine::CharacterController> m_Controller;

  /// @brief Field m_MoveDirection, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get_m_MoveDirection, put = __cordl_internal_set_m_MoveDirection)) ::UnityEngine::Vector3 m_MoveDirection;

  /// @brief Field m_MoveLength, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MoveLength, put = __cordl_internal_set_m_MoveLength)) float_t m_MoveLength;

  /// @brief Field m_Normal, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Normal, put = __cordl_internal_set_m_Normal)) ::UnityEngine::Vector3 m_Normal;

  /// @brief Field m_Point, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Point, put = __cordl_internal_set_m_Point)) ::UnityEngine::Vector3 m_Point;

  /// @brief Field m_Push, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Push, put = __cordl_internal_set_m_Push)) int32_t m_Push;

  __declspec(property(get = get_moveDirection)) ::UnityEngine::Vector3 moveDirection;

  __declspec(property(get = get_moveLength)) float_t moveLength;

  __declspec(property(get = get_normal)) ::UnityEngine::Vector3 normal;

  __declspec(property(get = get_point)) ::UnityEngine::Vector3 point;

  __declspec(property(get = get_push, put = set_push)) bool push;

  __declspec(property(get = get_rigidbody)) ::UnityW<::UnityEngine::Rigidbody> rigidbody;

  __declspec(property(get = get_transform)) ::UnityW<::UnityEngine::Transform> transform;

  static inline ::UnityEngine::ControllerColliderHit* New_ctor();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_m_Collider() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_m_Collider();

  constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get_m_Controller() const;

  constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get_m_Controller();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_MoveDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_MoveDirection();

  constexpr float_t const& __cordl_internal_get_m_MoveLength() const;

  constexpr float_t& __cordl_internal_get_m_MoveLength();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Normal() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Normal();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Point() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Point();

  constexpr int32_t const& __cordl_internal_get_m_Push() const;

  constexpr int32_t& __cordl_internal_get_m_Push();

  constexpr void __cordl_internal_set_m_Collider(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set_m_Controller(::UnityW<::UnityEngine::CharacterController> value);

  constexpr void __cordl_internal_set_m_MoveDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_MoveLength(float_t value);

  constexpr void __cordl_internal_set_m_Normal(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_Point(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_Push(int32_t value);

  /// @brief Method .ctor, addr 0x48f2eb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_collider, addr 0x48f2da0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_collider();

  /// @brief Method get_controller, addr 0x48f2d98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::CharacterController> get_controller();

  /// @brief Method get_gameObject, addr 0x48f2e28, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_gameObject();

  /// @brief Method get_moveDirection, addr 0x48f2e78, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_moveDirection();

  /// @brief Method get_moveLength, addr 0x48f2e84, size 0x8, virtual false, abstract: false, final false
  inline float_t get_moveLength();

  /// @brief Method get_normal, addr 0x48f2e6c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_normal();

  /// @brief Method get_point, addr 0x48f2e60, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point();

  /// @brief Method get_push, addr 0x48f2e8c, size 0x10, virtual false, abstract: false, final false
  inline bool get_push();

  /// @brief Method get_rigidbody, addr 0x48f2da8, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rigidbody> get_rigidbody();

  /// @brief Method get_transform, addr 0x48f2e44, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_transform();

  /// @brief Method set_push, addr 0x48f2e9c, size 0x1c, virtual false, abstract: false, final false
  inline void set_push(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerColliderHit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllerColliderHit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllerColliderHit(ControllerColliderHit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllerColliderHit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllerColliderHit(ControllerColliderHit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15719 };

  /// @brief Field m_Controller, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CharacterController> ___m_Controller;

  /// @brief Field m_Collider, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___m_Collider;

  /// @brief Field m_Point, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Point;

  /// @brief Field m_Normal, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Normal;

  /// @brief Field m_MoveDirection, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_MoveDirection;

  /// @brief Field m_MoveLength, offset: 0x44, size: 0x4, def value: None
  float_t ___m_MoveLength;

  /// @brief Field m_Push, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_Push;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ControllerColliderHit, ___m_Controller) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ControllerColliderHit, ___m_Collider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ControllerColliderHit, ___m_Point) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ControllerColliderHit, ___m_Normal) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ControllerColliderHit, ___m_MoveDirection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ControllerColliderHit, ___m_MoveLength) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ControllerColliderHit, ___m_Push) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ControllerColliderHit, 0x50>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ControllerColliderHit);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ControllerColliderHit*, "UnityEngine", "ControllerColliderHit");
