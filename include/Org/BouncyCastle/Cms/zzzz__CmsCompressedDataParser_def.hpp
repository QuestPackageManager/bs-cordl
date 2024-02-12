#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsCompressedDataParser)
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsCompressedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsCompressedDataParser);
// Type: Org.BouncyCastle.Cms::CmsCompressedDataParser
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(620))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(630))
// CS Name: ::Org.BouncyCastle.Cms::CmsCompressedDataParser*
class CORDL_TYPE CmsCompressedDataParser : public ::Org::BouncyCastle::Cms::CmsContentInfoParser {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Cms::CmsCompressedDataParser* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData);

  /// @brief Method .ctor, addr 0x120adc8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData);

  static inline ::Org::BouncyCastle::Cms::CmsCompressedDataParser* New_ctor(::System::IO::Stream* compressedData);

  /// @brief Method .ctor, addr 0x120ae40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* compressedData);

  /// @brief Method GetContent, addr 0x120ae44, size 0x300, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetContent();

  // Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsCompressedDataParser(CmsCompressedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsCompressedDataParser(CmsCompressedDataParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsCompressedDataParser();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsCompressedDataParser, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsCompressedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsCompressedDataParser*, "Org.BouncyCastle.Cms", "CmsCompressedDataParser");
