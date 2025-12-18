#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsAuthenticatedDataParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsAuthenticatedDataParser)
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AuthenticatedDataParser;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser);
// Dependencies Org.BouncyCastle.Cms.CmsContentInfoParser
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsAuthenticatedDataParser
class CORDL_TYPE CmsAuthenticatedDataParser : public ::Org::BouncyCastle::Cms::CmsContentInfoParser {
public:
  // Declarations
  __declspec(property(get = get_MacAlgOid)) ::StringW MacAlgOid;

  __declspec(property(get = get_MacAlgParams)) ::Org::BouncyCastle::Asn1::Asn1Object* MacAlgParams;

  __declspec(property(get = get_MacAlgorithmID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* MacAlgorithmID;

  /// @brief Field _recipientInfoStore, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__recipientInfoStore, put = __cordl_internal_set__recipientInfoStore)) ::Org::BouncyCastle::Cms::RecipientInformationStore* _recipientInfoStore;

  /// @brief Field authAttrNotRead, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_authAttrNotRead, put = __cordl_internal_set_authAttrNotRead)) bool authAttrNotRead;

  /// @brief Field authAttrs, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_authAttrs, put = __cordl_internal_set_authAttrs)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable* authAttrs;

  /// @brief Field authData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_authData, put = __cordl_internal_set_authData)) ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser* authData;

  /// @brief Field mac, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mac, put = __cordl_internal_set_mac)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mac;

  /// @brief Field macAlg, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_macAlg, put = __cordl_internal_set_macAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlg;

  /// @brief Field unauthAttrNotRead, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_unauthAttrNotRead, put = __cordl_internal_set_unauthAttrNotRead)) bool unauthAttrNotRead;

  /// @brief Field unauthAttrs, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_unauthAttrs, put = __cordl_internal_set_unauthAttrs)) ::Org::BouncyCastle::Asn1::Cms::AttributeTable* unauthAttrs;

  /// @brief Method GetAuthAttrs, addr 0x35ab72c, size 0x258, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAuthAttrs();

  /// @brief Method GetMac, addr 0x35ab694, size 0x98, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetRecipientInfos, addr 0x35ab68c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::RecipientInformationStore* GetRecipientInfos();

  /// @brief Method GetUnauthAttrs, addr 0x35ab984, size 0x258, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetUnauthAttrs();

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> envelopedData);

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser* New_ctor(::System::IO::Stream* envelopedData);

  constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore* const& __cordl_internal_get__recipientInfoStore() const;

  constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore*& __cordl_internal_get__recipientInfoStore();

  constexpr bool const& __cordl_internal_get_authAttrNotRead() const;

  constexpr bool& __cordl_internal_get_authAttrNotRead();

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* const& __cordl_internal_get_authAttrs() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __cordl_internal_get_authAttrs();

  constexpr ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser* const& __cordl_internal_get_authData() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*& __cordl_internal_get_authData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mac() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mac();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_macAlg() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_macAlg();

  constexpr bool const& __cordl_internal_get_unauthAttrNotRead() const;

  constexpr bool& __cordl_internal_get_unauthAttrNotRead();

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable* const& __cordl_internal_get_unauthAttrs() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __cordl_internal_get_unauthAttrs();

  constexpr void __cordl_internal_set__recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore* value);

  constexpr void __cordl_internal_set_authAttrNotRead(bool value);

  constexpr void __cordl_internal_set_authAttrs(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  constexpr void __cordl_internal_set_authData(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser* value);

  constexpr void __cordl_internal_set_mac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_macAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_unauthAttrNotRead(bool value);

  constexpr void __cordl_internal_set_unauthAttrs(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  /// @brief Method .ctor, addr 0x35ab2a4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> envelopedData);

  /// @brief Method .ctor, addr 0x35ab318, size 0x308, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* envelopedData);

  /// @brief Method get_MacAlgOid, addr 0x35ab628, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_MacAlgOid();

  /// @brief Method get_MacAlgParams, addr 0x35ab654, size 0x38, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_MacAlgParams();

  /// @brief Method get_MacAlgorithmID, addr 0x35ab620, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_MacAlgorithmID();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsAuthenticatedDataParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsAuthenticatedDataParser(CmsAuthenticatedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsAuthenticatedDataParser(CmsAuthenticatedDataParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 621 };

  /// @brief Field _recipientInfoStore, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::RecipientInformationStore* ____recipientInfoStore;

  /// @brief Field authData, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser* ___authData;

  /// @brief Field macAlg, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___macAlg;

  /// @brief Field mac, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mac;

  /// @brief Field authAttrs, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::AttributeTable* ___authAttrs;

  /// @brief Field unauthAttrs, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::AttributeTable* ___unauthAttrs;

  /// @brief Field authAttrNotRead, offset: 0x50, size: 0x1, def value: None
  bool ___authAttrNotRead;

  /// @brief Field unauthAttrNotRead, offset: 0x51, size: 0x1, def value: None
  bool ___unauthAttrNotRead;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ____recipientInfoStore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ___authData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ___macAlg) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ___mac) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ___authAttrs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ___unauthAttrs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ___authAttrNotRead) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ___unauthAttrNotRead) == 0x51, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*, "Org.BouncyCastle.Cms", "CmsAuthenticatedDataParser");
