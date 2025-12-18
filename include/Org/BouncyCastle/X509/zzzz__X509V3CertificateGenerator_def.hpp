#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509V3CertificateGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509V3CertificateGenerator)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace Org::BouncyCastle::Asn1::X509 {
class V3TbsCertificateGenerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509ExtensionsGenerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509V3CertificateGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509V3CertificateGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.X509V3CertificateGenerator
class CORDL_TYPE X509V3CertificateGenerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_SignatureAlgNames)) ::System::Collections::IEnumerable* SignatureAlgNames;

  /// @brief Field extGenerator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_extGenerator, put = __cordl_internal_set_extGenerator)) ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* extGenerator;

  /// @brief Field sigAlgId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_sigAlgId, put = __cordl_internal_set_sigAlgId)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId;

  /// @brief Field sigOid, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sigOid, put = __cordl_internal_set_sigOid)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigOid;

  /// @brief Field signatureAlgorithm, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_signatureAlgorithm, put = __cordl_internal_set_signatureAlgorithm)) ::StringW signatureAlgorithm;

  /// @brief Field tbsGen, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tbsGen, put = __cordl_internal_set_tbsGen)) ::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator* tbsGen;

  /// @brief Method AddExtension, addr 0x355b264, size 0x94, virtual false, abstract: false, final false
  inline void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> extensionValue);

  /// @brief Method AddExtension, addr 0x355b184, size 0x1c, virtual false, abstract: false, final false
  inline void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue);

  /// @brief Method AddExtension, addr 0x355b1a0, size 0xc4, virtual false, abstract: false, final false
  inline void AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> extensionValue);

  /// @brief Method AddExtension, addr 0x355b0ec, size 0x98, virtual false, abstract: false, final false
  inline void AddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue);

  /// @brief Method CopyAndAddExtension, addr 0x355b380, size 0x1ac, virtual false, abstract: false, final false
  inline void CopyAndAddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method CopyAndAddExtension, addr 0x355b2f8, size 0x88, virtual false, abstract: false, final false
  inline void CopyAndAddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method Generate, addr 0x355b52c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method Generate, addr 0x355b534, size 0x80, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Generate, addr 0x355b5b4, size 0x4c4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* Generate(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculatorFactory);

  /// @brief Method GenerateJcaObject, addr 0x355ba78, size 0xd4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Certificate* GenerateJcaObject(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlg,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  static inline ::Org::BouncyCastle::X509::X509V3CertificateGenerator* New_ctor();

  /// @brief Method Reset, addr 0x355ab50, size 0x6c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetIssuerDN, addr 0x355aca8, size 0x18, virtual false, abstract: false, final false
  inline void SetIssuerDN(::Org::BouncyCastle::Asn1::X509::X509Name* issuer);

  /// @brief Method SetIssuerUniqueID, addr 0x355b0cc, size 0x20, virtual false, abstract: false, final false
  inline void SetIssuerUniqueID(::ArrayW<bool, ::Array<bool>*> uniqueID);

  /// @brief Method SetNotAfter, addr 0x355ad38, size 0x78, virtual false, abstract: false, final false
  inline void SetNotAfter(::System::DateTime date);

  /// @brief Method SetNotBefore, addr 0x355acc0, size 0x78, virtual false, abstract: false, final false
  inline void SetNotBefore(::System::DateTime date);

  /// @brief Method SetPublicKey, addr 0x355adc8, size 0x24, virtual false, abstract: false, final false
  inline void SetPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method SetSerialNumber, addr 0x355abbc, size 0xec, virtual false, abstract: false, final false
  inline void SetSerialNumber(::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method SetSignatureAlgorithm, addr 0x355adec, size 0x16c, virtual false, abstract: false, final false
  inline void SetSignatureAlgorithm(::StringW signatureAlgorithm);

  /// @brief Method SetSubjectDN, addr 0x355adb0, size 0x18, virtual false, abstract: false, final false
  inline void SetSubjectDN(::Org::BouncyCastle::Asn1::X509::X509Name* subject);

  /// @brief Method SetSubjectUniqueID, addr 0x355af58, size 0x20, virtual false, abstract: false, final false
  inline void SetSubjectUniqueID(::ArrayW<bool, ::Array<bool>*> uniqueID);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* const& __cordl_internal_get_extGenerator() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*& __cordl_internal_get_extGenerator();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_sigAlgId() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_sigAlgId();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_sigOid() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_sigOid();

  constexpr ::StringW const& __cordl_internal_get_signatureAlgorithm() const;

  constexpr ::StringW& __cordl_internal_get_signatureAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator* const& __cordl_internal_get_tbsGen() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator*& __cordl_internal_get_tbsGen();

  constexpr void __cordl_internal_set_extGenerator(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* value);

  constexpr void __cordl_internal_set_sigAlgId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_sigOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_signatureAlgorithm(::StringW value);

  constexpr void __cordl_internal_set_tbsGen(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator* value);

  /// @brief Method .ctor, addr 0x355aac4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method booleanToBitString, addr 0x355af78, size 0x154, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* booleanToBitString(::ArrayW<bool, ::Array<bool>*> id);

  /// @brief Method get_SignatureAlgNames, addr 0x355bb4c, size 0x50, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_SignatureAlgNames();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509V3CertificateGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509V3CertificateGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509V3CertificateGenerator(X509V3CertificateGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509V3CertificateGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509V3CertificateGenerator(X509V3CertificateGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1874 };

  /// @brief Field extGenerator, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* ___extGenerator;

  /// @brief Field tbsGen, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator* ___tbsGen;

  /// @brief Field sigOid, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___sigOid;

  /// @brief Field sigAlgId, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___sigAlgId;

  /// @brief Field signatureAlgorithm, offset: 0x30, size: 0x8, def value: None
  ::StringW ___signatureAlgorithm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::X509::X509V3CertificateGenerator, ___extGenerator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V3CertificateGenerator, ___tbsGen) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V3CertificateGenerator, ___sigOid) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V3CertificateGenerator, ___sigAlgId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V3CertificateGenerator, ___signatureAlgorithm) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509V3CertificateGenerator, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509V3CertificateGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509V3CertificateGenerator*, "Org.BouncyCastle.X509", "X509V3CertificateGenerator");
