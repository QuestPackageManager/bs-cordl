#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsAuthenticatedData)
namespace System::IO {
class Stream;
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
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAuthenticatedData);
// Type: Org.BouncyCastle.Cms::CmsAuthenticatedData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(616))
// CS Name: ::Org.BouncyCastle.Cms::CmsAuthenticatedData*
class CORDL_TYPE CmsAuthenticatedData : public ::System::Object {
public:
  // Declarations
  /// @brief Field recipientInfoStore, offset 0x10, size 0x8
  __declspec(property(get = __get_recipientInfoStore, put = __set_recipientInfoStore))::Org::BouncyCastle::Cms::RecipientInformationStore* recipientInfoStore;

  /// @brief Field contentInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_contentInfo, put = __set_contentInfo))::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo;

  /// @brief Field macAlg, offset 0x20, size 0x8
  __declspec(property(get = __get_macAlg, put = __set_macAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* macAlg;

  /// @brief Field authAttrs, offset 0x28, size 0x8
  __declspec(property(get = __get_authAttrs, put = __set_authAttrs))::Org::BouncyCastle::Asn1::Asn1Set* authAttrs;

  /// @brief Field unauthAttrs, offset 0x30, size 0x8
  __declspec(property(get = __get_unauthAttrs, put = __set_unauthAttrs))::Org::BouncyCastle::Asn1::Asn1Set* unauthAttrs;

  /// @brief Field mac, offset 0x38, size 0x8
  __declspec(property(get = __get_mac, put = __set_mac))::ArrayW<uint8_t, ::Array<uint8_t>*> mac;

  __declspec(property(get = get_MacAlgorithmID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* MacAlgorithmID;

  __declspec(property(get = get_MacAlgOid))::StringW MacAlgOid;

  __declspec(property(get = get_ContentInfo))::Org::BouncyCastle::Asn1::Cms::ContentInfo* ContentInfo;

  constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore*& __get_recipientInfoStore();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientInformationStore*> const& __get_recipientInfoStore() const;

  constexpr void __set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __get_contentInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> const& __get_contentInfo() const;

  constexpr void __set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_macAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_macAlg() const;

  constexpr void __set_macAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_authAttrs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_authAttrs() const;

  constexpr void __set_authAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_unauthAttrs();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_unauthAttrs() const;

  constexpr void __set_unauthAttrs(::Org::BouncyCastle::Asn1::Asn1Set* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mac() const;

  constexpr void __set_mac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> authData);

  /// @brief Method .ctor addr 0x116711c size 0x24 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> authData);

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* New_ctor(::System::IO::Stream* authData);

  /// @brief Method .ctor addr 0x11672a8 size 0x24 virtual false final false
  inline void _ctor(::System::IO::Stream* authData);

  static inline ::Org::BouncyCastle::Cms::CmsAuthenticatedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  /// @brief Method .ctor addr 0x1167140 size 0x168 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  /// @brief Method GetMac addr 0x11672cc size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method get_MacAlgorithmID addr 0x1167328 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_MacAlgorithmID();

  /// @brief Method get_MacAlgOid addr 0x1167330 size 0x2c virtual false final false
  inline ::StringW get_MacAlgOid();

  /// @brief Method GetRecipientInfos addr 0x116735c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Cms::RecipientInformationStore* GetRecipientInfos();

  /// @brief Method get_ContentInfo addr 0x1167364 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_ContentInfo();

  /// @brief Method GetAuthAttrs addr 0x116736c size 0x74 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAuthAttrs();

  /// @brief Method GetUnauthAttrs addr 0x11673e0 size 0x74 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetUnauthAttrs();

  /// @brief Method GetEncoded addr 0x1167454 size 0x1c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsAuthenticatedData(CmsAuthenticatedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsAuthenticatedData(CmsAuthenticatedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsAuthenticatedData();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAuthenticatedData, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedData, ___recipientInfoStore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedData, ___contentInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedData, ___macAlg) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedData, ___authAttrs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedData, ___unauthAttrs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAuthenticatedData, ___mac) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthenticatedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthenticatedData*, "Org.BouncyCastle.Cms", "CmsAuthenticatedData");
