#pragma once
// IWYU pragma private; include "UnityEngine/Collision.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_def.hpp"
#include "UnityEngine/zzzz__ContactPair_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Collision)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class ArticulationBody;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct ContactPairHeader;
}
namespace UnityEngine {
struct ContactPair;
}
namespace UnityEngine {
struct ContactPoint;
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
class Collision;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Collision);
// Dependencies System.Object, UnityEngine.ContactPair, UnityEngine.ContactPairHeader
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Collision
class CORDL_TYPE Collision : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Flipped, put = set_Flipped)) bool Flipped;

  __declspec(property(get = get_articulationBody)) ::UnityW<::UnityEngine::ArticulationBody> articulationBody;

  __declspec(property(get = get_body)) ::UnityW<::UnityEngine::Component> body;

  __declspec(property(get = get_collider)) ::UnityW<::UnityEngine::Collider> collider;

  __declspec(property(get = get_contactCount)) int32_t contactCount;

  __declspec(property(get = get_contacts)) ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> contacts;

  __declspec(property(get = get_frictionForceSum)) ::UnityEngine::Vector3 frictionForceSum;

  __declspec(property(get = get_gameObject)) ::UnityW<::UnityEngine::GameObject> gameObject;

  __declspec(property(get = get_impactForceSum)) ::UnityEngine::Vector3 impactForceSum;

  __declspec(property(get = get_impulse)) ::UnityEngine::Vector3 impulse;

  /// @brief Field m_Flipped, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Flipped, put = __cordl_internal_set_m_Flipped)) bool m_Flipped;

  /// @brief Field m_Header, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get_m_Header, put = __cordl_internal_set_m_Header)) ::UnityEngine::ContactPairHeader m_Header;

  /// @brief Field m_LegacyContacts, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LegacyContacts, put = __cordl_internal_set_m_LegacyContacts)) ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>
      m_LegacyContacts;

  /// @brief Field m_Pair, offset 0x38, size 0x28
  __declspec(property(get = __cordl_internal_get_m_Pair, put = __cordl_internal_set_m_Pair)) ::UnityEngine::ContactPair m_Pair;

  __declspec(property(get = get_other)) ::UnityW<::UnityEngine::Component> other;

  __declspec(property(get = get_relativeVelocity)) ::UnityEngine::Vector3 relativeVelocity;

  __declspec(property(get = get_rigidbody)) ::UnityW<::UnityEngine::Rigidbody> rigidbody;

  __declspec(property(get = get_transform)) ::UnityW<::UnityEngine::Transform> transform;

  /// @brief Method GetContact, addr 0x48f0070, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::ContactPoint GetContact(int32_t index);

  /// @brief Method GetContacts, addr 0x48f02e0, size 0xe4, virtual false, abstract: false, final false
  inline int32_t GetContacts(::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> contacts);

  /// @brief Method GetContacts, addr 0x48f03c4, size 0x178, virtual false, abstract: false, final false
  inline int32_t GetContacts(::System::Collections::Generic::List_1<::UnityEngine::ContactPoint>* contacts);

  /// @brief Method GetEnumerator, addr 0x48f0590, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::UnityEngine::Collision* New_ctor();

  static inline ::UnityEngine::Collision* New_ctor(::ByRef<::UnityEngine::ContactPairHeader> header, ::ByRef<::UnityEngine::ContactPair> pair, bool flipped);

  /// @brief Method Reuse, addr 0x48f0040, size 0x30, virtual false, abstract: false, final false
  inline void Reuse(::ByRef<::UnityEngine::ContactPairHeader> header, ::ByRef<::UnityEngine::ContactPair> pair);

  constexpr bool const& __cordl_internal_get_m_Flipped() const;

  constexpr bool& __cordl_internal_get_m_Flipped();

  constexpr ::UnityEngine::ContactPairHeader const& __cordl_internal_get_m_Header() const;

  constexpr ::UnityEngine::ContactPairHeader& __cordl_internal_get_m_Header();

  constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> const& __cordl_internal_get_m_LegacyContacts() const;

  constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>& __cordl_internal_get_m_LegacyContacts();

  constexpr ::UnityEngine::ContactPair const& __cordl_internal_get_m_Pair() const;

  constexpr ::UnityEngine::ContactPair& __cordl_internal_get_m_Pair();

  constexpr void __cordl_internal_set_m_Flipped(bool value);

  constexpr void __cordl_internal_set_m_Header(::UnityEngine::ContactPairHeader value);

  constexpr void __cordl_internal_set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> value);

  constexpr void __cordl_internal_set_m_Pair(::UnityEngine::ContactPair value);

  /// @brief Method .ctor, addr 0x48eff30, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x48eff64, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::UnityEngine::ContactPairHeader> header, ::ByRef<::UnityEngine::ContactPair> pair, bool flipped);

  /// @brief Method get_Flipped, addr 0x48efe1c, size 0x8, virtual false, abstract: false, final false
  inline bool get_Flipped();

  /// @brief Method get_articulationBody, addr 0x48efa58, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ArticulationBody> get_articulationBody();

  /// @brief Method get_body, addr 0x48efa44, size 0x14, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> get_body();

  /// @brief Method get_collider, addr 0x48efbc8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_collider();

  /// @brief Method get_contactCount, addr 0x48efe30, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_contactCount();

  /// @brief Method get_contacts, addr 0x48efe38, size 0xa4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> get_contacts();

  /// @brief Method get_frictionForceSum, addr 0x48f05f0, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_frictionForceSum();

  /// @brief Method get_gameObject, addr 0x48efd88, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_gameObject();

  /// @brief Method get_impactForceSum, addr 0x48f05ac, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_impactForceSum();

  /// @brief Method get_impulse, addr 0x48ef98c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_impulse();

  /// @brief Method get_other, addr 0x48f0634, size 0x88, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Component> get_other();

  /// @brief Method get_relativeVelocity, addr 0x48ef998, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_relativeVelocity();

  /// @brief Method get_rigidbody, addr 0x48ef9c4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rigidbody> get_rigidbody();

  /// @brief Method get_transform, addr 0x48efcf4, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_transform();

  /// @brief Method set_Flipped, addr 0x48efe24, size 0xc, virtual false, abstract: false, final false
  inline void set_Flipped(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Collision();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Collision(Collision&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Collision(Collision const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15728 };

  /// @brief Field m_Header, offset: 0x10, size: 0x28, def value: None
  ::UnityEngine::ContactPairHeader ___m_Header;

  /// @brief Field m_Pair, offset: 0x38, size: 0x28, def value: None
  ::UnityEngine::ContactPair ___m_Pair;

  /// @brief Field m_Flipped, offset: 0x60, size: 0x1, def value: None
  bool ___m_Flipped;

  /// @brief Field m_LegacyContacts, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> ___m_LegacyContacts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Collision, ___m_Header) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_Pair) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_Flipped) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_LegacyContacts) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Collision, 0x70>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Collision);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collision*, "UnityEngine", "Collision");
