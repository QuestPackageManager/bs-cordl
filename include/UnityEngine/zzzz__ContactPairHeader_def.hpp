#pragma once
// IWYU pragma private; include "UnityEngine/ContactPairHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__CollisionPairHeaderFlags_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContactPairHeader)
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct ContactPair;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct ContactPairHeader;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ContactPairHeader);
DEFINE_IL2CPP_CLASS(::UnityEngine::ContactPairHeader, "UnityEngine", "ContactPairHeader");
// [IsReadOnly]
// [UsedByNativeCode]
// Dependencies System.IntPtr, UnityEngine.CollisionPairHeaderFlags, UnityEngine.EntityId, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ContactPairHeader
struct CORDL_TYPE ContactPairHeader {
public:
  // Declarations
  /// @brief [Obsolete("Please use ContactPairHeader.body instead. (UnityUpgradable) -> body", false)]
  __declspec(property(get = get_Body)) ::UnityW<::UnityEngine::Component> Body;

  /// @brief [Obsolete("Please use ContactPairHeader.bodyInstanceID instead. (UnityUpgradable) -> bodyInstanceID", false)]
  __declspec(property(get = get_BodyInstanceID)) int32_t BodyInstanceID;

  /// @brief [Obsolete("Please use ContactPairHeader.otherBody instead. (UnityUpgradable) -> otherBody", false)]
  __declspec(property(get = get_OtherBody)) ::UnityW<::UnityEngine::Component> OtherBody;

  /// @brief [Obsolete("Please use ContactPairHeader.otherBodyInstanceID instead. (UnityUpgradable) -> otherBodyInstanceID", false)]
  __declspec(property(get = get_OtherBodyInstanceID)) int32_t OtherBodyInstanceID;

  /// @brief [Obsolete("Please use ContactPairHeader.pairCount instead. (UnityUpgradable) -> pairCount", false)]
  __declspec(property(get = get_PairCount)) int32_t PairCount;

  __declspec(property(get = get_body)) ::UnityW<::UnityEngine::Component> body;

  __declspec(property(get = get_bodyAngularVelocity)) ::UnityEngine::Vector3 bodyAngularVelocity;

  __declspec(property(get = get_bodyEntityId)) ::UnityEngine::EntityId bodyEntityId;

  /// @brief [Obsolete("bodyInstanceID is deprecated, use bodyEntityId instead.", false)]
  __declspec(property(get = get_bodyInstanceID)) int32_t bodyInstanceID;

  __declspec(property(get = get_bodyLinearVelocity)) ::UnityEngine::Vector3 bodyLinearVelocity;

  __declspec(property(get = get_hasRemovedBody)) bool hasRemovedBody;

  __declspec(property(get = get_otherBody)) ::UnityW<::UnityEngine::Component> otherBody;

  __declspec(property(get = get_otherBodyAngularVelocity)) ::UnityEngine::Vector3 otherBodyAngularVelocity;

  __declspec(property(get = get_otherBodyEntityId)) ::UnityEngine::EntityId otherBodyEntityId;

  /// @brief [Obsolete("otherBodyInstanceID is deprecated, use otherBodyEntityId instead.", false)]
  __declspec(property(get = get_otherBodyInstanceID)) int32_t otherBodyInstanceID;

  __declspec(property(get = get_otherBodyLinearVelocity)) ::UnityEngine::Vector3 otherBodyLinearVelocity;

  __declspec(property(get = get_pairCount)) int32_t pairCount;

  /// @brief Method GetContactPair, addr 0x6ffb060, size 0x4, virtual false, abstract: false, final false
  inline ::by_ref<::UnityEngine::ContactPair> GetContactPair(int32_t index);

  /// @brief Method GetContactPair_Internal, addr 0x6ffe8e8, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::ContactPair* GetContactPair_Internal(int32_t index);

  /// @brief Method get_Body, addr 0x6ffe968, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> get_Body();

