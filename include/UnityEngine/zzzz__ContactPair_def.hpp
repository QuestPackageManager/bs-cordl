#pragma once
// IWYU pragma private; include "UnityEngine/ContactPair.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__CollisionPairEventFlags_def.hpp"
#include "UnityEngine/zzzz__CollisionPairFlags_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContactPair)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct ContactPairPoint;
}
namespace UnityEngine {
struct ContactPoint;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct ContactPair;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ContactPair);
// Dependencies System.IntPtr, UnityEngine.CollisionPairEventFlags, UnityEngine.CollisionPairFlags, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ContactPair
struct CORDL_TYPE ContactPair {
public:
  // Declarations
  __declspec(property(get = get_Collider)) ::UnityW<::UnityEngine::Collider> Collider;

  __declspec(property(get = get_ColliderInstanceID)) int32_t ColliderInstanceID;

  __declspec(property(get = get_ContactCount)) int32_t ContactCount;

  __declspec(property(get = get_HasRemovedCollider)) bool HasRemovedCollider;

  __declspec(property(get = get_ImpulseSum)) ::UnityEngine::Vector3 ImpulseSum;

  __declspec(property(get = get_IsCollisionEnter)) bool IsCollisionEnter;

  __declspec(property(get = get_IsCollisionExit)) bool IsCollisionExit;

  __declspec(property(get = get_IsCollisionStay)) bool IsCollisionStay;

  __declspec(property(get = get_OtherCollider)) ::UnityW<::UnityEngine::Collider> OtherCollider;

  __declspec(property(get = get_OtherColliderInstanceID)) int32_t OtherColliderInstanceID;

  /// @brief Method CopyToNativeArray, addr 0x491d2c8, size 0x6c, virtual false, abstract: false, final false
  inline void CopyToNativeArray(::Unity::Collections::NativeArray_1<::UnityEngine::ContactPairPoint> buffer);

  /// @brief Method ExtractContacts, addr 0x490295c, size 0x54, virtual false, abstract: false, final false
  inline int32_t ExtractContacts(::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>* managedContainer, bool flipped);

  /// @brief Method ExtractContactsArray, addr 0x49022fc, size 0x54, virtual false, abstract: false, final false
  inline int32_t ExtractContactsArray(::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> managedContainer, bool flipped);

  /// @brief Method ExtractContactsArray_Injected, addr 0x491d274, size 0x54, virtual false, abstract: false, final false
  static inline int32_t ExtractContactsArray_Injected(::ByRef<::UnityEngine::ContactPair> _unity_self, ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> managedContainer,
                                                      bool flipped);

  /// @brief Method ExtractContacts_Injected, addr 0x491d220, size 0x54, virtual false, abstract: false, final false
  static inline int32_t ExtractContacts_Injected(::ByRef<::UnityEngine::ContactPair> _unity_self, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>* managedContainer, bool flipped);

  /// @brief Method GetContactPoint, addr 0x491d334, size 0x4, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::ContactPairPoint> GetContactPoint(int32_t index);

  /// @brief Method GetContactPointFaceIndex, addr 0x491d338, size 0xd8, virtual false, abstract: false, final false
  inline uint32_t GetContactPointFaceIndex(int32_t contactIndex);

  /// @brief Method GetContactPoint_Internal, addr 0x4902654, size 0x80, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::ContactPairPoint> GetContactPoint_Internal(int32_t index);

  /// @brief Method get_Collider, addr 0x4902088, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_Collider();

  /// @brief Method get_ColliderInstanceID, addr 0x491d1fc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ColliderInstanceID();

  /// @brief Method get_ContactCount, addr 0x491d20c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ContactCount();

  /// @brief Method get_HasRemovedCollider, addr 0x49119cc, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasRemovedCollider();

  /// @brief Method get_ImpulseSum, addr 0x491d214, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_ImpulseSum();

  /// @brief Method get_IsCollisionEnter, addr 0x49119dc, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsCollisionEnter();

  /// @brief Method get_IsCollisionExit, addr 0x4911b18, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsCollisionExit();

  /// @brief Method get_IsCollisionStay, addr 0x4911b0c, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsCollisionStay();

  /// @brief Method get_OtherCollider, addr 0x4901ffc, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_OtherCollider();

  /// @brief Method get_OtherColliderInstanceID, addr 0x491d204, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_OtherColliderInstanceID();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContactPair();

  // Ctor Parameters [CppParam { name: "m_ColliderID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OtherColliderID", ty: "int32_t", modifiers: "", def_value: None }, CppParam
  // { name: "m_StartPtr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_NbPoints", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty:
  // "::UnityEngine::CollisionPairFlags", modifiers: "", def_value: None }, CppParam { name: "m_Events", ty: "::UnityEngine::CollisionPairEventFlags", modifiers: "", def_value: None }, CppParam {
  // name: "m_ImpulseSum", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr ContactPair(int32_t m_ColliderID, int32_t m_OtherColliderID, ::System::IntPtr m_StartPtr, uint32_t m_NbPoints, ::UnityEngine::CollisionPairFlags m_Flags,
                        ::UnityEngine::CollisionPairEventFlags m_Events, ::UnityEngine::Vector3 m_ImpulseSum) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15774 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field c_InvalidFaceIndex offset 0xffffffff size 0x4
  static constexpr uint32_t c_InvalidFaceIndex{ static_cast<uint32_t>(0xffffffffu) };

  /// @brief Field m_ColliderID, offset: 0x0, size: 0x4, def value: None
  int32_t m_ColliderID;

  /// @brief Field m_OtherColliderID, offset: 0x4, size: 0x4, def value: None
  int32_t m_OtherColliderID;

  /// @brief Field m_StartPtr, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr m_StartPtr;

  /// @brief Field m_NbPoints, offset: 0x10, size: 0x4, def value: None
  uint32_t m_NbPoints;

  /// @brief Field m_Flags, offset: 0x14, size: 0x2, def value: None
  ::UnityEngine::CollisionPairFlags m_Flags;

  /// @brief Field m_Events, offset: 0x16, size: 0x2, def value: None
  ::UnityEngine::CollisionPairEventFlags m_Events;

  /// @brief Field m_ImpulseSum, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_ImpulseSum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ContactPair, m_ColliderID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPair, m_OtherColliderID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPair, m_StartPtr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPair, m_NbPoints) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPair, m_Flags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPair, m_Events) == 0x16, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContactPair, m_ImpulseSum) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ContactPair, 0x28>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContactPair, "UnityEngine", "ContactPair");
