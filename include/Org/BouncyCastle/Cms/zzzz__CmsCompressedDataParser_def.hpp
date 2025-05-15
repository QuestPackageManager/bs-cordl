#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsCompressedDataParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Cms/zzzz__CmsContentInfoParser_def.hpp"
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
// Dependencies Org.BouncyCastle.Cms.CmsContentInfoParser
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsCompressedDataParser
class CORDL_TYPE CmsCompressedDataParser : public ::Org::BouncyCastle::Cms::CmsContentInfoParser {
public:
  // Declarations
  /// @brief Method GetContent, addr 0x2653b18, size 0x2e8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsTypedStream* GetContent();

  static inline ::Org::BouncyCastle::Cms::CmsCompressedDataParser* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData);

  static inline ::Org::BouncyCastle::Cms::CmsCompressedDataParser* New_ctor(::System::IO::Stream* compressedData);

  /// @brief Method .ctor, addr 0x2653aa4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> compressedData);

  /// @brief Method .ctor, addr 0x2653b14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* compressedData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsCompressedDataParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsCompressedDataParser(CmsCompressedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsCompressedDataParser(CmsCompressedDataParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsCompressedDataParser, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsCompressedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsCompressedDataParser*, "Org.BouncyCastle.Cms", "CmsCompressedDataParser");
