#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeContent_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSimpleTypeRestriction)
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeRestriction;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSimpleTypeRestriction);
// Type: System.Xml.Schema::XmlSchemaSimpleTypeRestriction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11738))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11740))
// CS Name: ::System.Xml.Schema::XmlSchemaSimpleTypeRestriction*
class CORDL_TYPE XmlSchemaSimpleTypeRestriction : public ::System::Xml::Schema::XmlSchemaSimpleTypeContent {
public:
  // Declarations
  /// @brief Field baseTypeName, offset 0x10, size 0x8
  __declspec(property(get = __get_baseTypeName, put = __set_baseTypeName))::System::Xml::XmlQualifiedName* baseTypeName;

  /// @brief Field facets, offset 0x18, size 0x8
  __declspec(property(get = __get_facets, put = __set_facets))::System::Xml::Schema::XmlSchemaObjectCollection* facets;

  __declspec(property(put = set_BaseTypeName))::System::Xml::XmlQualifiedName* BaseTypeName;

  constexpr ::System::Xml::XmlQualifiedName*& __get_baseTypeName();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __get_baseTypeName() const;

  constexpr void __set_baseTypeName(::System::Xml::XmlQualifiedName* value);

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __get_facets();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> const& __get_facets() const;

  constexpr void __set_facets(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  /// @brief Method set_BaseTypeName addr 0x28c917c size 0x98 virtual false final false
  inline void set_BaseTypeName(::System::Xml::XmlQualifiedName* value);

  static inline ::System::Xml::Schema::XmlSchemaSimpleTypeRestriction* New_ctor();

  /// @brief Method .ctor addr 0x28c9214 size 0x9c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSimpleTypeRestriction(XmlSchemaSimpleTypeRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSimpleTypeRestriction(XmlSchemaSimpleTypeRestriction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSimpleTypeRestriction();

public:
  /// @brief Field baseTypeName, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___baseTypeName;

  /// @brief Field facets, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___facets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSimpleTypeRestriction, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleTypeRestriction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleTypeRestriction*, "System.Xml.Schema", "XmlSchemaSimpleTypeRestriction");
