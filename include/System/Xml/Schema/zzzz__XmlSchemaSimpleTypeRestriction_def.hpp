#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaSimpleTypeRestriction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeContent_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSimpleTypeRestriction)
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeRestriction;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSimpleTypeRestriction);
// Type: System.Xml.Schema::XmlSchemaSimpleTypeRestriction
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaSimpleTypeRestriction*
class CORDL_TYPE XmlSchemaSimpleTypeRestriction : public ::System::Xml::Schema::XmlSchemaSimpleTypeContent {
public:
  // Declarations
  __declspec(property(get = get_BaseType, put = set_BaseType))::System::Xml::Schema::XmlSchemaSimpleType* BaseType;

  __declspec(property(get = get_BaseTypeName, put = set_BaseTypeName))::System::Xml::XmlQualifiedName* BaseTypeName;

  __declspec(property(get = get_Facets))::System::Xml::Schema::XmlSchemaObjectCollection* Facets;

  /// @brief Field baseType, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_baseType, put = __cordl_internal_set_baseType))::System::Xml::Schema::XmlSchemaSimpleType* baseType;

  /// @brief Field baseTypeName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_baseTypeName, put = __cordl_internal_set_baseTypeName))::System::Xml::XmlQualifiedName* baseTypeName;

  /// @brief Field facets, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_facets, put = __cordl_internal_set_facets))::System::Xml::Schema::XmlSchemaObjectCollection* facets;

  /// @brief Method Clone, addr 0x2e502f0, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* Clone();

  static inline ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction* New_ctor();

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& __cordl_internal_get_baseType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleType*> const& __cordl_internal_get_baseType() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_baseTypeName();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_baseTypeName() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_facets();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> const& __cordl_internal_get_facets() const;

  constexpr void __cordl_internal_set_baseType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  constexpr void __cordl_internal_set_baseTypeName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_facets(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  /// @brief Method .ctor, addr 0x2e503a0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BaseType, addr 0x2e502d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSimpleType* get_BaseType();

  /// @brief Method get_BaseTypeName, addr 0x2e50238, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_BaseTypeName();

  /// @brief Method get_Facets, addr 0x2e502e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Facets();

  /// @brief Method set_BaseType, addr 0x2e502e0, size 0x8, virtual false, abstract: false, final false
  inline void set_BaseType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  /// @brief Method set_BaseTypeName, addr 0x2e50240, size 0x98, virtual false, abstract: false, final false
  inline void set_BaseTypeName(::System::Xml::XmlQualifiedName* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSimpleTypeRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSimpleTypeRestriction(XmlSchemaSimpleTypeRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSimpleTypeRestriction(XmlSchemaSimpleTypeRestriction const&) = delete;

  /// @brief Field baseTypeName, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___baseTypeName;

  /// @brief Field baseType, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleType* ___baseType;

  /// @brief Field facets, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___facets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSimpleTypeRestriction, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleTypeRestriction, ___baseTypeName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleTypeRestriction, ___baseType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleTypeRestriction, ___facets) == 0x60, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleTypeRestriction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleTypeRestriction*, "System.Xml.Schema", "XmlSchemaSimpleTypeRestriction");
