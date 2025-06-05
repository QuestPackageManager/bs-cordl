#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaMaxLengthFacet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaNumericFacet_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaMaxLengthFacet)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaMaxLengthFacet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaMaxLengthFacet);
// Dependencies System.Xml.Schema.XmlSchemaNumericFacet
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaMaxLengthFacet
class CORDL_TYPE XmlSchemaMaxLengthFacet : public ::System::Xml::Schema::XmlSchemaNumericFacet {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaMaxLengthFacet* New_ctor();

  /// @brief Method .ctor, addr 0x42beed8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaMaxLengthFacet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMaxLengthFacet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaMaxLengthFacet(XmlSchemaMaxLengthFacet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMaxLengthFacet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaMaxLengthFacet(XmlSchemaMaxLengthFacet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7683 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaMaxLengthFacet, 0x60>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaMaxLengthFacet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaMaxLengthFacet*, "System.Xml.Schema", "XmlSchemaMaxLengthFacet");
