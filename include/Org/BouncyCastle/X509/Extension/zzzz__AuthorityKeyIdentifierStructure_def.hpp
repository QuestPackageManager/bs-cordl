#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X509/zzzz__AuthorityKeyIdentifier_def.hpp"
CORDL_MODULE_EXPORT(AuthorityKeyIdentifierStructure)
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Extension {
class AuthorityKeyIdentifierStructure;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure);
// Type: Org.BouncyCastle.X509.Extension::AuthorityKeyIdentifierStructure
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509::Extension {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509.Extension::AuthorityKeyIdentifierStructure*
class CORDL_TYPE AuthorityKeyIdentifierStructure : public ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier {
public:
  // Declarations
  /// @brief Method FromCertificate, addr 0x12dfe80, size 0x404, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* FromCertificate(::Org::BouncyCastle::X509::X509Certificate* certificate);

  /// @brief Method FromKey, addr 0x12e0284, size 0x1a0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Sequence* FromKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey);

  static inline ::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure* New_ctor(::Org::BouncyCastle::X509::X509Certificate* certificate);

  static inline ::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* encodedValue);

  static inline ::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey);

  /// @brief Method .ctor, addr 0x12e0424, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::X509Certificate* certificate);

  /// @brief Method .ctor, addr 0x12dfdc8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* encodedValue);

  /// @brief Method .ctor, addr 0x12e0448, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthorityKeyIdentifierStructure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifierStructure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthorityKeyIdentifierStructure(AuthorityKeyIdentifierStructure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifierStructure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthorityKeyIdentifierStructure(AuthorityKeyIdentifierStructure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509::Extension
NEED_NO_BOX(::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure*, "Org.BouncyCastle.X509.Extension", "AuthorityKeyIdentifierStructure");
