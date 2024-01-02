#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaAnnotated)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAnnotated;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaAnnotated);
// Type: System.Xml.Schema::XmlSchemaAnnotated
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11730))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11714))
// CS Name: ::System.Xml.Schema::XmlSchemaAnnotated*
class CORDL_TYPE XmlSchemaAnnotated : public ::System::Xml::Schema::XmlSchemaObject {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaAnnotated* New_ctor();

  /// @brief Method .ctor, addr 0x28c70c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnnotated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaAnnotated(XmlSchemaAnnotated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnnotated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaAnnotated(XmlSchemaAnnotated const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaAnnotated();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaAnnotated, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAnnotated);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAnnotated*, "System.Xml.Schema", "XmlSchemaAnnotated");
