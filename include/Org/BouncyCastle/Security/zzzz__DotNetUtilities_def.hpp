#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Security::DotNetUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1746))
// CS Name: ::Org.BouncyCastle.Security::DotNetUtilities*
class CORDL_TYPE DotNetUtilities : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Security::DotNetUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x1156f14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method ToX509Certificate, addr 0x1156f1c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* ToX509Certificate(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* x509Struct);

  /// @brief Method ToX509Certificate, addr 0x1156f98, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* ToX509Certificate(::Org::BouncyCastle::X509::X509Certificate* x509Cert);

  /// @brief Method FromX509Certificate, addr 0x115701c, size 0x7c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::X509::X509Certificate* FromX509Certificate(::System::Security::Cryptography::X509Certificates::X509Certificate* x509Cert);

  /// @brief Method GetDsaKeyPair, addr 0x1157098, size 0x50, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetDsaKeyPair(::System::Security::Cryptography::DSA* dsa);

  /// @brief Method GetDsaKeyPair, addr 0x11570e8, size 0x234, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetDsaKeyPair(::System::Security::Cryptography::DSAParameters dp);

  /// @brief Method GetDsaPublicKey, addr 0x115731c, size 0x50, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* GetDsaPublicKey(::System::Security::Cryptography::DSA* dsa);

  /// @brief Method GetDsaPublicKey, addr 0x115736c, size 0x1a8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* GetDsaPublicKey(::System::Security::Cryptography::DSAParameters dp);

  /// @brief Method GetRsaKeyPair, addr 0x1157514, size 0x50, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetRsaKeyPair(::System::Security::Cryptography::RSA* rsa);

  /// @brief Method GetRsaKeyPair, addr 0x1157564, size 0x244, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetRsaKeyPair(::System::Security::Cryptography::RSAParameters rp);

  /// @brief Method GetRsaPublicKey, addr 0x11577a8, size 0x50, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* GetRsaPublicKey(::System::Security::Cryptography::RSA* rsa);

  /// @brief Method GetRsaPublicKey, addr 0x11577f8, size 0xd0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* GetRsaPublicKey(::System::Security::Cryptography::RSAParameters rp);

  /// @brief Method GetKeyPair, addr 0x11578c8, size 0x11c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetKeyPair(::System::Security::Cryptography::AsymmetricAlgorithm* privateKey);

  /// @brief Method ToRSA, addr 0x11579e4, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey);

  /// @brief Method ToRSA, addr 0x1157bd8, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey, ::System::Security::Cryptography::CspParameters* csp);

  /// @brief Method ToRSA, addr 0x1157cb4, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey);

  /// @brief Method ToRSA, addr 0x1157dcc, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey, ::System::Security::Cryptography::CspParameters* csp);

  /// @brief Method ToRSA, addr 0x1157df8, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey);

  /// @brief Method ToRSA, addr 0x1157f10, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey, ::System::Security::Cryptography::CspParameters* csp);

  /// @brief Method ToRSAParameters, addr 0x1157a08, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAParameters ToRSAParameters(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey);

  /// @brief Method ToRSAParameters, addr 0x1157cd8, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAParameters ToRSAParameters(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey);

  /// @brief Method ToRSAParameters, addr 0x1157e1c, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAParameters ToRSAParameters(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey);

  /// @brief Method ConvertRSAParametersField, addr 0x1157f3c, size 0x104, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConvertRSAParametersField(::Org::BouncyCastle::Math::BigInteger* n, int32_t size);

  /// @brief Method CreateRSAProvider, addr 0x1157aa4, size 0x134, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* CreateRSAProvider(::System::Security::Cryptography::RSAParameters rp);

  /// @brief Method CreateRSAProvider, addr 0x1157c04, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* CreateRSAProvider(::System::Security::Cryptography::RSAParameters rp, ::System::Security::Cryptography::CspParameters* csp);

  // Ctor Parameters [CppParam { name: "", ty: "DotNetUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DotNetUtilities(DotNetUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DotNetUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DotNetUtilities(DotNetUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DotNetUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::DotNetUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
NEED_NO_BOX(::Org::BouncyCastle::Security::DotNetUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::DotNetUtilities*, "Org.BouncyCastle.Security", "DotNetUtilities");
