#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Collision)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct ContactPoint;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace UnityEngine {
class Collision;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Collision);
// Type: UnityEngine::Collision
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15475))
// CS Name: ::UnityEngine::Collision*
class CORDL_TYPE Collision : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Impulse, offset 0x10, size 0xc
  __declspec(property(get = __get_m_Impulse, put = __set_m_Impulse))::UnityEngine::Vector3 m_Impulse;

  /// @brief Field m_RelativeVelocity, offset 0x1c, size 0xc
  __declspec(property(get = __get_m_RelativeVelocity, put = __set_m_RelativeVelocity))::UnityEngine::Vector3 m_RelativeVelocity;

  /// @brief Field m_Body, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Body, put = __set_m_Body))::UnityEngine::Component* m_Body;

  /// @brief Field m_Collider, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Collider, put = __set_m_Collider))::UnityEngine::Collider* m_Collider;

  /// @brief Field m_ContactCount, offset 0x38, size 0x4
  __declspec(property(get = __get_m_ContactCount, put = __set_m_ContactCount)) int32_t m_ContactCount;

  /// @brief Field m_ReusedContacts, offset 0x40, size 0x8
  __declspec(property(get = __get_m_ReusedContacts, put = __set_m_ReusedContacts))::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> m_ReusedContacts;

  /// @brief Field m_LegacyContacts, offset 0x48, size 0x8
  __declspec(property(get = __get_m_LegacyContacts, put = __set_m_LegacyContacts))::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> m_LegacyContacts;

  constexpr ::UnityEngine::Vector3& __get_m_Impulse();

  constexpr ::UnityEngine::Vector3 const& __get_m_Impulse() const;

  constexpr void __set_m_Impulse(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_m_RelativeVelocity();

  constexpr ::UnityEngine::Vector3 const& __get_m_RelativeVelocity() const;

  constexpr void __set_m_RelativeVelocity(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Component*& __get_m_Body();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Component*> const& __get_m_Body() const;

  constexpr void __set_m_Body(::UnityEngine::Component* value);

  constexpr ::UnityEngine::Collider*& __get_m_Collider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> const& __get_m_Collider() const;

  constexpr void __set_m_Collider(::UnityEngine::Collider* value);

  constexpr int32_t& __get_m_ContactCount();

  constexpr int32_t const& __get_m_ContactCount() const;

  constexpr void __set_m_ContactCount(int32_t value);

  constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>& __get_m_ReusedContacts();

  constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> const& __get_m_ReusedContacts() const;

  constexpr void __set_m_ReusedContacts(::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> value);

  constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*>& __get_m_LegacyContacts();

  constexpr ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> const& __get_m_LegacyContacts() const;

  constexpr void __set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> value);

  // Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Collision(Collision&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Collision", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Collision(Collision const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Collision();

public:
  /// @brief Field m_Impulse, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Impulse;

  /// @brief Field m_RelativeVelocity, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_RelativeVelocity;

  /// @brief Field m_Body, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Component* ___m_Body;

  /// @brief Field m_Collider, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Collider* ___m_Collider;

  /// @brief Field m_ContactCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_ContactCount;

  /// @brief Field m_ReusedContacts, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> ___m_ReusedContacts;

  /// @brief Field m_LegacyContacts, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ContactPoint, ::Array<::UnityEngine::ContactPoint>*> ___m_LegacyContacts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Collision, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_Impulse) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_RelativeVelocity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_Body) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_Collider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_ContactCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_ReusedContacts) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision, ___m_LegacyContacts) == 0x48, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Collision);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collision*, "UnityEngine", "Collision");
