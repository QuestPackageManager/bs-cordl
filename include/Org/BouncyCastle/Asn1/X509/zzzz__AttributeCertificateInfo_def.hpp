#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(AttributeCertificateInfo)
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttCertIssuer;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Holder;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttCertValidityPeriod;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificateInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo);
// Type: Org.BouncyCastle.Asn1.X509::AttributeCertificateInfo
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(342))
// CS Name: ::Org.BouncyCastle.Asn1.X509::AttributeCertificateInfo*
class CORDL_TYPE AttributeCertificateInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field holder, offset 0x18, size 0x8
  __declspec(property(get = __get_holder, put = __set_holder))::Org::BouncyCastle::Asn1::X509::Holder* holder;

  /// @brief Field issuer, offset 0x20, size 0x8
  __declspec(property(get = __get_issuer, put = __set_issuer))::Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer;

  /// @brief Field signature, offset 0x28, size 0x8
  __declspec(property(get = __get_signature, put = __set_signature))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature;

  /// @brief Field serialNumber, offset 0x30, size 0x8
  __declspec(property(get = __get_serialNumber, put = __set_serialNumber))::Org::BouncyCastle::Asn1::DerInteger* serialNumber;

  /// @brief Field attrCertValidityPeriod, offset 0x38, size 0x8
  __declspec(property(get = __get_attrCertValidityPeriod, put = __set_attrCertValidityPeriod))::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* attrCertValidityPeriod;

  /// @brief Field attributes, offset 0x40, size 0x8
  __declspec(property(get = __get_attributes, put = __set_attributes))::Org::BouncyCastle::Asn1::Asn1Sequence* attributes;

  /// @brief Field issuerUniqueID, offset 0x48, size 0x8
  __declspec(property(get = __get_issuerUniqueID, put = __set_issuerUniqueID))::Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID;

  /// @brief Field extensions, offset 0x50, size 0x8
  __declspec(property(get = __get_extensions, put = __set_extensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  __declspec(property(get = get_Holder))::Org::BouncyCastle::Asn1::X509::Holder* Holder;

  __declspec(property(get = get_Issuer))::Org::BouncyCastle::Asn1::X509::AttCertIssuer* Issuer;

  __declspec(property(get = get_Signature))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Signature;

  __declspec(property(get = get_SerialNumber))::Org::BouncyCastle::Asn1::DerInteger* SerialNumber;

  __declspec(property(get = get_AttrCertValidityPeriod))::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* AttrCertValidityPeriod;

  __declspec(property(get = get_Attributes))::Org::BouncyCastle::Asn1::Asn1Sequence* Attributes;

  __declspec(property(get = get_IssuerUniqueID))::Org::BouncyCastle::Asn1::DerBitString* IssuerUniqueID;

  __declspec(property(get = get_Extensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* Extensions;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::Holder*& __get_holder();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::Holder*> const& __get_holder() const;

  constexpr void __set_holder(::Org::BouncyCastle::Asn1::X509::Holder* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AttCertIssuer*& __get_issuer();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*> const& __get_issuer() const;

  constexpr void __set_issuer(::Org::BouncyCastle::Asn1::X509::AttCertIssuer* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_signature();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_signature() const;

  constexpr void __set_signature(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_serialNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_serialNumber() const;

  constexpr void __set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod*& __get_attrCertValidityPeriod();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod*> const& __get_attrCertValidityPeriod() const;

  constexpr void __set_attrCertValidityPeriod(::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_attributes() const;

  constexpr void __set_attributes(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_issuerUniqueID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_issuerUniqueID() const;

  constexpr void __set_issuerUniqueID(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __get_extensions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __get_extensions() const;

  constexpr void __set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  /// @brief Method GetInstance, addr 0x108487c, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x10845a0, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x1084894, size 0x384, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Version, addr 0x1084c18, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method get_Holder, addr 0x1084c20, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::Holder* get_Holder();

  /// @brief Method get_Issuer, addr 0x1084c28, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AttCertIssuer* get_Issuer();

  /// @brief Method get_Signature, addr 0x1084c30, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Signature();

  /// @brief Method get_SerialNumber, addr 0x1084c38, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();

  /// @brief Method get_AttrCertValidityPeriod, addr 0x1084c40, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* get_AttrCertValidityPeriod();

  /// @brief Method get_Attributes, addr 0x1084c48, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_Attributes();

  /// @brief Method get_IssuerUniqueID, addr 0x1084c50, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_IssuerUniqueID();

  /// @brief Method get_Extensions, addr 0x1084c58, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();

  /// @brief Method ToAsn1Object, addr 0x1084c60, size 0x27c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeCertificateInfo(AttributeCertificateInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeCertificateInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeCertificateInfo(AttributeCertificateInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeCertificateInfo();

public:
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

  /// @brief Field attrCertValidityPeriod, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod* ___attrCertValidityPeriod;

  /// @brief Field attributes, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___attributes;

  /// @brief Field issuerUniqueID, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___issuerUniqueID;

  /// @brief Field extensions, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___extensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo, ___holder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo, ___issuer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo, ___signature) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo, ___serialNumber) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo, ___attrCertValidityPeriod) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo, ___attributes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo, ___issuerUniqueID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo, ___extensions) == 0x50, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*, "Org.BouncyCastle.Asn1.X509", "AttributeCertificateInfo");
