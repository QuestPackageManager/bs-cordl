#pragma once
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
struct Quaternion;
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
// Type: UnityEngine::ModifiableContactPair
// SizeInfo { instance_size: 104, native_size: 104, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(8993)), TypeDefinitionIndex(TypeDefinitionIndex(8996))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13902))
// CS Name: ::UnityEngine::ModifiableContactPair
struct CORDL_TYPE ModifiableContactPair {
public:
  // Declarations
  __declspec(property(get = get_colliderInstanceID)) int32_t colliderInstanceID;

  __declspec(property(get = get_otherColliderInstanceID)) int32_t otherColliderInstanceID;

  __declspec(property(get = get_bodyInstanceID)) int32_t bodyInstanceID;

  __declspec(property(get = get_otherBodyInstanceID)) int32_t otherBodyInstanceID;

  __declspec(property(get = get_contactCount)) int32_t contactCount;

  __declspec(property(get = get_massProperties, put = set_massProperties))::UnityEngine::ModifiableMassProperties massProperties;

  /// @brief Method get_colliderInstanceID, addr 0x2d299e8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_colliderInstanceID();

  /// @brief Method get_otherColliderInstanceID, addr 0x2d29a60, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_otherColliderInstanceID();

  /// @brief Method get_bodyInstanceID, addr 0x2d29a9c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_bodyInstanceID();

  /// @brief Method get_otherBodyInstanceID, addr 0x2d29b14, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_otherBodyInstanceID();

  /// @brief Method get_contactCount, addr 0x2d29b50, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_contactCount();

  /// @brief Method get_massProperties, addr 0x2d29b58, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::ModifiableMassProperties get_massProperties();

  /// @brief Method set_massProperties, addr 0x2d29bc8, size 0x4c, virtual false, abstract: false, final false
  inline void set_massProperties(::UnityEngine::ModifiableMassProperties value);

  /// @brief Method GetPoint, addr 0x2d29c14, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPoint(int32_t i);

  /// @brief Method SetPoint, addr 0x2d29c7c, size 0x3c, virtual false, abstract: false, final false
  inline void SetPoint(int32_t i, ::UnityEngine::Vector3 v);

  /// @brief Method GetNormal, addr 0x2d29cb8, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetNormal(int32_t i);

  /// @brief Method SetNormal, addr 0x2d29cd8, size 0x58, virtual false, abstract: false, final false
  inline void SetNormal(int32_t i, ::UnityEngine::Vector3 normal);

  /// @brief Method GetSeparation, addr 0x2d29d30, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetSeparation(int32_t i);

  /// @brief Method SetSeparation, addr 0x2d29d4c, size 0x28, virtual false, abstract: false, final false
  inline void SetSeparation(int32_t i, float_t separation);

  /// @brief Method GetTargetVelocity, addr 0x2d29d74, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetTargetVelocity(int32_t i);

  /// @brief Method SetTargetVelocity, addr 0x2d29d94, size 0x58, virtual false, abstract: false, final false
  inline void SetTargetVelocity(int32_t i, ::UnityEngine::Vector3 velocity);

  /// @brief Method GetBounciness, addr 0x2d29dec, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetBounciness(int32_t i);

  /// @brief Method SetBounciness, addr 0x2d29e08, size 0x44, virtual false, abstract: false, final false
  inline void SetBounciness(int32_t i, float_t bounciness);

  /// @brief Method GetStaticFriction, addr 0x2d29e4c, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetStaticFriction(int32_t i);

  /// @brief Method SetStaticFriction, addr 0x2d29e68, size 0x44, virtual false, abstract: false, final false
  inline void SetStaticFriction(int32_t i, float_t staticFriction);

  /// @brief Method GetDynamicFriction, addr 0x2d29eac, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetDynamicFriction(int32_t i);

  /// @brief Method SetDynamicFriction, addr 0x2d29ec8, size 0x44, virtual false, abstract: false, final false
  inline void SetDynamicFriction(int32_t i, float_t dynamicFriction);

  /// @brief Method GetMaxImpulse, addr 0x2d29f0c, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetMaxImpulse(int32_t i);

  /// @brief Method SetMaxImpulse, addr 0x2d29f28, size 0x44, virtual false, abstract: false, final false
  inline void SetMaxImpulse(int32_t i, float_t value);

  /// @brief Method IgnoreContact, addr 0x2d29f6c, size 0x8, virtual false, abstract: false, final false
  inline void IgnoreContact(int32_t i);

  /// @brief Method GetFaceIndex, addr 0x2d29f74, size 0xb4, virtual false, abstract: false, final false
  inline uint32_t GetFaceIndex(int32_t i);

  /// @brief Method GetContact, addr 0x2d29c34, size 0x48, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::ModifiableContact> GetContact(int32_t index);

  /// @brief Method GetContactPatch, addr 0x2d29b78, size 0x50, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::ModifiableContactPatch> GetContactPatch();

  /// @brief Method ResolveColliderInstanceID, addr 0x2d29a24, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t ResolveColliderInstanceID(void* shapePtr);

  /// @brief Method ResolveBodyInstanceID, addr 0x2d29ad8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t ResolveBodyInstanceID(void* actorPtr);

  /// @brief Method TranslateTriangleIndex, addr 0x2d2a028, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t TranslateTriangleIndex(void* shapePtr, uint32_t rawIndex);

  // Ctor Parameters [CppParam { name: "actor", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "otherActor", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "shape",
  // ty: "void*", modifiers: "", def_value: None }, CppParam { name: "otherShape", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion",
  // modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "otherRotation", ty: "::UnityEngine::Quaternion",
  // modifiers: "", def_value: None }, CppParam { name: "otherPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "numContacts", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "contacts", ty: "void*", modifiers: "", def_value: None }]
  constexpr ModifiableContactPair(void* actor, void* otherActor, void* shape, void* otherShape, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 position,
                                  ::UnityEngine::Quaternion otherRotation, ::UnityEngine::Vector3 otherPosition, int32_t numContacts, void* contacts) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ModifiableContactPair();

  /// @brief Field actor, offset: 0x0, size: 0x8, def value: None
  void* actor;

  /// @brief Field otherActor, offset: 0x8, size: 0x8, def value: None
  void* otherActor;

  /// @brief Field shape, offset: 0x10, size: 0x8, def value: None
  void* shape;

  /// @brief Field otherShape, offset: 0x18, size: 0x8, def value: None
  void* otherShape;

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
  void* contacts;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ModifiableContactPair, 0x68>, "Size mismatch!");

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

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ModifiableContactPair, "UnityEngine", "ModifiableContactPair");
