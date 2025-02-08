#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsAuthenticatedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsAuthenticatedData)
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthenticatedData);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsAuthenticatedData
class CORDL_TYPE CmsAuthenticatedData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ContentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ContentInfo;

  __declspec(property(get = get_MacAlgOid)) ::StringW MacAlgOid;

  __declspec(property(get = get_MacAlgorithmID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* MacAlgorithmID;

  /// @brief Field authAttrs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_authAttrs, put = __cordl_internal_set_authAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set* authAttrs;

  /// @brief Field contentInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_contentInfo, put = __cordl_internal_set_contentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo;

  /// @brief Field mac, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mac, put = __cordl_internal_set_mac)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mac;

  /// @brief Field macAlg, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_macAlg, put = __cordl_internal_set_macAlg)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlg;

  /// @brief Field recipientInfoStore, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_recipientInfoStore, put = __cordl_internal_set_recipientInfoStore)) ::Org::BouncyCastle::Cms::RecipientInformationStore* recipientInfoStore;

  /// @brief Field unauthAttrs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_unauthAttrs, put = __cordl_internal_set_unauthAttrs)) ::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs;

  /// @brief Method GetAuthAttrs, addr 0x264f8e4, size 0x6c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAuthAttrs();

  /// @brief Method GetEncoded, addr 0x264f9bc, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetMac, addr 0x264f844, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetRecipientInfos, addr 0x264f8d4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::RecipientInformationStore* GetRecipientInfos();

  /// @brief Method GetUnauthAttrs, addr 0x264f950, size 0x6c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetUnauthAttrs();

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> authData);

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* New_ctor(::System::IO::Stream* authData);

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_authAttrs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_authAttrs();

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* const& __cordl_internal_get_contentInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __cordl_internal_get_contentInfo();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mac() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mac();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_macAlg() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_macAlg();

  constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore* const& __cordl_internal_get_recipientInfoStore() const;

  constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore*& __cordl_internal_get_recipientInfoStore();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& __cordl_internal_get_unauthAttrs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_unauthAttrs();

  constexpr void __cordl_internal_set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr void __cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  constexpr void __cordl_internal_set_mac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_macAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore* value);

  constexpr void __cordl_internal_set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  /// @brief Method .ctor, addr 0x264f694, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> authData);

  /// @brief Method .ctor, addr 0x264f820, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* authData);

  /// @brief Method .ctor, addr 0x264f6b8, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  /// @brief Method get_ContentInfo, addr 0x264f8dc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_ContentInfo();

  /// @brief Method get_MacAlgOid, addr 0x264f8a8, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_MacAlgOid();

  /// @brief Method get_MacAlgorithmID, addr 0x264f8a0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_MacAlgorithmID();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsAuthenticatedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsAuthenticatedData(CmsAuthenticatedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsAuthenticatedData(CmsAuthenticatedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 616 };

  /// @brief Field recipientInfoStore, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::RecipientInformationStore* ___recipientInfoStore;

  /// @brief Field contentInfo, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ___contentInfo;

  /// @brief Field macAlg, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___macAlg;

  /// @brief Field authAttrs, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___authAttrs;

  /// @brief Field unauthAttrs, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___unauthAttrs;

  /// @brief Field mac, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mac;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedData, ___recipientInfoStore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedData, ___contentInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedData, ___macAlg) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedData, ___authAttrs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedData, ___unauthAttrs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedData, ___mac) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthenticatedData, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthenticatedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthenticatedData*, "Org.BouncyCastle.Cms", "CmsAuthenticatedData");
