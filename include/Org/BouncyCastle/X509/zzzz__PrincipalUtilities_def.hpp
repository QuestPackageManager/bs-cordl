#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PrincipalUtilities)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::X509 {
class X509Crl;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class PrincipalUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::PrincipalUtilities);
// Type: Org.BouncyCastle.X509::PrincipalUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509::PrincipalUtilities*
class CORDL_TYPE PrincipalUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetIssuerX509Principal, addr 0x13d8690, size 0x118, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* GetIssuerX509Principal(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method GetIssuerX509Principal, addr 0x13d88c0, size 0x118, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* GetIssuerX509Principal(::Org::BouncyCastle::X509::X509Crl* crl);

  /// @brief Method GetSubjectX509Principal, addr 0x13d87a8, size 0x118, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* GetSubjectX509Principal(::Org::BouncyCastle::X509::X509Certificate* cert);

  static inline ::Org::BouncyCastle::X509::PrincipalUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x13d89d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrincipalUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrincipalUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrincipalUtilities(PrincipalUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrincipalUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrincipalUtilities(PrincipalUtilities const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::PrincipalUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::PrincipalUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::PrincipalUtilities*, "Org.BouncyCastle.X509", "PrincipalUtilities");
