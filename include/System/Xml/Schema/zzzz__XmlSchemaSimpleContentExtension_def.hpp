#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaContent_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSimpleContentExtension)
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleContentExtension;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSimpleContentExtension);
// Type: System.Xml.Schema::XmlSchemaSimpleContentExtension
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaSimpleContentExtension*
class CORDL_TYPE XmlSchemaSimpleContentExtension : public ::System::Xml::Schema::XmlSchemaContent {
public:
  // Declarations
  __declspec(property(get = get_AnyAttribute, put = set_AnyAttribute))::System::Xml::Schema::XmlSchemaAnyAttribute* AnyAttribute;

  __declspec(property(get = get_Attributes))::System::Xml::Schema::XmlSchemaObjectCollection* Attributes;

  __declspec(property(get = get_BaseTypeName, put = set_BaseTypeName))::System::Xml::XmlQualifiedName* BaseTypeName;

  /// @brief Field anyAttribute, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_anyAttribute, put = __cordl_internal_set_anyAttribute))::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;

  /// @brief Field attributes, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes))::System::Xml::Schema::XmlSchemaObjectCollection* attributes;

  /// @brief Field baseTypeName, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_baseTypeName, put = __cordl_internal_set_baseTypeName))::System::Xml::XmlQualifiedName* baseTypeName;

  static inline ::System::Xml::Schema::XmlSchemaSimpleContentExtension* New_ctor();

  /// @brief Method SetAttributes, addr 0x2d212a4, size 0x8, virtual false, abstract: false, final false
  inline void SetAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* newAttributes);

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& __cordl_internal_get_anyAttribute();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAnyAttribute*> const& __cordl_internal_get_anyAttribute() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> const& __cordl_internal_get_attributes() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_baseTypeName();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_baseTypeName() const;

  constexpr void __cordl_internal_set_anyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  constexpr void __cordl_internal_set_attributes(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  constexpr void __cordl_internal_set_baseTypeName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method .ctor, addr 0x2d212ac, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AnyAttribute, addr 0x2d21294, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute();

  /// @brief Method get_Attributes, addr 0x2d2128c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes();

  /// @brief Method get_BaseTypeName, addr 0x2d211ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_BaseTypeName();

  /// @brief Method set_AnyAttribute, addr 0x2d2129c, size 0x8, virtual false, abstract: false, final false
  inline void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  /// @brief Method set_BaseTypeName, addr 0x2d211f4, size 0x98, virtual false, abstract: false, final false
  inline void set_BaseTypeName(::System::Xml::XmlQualifiedName* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSimpleContentExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleContentExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSimpleContentExtension(XmlSchemaSimpleContentExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleContentExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSimpleContentExtension(XmlSchemaSimpleContentExtension const&) = delete;

  /// @brief Field attributes, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___attributes;

  /// @brief Field anyAttribute, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnyAttribute* ___anyAttribute;

  /// @brief Field baseTypeName, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___baseTypeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSimpleContentExtension, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleContentExtension, ___attributes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleContentExtension, ___anyAttribute) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleContentExtension, ___baseTypeName) == 0x60, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleContentExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleContentExtension*, "System.Xml.Schema", "XmlSchemaSimpleContentExtension");
