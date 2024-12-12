#pragma once
// IWYU pragma private; include "System/Security/AccessControl/AuthorizationRule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthorizationRule)
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
namespace System::Security::Principal {
class IdentityReference;
}
// Forward declare root types
namespace System::Security::AccessControl {
class AuthorizationRule;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::AuthorizationRule);
// Dependencies System.Object, System.Security.AccessControl.InheritanceFlags, System.Security.AccessControl.PropagationFlags
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.AuthorizationRule
class CORDL_TYPE AuthorizationRule : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AccessMask)) int32_t AccessMask;

  /// @brief Field accessMask, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_accessMask, put = __cordl_internal_set_accessMask)) int32_t accessMask;

  /// @brief Field identity, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_identity, put = __cordl_internal_set_identity)) ::System::Security::Principal::IdentityReference* identity;

  /// @brief Field inheritanceFlags, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_inheritanceFlags, put = __cordl_internal_set_inheritanceFlags)) ::System::Security::AccessControl::InheritanceFlags inheritanceFlags;

  /// @brief Field isInherited, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_isInherited, put = __cordl_internal_set_isInherited)) bool isInherited;

  /// @brief Field propagationFlags, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_propagationFlags, put = __cordl_internal_set_propagationFlags)) ::System::Security::AccessControl::PropagationFlags propagationFlags;

  static inline ::System::Security::AccessControl::AuthorizationRule* New_ctor(::System::Security::Principal::IdentityReference* identity, int32_t accessMask, bool isInherited,
                                                                               ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                               ::System::Security::AccessControl::PropagationFlags propagationFlags);

  constexpr int32_t const& __cordl_internal_get_accessMask() const;

  constexpr int32_t& __cordl_internal_get_accessMask();

  constexpr ::System::Security::Principal::IdentityReference* const& __cordl_internal_get_identity() const;

  constexpr ::System::Security::Principal::IdentityReference*& __cordl_internal_get_identity();

  constexpr ::System::Security::AccessControl::InheritanceFlags const& __cordl_internal_get_inheritanceFlags() const;

  constexpr ::System::Security::AccessControl::InheritanceFlags& __cordl_internal_get_inheritanceFlags();

  constexpr bool const& __cordl_internal_get_isInherited() const;

  constexpr bool& __cordl_internal_get_isInherited();

  constexpr ::System::Security::AccessControl::PropagationFlags const& __cordl_internal_get_propagationFlags() const;

  constexpr ::System::Security::AccessControl::PropagationFlags& __cordl_internal_get_propagationFlags();

  constexpr void __cordl_internal_set_accessMask(int32_t value);

  constexpr void __cordl_internal_set_identity(::System::Security::Principal::IdentityReference* value);

  constexpr void __cordl_internal_set_inheritanceFlags(::System::Security::AccessControl::InheritanceFlags value);

  constexpr void __cordl_internal_set_isInherited(bool value);

  constexpr void __cordl_internal_set_propagationFlags(::System::Security::AccessControl::PropagationFlags value);

  /// @brief Method .ctor, addr 0x3cc1488, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Principal::IdentityReference* identity, int32_t accessMask, bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                    ::System::Security::AccessControl::PropagationFlags propagationFlags);

  /// @brief Method get_AccessMask, addr 0x3cc16e0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_AccessMask();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthorizationRule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthorizationRule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthorizationRule(AuthorizationRule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthorizationRule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthorizationRule(AuthorizationRule const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3020 };

  /// @brief Field identity, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Principal::IdentityReference* ___identity;

  /// @brief Field accessMask, offset: 0x18, size: 0x4, def value: None
  int32_t ___accessMask;

  /// @brief Field isInherited, offset: 0x1c, size: 0x1, def value: None
  bool ___isInherited;

  /// @brief Field inheritanceFlags, offset: 0x20, size: 0x4, def value: None
  ::System::Security::AccessControl::InheritanceFlags ___inheritanceFlags;

  /// @brief Field propagationFlags, offset: 0x24, size: 0x4, def value: None
  ::System::Security::AccessControl::PropagationFlags ___propagationFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::AccessControl::AuthorizationRule, ___identity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::AuthorizationRule, ___accessMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::AuthorizationRule, ___isInherited) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::AuthorizationRule, ___inheritanceFlags) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::AuthorizationRule, ___propagationFlags) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AuthorizationRule, 0x28>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::AuthorizationRule);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AuthorizationRule*, "System.Security.AccessControl", "AuthorizationRule");
