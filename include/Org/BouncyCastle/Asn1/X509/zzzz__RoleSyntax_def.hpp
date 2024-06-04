#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/RoleSyntax.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RoleSyntax)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class RoleSyntax;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::RoleSyntax);
// Type: Org.BouncyCastle.Asn1.X509::RoleSyntax
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509::RoleSyntax*
class CORDL_TYPE RoleSyntax : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_RoleAuthority))::Org::BouncyCastle::Asn1::X509::GeneralNames* RoleAuthority;

  __declspec(property(get = get_RoleName))::Org::BouncyCastle::Asn1::X509::GeneralName* RoleName;

  /// @brief Field roleAuthority, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_roleAuthority, put = __cordl_internal_set_roleAuthority))::Org::BouncyCastle::Asn1::X509::GeneralNames* roleAuthority;

  /// @brief Field roleName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_roleName, put = __cordl_internal_set_roleName))::Org::BouncyCastle::Asn1::X509::GeneralName* roleName;

  /// @brief Method GetInstance, addr 0x13ff72c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::RoleSyntax* GetInstance(::System::Object* obj);

  /// @brief Method GetRoleAuthorityAsString, addr 0x13ffd10, size 0x1fc, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetRoleAuthorityAsString();

  /// @brief Method GetRoleNameAsString, addr 0x13ffc24, size 0xec, virtual false, abstract: false, final false
  inline ::StringW GetRoleNameAsString();

  static inline ::Org::BouncyCastle::Asn1::X509::RoleSyntax* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* roleAuthority, ::Org::BouncyCastle::Asn1::X509::GeneralName* roleName);

  static inline ::Org::BouncyCastle::Asn1::X509::RoleSyntax* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* roleName);

  static inline ::Org::BouncyCastle::Asn1::X509::RoleSyntax* New_ctor(::StringW roleName);

  static inline ::Org::BouncyCastle::Asn1::X509::RoleSyntax* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x13fff0c, size 0xfc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x1400008, size 0x1b8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames*& __cordl_internal_get_roleAuthority();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralNames*> const& __cordl_internal_get_roleAuthority() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_roleName();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __cordl_internal_get_roleName() const;

  constexpr void __cordl_internal_set_roleAuthority(::Org::BouncyCastle::Asn1::X509::GeneralNames* value);

  constexpr void __cordl_internal_set_roleName(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  /// @brief Method .ctor, addr 0x13ff9e0, size 0x194, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames* roleAuthority, ::Org::BouncyCastle::Asn1::X509::GeneralName* roleName);

  /// @brief Method .ctor, addr 0x13ffb74, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* roleName);

  /// @brief Method .ctor, addr 0x13ffb80, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::StringW roleName);

  /// @brief Method .ctor, addr 0x13ff7d0, size 0x210, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_RoleAuthority, addr 0x13ffc14, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralNames* get_RoleAuthority();

  /// @brief Method get_RoleName, addr 0x13ffc1c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_RoleName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoleSyntax();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoleSyntax", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoleSyntax(RoleSyntax&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoleSyntax", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoleSyntax(RoleSyntax const&) = delete;

  /// @brief Field roleAuthority, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralNames* ___roleAuthority;

  /// @brief Field roleName, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___roleName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::RoleSyntax, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::RoleSyntax, ___roleAuthority) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::RoleSyntax, ___roleName) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::RoleSyntax);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::RoleSyntax*, "Org.BouncyCastle.Asn1.X509", "RoleSyntax");
