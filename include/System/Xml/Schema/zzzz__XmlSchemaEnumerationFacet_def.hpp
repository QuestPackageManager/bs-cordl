#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaEnumerationFacet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaEnumerationFacet)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaEnumerationFacet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaEnumerationFacet);
// Dependencies System.Xml.Schema.XmlSchemaFacet
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaEnumerationFacet
class CORDL_TYPE XmlSchemaEnumerationFacet : public ::System::Xml::Schema::XmlSchemaFacet {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaEnumerationFacet* New_ctor();

  /// @brief Method .ctor, addr 0x607cb78, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaEnumerationFacet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaEnumerationFacet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaEnumerationFacet(XmlSchemaEnumerationFacet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaEnumerationFacet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaEnumerationFacet(XmlSchemaEnumerationFacet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9753 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaEnumerationFacet, 0x60>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaEnumerationFacet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaEnumerationFacet*, "System.Xml.Schema", "XmlSchemaEnumerationFacet");
