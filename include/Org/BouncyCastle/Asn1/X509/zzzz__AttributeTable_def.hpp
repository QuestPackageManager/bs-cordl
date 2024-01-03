#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AttributeTable)
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeX509;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
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
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeTable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::AttributeTable);
// Type: Org.BouncyCastle.Asn1.X509::AttributeTable
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(343))
// CS Name: ::Org.BouncyCastle.Asn1.X509::AttributeTable*
class CORDL_TYPE AttributeTable : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributes, offset 0x10, size 0x8
  __declspec(property(get = __get_attributes, put = __set_attributes))::System::Collections::IDictionary* attributes;

  constexpr ::System::Collections::IDictionary*& __get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_attributes() const;

  constexpr void __set_attributes(::System::Collections::IDictionary* value);

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeTable* New_ctor(::System::Collections::IDictionary* attrs);

  /// @brief Method .ctor, addr 0x1084edc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* attrs);

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeTable* New_ctor(::System::Collections::Hashtable* attrs);

  /// @brief Method .ctor, addr 0x1084f54, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* attrs);

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeTable* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v);

  /// @brief Method .ctor, addr 0x1084fcc, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v);

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeTable* New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* s);

  /// @brief Method .ctor, addr 0x1085114, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Set* s);

  /// @brief Method Get, addr 0x108528c, size 0xf4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AttributeX509* Get(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method ToHashtable, addr 0x1085380, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* ToHashtable();

  /// @brief Method ToDictionary, addr 0x10853e8, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* ToDictionary();

  // Ctor Parameters [CppParam { name: "", ty: "AttributeTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttributeTable(AttributeTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttributeTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttributeTable(AttributeTable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttributeTable();

public:
  /// @brief Field attributes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::AttributeTable, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeTable, ___attributes) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AttributeTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AttributeTable*, "Org.BouncyCastle.Asn1.X509", "AttributeTable");
