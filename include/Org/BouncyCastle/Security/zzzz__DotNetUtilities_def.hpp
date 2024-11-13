#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/DotNetUtilities.hpp"
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Security::DotNetUtilities*
class CORDL_TYPE DotNetUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertRSAParametersField, addr 0x2570ffc, size 0x100, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConvertRSAParametersField(::Org::BouncyCastle::Math::BigInteger* n, int32_t size);

  /// @brief Method CreateRSAProvider, addr 0x2570b64, size 0x134, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* CreateRSAProvider(::System::Security::Cryptography::RSAParameters rp);

  /// @brief Method CreateRSAProvider, addr 0x2570cc4, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* CreateRSAProvider(::System::Security::Cryptography::RSAParameters rp, ::System::Security::Cryptography::CspParameters* csp);

  /// @brief Method FromX509Certificate, addr 0x2570184, size 0x7c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::X509::X509Certificate* FromX509Certificate(::System::Security::Cryptography::X509Certificates::X509Certificate* x509Cert);

  /// @brief Method GetDsaKeyPair, addr 0x2570248, size 0x210, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetDsaKeyPair(::System::Security::Cryptography::DSAParameters dp);

  /// @brief Method GetDsaKeyPair, addr 0x2570200, size 0x48, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetDsaKeyPair(::System::Security::Cryptography::DSA* dsa);

  /// @brief Method GetDsaPublicKey, addr 0x25704a0, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* GetDsaPublicKey(::System::Security::Cryptography::DSAParameters dp);

  /// @brief Method GetDsaPublicKey, addr 0x2570458, size 0x48, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* GetDsaPublicKey(::System::Security::Cryptography::DSA* dsa);

  /// @brief Method GetKeyPair, addr 0x257098c, size 0x118, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetKeyPair(::System::Security::Cryptography::AsymmetricAlgorithm* privateKey);

  /// @brief Method GetRsaKeyPair, addr 0x2570670, size 0x214, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetRsaKeyPair(::System::Security::Cryptography::RSAParameters rp);

  /// @brief Method GetRsaKeyPair, addr 0x2570628, size 0x48, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GetRsaKeyPair(::System::Security::Cryptography::RSA* rsa);

  /// @brief Method GetRsaPublicKey, addr 0x25708cc, size 0xc0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* GetRsaPublicKey(::System::Security::Cryptography::RSAParameters rp);

  /// @brief Method GetRsaPublicKey, addr 0x2570884, size 0x48, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* GetRsaPublicKey(::System::Security::Cryptography::RSA* rsa);

  static inline ::Org::BouncyCastle::Security::DotNetUtilities* New_ctor();

  /// @brief Method ToRSA, addr 0x2570eb8, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey);

  /// @brief Method ToRSA, addr 0x2570fd0, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey, ::System::Security::Cryptography::CspParameters* csp);

  /// @brief Method ToRSA, addr 0x2570d74, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey);

  /// @brief Method ToRSA, addr 0x2570e8c, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey, ::System::Security::Cryptography::CspParameters* csp);

  /// @brief Method ToRSA, addr 0x2570aa4, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey);

  /// @brief Method ToRSA, addr 0x2570c98, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* ToRSA(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey, ::System::Security::Cryptography::CspParameters* csp);

  /// @brief Method ToRSAParameters, addr 0x2570edc, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAParameters ToRSAParameters(::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey);

  /// @brief Method ToRSAParameters, addr 0x2570d98, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAParameters ToRSAParameters(::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey);

  /// @brief Method ToRSAParameters, addr 0x2570ac8, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSAParameters ToRSAParameters(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey);

  /// @brief Method ToX509Certificate, addr 0x2570104, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* ToX509Certificate(::Org::BouncyCastle::X509::X509Certificate* x509Cert);

  /// @brief Method ToX509Certificate, addr 0x257008c, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate* ToX509Certificate(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* x509Struct);

  /// @brief Method .ctor, addr 0x2570084, size 0x8, virtual false, abstract: false, final false
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
