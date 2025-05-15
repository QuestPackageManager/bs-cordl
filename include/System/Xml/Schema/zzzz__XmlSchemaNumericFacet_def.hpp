#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaNumericFacet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaNumericFacet)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaNumericFacet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaNumericFacet);
// Dependencies System.Xml.Schema.XmlSchemaFacet
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaNumericFacet
class CORDL_TYPE XmlSchemaNumericFacet : public ::System::Xml::Schema::XmlSchemaFacet {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaNumericFacet* New_ctor();

  /// @brief Method .ctor, addr 0x42bef08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaNumericFacet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaNumericFacet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaNumericFacet(XmlSchemaNumericFacet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaNumericFacet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaNumericFacet(XmlSchemaNumericFacet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7680 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaNumericFacet, 0x60>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaNumericFacet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaNumericFacet*, "System.Xml.Schema", "XmlSchemaNumericFacet");
