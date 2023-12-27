#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(ContentHints)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class ContentHints;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ess::ContentHints);
// Type: Org.BouncyCastle.Asn1.Ess::ContentHints
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(160))
// CS Name: ::Org.BouncyCastle.Asn1.Ess::ContentHints*
class CORDL_TYPE ContentHints : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field contentDescription, offset 0x10, size 0x8
  __declspec(property(get = __get_contentDescription, put = __set_contentDescription))::Org::BouncyCastle::Asn1::DerUtf8String* contentDescription;

  /// @brief Field contentType, offset 0x18, size 0x8
  __declspec(property(get = __get_contentType, put = __set_contentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType;

  __declspec(property(get = get_ContentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ContentType;

  __declspec(property(get = get_ContentDescription))::Org::BouncyCastle::Asn1::DerUtf8String* ContentDescription;

  constexpr ::Org::BouncyCastle::Asn1::DerUtf8String*& __get_contentDescription();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerUtf8String*> const& __get_contentDescription() const;

  constexpr void __set_contentDescription(::Org::BouncyCastle::Asn1::DerUtf8String* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_contentType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_contentType() const;

  constexpr void __set_contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method GetInstance addr 0xe997c4 size 0x190 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ess::ContentHints* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Ess::ContentHints* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe99954 size 0x188 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Ess::ContentHints* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType);

  /// @brief Method .ctor addr 0xe99adc size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType);

  static inline ::Org::BouncyCastle::Asn1::Ess::ContentHints* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Asn1::DerUtf8String* contentDescription);

  /// @brief Method .ctor addr 0xe99b04 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Asn1::DerUtf8String* contentDescription);

  /// @brief Method get_ContentType addr 0xe99b30 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ContentType();

  /// @brief Method get_ContentDescription addr 0xe99b38 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerUtf8String* get_ContentDescription();

  /// @brief Method ToAsn1Object addr 0xe99b40 size 0x118 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "ContentHints", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentHints(ContentHints&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentHints", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentHints(ContentHints const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentHints();

public:
  /// @brief Field contentDescription, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerUtf8String* ___contentDescription;

  /// @brief Field contentType, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___contentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ess::ContentHints, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ess::ContentHints);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ess::ContentHints*, "Org.BouncyCastle.Asn1.Ess", "ContentHints");
