#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Claims/zzzz__ClaimsPrincipal_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Security.Principal::GenericPrincipal
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3011))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2998))
// CS Name: ::System.Security.Principal::GenericPrincipal*
class CORDL_TYPE GenericPrincipal : public ::System::Security::Claims::ClaimsPrincipal {
public:
  // Declarations
  /// @brief Field m_identity, offset 0x28, size 0x8
  __declspec(property(get = __get_m_identity, put = __set_m_identity))::System::Security::Principal::IIdentity* m_identity;

  /// @brief Field m_roles, offset 0x30, size 0x8
  __declspec(property(get = __get_m_roles, put = __set_m_roles))::ArrayW<::StringW, ::Array<::StringW>*> m_roles;

  constexpr ::System::Security::Principal::IIdentity*& __get_m_identity();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::IIdentity*> const& __get_m_identity() const;

  constexpr void __set_m_identity(::System::Security::Principal::IIdentity* value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_m_roles();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_m_roles() const;

  constexpr void __set_m_roles(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::System::Security::Principal::GenericPrincipal* New_ctor(::System::Security::Principal::IIdentity* identity, ::ArrayW<::StringW, ::Array<::StringW>*> roles);

  /// @brief Method .ctor addr 0x2476bb8 size 0x168 virtual false final false
  inline void _ctor(::System::Security::Principal::IIdentity* identity, ::ArrayW<::StringW, ::Array<::StringW>*> roles);

  // Ctor Parameters [CppParam { name: "", ty: "GenericPrincipal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericPrincipal(GenericPrincipal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericPrincipal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericPrincipal(GenericPrincipal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericPrincipal();

public:
  /// @brief Field m_identity, offset: 0x28, size: 0x8, def value: None
  ::System::Security::Principal::IIdentity* ___m_identity;

  /// @brief Field m_roles, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_roles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::GenericPrincipal, 0x38>, "Size mismatch!");

} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::GenericPrincipal);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::GenericPrincipal*, "System.Security.Principal", "GenericPrincipal");
