#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaSimpleContentRestriction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaContent_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSimpleContentRestriction)
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleContentRestriction;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSimpleContentRestriction);
// Dependencies System.Xml.Schema.XmlSchemaContent
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaSimpleContentRestriction
class CORDL_TYPE XmlSchemaSimpleContentRestriction : public ::System::Xml::Schema::XmlSchemaContent {
public:
  // Declarations
  __declspec(property(get = get_AnyAttribute, put = set_AnyAttribute)) ::System::Xml::Schema::XmlSchemaAnyAttribute* AnyAttribute;

  __declspec(property(get = get_Attributes)) ::System::Xml::Schema::XmlSchemaObjectCollection* Attributes;

  __declspec(property(get = get_BaseType, put = set_BaseType)) ::System::Xml::Schema::XmlSchemaSimpleType* BaseType;

  __declspec(property(get = get_BaseTypeName, put = set_BaseTypeName)) ::System::Xml::XmlQualifiedName* BaseTypeName;

  __declspec(property(get = get_Facets)) ::System::Xml::Schema::XmlSchemaObjectCollection* Facets;

  /// @brief Field anyAttribute, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_anyAttribute, put = __cordl_internal_set_anyAttribute)) ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;

  /// @brief Field attributes, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes)) ::System::Xml::Schema::XmlSchemaObjectCollection* attributes;

  /// @brief Field baseType, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_baseType, put = __cordl_internal_set_baseType)) ::System::Xml::Schema::XmlSchemaSimpleType* baseType;

  /// @brief Field baseTypeName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_baseTypeName, put = __cordl_internal_set_baseTypeName)) ::System::Xml::XmlQualifiedName* baseTypeName;

  /// @brief Field facets, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_facets, put = __cordl_internal_set_facets)) ::System::Xml::Schema::XmlSchemaObjectCollection* facets;

  static inline ::System::Xml::Schema::XmlSchemaSimpleContentRestriction* New_ctor();

  /// @brief Method SetAttributes, addr 0x42c9614, size 0x8, virtual false, abstract: false, final false
  inline void SetAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* newAttributes);

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute* const& __cordl_internal_get_anyAttribute() const;

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& __cordl_internal_get_anyAttribute();

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& __cordl_internal_get_attributes() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_attributes();

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType* const& __cordl_internal_get_baseType() const;

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& __cordl_internal_get_baseType();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_baseTypeName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_baseTypeName();

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& __cordl_internal_get_facets() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_facets();

  constexpr void __cordl_internal_set_anyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  constexpr void __cordl_internal_set_attributes(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  constexpr void __cordl_internal_set_baseType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  constexpr void __cordl_internal_set_baseTypeName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_facets(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  /// @brief Method .ctor, addr 0x42c961c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AnyAttribute, addr 0x42c9604, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute();

  /// @brief Method get_Attributes, addr 0x42c95fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes();

  /// @brief Method get_BaseType, addr 0x42c95e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSimpleType* get_BaseType();

  /// @brief Method get_BaseTypeName, addr 0x42c9544, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_BaseTypeName();

  /// @brief Method get_Facets, addr 0x42c95f4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Facets();

  /// @brief Method set_AnyAttribute, addr 0x42c960c, size 0x8, virtual false, abstract: false, final false
  inline void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  /// @brief Method set_BaseType, addr 0x42c95ec, size 0x8, virtual false, abstract: false, final false
  inline void set_BaseType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  /// @brief Method set_BaseTypeName, addr 0x42c954c, size 0x98, virtual false, abstract: false, final false
  inline void set_BaseTypeName(::System::Xml::XmlQualifiedName* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSimpleContentRestriction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleContentRestriction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSimpleContentRestriction(XmlSchemaSimpleContentRestriction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleContentRestriction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSimpleContentRestriction(XmlSchemaSimpleContentRestriction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7723 };

  /// @brief Field baseTypeName, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___baseTypeName;

  /// @brief Field baseType, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleType* ___baseType;

  /// @brief Field facets, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___facets;

  /// @brief Field attributes, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___attributes;

  /// @brief Field anyAttribute, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnyAttribute* ___anyAttribute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleContentRestriction, ___baseTypeName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleContentRestriction, ___baseType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleContentRestriction, ___facets) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleContentRestriction, ___attributes) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleContentRestriction, ___anyAttribute) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSimpleContentRestriction, 0x78>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleContentRestriction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleContentRestriction*, "System.Xml.Schema", "XmlSchemaSimpleContentRestriction");
