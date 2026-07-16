#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaLengthFacet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaNumericFacet_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaLengthFacet)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaLengthFacet;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::XmlSchemaLengthFacet*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlSchemaLengthFacet*, "System.Xml.Schema", "XmlSchemaLengthFacet");
// Dependencies System.Xml.Schema.XmlSchemaNumericFacet
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaLengthFacet
class CORDL_TYPE XmlSchemaLengthFacet : public ::System::Xml::Schema::XmlSchemaNumericFacet {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaLengthFacet* New_ctor();

  /// @brief Method .ctor, addr 0x622be88, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaLengthFacet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaLengthFacet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaLengthFacet(XmlSchemaLengthFacet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaLengthFacet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaLengthFacet(XmlSchemaLengthFacet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9742 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Schema::XmlSchemaLengthFacet) == 0x60, "Size mismatch!");

} // namespace System::Xml::Schema
