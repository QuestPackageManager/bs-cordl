#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/BasicOcspResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicOcspResponse)
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponseData;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class BasicOcspResponse;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ocsp.BasicOcspResponse
class CORDL_TYPE BasicOcspResponse : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Certs)) ::Org::BouncyCastle::Asn1::Asn1Sequence* Certs;

  __declspec(property(get = get_Signature)) ::Org::BouncyCastle::Asn1::DerBitString* Signature;

  __declspec(property(get = get_SignatureAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SignatureAlgorithm;

  __declspec(property(get = get_TbsResponseData)) ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* TbsResponseData;

  /// @brief Field certs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_certs, put = __cordl_internal_set_certs)) ::Org::BouncyCastle::Asn1::Asn1Sequence* certs;

  /// @brief Field signature, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_signature, put = __cordl_internal_set_signature)) ::Org::BouncyCastle::Asn1::DerBitString* signature;

  /// @brief Field signatureAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_signatureAlgorithm, put = __cordl_internal_set_signatureAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm;

  /// @brief Field tbsResponseData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tbsResponseData, put = __cordl_internal_set_tbsResponseData)) ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* tbsResponseData;

  /// @brief Method GetCerts, addr 0x2401bc8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* GetCerts();

  /// @brief Method GetInstance, addr 0x2401670, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x2401688, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* GetInstance(::System::Object* obj);

  /// @brief Method GetSignature, addr 0x2401b98, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* GetSignature();

  /// @brief Method GetSignatureAlgorithm, addr 0x2401b88, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetSignatureAlgorithm();

  /// @brief Method GetSignatureOctets, addr 0x2401ba8, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureOctets();

  /// @brief Method GetTbsResponseData, addr 0x2401b78, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* GetTbsResponseData();

  static inline ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* tbsResponseData,
                                                                             ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm,
                                                                             ::Org::BouncyCastle::Asn1::DerBitString* signature, ::Org::BouncyCastle::Asn1::Asn1Sequence* certs);

  /// @brief Method ToAsn1Object, addr 0x2401bd8, size 0x160, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_certs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_certs();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_signature() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_signature();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_signatureAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_signatureAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* const& __cordl_internal_get_tbsResponseData() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData*& __cordl_internal_get_tbsResponseData();

  constexpr void __cordl_internal_set_certs(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_signature(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr void __cordl_internal_set_signatureAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_tbsResponseData(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* value);

  /// @brief Method .ctor, addr 0x2401804, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x24019bc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* tbsResponseData, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm,
                    ::Org::BouncyCastle::Asn1::DerBitString* signature, ::Org::BouncyCastle::Asn1::Asn1Sequence* certs);

  /// @brief Method get_Certs, addr 0x2401bd0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_Certs();

  /// @brief Method get_Signature, addr 0x2401ba0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_Signature();

  /// @brief Method get_SignatureAlgorithm, addr 0x2401b90, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();

  /// @brief Method get_TbsResponseData, addr 0x2401b80, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* get_TbsResponseData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicOcspResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicOcspResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicOcspResponse(BasicOcspResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicOcspResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicOcspResponse(BasicOcspResponse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 206 };

  /// @brief Field tbsResponseData, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* ___tbsResponseData;

  /// @brief Field signatureAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___signatureAlgorithm;

  /// @brief Field signature, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___signature;

  /// @brief Field certs, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___certs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse, ___tbsResponseData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse, ___signatureAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse, ___signature) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse, ___certs) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*, "Org.BouncyCastle.Asn1.Ocsp", "BasicOcspResponse");
