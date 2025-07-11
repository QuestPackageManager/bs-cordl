#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/X509V2CrlGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509V2CrlGenerator)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class V2TbsCertListGenerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509ExtensionsGenerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
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
class X509Crl;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509V2CrlGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509V2CrlGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.X509.X509V2CrlGenerator
class CORDL_TYPE X509V2CrlGenerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_SignatureAlgNames)) ::System::Collections::IEnumerable* SignatureAlgNames;

  /// @brief Field extGenerator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_extGenerator, put = __cordl_internal_set_extGenerator)) ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* extGenerator;

  /// @brief Field sigAlgId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_sigAlgId, put = __cordl_internal_set_sigAlgId)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId;

  /// @brief Field sigOID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sigOID, put = __cordl_internal_set_sigOID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigOID;

  /// @brief Field signatureAlgorithm, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_signatureAlgorithm, put = __cordl_internal_set_signatureAlgorithm)) ::StringW signatureAlgorithm;

  /// @brief Field tbsGen, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tbsGen, put = __cordl_internal_set_tbsGen)) ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator* tbsGen;

  /// @brief Method AddCrl, addr 0x25ff44c, size 0x490, virtual false, abstract: false, final false
  inline void AddCrl(::Org::BouncyCastle::X509::X509Crl* other);

  /// @brief Method AddCrlEntry, addr 0x25ff38c, size 0xc0, virtual false, abstract: false, final false
  inline void AddCrlEntry(::Org::BouncyCastle::Math::BigInteger* userCertificate, ::System::DateTime revocationDate, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method AddCrlEntry, addr 0x25ff1d0, size 0xc0, virtual false, abstract: false, final false
  inline void AddCrlEntry(::Org::BouncyCastle::Math::BigInteger* userCertificate, ::System::DateTime revocationDate, int32_t reason);

  /// @brief Method AddCrlEntry, addr 0x25ff290, size 0xfc, virtual false, abstract: false, final false
  inline void AddCrlEntry(::Org::BouncyCastle::Math::BigInteger* userCertificate, ::System::DateTime revocationDate, int32_t reason, ::System::DateTime invalidityDate);

  /// @brief Method AddExtension, addr 0x25ffbb0, size 0x94, virtual false, abstract: false, final false
  inline void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> extensionValue);

  /// @brief Method AddExtension, addr 0x25ffad0, size 0x20, virtual false, abstract: false, final false
  inline void AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue);

  /// @brief Method AddExtension, addr 0x25ffaf0, size 0xc0, virtual false, abstract: false, final false
  inline void AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t, ::Array<uint8_t>*> extensionValue);

  /// @brief Method AddExtension, addr 0x25ffa3c, size 0x94, virtual false, abstract: false, final false
  inline void AddExtension(::StringW oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable* extensionValue);

  /// @brief Method Generate, addr 0x25ffc44, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method Generate, addr 0x25ffc4c, size 0x7c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Generate, addr 0x25ffcc8, size 0x464, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* Generate(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculatorFactory);

  /// @brief Method GenerateCertList, addr 0x260012c, size 0x58, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::TbsCertificateList* GenerateCertList();

  /// @brief Method GenerateJcaObject, addr 0x2600184, size 0x184, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509Crl* GenerateJcaObject(::Org::BouncyCastle::Asn1::X509::TbsCertificateList* tbsCrl, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algId,
                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  static inline ::Org::BouncyCastle::X509::X509V2CrlGenerator* New_ctor();

  /// @brief Method Reset, addr 0x25ff064, size 0x68, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetIssuerDN, addr 0x25ff0cc, size 0x1c, virtual false, abstract: false, final false
  inline void SetIssuerDN(::Org::BouncyCastle::Asn1::X509::X509Name* issuer);

  /// @brief Method SetNextUpdate, addr 0x25ff15c, size 0x74, virtual false, abstract: false, final false
  inline void SetNextUpdate(::System::DateTime date);

  /// @brief Method SetSignatureAlgorithm, addr 0x25ff8dc, size 0x160, virtual false, abstract: false, final false
  inline void SetSignatureAlgorithm(::StringW signatureAlgorithm);

  /// @brief Method SetThisUpdate, addr 0x25ff0e8, size 0x74, virtual false, abstract: false, final false
  inline void SetThisUpdate(::System::DateTime date);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* const& __cordl_internal_get_extGenerator() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator*& __cordl_internal_get_extGenerator();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_sigAlgId() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_sigAlgId();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_sigOID() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_sigOID();

  constexpr ::StringW const& __cordl_internal_get_signatureAlgorithm() const;

  constexpr ::StringW& __cordl_internal_get_signatureAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator* const& __cordl_internal_get_tbsGen() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator*& __cordl_internal_get_tbsGen();

  constexpr void __cordl_internal_set_extGenerator(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* value);

  constexpr void __cordl_internal_set_sigAlgId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_sigOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_signatureAlgorithm(::StringW value);

  constexpr void __cordl_internal_set_tbsGen(::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator* value);

  /// @brief Method .ctor, addr 0x25fefcc, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_SignatureAlgNames, addr 0x2600308, size 0x4c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_SignatureAlgNames();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509V2CrlGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509V2CrlGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509V2CrlGenerator(X509V2CrlGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509V2CrlGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509V2CrlGenerator(X509V2CrlGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1873 };

  /// @brief Field extGenerator, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator* ___extGenerator;

  /// @brief Field tbsGen, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::V2TbsCertListGenerator* ___tbsGen;

  /// @brief Field sigOID, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___sigOID;

  /// @brief Field sigAlgId, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___sigAlgId;

  /// @brief Field signatureAlgorithm, offset: 0x30, size: 0x8, def value: None
  ::StringW ___signatureAlgorithm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::X509::X509V2CrlGenerator, ___extGenerator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V2CrlGenerator, ___tbsGen) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V2CrlGenerator, ___sigOID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V2CrlGenerator, ___sigAlgId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V2CrlGenerator, ___signatureAlgorithm) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509V2CrlGenerator, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509V2CrlGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509V2CrlGenerator*, "Org.BouncyCastle.X509", "X509V2CrlGenerator");
