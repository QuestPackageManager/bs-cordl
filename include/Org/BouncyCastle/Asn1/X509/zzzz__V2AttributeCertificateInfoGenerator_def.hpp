#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(V2AttributeCertificateInfoGenerator)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttCertIssuer;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificateInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeX509;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Holder;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class V2AttributeCertificateInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator);
// Type: Org.BouncyCastle.Asn1.X509::V2AttributeCertificateInfoGenerator
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509::V2AttributeCertificateInfoGenerator*
class CORDL_TYPE V2AttributeCertificateInfoGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes))::Org::BouncyCastle::Asn1::Asn1EncodableVector* attributes;

  /// @brief Field endDate, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_endDate, put = __cordl_internal_set_endDate))::Org::BouncyCastle::Asn1::DerGeneralizedTime* endDate;

  /// @brief Field extensions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  /// @brief Field holder, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_holder, put = __cordl_internal_set_holder))::Org::BouncyCastle::Asn1::X509::Holder* holder;

  /// @brief Field issuer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_issuer, put = __cordl_internal_set_issuer))::Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer;

  /// @brief Field issuerUniqueID, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_issuerUniqueID, put = __cordl_internal_set_issuerUniqueID))::Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID;

  /// @brief Field serialNumber, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_serialNumber, put = __cordl_internal_set_serialNumber))::Org::BouncyCastle::Asn1::DerInteger* serialNumber;

  /// @brief Field signature, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_signature, put = __cordl_internal_set_signature))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature;

  /// @brief Field startDate, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_startDate, put = __cordl_internal_set_startDate))::Org::BouncyCastle::Asn1::DerGeneralizedTime* startDate;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method AddAttribute, addr 0x13fd724, size 0x1c, virtual false, abstract: false, final false
  inline void AddAttribute(::Org::BouncyCastle::Asn1::X509::AttributeX509* attribute);

  /// @brief Method AddAttribute, addr 0x13fd63c, size 0xe8, virtual false, abstract: false, final false
  inline void AddAttribute(::StringW oid, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method GenerateAttributeCertificateInfo, addr 0x13fd778, size 0x2dc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* GenerateAttributeCertificateInfo();

  static inline ::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator* New_ctor();

  /// @brief Method SetEndDate, addr 0x13fd760, size 0x8, virtual false, abstract: false, final false
  inline void SetEndDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* endDate);

  /// @brief Method SetExtensions, addr 0x13fd770, size 0x8, virtual false, abstract: false, final false
  inline void SetExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method SetHolder, addr 0x13fd634, size 0x8, virtual false, abstract: false, final false
  inline void SetHolder(::Org::BouncyCastle::Asn1::X509::Holder* holder);

  /// @brief Method SetIssuer, addr 0x13fd750, size 0x8, virtual false, abstract: false, final false
  inline void SetIssuer(::Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer);

  /// @brief Method SetIssuerUniqueID, addr 0x13fd768, size 0x8, virtual false, abstract: false, final false
  inline void SetIssuerUniqueID(::Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID);

  /// @brief Method SetSerialNumber, addr 0x13fd740, size 0x8, virtual false, abstract: false, final false
  inline void SetSerialNumber(::Org::BouncyCastle::Asn1::DerInteger* serialNumber);

  /// @brief Method SetSignature, addr 0x13fd748, size 0x8, virtual false, abstract: false, final false
  inline void SetSignature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature);

  /// @brief Method SetStartDate, addr 0x13fd758, size 0x8, virtual false, abstract: false, final false
  inline void SetStartDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* startDate);

  constexpr ::Org::BouncyCastle::Asn1::Asn1EncodableVector*& __cordl_internal_get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1EncodableVector*> const& __cordl_internal_get_attributes() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_endDate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __cordl_internal_get_endDate() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_extensions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __cordl_internal_get_extensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::Holder*& __cordl_internal_get_holder();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Holder*> const& __cordl_internal_get_holder() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AttCertIssuer*& __cordl_internal_get_issuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*> const& __cordl_internal_get_issuer() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_issuerUniqueID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __cordl_internal_get_issuerUniqueID() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_serialNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_serialNumber() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_signature();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_signature() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_startDate();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __cordl_internal_get_startDate() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_version() const;

  constexpr void __cordl_internal_set_attributes(::Org::BouncyCastle::Asn1::Asn1EncodableVector* value);

  constexpr void __cordl_internal_set_endDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr void __cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr void __cordl_internal_set_holder(::Org::BouncyCastle::Asn1::X509::Holder* value);

  constexpr void __cordl_internal_set_issuer(::Org::BouncyCastle::Asn1::X509::AttCertIssuer* value);

  constexpr void __cordl_internal_set_issuerUniqueID(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr void __cordl_internal_set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_signature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_startDate(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x13fd594, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr V2AttributeCertificateInfoGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "V2AttributeCertificateInfoGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  V2AttributeCertificateInfoGenerator(V2AttributeCertificateInfoGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "V2AttributeCertificateInfoGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  V2AttributeCertificateInfoGenerator(V2AttributeCertificateInfoGenerator const&) = delete;

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field holder, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::Holder* ___holder;

  /// @brief Field issuer, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AttCertIssuer* ___issuer;

  /// @brief Field signature, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___signature;

  /// @brief Field serialNumber, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___serialNumber;

  /// @brief Field attributes, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ___attributes;

  /// @brief Field issuerUniqueID, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___issuerUniqueID;

  /// @brief Field extensions, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___extensions;

  /// @brief Field startDate, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___startDate;

  /// @brief Field endDate, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___endDate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator, 0x60>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator, ___holder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator, ___issuer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator, ___signature) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator, ___serialNumber) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator, ___attributes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator, ___issuerUniqueID) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator, ___extensions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator, ___startDate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator, ___endDate) == 0x58, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::V2AttributeCertificateInfoGenerator*, "Org.BouncyCastle.Asn1.X509", "V2AttributeCertificateInfoGenerator");
