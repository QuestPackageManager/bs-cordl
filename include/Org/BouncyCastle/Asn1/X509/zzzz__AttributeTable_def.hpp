#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/AttributeTable.hpp"
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
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.AttributeTable
class CORDL_TYPE AttributeTable : public ::System::Object {
public:
  // Declarations
  /// @brief Field attributes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes)) ::System::Collections::IDictionary* attributes;

  /// @brief Method Get, addr 0x2506eb8, size 0xf4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AttributeX509* Get(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeTable* New_ctor(::System::Collections::Hashtable* attrs);

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeTable* New_ctor(::System::Collections::IDictionary* attrs);

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeTable* New_ctor(::Org::BouncyCastle::Asn1::Asn1Set* s);

  static inline ::Org::BouncyCastle::Asn1::X509::AttributeTable* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v);

  /// @brief Method ToDictionary, addr 0x250700c, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* ToDictionary();

  /// @brief Method ToHashtable, addr 0x2506fac, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* ToHashtable();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_attributes() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_attributes();

  constexpr void __cordl_internal_set_attributes(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x2506b80, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Hashtable* attrs);

  /// @brief Method .ctor, addr 0x2506b08, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* attrs);

  /// @brief Method .ctor, addr 0x2506d40, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Set* s);

  /// @brief Method .ctor, addr 0x2506bf8, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 343 };

  /// @brief Field attributes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AttributeTable, ___attributes) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::AttributeTable, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AttributeTable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AttributeTable*, "Org.BouncyCastle.Asn1.X509", "AttributeTable");
