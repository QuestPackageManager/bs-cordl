#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaElement)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaElement);
// Type: System.Xml.Schema::XmlSchemaElement
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11734))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11725))
// CS Name: ::System.Xml.Schema::XmlSchemaElement*
class CORDL_TYPE XmlSchemaElement : public ::System::Xml::Schema::XmlSchemaParticle {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaElement(XmlSchemaElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaElement(XmlSchemaElement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaElement();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaElement, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaElement*, "System.Xml.Schema", "XmlSchemaElement");
