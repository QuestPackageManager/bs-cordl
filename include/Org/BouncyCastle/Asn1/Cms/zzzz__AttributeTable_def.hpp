#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/AttributeTable.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::Org::BouncyCastle::Asn1::Cms::AttributeTable*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Asn1::Cms::AttributeTable*, "Org.BouncyCastle.Asn1.Cms", "AttributeTable");
// [DefaultMember("Item")]
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

  /// @brief Method Add, addr 0x35dd7d4, size 0xd4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Add(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType, ::Org::BouncyCastle::Asn1::Asn1Encodable* attrValue);

  /// @brief Method AddAttribute, addr 0x35dc0b4, size 0x35c, virtual false, abstract: false, final false
  inline void AddAttribute(::Org::BouncyCastle::Asn1::Cms::Attribute* a);

  /// [Obsolete("Use \'object[oid]\' syntax instead")]
  /// @brief Method Get, addr 0x35dc718, size 0x4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::Attribute* Get(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetAll, addr 0x35dc71c, size 0x4ac, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* GetAll(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::Org::BouncyCastle::Asn1::Cms::Attributes* attrs);

  /// @brief [Obsolete]
  static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::System::Collections::Hashtable* attrs);

  static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::System::Collections::IDictionary* attrs);

  static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* s);

  static inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v);

  /// @brief Method Remove, addr 0x35dd8a8, size 0xf4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* Remove(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType);

  /// @brief Method ToAsn1EncodableVector, addr 0x35dd0e8, size 0x680, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ToAsn1EncodableVector();

  /// @brief Method ToAttributes, addr 0x35dd768, size 0x6c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::Attributes* ToAttributes();

  /// @brief Method ToDictionary, addr 0x35dd020, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* ToDictionary();

  /// [Obsolete("Use \'ToDictionary\' instead")]
  /// @brief Method ToHashtable, addr 0x35dd080, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* ToHashtable();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_attributes() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_attributes();

  constexpr void __cordl_internal_set_attributes(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x35dc4f8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::Attributes* attrs);

  /// [Obsolete]
  /// @brief Method .ctor, addr 0x35dbcec, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* attrs);

  /// @brief Method .ctor, addr 0x35dbd5c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* attrs);

  /// @brief Method .ctor, addr 0x35dc410, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Set* s);

  /// @brief Method .ctor, addr 0x35dbdcc, size 0x2e8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v);

  /// @brief Method get_Count, addr 0x35dcbc8, size 0x458, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x35dc534, size 0x1e4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::Attribute* get_Item(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttributeTable", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeTable(AttributeTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeTable", modifiers: "const&", def_value: None, comment: None }]
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

static_assert(sizeof(::Org::BouncyCastle::Asn1::Cms::AttributeTable) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
