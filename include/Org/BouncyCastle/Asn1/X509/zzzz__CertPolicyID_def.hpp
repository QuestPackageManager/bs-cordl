#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/CertPolicyID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CertPolicyID)
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CertPolicyID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::CertPolicyID);
// Dependencies Org.BouncyCastle.Asn1.DerObjectIdentifier
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.CertPolicyID
class CORDL_TYPE CertPolicyID : public ::Org::BouncyCastle::Asn1::DerObjectIdentifier {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::X509::CertPolicyID* New_ctor(::StringW id);

  /// @brief Method .ctor, addr 0x35338a0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW id);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertPolicyID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertPolicyID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertPolicyID(CertPolicyID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertPolicyID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertPolicyID(CertPolicyID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 351 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::CertPolicyID, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::CertPolicyID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::CertPolicyID*, "Org.BouncyCastle.Asn1.X509", "CertPolicyID");
