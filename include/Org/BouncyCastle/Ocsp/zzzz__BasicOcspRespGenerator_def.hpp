#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Ocsp/BasicOcspRespGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BasicOcspRespGenerator)
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertStatus;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class SingleResponse;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Ocsp {
class BasicOcspRespGenerator_ResponseObject;
}
namespace Org::BouncyCastle::Ocsp {
class BasicOcspResp;
}
namespace Org::BouncyCastle::Ocsp {
class CertificateID;
}
namespace Org::BouncyCastle::Ocsp {
class CertificateStatus;
}
namespace Org::BouncyCastle::Ocsp {
class RespID;
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
namespace System::Collections {
class IList;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class BasicOcspRespGenerator;
}
namespace Org::BouncyCastle::Ocsp {
class BasicOcspRespGenerator_ResponseObject;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject);
// Dependencies System.Object
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Ocsp.BasicOcspRespGenerator/ResponseObject
class CORDL_TYPE BasicOcspRespGenerator_ResponseObject : public ::System::Object {
public:
  // Declarations
  /// @brief Field certId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certId, put = __cordl_internal_set_certId)) ::Org::BouncyCastle::Ocsp::CertificateID* certId;

  /// @brief Field certStatus, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certStatus, put = __cordl_internal_set_certStatus)) ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* certStatus;

  /// @brief Field extensions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  /// @brief Field nextUpdate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nextUpdate, put = __cordl_internal_set_nextUpdate)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* nextUpdate;

  /// @brief Field thisUpdate, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_thisUpdate, put = __cordl_internal_set_thisUpdate)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* thisUpdate;

  static inline ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject* New_ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus,
                                                                                           ::Org::BouncyCastle::Asn1::DerGeneralizedTime* thisUpdate,
                                                                                           ::Org::BouncyCastle::Asn1::DerGeneralizedTime* nextUpdate,
                                                                                           ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  static inline ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject* New_ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus,
                                                                                           ::System::DateTime thisUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  static inline ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject* New_ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus,
                                                                                           ::System::DateTime thisUpdate, ::System::DateTime nextUpdate,
                                                                                           ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method ToResponse, addr 0x251e52c, size 0x94, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* ToResponse();

  constexpr ::Org::BouncyCastle::Ocsp::CertificateID* const& __cordl_internal_get_certId() const;

  constexpr ::Org::BouncyCastle::Ocsp::CertificateID*& __cordl_internal_get_certId();

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* const& __cordl_internal_get_certStatus() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertStatus*& __cordl_internal_get_certStatus();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_extensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_extensions();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& __cordl_internal_get_nextUpdate() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_nextUpdate();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& __cordl_internal_get_thisUpdate() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_thisUpdate();

  constexpr void __cordl_internal_set_certId(::Org::BouncyCastle::Ocsp::CertificateID* value);

  constexpr void __cordl_internal_set_certStatus(::Org::BouncyCastle::Asn1::Ocsp::CertStatus* value);

