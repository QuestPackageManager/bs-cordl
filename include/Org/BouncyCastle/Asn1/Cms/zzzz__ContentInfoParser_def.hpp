#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/ContentInfoParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContentInfoParser)
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObjectParser;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfoParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser);
// Type: Org.BouncyCastle.Asn1.Cms::ContentInfoParser
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cms::ContentInfoParser*
class CORDL_TYPE ContentInfoParser : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ContentType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ContentType;

  /// @brief Field content, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser* content;

  /// @brief Field contentType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_contentType, put = __cordl_internal_set_contentType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType;

  /// @brief Method GetContent, addr 0x22cfd90, size 0xbc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* GetContent(int32_t tag);

  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  constexpr ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser*& __cordl_internal_get_content();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser*> const& __cordl_internal_get_content() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_contentType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_contentType() const;

  constexpr void __cordl_internal_set_content(::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser* value);

  constexpr void __cordl_internal_set_contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method .ctor, addr 0x22cd3e0, size 0x1e0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method get_ContentType, addr 0x22cfd88, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ContentType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentInfoParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentInfoParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentInfoParser(ContentInfoParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentInfoParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentInfoParser(ContentInfoParser const&) = delete;

  /// @brief Field contentType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___contentType;

  /// @brief Field content, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser* ___content;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 67 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser, ___contentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser, ___content) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*, "Org.BouncyCastle.Asn1.Cms", "ContentInfoParser");
