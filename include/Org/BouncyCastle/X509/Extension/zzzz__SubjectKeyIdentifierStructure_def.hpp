#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Extension/SubjectKeyIdentifierStructure.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectKeyIdentifier_def.hpp"
CORDL_MODULE_EXPORT(SubjectKeyIdentifierStructure)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Extension {
class SubjectKeyIdentifierStructure;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure);
// Dependencies Org.BouncyCastle.Asn1.X509.SubjectKeyIdentifier
namespace Org::BouncyCastle::X509::Extension {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.Extension.SubjectKeyIdentifierStructure
class CORDL_TYPE SubjectKeyIdentifierStructure : public ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier {
public:
  // Declarations
  /// @brief Method FromPublicKey, addr 0x25e95b0, size 0x1b0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1OctetString* FromPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey);

  static inline ::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* encodedValue);

  static inline ::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey);

  /// @brief Method .ctor, addr 0x25e951c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* encodedValue);

  /// @brief Method .ctor, addr 0x25e9760, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubjectKeyIdentifierStructure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubjectKeyIdentifierStructure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubjectKeyIdentifierStructure(SubjectKeyIdentifierStructure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubjectKeyIdentifierStructure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubjectKeyIdentifierStructure(SubjectKeyIdentifierStructure const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1840 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509::Extension
NEED_NO_BOX(::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure*, "Org.BouncyCastle.X509.Extension", "SubjectKeyIdentifierStructure");
