#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsContentInfoParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CmsContentInfoParser)
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfoParser;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsContentInfoParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsContentInfoParser);
// Dependencies System.Object
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsContentInfoParser
class CORDL_TYPE CmsContentInfoParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field contentInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_contentInfo, put = __cordl_internal_set_contentInfo)) ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* contentInfo;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::System::IO::Stream* data;

  /// @brief Method Close, addr 0x2651a94, size 0x5c, virtual false, abstract: false, final false
  inline void Close();

  static inline ::Org::BouncyCastle::Cms::CmsContentInfoParser* New_ctor(::System::IO::Stream* data);

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* const& __cordl_internal_get_contentInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*& __cordl_internal_get_contentInfo();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_data() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* value);

  constexpr void __cordl_internal_set_data(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x2651868, size 0x22c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsContentInfoParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CmsContentInfoParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsContentInfoParser(CmsContentInfoParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsContentInfoParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsContentInfoParser(CmsContentInfoParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 620 };

  /// @brief Field contentInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* ___contentInfo;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsContentInfoParser, ___contentInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Cms::CmsContentInfoParser, ___data) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsContentInfoParser, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsContentInfoParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsContentInfoParser*, "Org.BouncyCastle.Cms", "CmsContentInfoParser");
