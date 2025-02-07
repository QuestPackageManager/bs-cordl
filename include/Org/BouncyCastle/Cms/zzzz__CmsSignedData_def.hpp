#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsSignedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsSignedData)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignedData;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
namespace Org::BouncyCastle::Cms {
class SignerInformationStore;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace System::Collections {
class IDictionary;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsSignedData);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsSignedData
class CORDL_TYPE CmsSignedData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ContentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ContentInfo;

  /// @brief Field Helper, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Helper, put = setStaticF_Helper)) ::Org::BouncyCastle::Cms::CmsSignedHelper* Helper;

  __declspec(property(get = get_SignedContent)) ::Org::BouncyCastle::Cms::CmsProcessable* SignedContent;

  __declspec(property(get = get_SignedContentType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* SignedContentType;

  __declspec(property(get = get_SignedContentTypeOid)) ::StringW SignedContentTypeOid;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field attrCertStore, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_attrCertStore, put = __cordl_internal_set_attrCertStore)) ::Org::BouncyCastle::X509::Store::IX509Store* attrCertStore;

  /// @brief Field certificateStore, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_certificateStore, put = __cordl_internal_set_certificateStore)) ::Org::BouncyCastle::X509::Store::IX509Store* certificateStore;

  /// @brief Field contentInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_contentInfo, put = __cordl_internal_set_contentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo;

  /// @brief Field crlStore, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_crlStore, put = __cordl_internal_set_crlStore)) ::Org::BouncyCastle::X509::Store::IX509Store* crlStore;

  /// @brief Field hashes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_hashes, put = __cordl_internal_set_hashes)) ::System::Collections::IDictionary* hashes;

  /// @brief Field signedContent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_signedContent, put = __cordl_internal_set_signedContent)) ::Org::BouncyCastle::Cms::CmsProcessable* signedContent;

  /// @brief Field signedData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_signedData, put = __cordl_internal_set_signedData)) ::Org::BouncyCastle::Asn1::Cms::SignedData* signedData;

  /// @brief Field signerInfoStore, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_signerInfoStore, put = __cordl_internal_set_signerInfoStore)) ::Org::BouncyCastle::Cms::SignerInformationStore* signerInfoStore;

  /// @brief Method GetAttributeCertificates, addr 0x265c29c, size 0x88, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* GetAttributeCertificates(::StringW type);

  /// @brief Method GetCertificates, addr 0x265c958, size 0x88, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates(::StringW type);

  /// @brief Method GetCrls, addr 0x265cb80, size 0x88, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCrls(::StringW type);

  /// @brief Method GetEncoded, addr 0x265ce08, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetEncoded, addr 0x265ce24, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded(::StringW encoding);

  /// @brief Method GetSignerInfos, addr 0x265ba58, size 0x5d4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::SignerInformationStore* GetSignerInfos();

  static inline ::Org::BouncyCastle::Cms::CmsSignedData* New_ctor(::Org::BouncyCastle::Cms::CmsSignedData* c);

  static inline ::Org::BouncyCastle::Cms::CmsSignedData* New_ctor(::System::Collections::IDictionary* hashes, ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBlock);

  static inline ::Org::BouncyCastle::Cms::CmsSignedData* New_ctor(::System::Collections::IDictionary* hashes, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData);

