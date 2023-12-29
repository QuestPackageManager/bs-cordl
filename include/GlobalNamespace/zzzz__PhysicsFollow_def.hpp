#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhysicsFollow)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Rigidbody2D;
}
// Forward declare root types
namespace GlobalNamespace {
class PhysicsFollow;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PhysicsFollow);
// Type: ::PhysicsFollow
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13881))
// CS Name: ::PhysicsFollow*
class CORDL_TYPE PhysicsFollow : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _targetTransform, offset 0x18, size 0x8
  __declspec(property(get = __get__targetTransform, put = __set__targetTransform))::UnityEngine::Transform* _targetTransform;

  /// @brief Field _offset, offset 0x20, size 0xc
  __declspec(property(get = __get__offset, put = __set__offset))::UnityEngine::Vector3 _offset;

  /// @brief Field _friction, offset 0x2c, size 0x4
  __declspec(property(get = __get__friction, put = __set__friction)) float_t _friction;

  /// @brief Field _elasticity, offset 0x30, size 0x4
  __declspec(property(get = __get__elasticity, put = __set__elasticity)) float_t _elasticity;

  /// @brief Field _rigidBody2D, offset 0x38, size 0x8
  __declspec(property(get = __get__rigidBody2D, put = __set__rigidBody2D))::UnityEngine::Rigidbody2D* _rigidBody2D;

  constexpr ::UnityEngine::Transform*& __get__targetTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__targetTransform() const;

  constexpr void __set__targetTransform(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get__offset();

  constexpr ::UnityEngine::Vector3 const& __get__offset() const;

  constexpr void __set__offset(::UnityEngine::Vector3 value);

  constexpr float_t& __get__friction();

  constexpr float_t const& __get__friction() const;

  constexpr void __set__friction(float_t value);

  constexpr float_t& __get__elasticity();

  constexpr float_t const& __get__elasticity() const;

  constexpr void __set__elasticity(float_t value);

  constexpr ::UnityEngine::Rigidbody2D*& __get__rigidBody2D();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody2D*> const& __get__rigidBody2D() const;

  constexpr void __set__rigidBody2D(::UnityEngine::Rigidbody2D* value);

  /// @brief Method Start addr 0x1f98010 size 0x98 virtual false final false
  inline void Start();

  /// @brief Method FixedUpdate addr 0x1f980a8 size 0xd8 virtual false final false
  inline void FixedUpdate();

  static inline ::GlobalNamespace::PhysicsFollow* New_ctor();

  /// @brief Method .ctor addr 0x1f98180 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsFollow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsFollow(PhysicsFollow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsFollow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsFollow(PhysicsFollow const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsFollow();

public:
  /// @brief Field _targetTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ____targetTransform;

  /// @brief Field _offset, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____offset;

  /// @brief Field _friction, offset: 0x2c, size: 0x4, def value: None
  float_t ____friction;

  /// @brief Field _elasticity, offset: 0x30, size: 0x4, def value: None
  float_t ____elasticity;

  /// @brief Field _rigidBody2D, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rigidbody2D* ____rigidBody2D;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PhysicsFollow, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsFollow, ____targetTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsFollow, ____offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsFollow, ____friction) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsFollow, ____elasticity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PhysicsFollow, ____rigidBody2D) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PhysicsFollow);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PhysicsFollow*, "", "PhysicsFollow");
