#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeCertificate)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificateInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace System {
class Object;
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
// CS Name: ::Org.BouncyCastle.Asn1.X509::AttributeCertificate*
class CORDL_TYPE AttributeCertificate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_ACInfo))::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* ACInfo;

  __declspec(property(get = get_SignatureAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* SignatureAlgorithm;

  __declspec(property(get = get_SignatureValue))::Org::BouncyCastle::Asn1::DerBitString* SignatureValue;

  /// @brief Field acinfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_acinfo, put = __cordl_internal_set_acinfo))::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* acinfo;

  /// @brief Field signatureAlgorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_signatureAlgorithm, put = __cordl_internal_set_signatureAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm;

  /// @brief Field signatureValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_signatureValue, put = __cordl_internal_set_signatureValue))::Org::BouncyCastle::Asn1::DerBitString* signatureValue;

  /// @brief Method GetInstance, addr 0x11f442c, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* GetInstance(::System::Object* obj);

  /// @brief Method GetSignatureOctets, addr 0x11f4828, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSignatureOctets();

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* New_ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* acinfo,
                                                                                ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm,
                                                                                ::Org::BouncyCastle::Asn1::DerBitString* signatureValue);

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x11f4848, size 0x11c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*& __cordl_internal_get_acinfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*> const& __cordl_internal_get_acinfo() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_signatureAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_signatureAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_signatureValue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __cordl_internal_get_signatureValue() const;

  constexpr void __cordl_internal_set_acinfo(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* value);

  constexpr void __cordl_internal_set_signatureAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_signatureValue(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method .ctor, addr 0x11f464c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* acinfo, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm,
                    ::Org::BouncyCastle::Asn1::DerBitString* signatureValue);

  /// @brief Method .ctor, addr 0x11f44d0, size 0x17c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_ACInfo, addr 0x11f4810, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* get_ACInfo();

  /// @brief Method get_SignatureAlgorithm, addr 0x11f4818, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_SignatureAlgorithm();

  /// @brief Method get_SignatureValue, addr 0x11f4820, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_SignatureValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeCertificate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeCertificate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeCertificate(AttributeCertificate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeCertificate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeCertificate(AttributeCertificate const&) = delete;

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
