#pragma once
// IWYU pragma private; include "System/Security/Principal/GenericPrincipal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Claims/zzzz__ClaimsPrincipal_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GenericPrincipal)
namespace System::Security::Principal {
class IIdentity;
}
// Forward declare root types
namespace System::Security::Principal {
class GenericPrincipal;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::GenericPrincipal);
// Dependencies System.Security.Claims.ClaimsPrincipal
namespace System::Security::Principal {
// Is value type: false
// CS Name: System.Security.Principal.GenericPrincipal
class CORDL_TYPE GenericPrincipal : public ::System::Security::Claims::ClaimsPrincipal {
public:
  // Declarations
  /// @brief Field m_identity, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_identity, put = __cordl_internal_set_m_identity)) ::System::Security::Principal::IIdentity* m_identity;

  /// @brief Field m_roles, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_roles, put = __cordl_internal_set_m_roles)) ::ArrayW<::StringW, ::Array<::StringW>*> m_roles;

  static inline ::System::Security::Principal::GenericPrincipal* New_ctor(::System::Security::Principal::IIdentity* identity, ::ArrayW<::StringW, ::Array<::StringW>*> roles);

  constexpr ::System::Security::Principal::IIdentity* const& __cordl_internal_get_m_identity() const;

  constexpr ::System::Security::Principal::IIdentity*& __cordl_internal_get_m_identity();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_roles() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_roles();

  constexpr void __cordl_internal_set_m_identity(::System::Security::Principal::IIdentity* value);

  constexpr void __cordl_internal_set_m_roles(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x3cb92d8, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Principal::IIdentity* identity, ::ArrayW<::StringW, ::Array<::StringW>*> roles);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericPrincipal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericPrincipal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericPrincipal(GenericPrincipal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericPrincipal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericPrincipal(GenericPrincipal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2997 };

  /// @brief Field m_identity, offset: 0x28, size: 0x8, def value: None
  ::System::Security::Principal::IIdentity* ___m_identity;

  /// @brief Field m_roles, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_roles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Principal::GenericPrincipal, ___m_identity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Principal::GenericPrincipal, ___m_roles) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Principal::GenericPrincipal, 0x38>, "Size mismatch!");

} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::GenericPrincipal);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::GenericPrincipal*, "System.Security.Principal", "GenericPrincipal");
