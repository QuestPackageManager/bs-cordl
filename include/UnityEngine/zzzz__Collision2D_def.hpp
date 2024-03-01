#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Collision2D)
namespace UnityEngine {
struct ContactPoint2D;
}
// Forward declare root types
namespace UnityEngine {
class Collision2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Collision2D);
// Type: UnityEngine::Collision2D
// SizeInfo { instance_size: 64, native_size: 48, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Collision2D*
class CORDL_TYPE Collision2D : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Collider, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Collider, put = __cordl_internal_set_m_Collider)) int32_t m_Collider;

  /// @brief Field m_ContactCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ContactCount, put = __cordl_internal_set_m_ContactCount)) int32_t m_ContactCount;

  /// @brief Field m_Enabled, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Enabled, put = __cordl_internal_set_m_Enabled)) int32_t m_Enabled;

  /// @brief Field m_LegacyContacts, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LegacyContacts,
                      put = __cordl_internal_set_m_LegacyContacts))::ArrayW<::UnityEngine::ContactPoint2D, ::Array<::UnityEngine::ContactPoint2D>*> m_LegacyContacts;

  /// @brief Field m_OtherCollider, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OtherCollider, put = __cordl_internal_set_m_OtherCollider)) int32_t m_OtherCollider;

  /// @brief Field m_OtherRigidbody, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OtherRigidbody, put = __cordl_internal_set_m_OtherRigidbody)) int32_t m_OtherRigidbody;

  /// @brief Field m_RelativeVelocity, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RelativeVelocity, put = __cordl_internal_set_m_RelativeVelocity))::UnityEngine::Vector2 m_RelativeVelocity;

  /// @brief Field m_ReusedContacts, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReusedContacts,
                      put = __cordl_internal_set_m_ReusedContacts))::ArrayW<::UnityEngine::ContactPoint2D, ::Array<::UnityEngine::ContactPoint2D>*> m_ReusedContacts;

  /// @brief Field m_Rigidbody, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Rigidbody, put = __cordl_internal_set_m_Rigidbody)) int32_t m_Rigidbody;

  constexpr int32_t const& __cordl_internal_get_m_Collider() const;

  constexpr int32_t& __cordl_internal_get_m_Collider();

  constexpr int32_t const& __cordl_internal_get_m_ContactCount() const;

  constexpr int32_t& __cordl_internal_get_m_ContactCount();

  constexpr int32_t const& __cordl_internal_get_m_Enabled() const;

  constexpr int32_t& __cordl_internal_get_m_Enabled();

  constexpr ::ArrayW<::UnityEngine::ContactPoint2D, ::Array<::UnityEngine::ContactPoint2D>*> const& __cordl_internal_get_m_LegacyContacts() const;

  constexpr ::ArrayW<::UnityEngine::ContactPoint2D, ::Array<::UnityEngine::ContactPoint2D>*>& __cordl_internal_get_m_LegacyContacts();

  constexpr int32_t const& __cordl_internal_get_m_OtherCollider() const;

  constexpr int32_t& __cordl_internal_get_m_OtherCollider();

  constexpr int32_t const& __cordl_internal_get_m_OtherRigidbody() const;

  constexpr int32_t& __cordl_internal_get_m_OtherRigidbody();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_RelativeVelocity() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_RelativeVelocity();

  constexpr ::ArrayW<::UnityEngine::ContactPoint2D, ::Array<::UnityEngine::ContactPoint2D>*> const& __cordl_internal_get_m_ReusedContacts() const;

  constexpr ::ArrayW<::UnityEngine::ContactPoint2D, ::Array<::UnityEngine::ContactPoint2D>*>& __cordl_internal_get_m_ReusedContacts();

  constexpr int32_t const& __cordl_internal_get_m_Rigidbody() const;

  constexpr int32_t& __cordl_internal_get_m_Rigidbody();

  constexpr void __cordl_internal_set_m_Collider(int32_t value);

  constexpr void __cordl_internal_set_m_ContactCount(int32_t value);

  constexpr void __cordl_internal_set_m_Enabled(int32_t value);

  constexpr void __cordl_internal_set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint2D, ::Array<::UnityEngine::ContactPoint2D>*> value);

  constexpr void __cordl_internal_set_m_OtherCollider(int32_t value);

  constexpr void __cordl_internal_set_m_OtherRigidbody(int32_t value);

  constexpr void __cordl_internal_set_m_RelativeVelocity(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_ReusedContacts(::ArrayW<::UnityEngine::ContactPoint2D, ::Array<::UnityEngine::ContactPoint2D>*> value);

  constexpr void __cordl_internal_set_m_Rigidbody(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Collision2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Collision2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Collision2D(Collision2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Collision2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Collision2D(Collision2D const&) = delete;

  /// @brief Field m_Collider, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Collider;

  /// @brief Field m_OtherCollider, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_OtherCollider;

  /// @brief Field m_Rigidbody, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Rigidbody;

  /// @brief Field m_OtherRigidbody, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_OtherRigidbody;

  /// @brief Field m_RelativeVelocity, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_RelativeVelocity;

  /// @brief Field m_Enabled, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_Enabled;

  /// @brief Field m_ContactCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ___m_ContactCount;

  /// @brief Field m_ReusedContacts, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ContactPoint2D, ::Array<::UnityEngine::ContactPoint2D>*> ___m_ReusedContacts;

  /// @brief Field m_LegacyContacts, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::ContactPoint2D, ::Array<::UnityEngine::ContactPoint2D>*> ___m_LegacyContacts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Collision2D, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Collision2D, ___m_Collider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision2D, ___m_OtherCollider) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision2D, ___m_Rigidbody) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision2D, ___m_OtherRigidbody) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision2D, ___m_RelativeVelocity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision2D, ___m_Enabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision2D, ___m_ContactCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision2D, ___m_ReusedContacts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Collision2D, ___m_LegacyContacts) == 0x38, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Collision2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Collision2D*, "UnityEngine", "Collision2D");
