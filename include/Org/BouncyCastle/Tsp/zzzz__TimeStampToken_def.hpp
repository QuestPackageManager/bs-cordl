#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TimeStampToken.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeStampToken)
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertID;
}
namespace Org::BouncyCastle::Asn1::Ess {
class EssCertIDv2;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedData;
}
namespace Org::BouncyCastle::Cms {
class SignerID;
}
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampTokenInfo;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampToken_CertID;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TimeStampToken;
}
namespace Org::BouncyCastle::Tsp {
class TimeStampToken_CertID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampToken);
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TimeStampToken_CertID);
// Dependencies System.Object
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Tsp.TimeStampToken/CertID
class CORDL_TYPE TimeStampToken_CertID : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IssuerSerial)) ::Org::BouncyCastle::Asn1::X509::IssuerSerial* IssuerSerial;

  /// @brief Field certID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certID, put = __cordl_internal_set_certID)) ::Org::BouncyCastle::Asn1::Ess::EssCertID* certID;

  /// @brief Field certIDv2, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certIDv2, put = __cordl_internal_set_certIDv2)) ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* certIDv2;

  /// @brief Method GetCertHash, addr 0x35279c8, size 0x3c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetCertHash();

  /// @brief Method GetHashAlgorithm, addr 0x3527e34, size 0xa0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetHashAlgorithm();

  /// @brief Method GetHashAlgorithmName, addr 0x35278bc, size 0x10c, virtual false, abstract: false, final false
  inline ::StringW GetHashAlgorithmName();

  static inline ::Org::BouncyCastle::Tsp::TimeStampToken_CertID* New_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertID* certID);

  static inline ::Org::BouncyCastle::Tsp::TimeStampToken_CertID* New_ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* certID);

  constexpr ::Org::BouncyCastle::Asn1::Ess::EssCertID* const& __cordl_internal_get_certID() const;

  constexpr ::Org::BouncyCastle::Asn1::Ess::EssCertID*& __cordl_internal_get_certID();

  constexpr ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* const& __cordl_internal_get_certIDv2() const;

  constexpr ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*& __cordl_internal_get_certIDv2();

  constexpr void __cordl_internal_set_certID(::Org::BouncyCastle::Asn1::Ess::EssCertID* value);

  constexpr void __cordl_internal_set_certIDv2(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* value);

  /// @brief Method .ctor, addr 0x35271d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ess::EssCertID* certID);

  /// @brief Method .ctor, addr 0x35271e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* certID);

  /// @brief Method get_IssuerSerial, addr 0x3527a04, size 0x2c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_IssuerSerial();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampToken_CertID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeStampToken_CertID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampToken_CertID(TimeStampToken_CertID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampToken_CertID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampToken_CertID(TimeStampToken_CertID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1769 };

  /// @brief Field certID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ess::EssCertID* ___certID;

  /// @brief Field certIDv2, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* ___certIDv2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampToken_CertID, ___certID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampToken_CertID, ___certIDv2) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampToken_CertID, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
// Dependencies System.Object
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Tsp.TimeStampToken
class CORDL_TYPE TimeStampToken : public ::System::Object {
public:
  // Declarations
  using CertID = ::Org::BouncyCastle::Tsp::TimeStampToken_CertID;

