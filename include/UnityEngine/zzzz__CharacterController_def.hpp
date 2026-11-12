#pragma once
// IWYU pragma private; include "UnityEngine/CharacterController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CharacterController)
namespace System {
struct IntPtr;
}
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
MARK_REF_T(::UnityEngine::CharacterController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::CharacterController*, "UnityEngine", "CharacterController");
// [NativeHeader("Modules/Physics/CharacterController.h")]
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CharacterController
class CORDL_TYPE CharacterController : public ::UnityEngine::Collider {
public:
  // Declarations
  __declspec(property(get = get_center, put = set_center)) ::UnityEngine::Vector3 center;

  __declspec(property(get = get_collisionFlags)) ::UnityEngine::CollisionFlags collisionFlags;

  __declspec(property(get = get_detectCollisions, put = set_detectCollisions)) bool detectCollisions;

  __declspec(property(get = get_enableOverlapRecovery, put = set_enableOverlapRecovery)) bool enableOverlapRecovery;

  __declspec(property(get = get_height, put = set_height)) float_t height;

  __declspec(property(get = get_isGrounded)) bool isGrounded;

  __declspec(property(get = get_isSupported)) bool isSupported;

  __declspec(property(get = get_minMoveDistance, put = set_minMoveDistance)) float_t minMoveDistance;

  __declspec(property(get = get_radius, put = set_radius)) float_t radius;

  __declspec(property(get = get_skinWidth, put = set_skinWidth)) float_t skinWidth;

  __declspec(property(get = get_slopeLimit, put = set_slopeLimit)) float_t slopeLimit;

  __declspec(property(get = get_stepOffset, put = set_stepOffset)) float_t stepOffset;

  __declspec(property(get = get_velocity)) ::UnityEngine::Vector3 velocity;

  /// @brief Method Move, addr 0x7025ba8, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionFlags Move(::UnityEngine::Vector3 motion);

  /// @brief Method Move_Injected, addr 0x7025c40, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::CollisionFlags Move_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> motion);

  static inline ::UnityEngine::CharacterController* New_ctor();

  /// @brief Method SimpleMove, addr 0x7025ac8, size 0x9c, virtual false, abstract: false, final false
  inline bool SimpleMove(::UnityEngine::Vector3 speed);

  /// @brief Method SimpleMove_Injected, addr 0x7025b64, size 0x44, virtual false, abstract: false, final false
  static inline bool SimpleMove_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> speed);

  /// @brief Method .ctor, addr 0x7026e0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_center, addr 0x7026210, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method get_center_Injected, addr 0x70262b0, size 0x44, virtual false, abstract: false, final false
  static inline void get_center_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_collisionFlags, addr 0x7025e24, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionFlags get_collisionFlags();

  /// @brief Method get_collisionFlags_Injected, addr 0x7025ea4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::CollisionFlags get_collisionFlags_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_detectCollisions, addr 0x7026a30, size 0x80, virtual false, abstract: false, final false
  inline bool get_detectCollisions();

  /// @brief Method get_detectCollisions_Injected, addr 0x7026ab0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_detectCollisions_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enableOverlapRecovery, addr 0x7026bc0, size 0x80, virtual false, abstract: false, final false
  inline bool get_enableOverlapRecovery();

  /// @brief Method get_enableOverlapRecovery_Injected, addr 0x7026c40, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enableOverlapRecovery_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_height, addr 0x7026078, size 0x80, virtual false, abstract: false, final false
  inline float_t get_height();

  /// @brief Method get_height_Injected, addr 0x70260f8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_height_Injected(::System::IntPtr _unity_self);

  /// [NativeName("IsGrounded")]
  /// @brief Method get_isGrounded, addr 0x7025d68, size 0x80, virtual false, abstract: false, final false
  inline bool get_isGrounded();

  /// @brief Method get_isGrounded_Injected, addr 0x7025de8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isGrounded_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isSupported, addr 0x7026d50, size 0x80, virtual false, abstract: false, final false
  inline bool get_isSupported();

  /// @brief Method get_isSupported_Injected, addr 0x7026dd0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isSupported_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_minMoveDistance, addr 0x7026898, size 0x80, virtual false, abstract: false, final false
  inline float_t get_minMoveDistance();

  /// @brief Method get_minMoveDistance_Injected, addr 0x7026918, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_minMoveDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_radius, addr 0x7025ee0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_radius();

  /// @brief Method get_radius_Injected, addr 0x7025f60, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_radius_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_skinWidth, addr 0x7026700, size 0x80, virtual false, abstract: false, final false
  inline float_t get_skinWidth();

  /// @brief Method get_skinWidth_Injected, addr 0x7026780, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_skinWidth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_slopeLimit, addr 0x70263d0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_slopeLimit();

  /// @brief Method get_slopeLimit_Injected, addr 0x7026450, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_slopeLimit_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stepOffset, addr 0x7026568, size 0x80, virtual false, abstract: false, final false
  inline float_t get_stepOffset();

  /// @brief Method get_stepOffset_Injected, addr 0x70265e8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_stepOffset_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocity, addr 0x7025c84, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x7025d24, size 0x44, virtual false, abstract: false, final false
  static inline void get_velocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method set_center, addr 0x70262f4, size 0x98, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method set_center_Injected, addr 0x702638c, size 0x44, virtual false, abstract: false, final false
  static inline void set_center_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_detectCollisions, addr 0x7026aec, size 0x90, virtual false, abstract: false, final false
  inline void set_detectCollisions(bool value);

  /// @brief Method set_detectCollisions_Injected, addr 0x7026b7c, size 0x44, virtual false, abstract: false, final false
  static inline void set_detectCollisions_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_enableOverlapRecovery, addr 0x7026c7c, size 0x90, virtual false, abstract: false, final false
  inline void set_enableOverlapRecovery(bool value);

  /// @brief Method set_enableOverlapRecovery_Injected, addr 0x7026d0c, size 0x44, virtual false, abstract: false, final false
  static inline void set_enableOverlapRecovery_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_height, addr 0x7026134, size 0x90, virtual false, abstract: false, final false
  inline void set_height(float_t value);

  /// @brief Method set_height_Injected, addr 0x70261c4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_height_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_minMoveDistance, addr 0x7026954, size 0x90, virtual false, abstract: false, final false
  inline void set_minMoveDistance(float_t value);

  /// @brief Method set_minMoveDistance_Injected, addr 0x70269e4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_minMoveDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_radius, addr 0x7025f9c, size 0x90, virtual false, abstract: false, final false
  inline void set_radius(float_t value);

  /// @brief Method set_radius_Injected, addr 0x702602c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_radius_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_skinWidth, addr 0x70267bc, size 0x90, virtual false, abstract: false, final false
  inline void set_skinWidth(float_t value);

  /// @brief Method set_skinWidth_Injected, addr 0x702684c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_skinWidth_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_slopeLimit, addr 0x702648c, size 0x90, virtual false, abstract: false, final false
  inline void set_slopeLimit(float_t value);

  /// @brief Method set_slopeLimit_Injected, addr 0x702651c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_slopeLimit_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_stepOffset, addr 0x7026624, size 0x90, virtual false, abstract: false, final false
  inline void set_stepOffset(float_t value);

  /// @brief Method set_stepOffset_Injected, addr 0x70266b4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_stepOffset_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CharacterController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CharacterController(CharacterController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CharacterController", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CharacterController(CharacterController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19087 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::CharacterController) == 0x18, "Size mismatch!");

} // namespace UnityEngine
