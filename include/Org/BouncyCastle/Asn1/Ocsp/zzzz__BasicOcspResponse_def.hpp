#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BasicOcspResponse)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponseData;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
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
// Type: Org.BouncyCastle.Asn1.Ocsp::BasicOcspResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(206))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::BasicOcspResponse*
class CORDL_TYPE BasicOcspResponse : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field tbsResponseData, offset 0x10, size 0x8
  __declspec(property(get = __get_tbsResponseData, put = __set_tbsResponseData))::Org::BouncyCastle::Asn1::Ocsp::ResponseData* tbsResponseData;

  /// @brief Field signatureAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __get_signatureAlgorithm, put = __set_signatureAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm;

  /// @brief Field signature, offset 0x20, size 0x8
  __declspec(property(get = __get_signature, put = __set_signature))::Org::BouncyCastle::Asn1::DerBitString* signature;

  /// @brief Field certs, offset 0x28, size 0x8
  __declspec(property(get = __get_certs, put = __set_certs))::Org::BouncyCastle::Asn1::Asn1Sequence* certs;

  __declspec(property(get = get_TbsResponseData))::Org::BouncyCastle::Asn1::Ocsp::ResponseData* TbsResponseData;

  __declspec(property(get = get_SignatureAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SignatureAlgorithm;

  __declspec(property(get = get_Signature))::Org::BouncyCastle::Asn1::DerBitString* Signature;

  __declspec(property(get = get_Certs))::Org::BouncyCastle::Asn1::Asn1Sequence* Certs;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponseData*& __get_tbsResponseData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::ResponseData*> const& __get_tbsResponseData() const;

  constexpr void __set_tbsResponseData(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_signatureAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_signatureAlgorithm() const;

  constexpr void __set_signatureAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_signature();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_signature() const;

  constexpr void __set_signature(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_certs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_certs() const;

  constexpr void __set_certs(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance addr 0xf7f3ac size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0xf7f3c4 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* tbsResponseData,
                                                                             ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm,
                                                                             ::Org::BouncyCastle::Asn1::DerBitString* signature, ::Org::BouncyCastle::Asn1::Asn1Sequence* certs);

  /// @brief Method .ctor addr 0xf7f704 size 0x40 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponseData* tbsResponseData, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm,
                    ::Org::BouncyCastle::Asn1::DerBitString* signature, ::Org::BouncyCastle::Asn1::Asn1Sequence* certs);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf7f54c size 0x1b8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetTbsResponseData addr 0xf7f8cc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* GetTbsResponseData();

  /// @brief Method get_TbsResponseData addr 0xf7f8d4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* get_TbsResponseData();

  /// @brief Method GetSignatureAlgorithm addr 0xf7f8dc size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetSignatureAlgorithm();

  /// @brief Method get_SignatureAlgorithm addr 0xf7f8e4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();

  /// @brief Method GetSignature addr 0xf7f8ec size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* GetSignature();

  /// @brief Method get_Signature addr 0xf7f8f4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_Signature();

  /// @brief Method GetSignatureOctets addr 0xf7f8fc size 0x20 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureOctets();

  /// @brief Method GetCerts addr 0xf7f91c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* GetCerts();

  /// @brief Method get_Certs addr 0xf7f924 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_Certs();

  /// @brief Method ToAsn1Object addr 0xf7f92c size 0x16c virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "BasicOcspResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicOcspResponse(BasicOcspResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicOcspResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicOcspResponse(BasicOcspResponse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicOcspResponse();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::BasicOcspResponse*, "Org.BouncyCastle.Asn1.Ocsp", "BasicOcspResponse");
