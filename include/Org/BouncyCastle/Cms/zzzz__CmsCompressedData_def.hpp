#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Cms::CmsCompressedData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(628))
// CS Name: ::Org.BouncyCastle.Cms::CmsCompressedData*
class CORDL_TYPE CmsCompressedData : public ::System::Object {
public:
  // Declarations
  /// @brief Field contentInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_contentInfo, put = __set_contentInfo))::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo;

  __declspec(property(get = get_ContentInfo))::Org::BouncyCastle::Asn1::Cms::ContentInfo* ContentInfo;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __get_contentInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> const& __get_contentInfo() const;

  constexpr void __set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  static inline ::Org::BouncyCastle::Cms::CmsCompressedData* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData);

  /// @brief Method .ctor addr 0x116b3e4 size 0x38 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData);

  static inline ::Org::BouncyCastle::Cms::CmsCompressedData* New_ctor(::System::IO::Stream* compressedDataStream);

  /// @brief Method .ctor addr 0x116b444 size 0x38 virtual false final false
  inline void _ctor(::System::IO::Stream* compressedDataStream);

  static inline ::Org::BouncyCastle::Cms::CmsCompressedData* New_ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  /// @brief Method .ctor addr 0x116b41c size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::ContentInfo* contentInfo);

  /// @brief Method GetContent addr 0x116b47c size 0x26c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetContent();

  /// @brief Method GetContent addr 0x116b6e8 size 0x1e8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetContent(int32_t limit);

  /// @brief Method get_ContentInfo addr 0x116b8d0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_ContentInfo();

  /// @brief Method GetEncoded addr 0x116b8d8 size 0x1c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  // Ctor Parameters [CppParam { name: "", ty: "CmsCompressedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsCompressedData(CmsCompressedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsCompressedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsCompressedData(CmsCompressedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsCompressedData();

public:
  /// @brief Field contentInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ___contentInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsCompressedData, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsCompressedData, ___contentInfo) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsCompressedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsCompressedData*, "Org.BouncyCastle.Cms", "CmsCompressedData");
