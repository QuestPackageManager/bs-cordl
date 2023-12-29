#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509V1CertificateGenerator)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System {
struct DateTime;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class V1TbsCertificateGenerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509V1CertificateGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::X509V1CertificateGenerator);
// Type: Org.BouncyCastle.X509::X509V1CertificateGenerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1870))
// CS Name: ::Org.BouncyCastle.X509::X509V1CertificateGenerator*
class CORDL_TYPE X509V1CertificateGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field tbsGen, offset 0x10, size 0x8
  __declspec(property(get = __get_tbsGen, put = __set_tbsGen))::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator* tbsGen;

  /// @brief Field sigOID, offset 0x18, size 0x8
  __declspec(property(get = __get_sigOID, put = __set_sigOID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* sigOID;

  /// @brief Field sigAlgId, offset 0x20, size 0x8
  __declspec(property(get = __get_sigAlgId, put = __set_sigAlgId))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId;

  /// @brief Field signatureAlgorithm, offset 0x28, size 0x8
  __declspec(property(get = __get_signatureAlgorithm, put = __set_signatureAlgorithm))::StringW signatureAlgorithm;

  __declspec(property(get = get_SignatureAlgNames))::System::Collections::IEnumerable* SignatureAlgNames;

  constexpr ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*& __get_tbsGen();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator*> const& __get_tbsGen() const;

  constexpr void __set_tbsGen(::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_sigOID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_sigOID() const;

  constexpr void __set_sigOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_sigAlgId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_sigAlgId() const;

  constexpr void __set_sigAlgId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::StringW& __get_signatureAlgorithm();

  constexpr ::StringW const& __get_signatureAlgorithm() const;

  constexpr void __set_signatureAlgorithm(::StringW value);

  static inline ::Org::BouncyCastle::X509::X509V1CertificateGenerator* New_ctor();

  /// @brief Method .ctor addr 0x11120ec size 0x6c virtual false final false
  inline void _ctor();

  /// @brief Method Reset addr 0x1112158 size 0x60 virtual false final false
  inline void Reset();

  /// @brief Method SetSerialNumber addr 0x11121b8 size 0xe0 virtual false final false
  inline void SetSerialNumber(::Org::BouncyCastle::Math::BigInteger* serialNumber);

  /// @brief Method SetIssuerDN addr 0x1112298 size 0x1c virtual false final false
  inline void SetIssuerDN(::Org::BouncyCastle::Asn1::X509::X509Name* issuer);

  /// @brief Method SetNotBefore addr 0x11122b4 size 0x78 virtual false final false
  inline void SetNotBefore(::System::DateTime date);

  /// @brief Method SetNotAfter addr 0x111232c size 0x78 virtual false final false
  inline void SetNotAfter(::System::DateTime date);

  /// @brief Method SetSubjectDN addr 0x11123a4 size 0x1c virtual false final false
  inline void SetSubjectDN(::Org::BouncyCastle::Asn1::X509::X509Name* subject);

  /// @brief Method SetPublicKey addr 0x11123c0 size 0x114 virtual false final false
  inline void SetPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method SetSignatureAlgorithm addr 0x11124d4 size 0x170 virtual false final false
  inline void SetSignatureAlgorithm(::StringW signatureAlgorithm);

  /// @brief Method Generate addr 0x1112644 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey);

  /// @brief Method Generate addr 0x111264c size 0x84 virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* Generate(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Generate addr 0x11126d0 size 0x46c virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* Generate(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculatorFactory);

  /// @brief Method GenerateJcaObject addr 0x1112b3c size 0xd8 virtual false final false
  inline ::Org::BouncyCastle::X509::X509Certificate* GenerateJcaObject(::Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* tbsCert, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlg,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method get_SignatureAlgNames addr 0x1112c14 size 0x4c virtual false final false
  inline ::System::Collections::IEnumerable* get_SignatureAlgNames();

  // Ctor Parameters [CppParam { name: "", ty: "X509V1CertificateGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509V1CertificateGenerator(X509V1CertificateGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509V1CertificateGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509V1CertificateGenerator(X509V1CertificateGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509V1CertificateGenerator();

public:
  /// @brief Field tbsGen, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::V1TbsCertificateGenerator* ___tbsGen;

  /// @brief Field sigOID, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___sigOID;

  /// @brief Field sigAlgId, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___sigAlgId;

  /// @brief Field signatureAlgorithm, offset: 0x28, size: 0x8, def value: None
  ::StringW ___signatureAlgorithm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::X509V1CertificateGenerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V1CertificateGenerator, ___tbsGen) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V1CertificateGenerator, ___sigOID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V1CertificateGenerator, ___sigAlgId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::X509V1CertificateGenerator, ___signatureAlgorithm) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::X509V1CertificateGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509V1CertificateGenerator*, "Org.BouncyCastle.X509", "X509V1CertificateGenerator");