  __declspec(property(get = get_SignedAttributes)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable* SignedAttributes;

  __declspec(property(get = get_SignerID)) ::Org::BouncyCastle::Cms::SignerID* SignerID;

  __declspec(property(get = get_TimeStampInfo)) ::Org::BouncyCastle::Tsp::TimeStampTokenInfo* TimeStampInfo;

  __declspec(property(get = get_UnsignedAttributes)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable* UnsignedAttributes;

  /// @brief Field certID, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_certID, put = __cordl_internal_set_certID)) ::Org::BouncyCastle::Tsp::TimeStampToken_CertID* certID;

  /// @brief Field tsToken, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_tsToken, put = __cordl_internal_set_tsToken)) ::Org::BouncyCastle::Cms::CmsSignedData* tsToken;

  /// @brief Field tsaSignerInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tsaSignerInfo, put = __cordl_internal_set_tsaSignerInfo)) ::Org::BouncyCastle::Cms::SignerInformation* tsaSignerInfo;

  /// @brief Field tstInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_tstInfo, put = __cordl_internal_set_tstInfo)) ::Org::BouncyCastle::Tsp::TimeStampTokenInfo* tstInfo;

  /// @brief Method GetAttributeCertificates, addr 0x3527250, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* GetAttributeCertificates(::StringW type);

  /// @brief Method GetCertificates, addr 0x3527220, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates(::StringW type);

  /// @brief Method GetCrls, addr 0x3527238, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCrls(::StringW type);

  /// @brief Method GetEncoded, addr 0x3527db0, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetEncoded, addr 0x3527e10, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded(::StringW encoding);

  static inline ::Org::BouncyCastle::Tsp::TimeStampToken* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  static inline ::Org::BouncyCastle::Tsp::TimeStampToken* New_ctor(::Org::BouncyCastle::Cms::CmsSignedData* signedData);

  /// @brief Method ToCmsSignedData, addr 0x3527da8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsSignedData* ToCmsSignedData();

  /// @brief Method Validate, addr 0x3527268, size 0x654, virtual false, abstract: false, final false
  inline void Validate(::Org::BouncyCastle::X509::X509Certificate* cert);

  constexpr ::Org::BouncyCastle::Tsp::TimeStampToken_CertID* const& __cordl_internal_get_certID() const;

  constexpr ::Org::BouncyCastle::Tsp::TimeStampToken_CertID*& __cordl_internal_get_certID();

  constexpr ::Org::BouncyCastle::Cms::CmsSignedData* const& __cordl_internal_get_tsToken() const;

  constexpr ::Org::BouncyCastle::Cms::CmsSignedData*& __cordl_internal_get_tsToken();

  constexpr ::Org::BouncyCastle::Cms::SignerInformation* const& __cordl_internal_get_tsaSignerInfo() const;

  constexpr ::Org::BouncyCastle::Cms::SignerInformation*& __cordl_internal_get_tsaSignerInfo();

  constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenInfo* const& __cordl_internal_get_tstInfo() const;

  constexpr ::Org::BouncyCastle::Tsp::TimeStampTokenInfo*& __cordl_internal_get_tstInfo();

  constexpr void __cordl_internal_set_certID(::Org::BouncyCastle::Tsp::TimeStampToken_CertID* value);

  constexpr void __cordl_internal_set_tsToken(::Org::BouncyCastle::Cms::CmsSignedData* value);

  constexpr void __cordl_internal_set_tsaSignerInfo(::Org::BouncyCastle::Cms::SignerInformation* value);

  constexpr void __cordl_internal_set_tstInfo(::Org::BouncyCastle::Tsp::TimeStampTokenInfo* value);

  /// @brief Method .ctor, addr 0x3524edc, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  /// @brief Method .ctor, addr 0x3526844, size 0x870, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsSignedData* signedData);

  /// @brief Method get_SignedAttributes, addr 0x3525760, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* get_SignedAttributes();

  /// @brief Method get_SignerID, addr 0x35271f0, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::SignerID* get_SignerID();

  /// @brief Method get_TimeStampInfo, addr 0x35271e8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Tsp::TimeStampTokenInfo* get_TimeStampInfo();

  /// @brief Method get_UnsignedAttributes, addr 0x3527208, size 0x18, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* get_UnsignedAttributes();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampToken();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeStampToken", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampToken(TimeStampToken&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampToken", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampToken(TimeStampToken const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1770 };

  /// @brief Field tsToken, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsSignedData* ___tsToken;

  /// @brief Field tsaSignerInfo, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::SignerInformation* ___tsaSignerInfo;

  /// @brief Field tstInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Tsp::TimeStampTokenInfo* ___tstInfo;

  /// @brief Field certID, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Tsp::TimeStampToken_CertID* ___certID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampToken, ___tsToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampToken, ___tsaSignerInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampToken, ___tstInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Tsp::TimeStampToken, ___certID) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TimeStampToken, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampToken);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampToken*, "Org.BouncyCastle.Tsp", "TimeStampToken");
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TimeStampToken_CertID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TimeStampToken_CertID*, "Org.BouncyCastle.Tsp", "TimeStampToken/CertID");
