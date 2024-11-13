#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaContent)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaContent;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaContent);
// Type: System.Xml.Schema::XmlSchemaContent
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaContent*
class CORDL_TYPE XmlSchemaContent : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaContent* New_ctor();

  /// @brief Method .ctor, addr 0x4258d38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaContent(XmlSchemaContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaContent(XmlSchemaContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7638 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaContent, 0x50>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaContent*, "System.Xml.Schema", "XmlSchemaContent");
