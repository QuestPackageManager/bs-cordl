#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/DotNetUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DotNetUtilities)
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsaPrivateKeyStructure;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaPublicKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaPrivateCrtKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class CspParameters;
}
namespace System::Security::Cryptography {
struct DSAParameters;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class DotNetUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Security::DotNetUtilities);
// Dependencies System.Object
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: Org.BouncyCastle.Security.DotNetUtilities
class CORDL_TYPE DotNetUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertRSAParametersField, addr 0x34ffca8, size 0x10c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConvertRSAParametersField(::Org::BouncyCastle::Math::BigInteger* n, int32_t size);

  /// @brief Method CreateRSAProvider, addr 0x34ff7f8, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* CreateRSAProvider(::System::Security::Cryptography::RSAParameters rp);

  /// @brief Method CreateRSAProvider, addr 0x34ff97c, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* CreateRSAProvider(::System::Security::Cryptography::RSAParameters rp, ::System::Security::Cryptography::CspParameters* csp);

  /// @brief Method FromX509Certificate, addr 0x34fedb8, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::X509::X509Certificate* FromX509Certificate(::System::Security::Cryptography::X509Certificates::X509Certificate* x509Cert);

  /// @brief Method GetDsaKeyPair, addr 0x34fee78, size 0x218, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetDsaKeyPair(::System::Security::Cryptography::DSAParameters dp);

  /// @brief Method GetDsaKeyPair, addr 0x34fee30, size 0x48, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetDsaKeyPair(::System::Security::Cryptography::DSA* dsa);

  /// @brief Method GetDsaPublicKey, addr 0x34ff0d8, size 0x190, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* GetDsaPublicKey(::System::Security::Cryptography::DSAParameters dp);

  /// @brief Method GetDsaPublicKey, addr 0x34ff090, size 0x48, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* GetDsaPublicKey(::System::Security::Cryptography::DSA* dsa);

  /// @brief Method GetKeyPair, addr 0x34ff5e4, size 0x170, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetKeyPair(::System::Security::Cryptography::AsymmetricAlgorithm* privateKey);

  /// @brief Method GetRsaKeyPair, addr 0x34ff2b0, size 0x224, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetRsaKeyPair(::System::Security::Cryptography::RSAParameters rp);

  /// @brief Method GetRsaKeyPair, addr 0x34ff268, size 0x48, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetRsaKeyPair(::System::Security::Cryptography::RSA* rsa);

  /// @brief Method GetRsaPublicKey, addr 0x34ff51c, size 0xc8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* GetRsaPublicKey(::System::Security::Cryptography::RSAParameters rp);

  /// @brief Method GetRsaPublicKey, addr 0x34ff4d4, size 0x48, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* GetRsaPublicKey(::System::Security::Cryptography::RSA* rsa);

  static inline ::Org::BouncyCastle::Security::DotNetUtilities* New_ctor();

  /// @brief Method ToRSA, addr 0x34ffb64, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey);

  /// @brief Method ToRSA, addr 0x34ffc7c, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey, ::System::Security::Cryptography::CspParameters* csp);

  /// @brief Method ToRSA, addr 0x34ffa20, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey);

  /// @brief Method ToRSA, addr 0x34ffb38, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey, ::System::Security::Cryptography::CspParameters* csp);

  /// @brief Method ToRSA, addr 0x34ff754, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey);

  /// @brief Method ToRSA, addr 0x34ff950, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey, ::System::Security::Cryptography::CspParameters* csp);

  /// @brief Method ToRSAParameters, addr 0x34ffb88, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAParameters ToRSAParameters(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey);

  /// @brief Method ToRSAParameters, addr 0x34ffa44, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAParameters ToRSAParameters(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey);

  /// @brief Method ToRSAParameters, addr 0x34ff778, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAParameters ToRSAParameters(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey);

  /// @brief Method ToX509Certificate, addr 0x34fed34, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* ToX509Certificate(::Org::BouncyCastle::X509::X509Certificate* x509Cert);

  /// @brief Method ToX509Certificate, addr 0x34fecb8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* ToX509Certificate(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* x509Struct);

  /// @brief Method .ctor, addr 0x34fecb4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DotNetUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DotNetUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DotNetUtilities(DotNetUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DotNetUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DotNetUtilities(DotNetUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1746 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::DotNetUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::DotNetUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::DotNetUtilities*, "Org.BouncyCastle.Security", "DotNetUtilities");
