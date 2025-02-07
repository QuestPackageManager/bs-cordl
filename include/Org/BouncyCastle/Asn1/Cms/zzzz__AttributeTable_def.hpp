#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/AttributeTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeTable)
namespace Org::BouncyCastle::Asn1::Cms {
class Attribute;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Attributes;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::AttributeTable);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.AttributeTable
class CORDL_TYPE AttributeTable : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::Org::BouncyCastle::Asn1::Cms::Attribute* Item[];

  /// @brief Field attributes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes)) ::System::Collections::IDictionary* attributes;

  /// @brief Method Add, addr 0x23015d0, size 0xe0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Add(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType, ::Org::BouncyCastle::Asn1::Asn1Encodable* attrValue);

  /// @brief Method AddAttribute, addr 0x22ffe78, size 0x348, virtual false, abstract: false, final false
  inline void AddAttribute(::Org::BouncyCastle::Asn1::Cms::Attribute* a);

  /// @brief Method Get, addr 0x23004bc, size 0x4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::Attribute* Get(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetAll, addr 0x23004c0, size 0x4b4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* GetAll(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::Org::BouncyCastle::Asn1::Cms::Attributes* attrs);

  static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::System::Collections::Hashtable* attrs);

  static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::System::Collections::IDictionary* attrs);

  static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* s);

  static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v);

  /// @brief Method Remove, addr 0x23016b0, size 0xec, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Remove(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType);

  /// @brief Method ToAsn1EncodableVector, addr 0x2300e9c, size 0x6cc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ToAsn1EncodableVector();

  /// @brief Method ToAttributes, addr 0x2301568, size 0x68, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::Attributes* ToAttributes();

  /// @brief Method ToDictionary, addr 0x2300de0, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* ToDictionary();

  /// @brief Method ToHashtable, addr 0x2300e3c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* ToHashtable();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_attributes() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_attributes();

  constexpr void __cordl_internal_set_attributes(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x23002a8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::Attributes* attrs);

  /// @brief Method .ctor, addr 0x22ffa6c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* attrs);

  /// @brief Method .ctor, addr 0x22ffae4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* attrs);

  /// @brief Method .ctor, addr 0x23001c0, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Set* s);

  /// @brief Method .ctor, addr 0x22ffb5c, size 0x31c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v);

  /// @brief Method get_Count, addr 0x2300974, size 0x46c, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x23002e4, size 0x1d8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::Attribute* get_Item(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeTable(AttributeTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeTable(AttributeTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 57 };

  /// @brief Field attributes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::AttributeTable, ___attributes) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::AttributeTable, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::AttributeTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::AttributeTable*, "Org.BouncyCastle.Asn1.Cms", "AttributeTable");