  static inline ::Org::BouncyCastle::Cms::CmsSignedData* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sigBlock);

  static inline ::Org::BouncyCastle::Cms::CmsSignedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData);

  static inline ::Org::BouncyCastle::Cms::CmsSignedData* New_ctor(::System::IO::Stream* sigData);

  static inline ::Org::BouncyCastle::Cms::CmsSignedData* New_ctor(::Org::BouncyCastle::Cms::CmsProcessable* signedContent, ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBlock);

  static inline ::Org::BouncyCastle::Cms::CmsSignedData* New_ctor(::Org::BouncyCastle::Cms::CmsProcessable* signedContent, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData);

  static inline ::Org::BouncyCastle::Cms::CmsSignedData* New_ctor(::Org::BouncyCastle::Cms::CmsProcessable* signedContent, ::System::IO::Stream* sigData);

  /// @brief Method ReplaceCertificatesAndCrls, addr 0x265d5e0, size 0x314, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Cms::CmsSignedData* ReplaceCertificatesAndCrls(::Org::BouncyCastle::Cms::CmsSignedData* signedData, ::Org::BouncyCastle::X509::Store::IX509Store* x509Certs,
                                                                                    ::Org::BouncyCastle::X509::Store::IX509Store* x509Crls,
                                                                                    ::Org::BouncyCastle::X509::Store::IX509Store* x509AttrCerts);

  /// @brief Method ReplaceSigners, addr 0x265ce40, size 0x6d4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Cms::CmsSignedData* ReplaceSigners(::Org::BouncyCastle::Cms::CmsSignedData* signedData, ::Org::BouncyCastle::Cms::SignerInformationStore* signerInformationStore);

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& __cordl_internal_get_attrCertStore() const;

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& __cordl_internal_get_attrCertStore();

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& __cordl_internal_get_certificateStore() const;

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& __cordl_internal_get_certificateStore();

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* const& __cordl_internal_get_contentInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __cordl_internal_get_contentInfo();

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store* const& __cordl_internal_get_crlStore() const;

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& __cordl_internal_get_crlStore();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_hashes() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_hashes();

  constexpr ::Org::BouncyCastle::Cms::CmsProcessable* const& __cordl_internal_get_signedContent() const;

  constexpr ::Org::BouncyCastle::Cms::CmsProcessable*& __cordl_internal_get_signedContent();

  constexpr ::Org::BouncyCastle::Asn1::Cms::SignedData* const& __cordl_internal_get_signedData() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::SignedData*& __cordl_internal_get_signedData();

  constexpr ::Org::BouncyCastle::Cms::SignerInformationStore* const& __cordl_internal_get_signerInfoStore() const;

  constexpr ::Org::BouncyCastle::Cms::SignerInformationStore*& __cordl_internal_get_signerInfoStore();

  constexpr void __cordl_internal_set_attrCertStore(::Org::BouncyCastle::X509::Store::IX509Store* value);

  constexpr void __cordl_internal_set_certificateStore(::Org::BouncyCastle::X509::Store::IX509Store* value);

  constexpr void __cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  constexpr void __cordl_internal_set_crlStore(::Org::BouncyCastle::X509::Store::IX509Store* value);

  constexpr void __cordl_internal_set_hashes(::System::Collections::IDictionary* value);

  constexpr void __cordl_internal_set_signedContent(::Org::BouncyCastle::Cms::CmsProcessable* value);

  constexpr void __cordl_internal_set_signedData(::Org::BouncyCastle::Asn1::Cms::SignedData* value);

  constexpr void __cordl_internal_set_signerInfoStore(::Org::BouncyCastle::Cms::SignerInformationStore* value);

  /// @brief Method .ctor, addr 0x265b580, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsSignedData* c);

  /// @brief Method .ctor, addr 0x265b8c8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* hashes, ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBlock);

  /// @brief Method .ctor, addr 0x265b954, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* hashes, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData);

  /// @brief Method .ctor, addr 0x265b5cc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sigBlock);

  /// @brief Method .ctor, addr 0x265b6a4, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData);

  /// @brief Method .ctor, addr 0x265ba14, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* sigData);

  /// @brief Method .ctor, addr 0x265b7b8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsProcessable* signedContent, ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBlock);

  /// @brief Method .ctor, addr 0x265b838, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsProcessable* signedContent, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* sigData);

  /// @brief Method .ctor, addr 0x265b9e4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsProcessable* signedContent, ::System::IO::Stream* sigData);

  static inline ::Org::BouncyCastle::Cms::CmsSignedHelper* getStaticF_Helper();

  /// @brief Method get_ContentInfo, addr 0x265ce00, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_ContentInfo();

  /// @brief Method get_SignedContent, addr 0x265cdf8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsProcessable* get_SignedContent();

  /// @brief Method get_SignedContentType, addr 0x265cdd4, size 0x24, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SignedContentType();

  /// @brief Method get_SignedContentTypeOid, addr 0x265cda8, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_SignedContentTypeOid();

  /// @brief Method get_Version, addr 0x265ba34, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Version();

  static inline void setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsSignedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsSignedData(CmsSignedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsSignedData(CmsSignedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 648 };

  /// @brief Field signedContent, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsProcessable* ___signedContent;

  /// @brief Field signedData, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::SignedData* ___signedData;

  /// @brief Field contentInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ___contentInfo;

  /// @brief Field signerInfoStore, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::SignerInformationStore* ___signerInfoStore;

  /// @brief Field attrCertStore, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::Store::IX509Store* ___attrCertStore;

  /// @brief Field certificateStore, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::Store::IX509Store* ___certificateStore;

  /// @brief Field crlStore, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::Store::IX509Store* ___crlStore;

  /// @brief Field hashes, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___hashes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedData, ___signedContent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedData, ___signedData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedData, ___contentInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedData, ___signerInfoStore) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedData, ___attrCertStore) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedData, ___certificateStore) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedData, ___crlStore) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedData, ___hashes) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsSignedData, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedData*, "Org.BouncyCastle.Cms", "CmsSignedData");
