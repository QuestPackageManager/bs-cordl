#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaAttribute)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaAttribute);
// Type: System.Xml.Schema::XmlSchemaAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11612))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11615))
// CS Name: ::System.Xml.Schema::XmlSchemaAttribute*
class CORDL_TYPE XmlSchemaAttribute : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaAttribute(XmlSchemaAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaAttribute(XmlSchemaAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaAttribute, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAttribute*, "System.Xml.Schema", "XmlSchemaAttribute");
