#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSimpleTypeContent)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeContent;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSimpleTypeContent);
// Type: System.Xml.Schema::XmlSchemaSimpleTypeContent
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11714))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11738))
// CS Name: ::System.Xml.Schema::XmlSchemaSimpleTypeContent*
class CORDL_TYPE XmlSchemaSimpleTypeContent : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaSimpleTypeContent* New_ctor();

  /// @brief Method .ctor addr 0x28c90f4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSimpleTypeContent(XmlSchemaSimpleTypeContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSimpleTypeContent(XmlSchemaSimpleTypeContent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSimpleTypeContent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSimpleTypeContent, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleTypeContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleTypeContent*, "System.Xml.Schema", "XmlSchemaSimpleTypeContent");