  constexpr void __cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr void __cordl_internal_set_nextUpdate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr void __cordl_internal_set_thisUpdate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  /// @brief Method .ctor, addr 0x251e9b8, size 0x254, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* thisUpdate,
                    ::Org::BouncyCastle::Asn1::DerGeneralizedTime* nextUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method .ctor, addr 0x251d490, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus, ::System::DateTime thisUpdate,
                    ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method .ctor, addr 0x251d780, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Ocsp::CertificateID* certId, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus, ::System::DateTime thisUpdate, ::System::DateTime nextUpdate,
                    ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicOcspRespGenerator_ResponseObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicOcspRespGenerator_ResponseObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicOcspRespGenerator_ResponseObject(BasicOcspRespGenerator_ResponseObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicOcspRespGenerator_ResponseObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicOcspRespGenerator_ResponseObject(BasicOcspRespGenerator_ResponseObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1608 };

  /// @brief Field certId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Ocsp::CertificateID* ___certId;

  /// @brief Field certStatus, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* ___certStatus;

  /// @brief Field thisUpdate, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___thisUpdate;

  /// @brief Field nextUpdate, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___nextUpdate;

  /// @brief Field extensions, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___extensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject, ___certId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject, ___certStatus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject, ___thisUpdate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject, ___nextUpdate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject, ___extensions) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
// Dependencies System.Object
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Ocsp.BasicOcspRespGenerator
class CORDL_TYPE BasicOcspRespGenerator : public ::System::Object {
public:
  // Declarations
  using ResponseObject = ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject;

  __declspec(property(get = get_SignatureAlgNames)) ::System::Collections::IEnumerable* SignatureAlgNames;

  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Collections::IList* list;

  /// @brief Field responderID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_responderID, put = __cordl_internal_set_responderID)) ::Org::BouncyCastle::Ocsp::RespID* responderID;

  /// @brief Field responseExtensions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_responseExtensions, put = __cordl_internal_set_responseExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions;

  /// @brief Method AddResponse, addr 0x251d370, size 0x120, virtual false, abstract: false, final false
  inline void AddResponse(::Org::BouncyCastle::Ocsp::CertificateID* certID, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus);

  /// @brief Method AddResponse, addr 0x251d64c, size 0x134, virtual false, abstract: false, final false
  inline void AddResponse(::Org::BouncyCastle::Ocsp::CertificateID* certID, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus, ::System::DateTime nextUpdate,
                          ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleExtensions);

  /// @brief Method AddResponse, addr 0x251d520, size 0x12c, virtual false, abstract: false, final false
  inline void AddResponse(::Org::BouncyCastle::Ocsp::CertificateID* certID, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus,
                          ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleExtensions);

  /// @brief Method AddResponse, addr 0x251d834, size 0x10c, virtual false, abstract: false, final false
  inline void AddResponse(::Org::BouncyCastle::Ocsp::CertificateID* certID, ::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus, ::System::DateTime thisUpdate, ::System::DateTime nextUpdate,
                          ::Org::BouncyCastle::Asn1::X509::X509Extensions* singleExtensions);

  /// @brief Method Generate, addr 0x251e810, size 0x54, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* Generate(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculatorFactory,
                                                            ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> chain,
                                                            ::System::DateTime producedAt);

  /// @brief Method Generate, addr 0x251e730, size 0xe0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* Generate(::StringW signingAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                            ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> chain,
                                                            ::System::DateTime producedAt, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method Generate, addr 0x251e728, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* Generate(::StringW signingAlgorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                            ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> chain,
                                                            ::System::DateTime thisUpdate);

  /// @brief Method GenerateResponse, addr 0x251d948, size 0xbe4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Ocsp::BasicOcspResp* GenerateResponse(::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculator,
                                                                    ::ArrayW<::Org::BouncyCastle::X509::X509Certificate*, ::Array<::Org::BouncyCastle::X509::X509Certificate*>*> chain,
                                                                    ::System::DateTime producedAt);

  static inline ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  static inline ::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator* New_ctor(::Org::BouncyCastle::Ocsp::RespID* responderID);

  /// @brief Method SetResponseExtensions, addr 0x251d940, size 0x8, virtual false, abstract: false, final false
  inline void SetResponseExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions);

  constexpr ::System::Collections::IList* const& __cordl_internal_get_list() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_list();

  constexpr ::Org::BouncyCastle::Ocsp::RespID* const& __cordl_internal_get_responderID() const;

  constexpr ::Org::BouncyCastle::Ocsp::RespID*& __cordl_internal_get_responderID();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_responseExtensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_responseExtensions();

  constexpr void __cordl_internal_set_list(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_responderID(::Org::BouncyCastle::Ocsp::RespID* value);

  constexpr void __cordl_internal_set_responseExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  /// @brief Method .ctor, addr 0x251d0e0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey);

  /// @brief Method .ctor, addr 0x251d068, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Ocsp::RespID* responderID);

  /// @brief Method get_SignatureAlgNames, addr 0x251e864, size 0x4c, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_SignatureAlgNames();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicOcspRespGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicOcspRespGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicOcspRespGenerator(BasicOcspRespGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicOcspRespGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicOcspRespGenerator(BasicOcspRespGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1609 };

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___list;

  /// @brief Field responseExtensions, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___responseExtensions;

  /// @brief Field responderID, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Ocsp::RespID* ___responderID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator, ___list) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator, ___responseExtensions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator, ___responderID) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator*, "Org.BouncyCastle.Ocsp", "BasicOcspRespGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject*, "Org.BouncyCastle.Ocsp", "BasicOcspRespGenerator/ResponseObject");
