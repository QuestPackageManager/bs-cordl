#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Rigidbody)
namespace UnityEngine {
struct CollisionDetectionMode;
}
namespace UnityEngine {
struct ForceMode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Rigidbody;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rigidbody);
// Type: UnityEngine::Rigidbody
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10238))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15488))
// CS Name: ::UnityEngine::Rigidbody*
class CORDL_TYPE Rigidbody : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(put = set_velocity))::UnityEngine::Vector3 velocity;

  __declspec(property(put = set_angularVelocity))::UnityEngine::Vector3 angularVelocity;

  __declspec(property(put = set_mass)) float_t mass;

  __declspec(property(put = set_useGravity)) bool useGravity;

  __declspec(property(get = get_isKinematic, put = set_isKinematic)) bool isKinematic;

  __declspec(property(put = set_collisionDetectionMode))::UnityEngine::CollisionDetectionMode collisionDetectionMode;

  __declspec(property(get = get_worldCenterOfMass))::UnityEngine::Vector3 worldCenterOfMass;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(put = set_rotation))::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_maxAngularVelocity)) float_t maxAngularVelocity;

  /// @brief Method set_velocity, addr 0x2d15c7c, size 0x54, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method set_angularVelocity, addr 0x2d15d14, size 0x54, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_mass, addr 0x2d15dac, size 0x4c, virtual false, abstract: false, final false
  inline void set_mass(float_t value);

  /// @brief Method set_useGravity, addr 0x2d15df8, size 0x44, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method get_isKinematic, addr 0x2d15e3c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isKinematic();

  /// @brief Method set_isKinematic, addr 0x2d15e78, size 0x44, virtual false, abstract: false, final false
  inline void set_isKinematic(bool value);

  /// @brief Method set_collisionDetectionMode, addr 0x2d15ebc, size 0x44, virtual false, abstract: false, final false
  inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);

  /// @brief Method get_worldCenterOfMass, addr 0x2d15f00, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldCenterOfMass();

  /// @brief Method get_position, addr 0x2d15fa0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method set_position, addr 0x2d16040, size 0x54, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation, addr 0x2d160d8, size 0x54, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method get_maxAngularVelocity, addr 0x2d16170, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxAngularVelocity();

  /// @brief Method MovePosition, addr 0x2d161ac, size 0x54, virtual false, abstract: false, final false
  inline void MovePosition(::UnityEngine::Vector3 position);

  /// @brief Method MoveRotation, addr 0x2d16244, size 0x54, virtual false, abstract: false, final false
  inline void MoveRotation(::UnityEngine::Quaternion rot);

  /// @brief Method WakeUp, addr 0x2d162dc, size 0x3c, virtual false, abstract: false, final false
  inline void WakeUp();

  /// @brief Method AddForce, addr 0x2d16318, size 0x5c, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition, addr 0x2d163c8, size 0x68, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition, addr 0x2d1648c, size 0x8, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position);

  static inline ::UnityEngine::Rigidbody* New_ctor();

  /// @brief Method .ctor, addr 0x2d16494, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_velocity_Injected, addr 0x2d15cd0, size 0x44, virtual false, abstract: false, final false
  inline void set_velocity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_angularVelocity_Injected, addr 0x2d15d68, size 0x44, virtual false, abstract: false, final false
  inline void set_angularVelocity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_worldCenterOfMass_Injected, addr 0x2d15f5c, size 0x44, virtual false, abstract: false, final false
  inline void get_worldCenterOfMass_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_position_Injected, addr 0x2d15ffc, size 0x44, virtual false, abstract: false, final false
  inline void get_position_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_position_Injected, addr 0x2d16094, size 0x44, virtual false, abstract: false, final false
  inline void set_position_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_rotation_Injected, addr 0x2d1612c, size 0x44, virtual false, abstract: false, final false
  inline void set_rotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method MovePosition_Injected, addr 0x2d16200, size 0x44, virtual false, abstract: false, final false
  inline void MovePosition_Injected(ByRef<::UnityEngine::Vector3> position);

  /// @brief Method MoveRotation_Injected, addr 0x2d16298, size 0x44, virtual false, abstract: false, final false
  inline void MoveRotation_Injected(ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method AddForce_Injected, addr 0x2d16374, size 0x54, virtual false, abstract: false, final false
  inline void AddForce_Injected(ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition_Injected, addr 0x2d16430, size 0x5c, virtual false, abstract: false, final false
  inline void AddForceAtPosition_Injected(ByRef<::UnityEngine::Vector3> force, ByRef<::UnityEngine::Vector3> position, ::UnityEngine::ForceMode mode);

  // Ctor Parameters [CppParam { name: "", ty: "Rigidbody", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rigidbody(Rigidbody&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rigidbody", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rigidbody(Rigidbody const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rigidbody();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rigidbody, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Rigidbody);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rigidbody*, "UnityEngine", "Rigidbody");
