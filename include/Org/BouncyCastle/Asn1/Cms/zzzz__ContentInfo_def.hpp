#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(ContentInfo)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::ContentInfo);
// Type: Org.BouncyCastle.Asn1.Cms::ContentInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(66))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::ContentInfo*
class CORDL_TYPE ContentInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field contentType, offset 0x10, size 0x8
  __declspec(property(get = __get_contentType, put = __set_contentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType;

  /// @brief Field content, offset 0x18, size 0x8
  __declspec(property(get = __get_content, put = __set_content))::Org::BouncyCastle::Asn1::Asn1Encodable* content;

  __declspec(property(get = get_ContentType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ContentType;

  __declspec(property(get = get_Content))::Org::BouncyCastle::Asn1::Asn1Encodable* Content;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_contentType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_contentType() const;

  constexpr void __set_contentType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __get_content();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __get_content() const;

  constexpr void __set_content(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method GetInstance addr 0xe72878 size 0x178 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance addr 0xe760dc size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe75e3c size 0x2a0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Asn1::Asn1Encodable* content);

  /// @brief Method .ctor addr 0xe760f4 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* contentType, ::Org::BouncyCastle::Asn1::Asn1Encodable* content);

  /// @brief Method get_ContentType addr 0xe76120 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ContentType();

  /// @brief Method get_Content addr 0xe76128 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Content();

  /// @brief Method ToAsn1Object addr 0xe76130 size 0x140 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "ContentInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentInfo(ContentInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentInfo(ContentInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentInfo();

public:
  /// @brief Field contentType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___contentType;

  /// @brief Field content, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::ContentInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::ContentInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::ContentInfo*, "Org.BouncyCastle.Asn1.Cms", "ContentInfo");
