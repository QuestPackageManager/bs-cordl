#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509V3CertificateGenerator)
namespace Org::BouncyCastle::Asn1::X509 {
class X509ExtensionsGenerator;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace Org::BouncyCastle::Asn1::X509 {
class V3TbsCertificateGenerator;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509V3CertificateGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509V3CertificateGenerator);
// Type: Org.BouncyCastle.X509::X509V3CertificateGenerator
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1874))
// CS Name: ::Org.BouncyCastle.X509::X509V3CertificateGenerator*
class CORDL_TYPE X509V3CertificateGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field extGenerator, offset 0x10, size 0x8
  __declspec(property(get = __get_extGenerator, put = __set_extGenerator))::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* extGenerator;

  /// @brief Field tbsGen, offset 0x18, size 0x8
  __declspec(property(get = __get_tbsGen, put = __set_tbsGen))::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator* tbsGen;

  /// @brief Field sigOid, offset 0x20, size 0x8
  __declspec(property(get = __get_sigOid, put = __set_sigOid))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigOid;

  /// @brief Field sigAlgId, offset 0x28, size 0x8
  __declspec(property(get = __get_sigAlgId, put = __set_sigAlgId))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId;

  /// @brief Field signatureAlgorithm, offset 0x30, size 0x8
  __declspec(property(get = __get_signatureAlgorithm, put = __set_signatureAlgorithm))::StringW signatureAlgorithm;

  __declspec(property(get = get_SignatureAlgNames))::System::Collections::IEnumerable* SignatureAlgNames;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*& __get_extGenerator();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*> const& __get_extGenerator() const;

  constexpr void __set_extGenerator(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator*& __get_tbsGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator*> const& __get_tbsGen() const;

  constexpr void __set_tbsGen(::Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_sigOid();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_sigOid() const;

  constexpr void __set_sigOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_sigAlgId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_sigAlgId() const;

  constexpr void __set_sigAlgId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::StringW& __get_signatureAlgorithm();

  constexpr ::StringW const& __get_signatureAlgorithm() const;

  constexpr void __set_signatureAlgorithm(::StringW value);

  static inline ::Org::BouncyCastle::X509::X509V3CertificateGenerator* New_ctor();

  /// @brief Method .ctor addr 0x11863b4 size 0x9c virtual false final false
  inline void _ctor();

  /// @brief Method Reset addr 0x1186450 size 0x6c virtual false final false
  inline void Reset();

  /// @brief Method SetSerialNumber addr 0x11864bc size 0xe0 virtual false final false
  inline void SetSerialNumber(::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method SetIssuerDN addr 0x118659c size 0x1c virtual false final false
  inline void SetIssuerDN(::Org::BouncyCastle::Asn1::X509::X509Name* issuer);

  /// @brief Method SetNotBefore addr 0x11865b8 size 0x78 virtual false final false
  inline void SetNotBefore(::System::DateTime date);

  /// @brief Method SetNotAfter addr 0x1186630 size 0x78 virtual false final false
  inline void SetNotAfter(::System::DateTime date);

  /// @brief Method SetSubjectDN addr 0x11866a8 size 0x1c virtual false final false
  inline void SetSubjectDN(::Org::BouncyCastle::Asn1::X509::X509Name* subject);

  /// @brief Method SetPublicKey addr 0x11866c4 size 0x24 virtual false final false
  inline void SetPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method SetSignatureAlgorithm addr 0x11866e8 size 0x16c virtual false final false
  inline void SetSignatureAlgorithm(::StringW signatureAlgorithm);

  /// @brief Method SetSubjectUniqueID addr 0x1186854 size 0x20 virtual false final false
  inline void SetSubjectUniqueID(::ArrayW<bool, ::Array<bool>*> uniqueID);

  /// @brief Method SetIssuerUniqueID addr 0x11869cc size 0x20 virtual false final false
  inline void SetIssuerUniqueID(::ArrayW<bool, ::Array<bool>*> uniqueID);

  /// @brief Method booleanToBitString addr 0x1186874 size 0x158 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* booleanToBitString(::ArrayW<bool, ::Array<bool>*> id);

  /// @brief Method AddExtension addr 0x11869ec size 0x98 virtual false final false
  inline void AddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue);

  /// @brief Method AddExtension addr 0x1186a84 size 0x20 virtual false final false
  inline void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue);

  /// @brief Method AddExtension addr 0x1186aa4 size 0xc8 virtual false final false
  inline void AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> extensionValue);

  /// @brief Method AddExtension addr 0x1186b6c size 0x98 virtual false final false
  inline void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> extensionValue);

  /// @brief Method CopyAndAddExtension addr 0x1186c04 size 0x8c virtual false final false
  inline void CopyAndAddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method CopyAndAddExtension addr 0x1186c90 size 0x1ac virtual false final false
  inline void CopyAndAddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::Org::BouncyCastle::X509::X509Certificate* cert);

  /// @brief Method Generate addr 0x1186e3c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method Generate addr 0x1186e44 size 0x84 virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Generate addr 0x1186ec8 size 0x4a8 virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* Generate(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculatorFactory);

  /// @brief Method GenerateJcaObject addr 0x1187370 size 0xd8 virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* GenerateJcaObject(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlg,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method get_SignatureAlgNames addr 0x1187448 size 0x4c virtual false final false
  inline ::System::Collections::IEnumerable* get_SignatureAlgNames();

  // Ctor Parameters [CppParam { name: "", ty: "X509V3CertificateGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509V3CertificateGenerator(X509V3CertificateGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509V3CertificateGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509V3CertificateGenerator(X509V3CertificateGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509V3CertificateGenerator();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509V3CertificateGenerator, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509V3CertificateGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509V3CertificateGenerator*, "Org.BouncyCastle.X509", "X509V3CertificateGenerator");
