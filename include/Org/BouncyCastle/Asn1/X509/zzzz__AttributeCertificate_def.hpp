#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeCertificate)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificateInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificate;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::AttributeCertificate);
// Type: Org.BouncyCastle.Asn1.X509::AttributeCertificate
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(341))
// CS Name: ::Org.BouncyCastle.Asn1.X509::AttributeCertificate*
class CORDL_TYPE AttributeCertificate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field acinfo, offset 0x10, size 0x8
  __declspec(property(get = __get_acinfo, put = __set_acinfo))::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* acinfo;

  /// @brief Field signatureAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __get_signatureAlgorithm, put = __set_signatureAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm;

  /// @brief Field signatureValue, offset 0x20, size 0x8
  __declspec(property(get = __get_signatureValue, put = __set_signatureValue))::Org::BouncyCastle::Asn1::DerBitString* signatureValue;

  __declspec(property(get = get_ACInfo))::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* ACInfo;

  __declspec(property(get = get_SignatureAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SignatureAlgorithm;

  __declspec(property(get = get_SignatureValue))::Org::BouncyCastle::Asn1::DerBitString* SignatureValue;

  constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*& __get_acinfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*> const& __get_acinfo() const;

  constexpr void __set_acinfo(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_signatureAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_signatureAlgorithm() const;

  constexpr void __set_signatureAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_signatureValue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_signatureValue() const;

  constexpr void __set_signatureValue(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method GetInstance addr 0x10130f4 size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* New_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* acinfo,
                                                                                ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm,
                                                                                ::Org::BouncyCastle::Asn1::DerBitString* signatureValue);

  /// @brief Method .ctor addr 0x1013314 size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* acinfo, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm,
                    ::Org::BouncyCastle::Asn1::DerBitString* signatureValue);

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x1013198 size 0x17c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_ACInfo addr 0x10134d8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* get_ACInfo();

  /// @brief Method get_SignatureAlgorithm addr 0x10134e0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();

  /// @brief Method get_SignatureValue addr 0x10134e8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_SignatureValue();

  /// @brief Method GetSignatureOctets addr 0x10134f0 size 0x20 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureOctets();

  /// @brief Method ToAsn1Object addr 0x1013510 size 0x11c virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "AttributeCertificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeCertificate(AttributeCertificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeCertificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeCertificate(AttributeCertificate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeCertificate();

public:
  /// @brief Field acinfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* ___acinfo;

  /// @brief Field signatureAlgorithm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___signatureAlgorithm;

  /// @brief Field signatureValue, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___signatureValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::AttributeCertificate, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeCertificate, ___acinfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeCertificate, ___signatureAlgorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeCertificate, ___signatureValue) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AttributeCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AttributeCertificate*, "Org.BouncyCastle.Asn1.X509", "AttributeCertificate");
