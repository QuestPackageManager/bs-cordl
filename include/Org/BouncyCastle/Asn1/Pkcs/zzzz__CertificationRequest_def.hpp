#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificationRequest)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class CertificationRequestInfo;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class CertificationRequest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequest);
// Type: Org.BouncyCastle.Asn1.Pkcs::CertificationRequest
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(229))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::CertificationRequest*
class CORDL_TYPE CertificationRequest : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field reqInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_reqInfo, put = __set_reqInfo))::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* reqInfo;

  /// @brief Field sigAlgId, offset 0x18, size 0x8
  __declspec(property(get = __get_sigAlgId, put = __set_sigAlgId))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId;

  /// @brief Field sigBits, offset 0x20, size 0x8
  __declspec(property(get = __get_sigBits, put = __set_sigBits))::Org::BouncyCastle::Asn1::DerBitString* sigBits;

  __declspec(property(get = get_SignatureAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SignatureAlgorithm;

  __declspec(property(get = get_Signature))::Org::BouncyCastle::Asn1::DerBitString* Signature;

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo*& __get_reqInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo*> const& __get_reqInfo() const;

  constexpr void __set_reqInfo(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_sigAlgId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_sigAlgId() const;

  constexpr void __set_sigAlgId(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_sigBits();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_sigBits() const;

  constexpr void __set_sigBits(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method GetInstance, addr 0xf860dc, size 0xd8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::CertificationRequest* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::CertificationRequest* New_ctor();

  /// @brief Method .ctor, addr 0xf862fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::Pkcs::CertificationRequest* New_ctor(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* requestInfo,
                                                                                ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm, ::Org::BouncyCastle::Asn1::DerBitString* signature);

  /// @brief Method .ctor, addr 0xf86304, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* requestInfo, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm,
                    ::Org::BouncyCastle::Asn1::DerBitString* signature);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::CertificationRequest* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xf861b4, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetCertificationRequestInfo, addr 0xf863e4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* GetCertificationRequestInfo();

  /// @brief Method get_SignatureAlgorithm, addr 0xf863ec, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();

  /// @brief Method get_Signature, addr 0xf863f4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_Signature();

  /// @brief Method GetSignatureOctets, addr 0xf863fc, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureOctets();

  /// @brief Method ToAsn1Object, addr 0xf8641c, size 0x11c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CertificationRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificationRequest(CertificationRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificationRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificationRequest(CertificationRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificationRequest();

public:
  /// @brief Field reqInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* ___reqInfo;

  /// @brief Field sigAlgId, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___sigAlgId;

  /// @brief Field sigBits, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___sigBits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::CertificationRequest, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequest, ___reqInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequest, ___sigAlgId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequest, ___sigBits) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequest*, "Org.BouncyCastle.Asn1.Pkcs", "CertificationRequest");