  /// @brief Method get_BodyInstanceID, addr 0x6ffe958, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_BodyInstanceID();

  /// @brief Method get_OtherBody, addr 0x6ffe96c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> get_OtherBody();

  /// @brief Method get_OtherBodyInstanceID, addr 0x6ffe960, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_OtherBodyInstanceID();

  /// @brief Method get_PairCount, addr 0x6ffe970, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PairCount();

  /// @brief Method get_body, addr 0x6fdd11c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> get_body();

  /// @brief Method get_bodyAngularVelocity, addr 0x6ffe8bc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyAngularVelocity();

  /// @brief Method get_bodyEntityId, addr 0x6ffe8a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EntityId get_bodyEntityId();

  /// @brief Method get_bodyInstanceID, addr 0x6ffe890, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_bodyInstanceID();

  /// @brief Method get_bodyLinearVelocity, addr 0x6ffe8b0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_bodyLinearVelocity();

  /// @brief Method get_hasRemovedBody, addr 0x6ffb050, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasRemovedBody();

  /// @brief Method get_otherBody, addr 0x6fdd178, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> get_otherBody();

  /// @brief Method get_otherBodyAngularVelocity, addr 0x6ffe8d4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_otherBodyAngularVelocity();

  /// @brief Method get_otherBodyEntityId, addr 0x6ffe8a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EntityId get_otherBodyEntityId();

  /// @brief Method get_otherBodyInstanceID, addr 0x6ffe898, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_otherBodyInstanceID();

  /// @brief Method get_otherBodyLinearVelocity, addr 0x6ffe8c8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_otherBodyLinearVelocity();

  /// @brief Method get_pairCount, addr 0x6ffe8e0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_pairCount();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContactPairHeader();

  // Ctor Parameters [CppParam { name: "m_BodyID", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OtherBodyID", ty: "::UnityEngine::EntityId",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartPtr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_NbPairs", ty:
  // "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::CollisionPairHeaderFlags", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "m_ThisBodyLinearVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ThisBodyAngularVelocity", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OtherBodyLinearVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_OtherBodyAngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
  constexpr ContactPairHeader(::UnityEngine::EntityId m_BodyID, ::UnityEngine::EntityId m_OtherBodyID, ::System::IntPtr m_StartPtr, uint32_t m_NbPairs, ::UnityEngine::CollisionPairHeaderFlags m_Flags,
                              ::UnityEngine::Vector3 m_ThisBodyLinearVelocity, ::UnityEngine::Vector3 m_ThisBodyAngularVelocity, ::UnityEngine::Vector3 m_OtherBodyLinearVelocity,
                              ::UnityEngine::Vector3 m_OtherBodyAngularVelocity) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19079 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field m_BodyID, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::EntityId m_BodyID;

  /// @brief Field m_OtherBodyID, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::EntityId m_OtherBodyID;

  /// @brief Field m_StartPtr, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr m_StartPtr;

  /// @brief Field m_NbPairs, offset: 0x10, size: 0x4, def value: None
  uint32_t m_NbPairs;

  /// @brief Field m_Flags, offset: 0x14, size: 0x2, def value: None
  ::UnityEngine::CollisionPairHeaderFlags m_Flags;

  /// @brief Field m_ThisBodyLinearVelocity, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_ThisBodyLinearVelocity;

  /// @brief Field m_ThisBodyAngularVelocity, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_ThisBodyAngularVelocity;

  /// @brief Field m_OtherBodyLinearVelocity, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_OtherBodyLinearVelocity;

  /// @brief Field m_OtherBodyAngularVelocity, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_OtherBodyAngularVelocity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ContactPairHeader, m_BodyID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_OtherBodyID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_StartPtr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_NbPairs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_Flags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_ThisBodyLinearVelocity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_ThisBodyAngularVelocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_OtherBodyLinearVelocity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPairHeader, m_OtherBodyAngularVelocity) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ContactPairHeader) == 0x48, "Size mismatch!");

} // namespace UnityEngine
