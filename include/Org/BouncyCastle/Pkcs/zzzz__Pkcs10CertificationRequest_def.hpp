#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__CertificationRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs10CertificationRequest)
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsassaPssParameters;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
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
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System::Collections {
class IDictionary;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs10CertificationRequest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest);
// Type: Org.BouncyCastle.Pkcs::Pkcs10CertificationRequest
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkcs::Pkcs10CertificationRequest*
class CORDL_TYPE Pkcs10CertificationRequest : public ::Org::BouncyCastle::Asn1::Pkcs::CertificationRequest {
public:
  // Declarations
  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms))::System::Collections::IDictionary* algorithms;

  /// @brief Field exParams, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_exParams, put = setStaticF_exParams))::System::Collections::IDictionary* exParams;

  /// @brief Field keyAlgorithms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_keyAlgorithms, put = setStaticF_keyAlgorithms))::System::Collections::IDictionary* keyAlgorithms;

  /// @brief Field noParams, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_noParams, put = setStaticF_noParams))::Org::BouncyCastle::Utilities::Collections::ISet* noParams;

  /// @brief Field oids, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_oids, put = setStaticF_oids))::System::Collections::IDictionary* oids;

  /// @brief Method CreatePssParams, addr 0x133b084, size 0x12c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* CreatePssParams(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgId, int32_t saltSize);

  /// @brief Method GetDigestAlgName, addr 0x133c158, size 0x370, virtual false, abstract: false, final false
  static inline ::StringW GetDigestAlgName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestAlgOID);

  /// @brief Method GetPublicKey, addr 0x133b8a8, size 0x20, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetPublicKey();

  /// @brief Method GetSignatureName, addr 0x133bfa8, size 0x1b0, virtual false, abstract: false, final false
  static inline ::StringW GetSignatureName(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId);

  /// @brief Method Init, addr 0x133b440, size 0x468, virtual false, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureFactory, ::Org::BouncyCastle::Asn1::X509::X509Name* subject, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey,
                   ::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* New_ctor();

  static inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* New_ctor(::System::IO::Stream* input);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* New_ctor(::StringW signatureAlgorithm, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                                ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes,
                                                                                ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* signingKey);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* New_ctor(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureFactory, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                                ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest* New_ctor(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureFactory, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                                                                                ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes,
                                                                                ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* signingKey);

  /// @brief Method SetSignatureParameters, addr 0x133be2c, size 0x17c, virtual false, abstract: false, final false
  inline void SetSignatureParameters(::Org::BouncyCastle::Crypto::ISigner* signature, ::Org::BouncyCastle::Asn1::Asn1Encodable* asn1Params);

  /// @brief Method Verify, addr 0x133b8c8, size 0x1c, virtual false, abstract: false, final false
  inline bool Verify();

  /// @brief Method Verify, addr 0x133b8e4, size 0x74, virtual false, abstract: false, final false
  inline bool Verify(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method Verify, addr 0x133ba0c, size 0x420, virtual false, abstract: false, final false
  inline bool Verify(::Org::BouncyCastle::Crypto::IVerifierFactory* verifier);

  /// @brief Method Verify, addr 0x133b958, size 0xb4, virtual false, abstract: false, final false
  inline bool Verify(::Org::BouncyCastle::Crypto::IVerifierFactoryProvider* verifierProvider);

  /// @brief Method .ctor, addr 0x133b1b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1335140, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoded);

  /// @brief Method .ctor, addr 0x133b1c0, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* input);

  /// @brief Method .ctor, addr 0x133b1b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x133b258, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW signatureAlgorithm, ::Org::BouncyCastle::Asn1::X509::X509Name* subject, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey,
                    ::Org::BouncyCastle::Asn1::Asn1Set* attributes, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* signingKey);

  /// @brief Method .ctor, addr 0x133b2fc, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureFactory, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  /// @brief Method .ctor, addr 0x133b43c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureFactory, ::Org::BouncyCastle::Asn1::X509::X509Name* subject,
                    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::Org::BouncyCastle::Asn1::Asn1Set* attributes, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* signingKey);

  static inline ::System::Collections::IDictionary* getStaticF_algorithms();

  static inline ::System::Collections::IDictionary* getStaticF_exParams();

  static inline ::System::Collections::IDictionary* getStaticF_keyAlgorithms();

  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* getStaticF_noParams();

  static inline ::System::Collections::IDictionary* getStaticF_oids();

  static inline void setStaticF_algorithms(::System::Collections::IDictionary* value);

  static inline void setStaticF_exParams(::System::Collections::IDictionary* value);

  static inline void setStaticF_keyAlgorithms(::System::Collections::IDictionary* value);

  static inline void setStaticF_noParams(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  static inline void setStaticF_oids(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs10CertificationRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pkcs10CertificationRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs10CertificationRequest(Pkcs10CertificationRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs10CertificationRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs10CertificationRequest(Pkcs10CertificationRequest const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*, "Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest");
