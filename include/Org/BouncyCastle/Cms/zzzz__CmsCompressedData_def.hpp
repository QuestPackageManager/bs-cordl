#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsCompressedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsCompressedData)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsCompressedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsCompressedData);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsCompressedData
class CORDL_TYPE CmsCompressedData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ContentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ContentInfo;

  /// @brief Field contentInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_contentInfo, put = __cordl_internal_set_contentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo;

  /// @brief Method GetContent, addr 0x2653918, size 0x260, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetContent();

  /// @brief Method GetContent, addr 0x2653b78, size 0x1dc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetContent(int32_t limit);

  /// @brief Method GetEncoded, addr 0x2653d5c, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  static inline ::Org::BouncyCastle::Cms::CmsCompressedData* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData);

  static inline ::Org::BouncyCastle::Cms::CmsCompressedData* New_ctor(::System::IO::Stream* compressedDataStream);

  static inline ::Org::BouncyCastle::Cms::CmsCompressedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo* const& __cordl_internal_get_contentInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __cordl_internal_get_contentInfo();

  constexpr void __cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  /// @brief Method .ctor, addr 0x2653880, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData);

  /// @brief Method .ctor, addr 0x26538e0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* compressedDataStream);

  /// @brief Method .ctor, addr 0x26538b8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  /// @brief Method get_ContentInfo, addr 0x2653d54, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_ContentInfo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsCompressedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsCompressedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsCompressedData(CmsCompressedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsCompressedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsCompressedData(CmsCompressedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 628 };

  /// @brief Field contentInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ___contentInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsCompressedData, ___contentInfo) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsCompressedData, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsCompressedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsCompressedData*, "Org.BouncyCastle.Cms", "CmsCompressedData");
