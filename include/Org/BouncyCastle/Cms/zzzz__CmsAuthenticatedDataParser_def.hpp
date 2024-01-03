#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Cms::CmsAuthenticatedDataParser
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 82, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(620))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(621))
// CS Name: ::Org.BouncyCastle.Cms::CmsAuthenticatedDataParser*
class CORDL_TYPE CmsAuthenticatedDataParser : public ::Org::BouncyCastle::Cms::CmsContentInfoParser {
public:
  // Declarations
  /// @brief Field _recipientInfoStore, offset 0x20, size 0x8
  __declspec(property(get = __get__recipientInfoStore, put = __set__recipientInfoStore))::Org::BouncyCastle::Cms::RecipientInformationStore* _recipientInfoStore;

  /// @brief Field authData, offset 0x28, size 0x8
  __declspec(property(get = __get_authData, put = __set_authData))::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser* authData;

  /// @brief Field macAlg, offset 0x30, size 0x8
  __declspec(property(get = __get_macAlg, put = __set_macAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlg;

  /// @brief Field mac, offset 0x38, size 0x8
  __declspec(property(get = __get_mac, put = __set_mac))::ArrayW<uint8_t, ::Array<uint8_t>*> mac;

  /// @brief Field authAttrs, offset 0x40, size 0x8
  __declspec(property(get = __get_authAttrs, put = __set_authAttrs))::Org::BouncyCastle::Asn1::Cms::AttributeTable* authAttrs;

  /// @brief Field unauthAttrs, offset 0x48, size 0x8
  __declspec(property(get = __get_unauthAttrs, put = __set_unauthAttrs))::Org::BouncyCastle::Asn1::Cms::AttributeTable* unauthAttrs;

  /// @brief Field authAttrNotRead, offset 0x50, size 0x1
  __declspec(property(get = __get_authAttrNotRead, put = __set_authAttrNotRead)) bool authAttrNotRead;

  /// @brief Field unauthAttrNotRead, offset 0x51, size 0x1
  __declspec(property(get = __get_unauthAttrNotRead, put = __set_unauthAttrNotRead)) bool unauthAttrNotRead;

  __declspec(property(get = get_MacAlgorithmID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* MacAlgorithmID;

  __declspec(property(get = get_MacAlgOid))::StringW MacAlgOid;

  __declspec(property(get = get_MacAlgParams))::Org::BouncyCastle::Asn1::Asn1Object* MacAlgParams;

  constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore*& __get__recipientInfoStore();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientInformationStore*> const& __get__recipientInfoStore() const;

  constexpr void __set__recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*& __get_authData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser*> const& __get_authData() const;

  constexpr void __set_authData(::Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_macAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_macAlg() const;

  constexpr void __set_macAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mac() const;

  constexpr void __set_mac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __get_authAttrs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& __get_authAttrs() const;

  constexpr void __set_authAttrs(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable*& __get_unauthAttrs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::AttributeTable*> const& __get_unauthAttrs() const;

  constexpr void __set_unauthAttrs(::Org::BouncyCastle::Asn1::Cms::AttributeTable* value);

  constexpr bool& __get_authAttrNotRead();

  constexpr bool const& __get_authAttrNotRead() const;

  constexpr void __set_authAttrNotRead(bool value);

  constexpr bool& __get_unauthAttrNotRead();

  constexpr bool const& __get_unauthAttrNotRead() const;

  constexpr void __set_unauthAttrNotRead(bool value);

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> envelopedData);

  /// @brief Method .ctor, addr 0x11da7ec, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> envelopedData);

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser* New_ctor(::System::IO::Stream* envelopedData);

  /// @brief Method .ctor, addr 0x11da864, size 0x308, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* envelopedData);

  /// @brief Method get_MacAlgorithmID, addr 0x11dab6c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_MacAlgorithmID();

  /// @brief Method get_MacAlgOid, addr 0x11dab74, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_MacAlgOid();

  /// @brief Method get_MacAlgParams, addr 0x11daba0, size 0x38, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_MacAlgParams();

  /// @brief Method GetRecipientInfos, addr 0x11dabd8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::RecipientInformationStore* GetRecipientInfos();

  /// @brief Method GetMac, addr 0x11dabe0, size 0x94, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetAuthAttrs, addr 0x11dac74, size 0x24c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAuthAttrs();

  /// @brief Method GetUnauthAttrs, addr 0x11daec0, size 0x24c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetUnauthAttrs();

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsAuthenticatedDataParser(CmsAuthenticatedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsAuthenticatedDataParser(CmsAuthenticatedDataParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsAuthenticatedDataParser();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, 0x58>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ____recipientInfoStore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ___authData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ___macAlg) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ___mac) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ___authAttrs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ___unauthAttrs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ___authAttrNotRead) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser, ___unauthAttrNotRead) == 0x51, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthenticatedDataParser*, "Org.BouncyCastle.Cms", "CmsAuthenticatedDataParser");
