#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Rigidbody)
namespace UnityEngine {
struct ForceMode;
}
namespace UnityEngine {
struct CollisionDetectionMode;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15472))
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

  /// @brief Method set_velocity addr 0x2baea38 size 0x54 virtual false final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method set_angularVelocity addr 0x2baead0 size 0x54 virtual false final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_mass addr 0x2baeb68 size 0x4c virtual false final false
  inline void set_mass(float_t value);

  /// @brief Method set_useGravity addr 0x2baebb4 size 0x44 virtual false final false
  inline void set_useGravity(bool value);

  /// @brief Method get_isKinematic addr 0x2baebf8 size 0x3c virtual false final false
  inline bool get_isKinematic();

  /// @brief Method set_isKinematic addr 0x2baec34 size 0x44 virtual false final false
  inline void set_isKinematic(bool value);

  /// @brief Method set_collisionDetectionMode addr 0x2baec78 size 0x44 virtual false final false
  inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);

  /// @brief Method get_worldCenterOfMass addr 0x2baecbc size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_worldCenterOfMass();

  /// @brief Method get_position addr 0x2baed5c size 0x5c virtual false final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method set_position addr 0x2baedfc size 0x54 virtual false final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation addr 0x2baee94 size 0x54 virtual false final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method get_maxAngularVelocity addr 0x2baef2c size 0x3c virtual false final false
  inline float_t get_maxAngularVelocity();

  /// @brief Method MovePosition addr 0x2baef68 size 0x54 virtual false final false
  inline void MovePosition(::UnityEngine::Vector3 position);

  /// @brief Method MoveRotation addr 0x2baf000 size 0x54 virtual false final false
  inline void MoveRotation(::UnityEngine::Quaternion rot);

  /// @brief Method WakeUp addr 0x2baf098 size 0x3c virtual false final false
  inline void WakeUp();

  /// @brief Method AddForce addr 0x2baf0d4 size 0x5c virtual false final false
  inline void AddForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition addr 0x2baf184 size 0x68 virtual false final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition addr 0x2baf248 size 0x8 virtual false final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position);

  static inline ::UnityEngine::Rigidbody* New_ctor();

  /// @brief Method .ctor addr 0x2baf250 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method set_velocity_Injected addr 0x2baea8c size 0x44 virtual false final false
  inline void set_velocity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_angularVelocity_Injected addr 0x2baeb24 size 0x44 virtual false final false
  inline void set_angularVelocity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_worldCenterOfMass_Injected addr 0x2baed18 size 0x44 virtual false final false
  inline void get_worldCenterOfMass_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_position_Injected addr 0x2baedb8 size 0x44 virtual false final false
  inline void get_position_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_position_Injected addr 0x2baee50 size 0x44 virtual false final false
  inline void set_position_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_rotation_Injected addr 0x2baeee8 size 0x44 virtual false final false
  inline void set_rotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method MovePosition_Injected addr 0x2baefbc size 0x44 virtual false final false
  inline void MovePosition_Injected(ByRef<::UnityEngine::Vector3> position);

  /// @brief Method MoveRotation_Injected addr 0x2baf054 size 0x44 virtual false final false
  inline void MoveRotation_Injected(ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method AddForce_Injected addr 0x2baf130 size 0x54 virtual false final false
  inline void AddForce_Injected(ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition_Injected addr 0x2baf1ec size 0x5c virtual false final false
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
