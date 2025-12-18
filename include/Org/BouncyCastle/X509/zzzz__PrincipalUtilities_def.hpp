#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/PrincipalUtilities.hpp"
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
// Dependencies System.Object
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.PrincipalUtilities
class CORDL_TYPE PrincipalUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetIssuerX509Principal, addr 0x35494f4, size 0x118, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* GetIssuerX509Principal(::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method GetIssuerX509Principal, addr 0x3549724, size 0x118, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* GetIssuerX509Principal(::Org::BouncyCastle::X509::X509Crl* crl);

  /// @brief Method GetSubjectX509Principal, addr 0x354960c, size 0x118, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* GetSubjectX509Principal(::Org::BouncyCastle::X509::X509Certificate* cert);

  static inline ::Org::BouncyCastle::X509::PrincipalUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x354983c, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1856 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::PrincipalUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::PrincipalUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::PrincipalUtilities*, "Org.BouncyCastle.X509", "PrincipalUtilities");
