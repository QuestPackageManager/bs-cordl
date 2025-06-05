#pragma once
// IWYU pragma private; include "UnityEngine/ModifiableContactPair.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModifiableContactPair)
namespace UnityEngine {
struct ModifiableContactPatch;
}
namespace UnityEngine {
struct ModifiableContact;
}
namespace UnityEngine {
struct ModifiableMassProperties;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct ModifiableContactPair;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ModifiableContactPair);
// Dependencies System.IntPtr, UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ModifiableContactPair
struct CORDL_TYPE ModifiableContactPair {
public:
  // Declarations
  __declspec(property(get = get_bodyAngularVelocity)) ::UnityEngine::Vector3 bodyAngularVelocity;

  __declspec(property(get = get_bodyInstanceID)) int32_t bodyInstanceID;

  __declspec(property(get = get_bodyVelocity)) ::UnityEngine::Vector3 bodyVelocity;

  __declspec(property(get = get_colliderInstanceID)) int32_t colliderInstanceID;

  __declspec(property(get = get_contactCount)) int32_t contactCount;

  __declspec(property(get = get_massProperties, put = set_massProperties)) ::UnityEngine::ModifiableMassProperties massProperties;

  __declspec(property(get = get_otherBodyAngularVelocity)) ::UnityEngine::Vector3 otherBodyAngularVelocity;

  __declspec(property(get = get_otherBodyInstanceID)) int32_t otherBodyInstanceID;

  __declspec(property(get = get_otherBodyVelocity)) ::UnityEngine::Vector3 otherBodyVelocity;

  __declspec(property(get = get_otherColliderInstanceID)) int32_t otherColliderInstanceID;

  /// @brief Method GetBounciness, addr 0x4905ec8, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetBounciness(int32_t i);

  /// @brief Method GetContact, addr 0x4905d10, size 0x48, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::ModifiableContact> GetContact(int32_t index);

  /// @brief Method GetContactPatch, addr 0x4905c54, size 0x50, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::ModifiableContactPatch> GetContactPatch();

  /// @brief Method GetDynamicFriction, addr 0x4905f88, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetDynamicFriction(int32_t i);

  /// @brief Method GetFaceIndex, addr 0x4906050, size 0xf4, virtual false, abstract: false, final false
  inline uint32_t GetFaceIndex(int32_t i);

  /// @brief Method GetMaxImpulse, addr 0x4905fe8, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetMaxImpulse(int32_t i);

  /// @brief Method GetNormal, addr 0x4905d94, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetNormal(int32_t i);

  /// @brief Method GetPoint, addr 0x4905cf0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPoint(int32_t i);

  /// @brief Method GetSeparation, addr 0x4905e0c, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetSeparation(int32_t i);

  /// @brief Method GetStaticFriction, addr 0x4905f28, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetStaticFriction(int32_t i);

  /// @brief Method GetTargetVelocity, addr 0x4905e50, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetTargetVelocity(int32_t i);

  /// @brief Method IgnoreContact, addr 0x4906048, size 0x8, virtual false, abstract: false, final false
  inline void IgnoreContact(int32_t i);

  /// @brief Method SetBounciness, addr 0x4905ee4, size 0x44, virtual false, abstract: false, final false
  inline void SetBounciness(int32_t i, float_t bounciness);

  /// @brief Method SetDynamicFriction, addr 0x4905fa4, size 0x44, virtual false, abstract: false, final false
  inline void SetDynamicFriction(int32_t i, float_t dynamicFriction);

  /// @brief Method SetMaxImpulse, addr 0x4906004, size 0x44, virtual false, abstract: false, final false
  inline void SetMaxImpulse(int32_t i, float_t value);

  /// @brief Method SetNormal, addr 0x4905db4, size 0x58, virtual false, abstract: false, final false
  inline void SetNormal(int32_t i, ::UnityEngine::Vector3 normal);

  /// @brief Method SetPoint, addr 0x4905d58, size 0x3c, virtual false, abstract: false, final false
  inline void SetPoint(int32_t i, ::UnityEngine::Vector3 v);

  /// @brief Method SetSeparation, addr 0x4905e28, size 0x28, virtual false, abstract: false, final false
  inline void SetSeparation(int32_t i, float_t separation);

  /// @brief Method SetStaticFriction, addr 0x4905f44, size 0x44, virtual false, abstract: false, final false
  inline void SetStaticFriction(int32_t i, float_t staticFriction);

  /// @brief Method SetTargetVelocity, addr 0x4905e70, size 0x58, virtual false, abstract: false, final false
  inline void SetTargetVelocity(int32_t i, ::UnityEngine::Vector3 velocity);

  /// @brief Method get_bodyAngularVelocity, addr 0x4905b24, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyAngularVelocity();

  /// @brief Method get_bodyInstanceID, addr 0x49059dc, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_bodyInstanceID();

  /// @brief Method get_bodyVelocity, addr 0x4905acc, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyVelocity();

  /// @brief Method get_colliderInstanceID, addr 0x49058ec, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_colliderInstanceID();

  /// @brief Method get_contactCount, addr 0x4905c2c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_contactCount();

  /// @brief Method get_massProperties, addr 0x4905c34, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::ModifiableMassProperties get_massProperties();

  /// @brief Method get_otherBodyAngularVelocity, addr 0x4905bd4, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_otherBodyAngularVelocity();

  /// @brief Method get_otherBodyInstanceID, addr 0x4905a54, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_otherBodyInstanceID();

  /// @brief Method get_otherBodyVelocity, addr 0x4905b7c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_otherBodyVelocity();

  /// @brief Method get_otherColliderInstanceID, addr 0x4905964, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_otherColliderInstanceID();

  /// @brief Method set_massProperties, addr 0x4905ca4, size 0x4c, virtual false, abstract: false, final false
  inline void set_massProperties(::UnityEngine::ModifiableMassProperties value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ModifiableContactPair();

  // Ctor Parameters [CppParam { name: "actor", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "otherActor", ty: "::System::IntPtr", modifiers: "", def_value: None },
  // CppParam { name: "shape", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "otherShape", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name:
  // "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name:
  // "otherRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "otherPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam {
  // name: "numContacts", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "contacts", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr ModifiableContactPair(::System::IntPtr actor, ::System::IntPtr otherActor, ::System::IntPtr shape, ::System::IntPtr otherShape, ::UnityEngine::Quaternion rotation,
                                  ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion otherRotation, ::UnityEngine::Vector3 otherPosition, int32_t numContacts,
                                  ::System::IntPtr contacts) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15747 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field actor, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr actor;

  /// @brief Field otherActor, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr otherActor;

  /// @brief Field shape, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr shape;

  /// @brief Field otherShape, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr otherShape;

  /// @brief Field rotation, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief Field position, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field otherRotation, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Quaternion otherRotation;

  /// @brief Field otherPosition, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 otherPosition;

  /// @brief Field numContacts, offset: 0x58, size: 0x4, def value: None
  int32_t numContacts;

  /// @brief Field contacts, offset: 0x60, size: 0x8, def value: None
  ::System::IntPtr contacts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ModifiableContactPair, actor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, otherActor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, shape) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, otherShape) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, rotation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, position) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, otherRotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, otherPosition) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, numContacts) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ModifiableContactPair, contacts) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ModifiableContactPair, 0x68>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ModifiableContactPair, "UnityEngine", "ModifiableContactPair");
