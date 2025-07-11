#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ess/ContentHints.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(ContentHints)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class ContentHints;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ess::ContentHints);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ess.ContentHints
class CORDL_TYPE ContentHints : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_ContentDescription)) ::Org::BouncyCastle::Asn1::DerUtf8String* ContentDescription;

  __declspec(property(get = get_ContentType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ContentType;

  /// @brief Field contentDescription, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_contentDescription, put = __cordl_internal_set_contentDescription)) ::Org::BouncyCastle::Asn1::DerUtf8String* contentDescription;

  /// @brief Field contentType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_contentType, put = __cordl_internal_set_contentType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType;

  /// @brief Method GetInstance, addr 0x2326f30, size 0x180, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ess::ContentHints* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Ess::ContentHints* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType);

  static inline ::Org::BouncyCastle::Asn1::Ess::ContentHints* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Asn1::DerUtf8String* contentDescription);

  static inline ::Org::BouncyCastle::Asn1::Ess::ContentHints* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x232729c, size 0x114, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerUtf8String* const& __cordl_internal_get_contentDescription() const;

  constexpr ::Org::BouncyCastle::Asn1::DerUtf8String*& __cordl_internal_get_contentDescription();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_contentType() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_contentType();

  constexpr void __cordl_internal_set_contentDescription(::Org::BouncyCastle::Asn1::DerUtf8String* value);

  constexpr void __cordl_internal_set_contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method .ctor, addr 0x2327238, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType);

  /// @brief Method .ctor, addr 0x2327260, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Asn1::DerUtf8String* contentDescription);

  /// @brief Method .ctor, addr 0x23270b0, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_ContentDescription, addr 0x2327294, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerUtf8String* get_ContentDescription();

  /// @brief Method get_ContentType, addr 0x232728c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ContentType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentHints();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentHints", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentHints(ContentHints&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentHints", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentHints(ContentHints const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 160 };

  /// @brief Field contentDescription, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerUtf8String* ___contentDescription;

  /// @brief Field contentType, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___contentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::ContentHints, ___contentDescription) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::ContentHints, ___contentType) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ess::ContentHints, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ess::ContentHints);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ess::ContentHints*, "Org.BouncyCastle.Asn1.Ess", "ContentHints");
