#pragma once
// IWYU pragma private; include "UnityEngine/CharacterController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CharacterController)
namespace UnityEngine {
struct CollisionFlags;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class CharacterController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CharacterController);
// Type: UnityEngine::CharacterController
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::CharacterController*
class CORDL_TYPE CharacterController : public ::UnityEngine::Collider {
public:
  // Declarations
  __declspec(property(get = get_center, put = set_center))::UnityEngine::Vector3 center;

  __declspec(property(get = get_collisionFlags))::UnityEngine::CollisionFlags collisionFlags;

  __declspec(property(get = get_detectCollisions, put = set_detectCollisions)) bool detectCollisions;

  __declspec(property(get = get_enableOverlapRecovery, put = set_enableOverlapRecovery)) bool enableOverlapRecovery;

  __declspec(property(get = get_height, put = set_height)) float_t height;

  __declspec(property(get = get_isGrounded)) bool isGrounded;

  __declspec(property(get = get_minMoveDistance, put = set_minMoveDistance)) float_t minMoveDistance;

  __declspec(property(get = get_radius, put = set_radius)) float_t radius;

  __declspec(property(get = get_skinWidth, put = set_skinWidth)) float_t skinWidth;

  __declspec(property(get = get_slopeLimit, put = set_slopeLimit)) float_t slopeLimit;

  __declspec(property(get = get_stepOffset, put = set_stepOffset)) float_t stepOffset;

  __declspec(property(get = get_velocity))::UnityEngine::Vector3 velocity;

  /// @brief Method Move, addr 0x34a49c0, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionFlags Move(::UnityEngine::Vector3 motion);

  /// @brief Method Move_Injected, addr 0x34a4a14, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionFlags Move_Injected(ByRef<::UnityEngine::Vector3> motion);

  static inline ::UnityEngine::CharacterController* New_ctor();

  /// @brief Method SimpleMove, addr 0x34a4924, size 0x58, virtual false, abstract: false, final false
  inline bool SimpleMove(::UnityEngine::Vector3 speed);

  /// @brief Method SimpleMove_Injected, addr 0x34a497c, size 0x44, virtual false, abstract: false, final false
  inline bool SimpleMove_Injected(ByRef<::UnityEngine::Vector3> speed);

  /// @brief Method .ctor, addr 0x34a50d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_center, addr 0x34a4c80, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method get_center_Injected, addr 0x34a4cdc, size 0x44, virtual false, abstract: false, final false
  inline void get_center_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_collisionFlags, addr 0x34a4b34, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionFlags get_collisionFlags();

  /// @brief Method get_detectCollisions, addr 0x34a4fd8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_detectCollisions();

  /// @brief Method get_enableOverlapRecovery, addr 0x34a5058, size 0x3c, virtual false, abstract: false, final false
  inline bool get_enableOverlapRecovery();

  /// @brief Method get_height, addr 0x34a4bf8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_height();

  /// @brief Method get_isGrounded, addr 0x34a4af8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isGrounded();

  /// @brief Method get_minMoveDistance, addr 0x34a4f50, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_minMoveDistance();

  /// @brief Method get_radius, addr 0x34a4b70, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method get_skinWidth, addr 0x34a4ec8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_skinWidth();

  /// @brief Method get_slopeLimit, addr 0x34a4db8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_slopeLimit();

  /// @brief Method get_stepOffset, addr 0x34a4e40, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_stepOffset();

  /// @brief Method get_velocity, addr 0x34a4a58, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x34a4ab4, size 0x44, virtual false, abstract: false, final false
  inline void get_velocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_center, addr 0x34a4d20, size 0x54, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method set_center_Injected, addr 0x34a4d74, size 0x44, virtual false, abstract: false, final false
  inline void set_center_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_detectCollisions, addr 0x34a5014, size 0x44, virtual false, abstract: false, final false
  inline void set_detectCollisions(bool value);

  /// @brief Method set_enableOverlapRecovery, addr 0x34a5094, size 0x44, virtual false, abstract: false, final false
  inline void set_enableOverlapRecovery(bool value);

  /// @brief Method set_height, addr 0x34a4c34, size 0x4c, virtual false, abstract: false, final false
  inline void set_height(float_t value);

  /// @brief Method set_minMoveDistance, addr 0x34a4f8c, size 0x4c, virtual false, abstract: false, final false
  inline void set_minMoveDistance(float_t value);

  /// @brief Method set_radius, addr 0x34a4bac, size 0x4c, virtual false, abstract: false, final false
  inline void set_radius(float_t value);

  /// @brief Method set_skinWidth, addr 0x34a4f04, size 0x4c, virtual false, abstract: false, final false
  inline void set_skinWidth(float_t value);

  /// @brief Method set_slopeLimit, addr 0x34a4df4, size 0x4c, virtual false, abstract: false, final false
  inline void set_slopeLimit(float_t value);

  /// @brief Method set_stepOffset, addr 0x34a4e7c, size 0x4c, virtual false, abstract: false, final false
  inline void set_stepOffset(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CharacterController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CharacterController(CharacterController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CharacterController(CharacterController const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CharacterController, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CharacterController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CharacterController*, "UnityEngine", "CharacterController");
