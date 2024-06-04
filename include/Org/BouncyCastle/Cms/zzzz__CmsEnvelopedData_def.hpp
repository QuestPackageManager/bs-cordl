#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsEnvelopedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsEnvelopedData)
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
class CmsEnvelopedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsEnvelopedData);
// Type: Org.BouncyCastle.Cms::CmsEnvelopedData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Cms::CmsEnvelopedData*
class CORDL_TYPE CmsEnvelopedData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ContentInfo))::Org::BouncyCastle::Asn1::Cms::ContentInfo* ContentInfo;

  __declspec(property(get = get_EncryptionAlgOid))::StringW EncryptionAlgOid;

  __declspec(property(get = get_EncryptionAlgorithmID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* EncryptionAlgorithmID;

  /// @brief Field contentInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_contentInfo, put = __cordl_internal_set_contentInfo))::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo;

  /// @brief Field encAlg, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_encAlg, put = __cordl_internal_set_encAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* encAlg;

  /// @brief Field recipientInfoStore, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_recipientInfoStore, put = __cordl_internal_set_recipientInfoStore))::Org::BouncyCastle::Cms::RecipientInformationStore* recipientInfoStore;

  /// @brief Field unprotectedAttributes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_unprotectedAttributes, put = __cordl_internal_set_unprotectedAttributes))::Org::BouncyCastle::Asn1::Asn1Set* unprotectedAttributes;

  /// @brief Method GetEncoded, addr 0x14469f4, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetRecipientInfos, addr 0x1446970, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::RecipientInformationStore* GetRecipientInfos();

  /// @brief Method GetUnprotectedAttributes, addr 0x1446980, size 0x74, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetUnprotectedAttributes();

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> envelopedData);

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedData* New_ctor(::System::IO::Stream* envelopedData);

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __cordl_internal_get_contentInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> const& __cordl_internal_get_contentInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_encAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_encAlg() const;

  constexpr ::Org::BouncyCastle::Cms::RecipientInformationStore*& __cordl_internal_get_recipientInfoStore();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::RecipientInformationStore*> const& __cordl_internal_get_recipientInfoStore() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __cordl_internal_get_unprotectedAttributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __cordl_internal_get_unprotectedAttributes() const;

  constexpr void __cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  constexpr void __cordl_internal_set_encAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_recipientInfoStore(::Org::BouncyCastle::Cms::RecipientInformationStore* value);

  constexpr void __cordl_internal_set_unprotectedAttributes(::Org::BouncyCastle::Asn1::Asn1Set* value);

  /// @brief Method .ctor, addr 0x14467d4, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  /// @brief Method .ctor, addr 0x14467b0, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> envelopedData);

  /// @brief Method .ctor, addr 0x1446918, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* envelopedData);

  /// @brief Method get_ContentInfo, addr 0x1446978, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_ContentInfo();

  /// @brief Method get_EncryptionAlgOid, addr 0x1446944, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_EncryptionAlgOid();

  /// @brief Method get_EncryptionAlgorithmID, addr 0x144693c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_EncryptionAlgorithmID();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsEnvelopedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsEnvelopedData(CmsEnvelopedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsEnvelopedData(CmsEnvelopedData const&) = delete;

  /// @brief Field recipientInfoStore, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::RecipientInformationStore* ___recipientInfoStore;

  /// @brief Field contentInfo, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ___contentInfo;

  /// @brief Field encAlg, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___encAlg;

  /// @brief Field unprotectedAttributes, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___unprotectedAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsEnvelopedData, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsEnvelopedData, ___recipientInfoStore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsEnvelopedData, ___contentInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsEnvelopedData, ___encAlg) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsEnvelopedData, ___unprotectedAttributes) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsEnvelopedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsEnvelopedData*, "Org.BouncyCastle.Cms", "CmsEnvelopedData");
