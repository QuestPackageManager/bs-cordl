#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/SignedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SignedData)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class SignedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::SignedData);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.SignedData
class CORDL_TYPE SignedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CRLs)) ::Org::BouncyCastle::Asn1::Asn1Set* CRLs;

  __declspec(property(get = get_Certificates)) ::Org::BouncyCastle::Asn1::Asn1Set* Certificates;

  __declspec(property(get = get_DigestAlgorithms)) ::Org::BouncyCastle::Asn1::Asn1Set* DigestAlgorithms;

  __declspec(property(get = get_EncapContentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* EncapContentInfo;

  __declspec(property(get = get_SignerInfos)) ::Org::BouncyCastle::Asn1::Asn1Set* SignerInfos;

  __declspec(property(get = get_Version)) ::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field Version1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Version1, put = setStaticF_Version1)) ::Org::BouncyCastle::Asn1::DerInteger* Version1;

  /// @brief Field Version3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Version3, put = setStaticF_Version3)) ::Org::BouncyCastle::Asn1::DerInteger* Version3;

  /// @brief Field Version4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Version4, put = setStaticF_Version4)) ::Org::BouncyCastle::Asn1::DerInteger* Version4;

  /// @brief Field Version5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Version5, put = setStaticF_Version5)) ::Org::BouncyCastle::Asn1::DerInteger* Version5;

  /// @brief Field certificates, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_certificates, put = __cordl_internal_set_certificates)) ::Org::BouncyCastle::Asn1::Asn1Set* certificates;

  /// @brief Field certsBer, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_certsBer, put = __cordl_internal_set_certsBer)) bool certsBer;

  /// @brief Field contentInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_contentInfo, put = __cordl_internal_set_contentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo;

  /// @brief Field crls, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_crls, put = __cordl_internal_set_crls)) ::Org::BouncyCastle::Asn1::Asn1Set* crls;

  /// @brief Field crlsBer, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_crlsBer, put = __cordl_internal_set_crlsBer)) bool crlsBer;

  /// @brief Field digestAlgorithms, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_digestAlgorithms, put = __cordl_internal_set_digestAlgorithms)) ::Org::BouncyCastle::Asn1::Asn1Set* digestAlgorithms;

  /// @brief Field signerInfos, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_signerInfos, put = __cordl_internal_set_signerInfos)) ::Org::BouncyCastle::Asn1::Asn1Set* signerInfos;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method CalculateVersion, addr 0x230ac08, size 0x6a0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* CalculateVersion(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentOid, ::Org::BouncyCastle::Asn1::Asn1Set* certs,
                                                                 ::Org::BouncyCastle::Asn1::Asn1Set* crls, ::Org::BouncyCastle::Asn1::Asn1Set* signerInfs);

  /// @brief Method CheckForVersion3, addr 0x230b2a8, size 0x2bc, virtual false, abstract: false, final false
  inline bool CheckForVersion3(::Org::BouncyCastle::Asn1::Asn1Set* signerInfs);

  /// @brief Method GetInstance, addr 0x230a3f0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::SignedData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::SignedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* digestAlgorithms, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo,
                                                                     ::Org::BouncyCastle::Asn1::Asn1Set* certificates, ::Org::BouncyCastle::Asn1::Asn1Set* crls,
                                                                     ::Org::BouncyCastle::Asn1::Asn1Set* signerInfos);

  static inline ::Org::BouncyCastle::Asn1::Cms::SignedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x230b594, size 0x274, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_certificates() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_certificates();

  constexpr bool const& __cordl_internal_get_certsBer() const;

  constexpr bool& __cordl_internal_get_certsBer();

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* const& __cordl_internal_get_contentInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __cordl_internal_get_contentInfo();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_crls() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_crls();

  constexpr bool const& __cordl_internal_get_crlsBer() const;

  constexpr bool& __cordl_internal_get_crlsBer();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_digestAlgorithms() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_digestAlgorithms();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_signerInfos() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_signerInfos();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_certificates(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_certsBer(bool value);

  constexpr void __cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  constexpr void __cordl_internal_set_crls(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_crlsBer(bool value);

  constexpr void __cordl_internal_set_digestAlgorithms(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_signerInfos(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x230aaf8, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Set* digestAlgorithms, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo, ::Org::BouncyCastle::Asn1::Asn1Set* certificates,
                    ::Org::BouncyCastle::Asn1::Asn1Set* crls, ::Org::BouncyCastle::Asn1::Asn1Set* signerInfos);

  /// @brief Method .ctor, addr 0x230a494, size 0x664, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_Version1();

  static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_Version3();

  static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_Version4();

  static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_Version5();

  /// @brief Method get_CRLs, addr 0x230b584, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_CRLs();

  /// @brief Method get_Certificates, addr 0x230b57c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_Certificates();

  /// @brief Method get_DigestAlgorithms, addr 0x230b56c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_DigestAlgorithms();

  /// @brief Method get_EncapContentInfo, addr 0x230b574, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_EncapContentInfo();

  /// @brief Method get_SignerInfos, addr 0x230b58c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_SignerInfos();

  /// @brief Method get_Version, addr 0x230b564, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  static inline void setStaticF_Version1(::Org::BouncyCastle::Asn1::DerInteger* value);

  static inline void setStaticF_Version3(::Org::BouncyCastle::Asn1::DerInteger* value);

  static inline void setStaticF_Version4(::Org::BouncyCastle::Asn1::DerInteger* value);

  static inline void setStaticF_Version5(::Org::BouncyCastle::Asn1::DerInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignedData(SignedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignedData(SignedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 93 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field digestAlgorithms, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___digestAlgorithms;

  /// @brief Field contentInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ___contentInfo;

  /// @brief Field certificates, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___certificates;

  /// @brief Field crls, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___crls;

  /// @brief Field signerInfos, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___signerInfos;

  /// @brief Field certsBer, offset: 0x40, size: 0x1, def value: None
  bool ___certsBer;

  /// @brief Field crlsBer, offset: 0x41, size: 0x1, def value: None
  bool ___crlsBer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::SignedData, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::SignedData, ___digestAlgorithms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::SignedData, ___contentInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::SignedData, ___certificates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::SignedData, ___crls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::SignedData, ___signerInfos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::SignedData, ___certsBer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::SignedData, ___crlsBer) == 0x41, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::SignedData, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::SignedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::SignedData*, "Org.BouncyCastle.Asn1.Cms", "SignedData");
