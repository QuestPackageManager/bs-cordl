#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsSignedDataParser)
namespace Org::BouncyCastle::Asn1::Cms {
class SignedDataParser;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Cms {
class SignerInformationStore;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace System::IO {
class Stream;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SetParser;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsSignedDataParser);
// Type: Org.BouncyCastle.Cms::CmsSignedDataParser
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(620))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(652))
// CS Name: ::Org.BouncyCastle.Cms::CmsSignedDataParser*
class CORDL_TYPE CmsSignedDataParser : public ::Org::BouncyCastle::Cms::CmsContentInfoParser {
public:
  // Declarations
  /// @brief Field _signedData, offset 0x20, size 0x8
  __declspec(property(get = __get__signedData, put = __set__signedData))::Org::BouncyCastle::Asn1::Cms::SignedDataParser* _signedData;

  /// @brief Field _signedContentType, offset 0x28, size 0x8
  __declspec(property(get = __get__signedContentType, put = __set__signedContentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* _signedContentType;

  /// @brief Field _signedContent, offset 0x30, size 0x8
  __declspec(property(get = __get__signedContent, put = __set__signedContent))::Org::BouncyCastle::Cms::CmsTypedStream* _signedContent;

  /// @brief Field _digests, offset 0x38, size 0x8
  __declspec(property(get = __get__digests, put = __set__digests))::System::Collections::IDictionary* _digests;

  /// @brief Field _digestOids, offset 0x40, size 0x8
  __declspec(property(get = __get__digestOids, put = __set__digestOids))::Org::BouncyCastle::Utilities::Collections::ISet* _digestOids;

  /// @brief Field _signerInfoStore, offset 0x48, size 0x8
  __declspec(property(get = __get__signerInfoStore, put = __set__signerInfoStore))::Org::BouncyCastle::Cms::SignerInformationStore* _signerInfoStore;

  /// @brief Field _certSet, offset 0x50, size 0x8
  __declspec(property(get = __get__certSet, put = __set__certSet))::Org::BouncyCastle::Asn1::Asn1Set* _certSet;

  /// @brief Field _crlSet, offset 0x58, size 0x8
  __declspec(property(get = __get__crlSet, put = __set__crlSet))::Org::BouncyCastle::Asn1::Asn1Set* _crlSet;

  /// @brief Field _isCertCrlParsed, offset 0x60, size 0x1
  __declspec(property(get = __get__isCertCrlParsed, put = __set__isCertCrlParsed)) bool _isCertCrlParsed;

  /// @brief Field _attributeStore, offset 0x68, size 0x8
  __declspec(property(get = __get__attributeStore, put = __set__attributeStore))::Org::BouncyCastle::X509::Store::IX509Store* _attributeStore;

  /// @brief Field _certificateStore, offset 0x70, size 0x8
  __declspec(property(get = __get__certificateStore, put = __set__certificateStore))::Org::BouncyCastle::X509::Store::IX509Store* _certificateStore;

  /// @brief Field _crlStore, offset 0x78, size 0x8
  __declspec(property(get = __get__crlStore, put = __set__crlStore))::Org::BouncyCastle::X509::Store::IX509Store* _crlStore;

  /// @brief Field Helper, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Helper, put = setStaticF_Helper))::Org::BouncyCastle::Cms::CmsSignedHelper* Helper;

  __declspec(property(get = get_Version)) int32_t Version;

  __declspec(property(get = get_DigestOids))::Org::BouncyCastle::Utilities::Collections::ISet* DigestOids;

  __declspec(property(get = get_SignedContentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SignedContentType;

  constexpr ::Org::BouncyCastle::Asn1::Cms::SignedDataParser*& __get__signedData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::SignedDataParser*> const& __get__signedData() const;

  constexpr void __set__signedData(::Org::BouncyCastle::Asn1::Cms::SignedDataParser* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get__signedContentType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get__signedContentType() const;

  constexpr void __set__signedContentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Cms::CmsTypedStream*& __get__signedContent();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsTypedStream*> const& __get__signedContent() const;

  constexpr void __set__signedContent(::Org::BouncyCastle::Cms::CmsTypedStream* value);

  constexpr ::System::Collections::IDictionary*& __get__digests();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get__digests() const;

  constexpr void __set__digests(::System::Collections::IDictionary* value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __get__digestOids();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __get__digestOids() const;

  constexpr void __set__digestOids(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr ::Org::BouncyCastle::Cms::SignerInformationStore*& __get__signerInfoStore();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::SignerInformationStore*> const& __get__signerInfoStore() const;

  constexpr void __set__signerInfoStore(::Org::BouncyCastle::Cms::SignerInformationStore* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get__certSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get__certSet() const;

  constexpr void __set__certSet(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get__crlSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get__crlSet() const;

  constexpr void __set__crlSet(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr bool& __get__isCertCrlParsed();

  constexpr bool const& __get__isCertCrlParsed() const;

  constexpr void __set__isCertCrlParsed(bool value);

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& __get__attributeStore();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> const& __get__attributeStore() const;

  constexpr void __set__attributeStore(::Org::BouncyCastle::X509::Store::IX509Store* value);

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& __get__certificateStore();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> const& __get__certificateStore() const;

  constexpr void __set__certificateStore(::Org::BouncyCastle::X509::Store::IX509Store* value);

  constexpr ::Org::BouncyCastle::X509::Store::IX509Store*& __get__crlStore();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::IX509Store*> const& __get__crlStore() const;

  constexpr void __set__crlStore(::Org::BouncyCastle::X509::Store::IX509Store* value);

  static inline void setStaticF_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper* value);

  static inline ::Org::BouncyCastle::Cms::CmsSignedHelper* getStaticF_Helper();

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sigBlock);

  /// @brief Method .ctor, addr 0x11ed8c8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> sigBlock);

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* New_ctor(::Org::BouncyCastle::Cms::CmsTypedStream* signedContent, ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBlock);

  /// @brief Method .ctor, addr 0x11ed950, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsTypedStream* signedContent, ::ArrayW<uint8_t, ::Array<uint8_t>*> sigBlock);

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* New_ctor(::System::IO::Stream* sigData);

  /// @brief Method .ctor, addr 0x11ed944, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* sigData);

  static inline ::Org::BouncyCastle::Cms::CmsSignedDataParser* New_ctor(::Org::BouncyCastle::Cms::CmsTypedStream* signedContent, ::System::IO::Stream* sigData);

  /// @brief Method .ctor, addr 0x11ed9d0, size 0x784, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Cms::CmsTypedStream* signedContent, ::System::IO::Stream* sigData);

  /// @brief Method get_Version, addr 0x11ee1c4, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method get_DigestOids, addr 0x11ee1e8, size 0x68, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* get_DigestOids();

  /// @brief Method GetSignerInfos, addr 0x11ee250, size 0x9b8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::SignerInformationStore* GetSignerInfos();

  /// @brief Method GetAttributeCertificates, addr 0x11eed80, size 0x88, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* GetAttributeCertificates(::StringW type);

  /// @brief Method GetCertificates, addr 0x11eee08, size 0x88, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCertificates(::StringW type);

  /// @brief Method GetCrls, addr 0x11eee90, size 0x88, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::IX509Store* GetCrls(::StringW type);

  /// @brief Method PopulateCertCrlSets, addr 0x11eec08, size 0x178, virtual false, abstract: false, final false
  inline void PopulateCertCrlSets();

  /// @brief Method get_SignedContentType, addr 0x11eefc8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SignedContentType();

  /// @brief Method GetSignedContent, addr 0x11eefd0, size 0x464, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetSignedContent();

  /// @brief Method ReplaceSigners, addr 0x11ef434, size 0x19c, virtual false, abstract: false, final false
  static inline ::System::IO::Stream* ReplaceSigners(::System::IO::Stream* original, ::Org::BouncyCastle::Cms::SignerInformationStore* signerInformationStore, ::System::IO::Stream* outStr);

  /// @brief Method ReplaceCertificatesAndCrls, addr 0x11ef6ac, size 0x1a4, virtual false, abstract: false, final false
  static inline ::System::IO::Stream* ReplaceCertificatesAndCrls(::System::IO::Stream* original, ::Org::BouncyCastle::X509::Store::IX509Store* x509Certs,
                                                                 ::Org::BouncyCastle::X509::Store::IX509Store* x509Crls, ::Org::BouncyCastle::X509::Store::IX509Store* x509AttrCerts,
                                                                 ::System::IO::Stream* outStr);

  /// @brief Method GetAsn1Set, addr 0x11eef18, size 0xb0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Set* GetAsn1Set(::Org::BouncyCastle::Asn1::Asn1SetParser* asn1SetParser);

  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsSignedDataParser(CmsSignedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsSignedDataParser(CmsSignedDataParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsSignedDataParser();

public:
  /// @brief Field _signedData, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::SignedDataParser* ____signedData;

  /// @brief Field _signedContentType, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ____signedContentType;

  /// @brief Field _signedContent, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsTypedStream* ____signedContent;

  /// @brief Field _digests, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::IDictionary* ____digests;

  /// @brief Field _digestOids, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ____digestOids;

  /// @brief Field _signerInfoStore, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::SignerInformationStore* ____signerInfoStore;

  /// @brief Field _certSet, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ____certSet;

  /// @brief Field _crlSet, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ____crlSet;

  /// @brief Field _isCertCrlParsed, offset: 0x60, size: 0x1, def value: None
  bool ____isCertCrlParsed;

  /// @brief Field _attributeStore, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::Store::IX509Store* ____attributeStore;

  /// @brief Field _certificateStore, offset: 0x70, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::Store::IX509Store* ____certificateStore;

  /// @brief Field _crlStore, offset: 0x78, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::Store::IX509Store* ____crlStore;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsSignedDataParser, 0x80>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____signedData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____signedContentType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____signedContent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____digests) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____digestOids) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____signerInfoStore) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____certSet) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____crlSet) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____isCertCrlParsed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____attributeStore) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____certificateStore) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsSignedDataParser, ____crlStore) == 0x78, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedDataParser*, "Org.BouncyCastle.Cms", "CmsSignedDataParser");
