#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/ContentInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(ContentInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::ContentInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.ContentInfo
class CORDL_TYPE ContentInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Content)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Content;

  __declspec(property(get = get_ContentType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ContentType;

  /// @brief Field content, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::Org::BouncyCastle::Asn1::Asn1Encodable* content;

  /// @brief Field contentType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_contentType, put = __cordl_internal_set_contentType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType;

  /// @brief Method GetInstance, addr 0x325cd78, size 0x14, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x32594c4, size 0x170, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Asn1::Asn1Encodable* content);

  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x325cda4, size 0x14c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& __cordl_internal_get_content() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_content();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_contentType() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_contentType();

  constexpr void __cordl_internal_set_content(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  constexpr void __cordl_internal_set_contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method .ctor, addr 0x325cd8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Asn1::Asn1Encodable* content);

  /// @brief Method .ctor, addr 0x325cadc, size 0x29c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Content, addr 0x325cd9c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Content();

  /// @brief Method get_ContentType, addr 0x325cd94, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ContentType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentInfo(ContentInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentInfo(ContentInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 66 };

  /// @brief Field contentType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___contentType;

  /// @brief Field content, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::ContentInfo, ___contentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::ContentInfo, ___content) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::ContentInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::ContentInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::ContentInfo*, "Org.BouncyCastle.Asn1.Cms", "ContentInfo");
