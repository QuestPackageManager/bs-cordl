#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaMaxInclusiveFacet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaMaxInclusiveFacet)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaMaxInclusiveFacet;
}
// Write type traits
MARK_REF_T(::System::Xml::Schema::XmlSchemaMaxInclusiveFacet*);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XmlSchemaMaxInclusiveFacet*, "System.Xml.Schema", "XmlSchemaMaxInclusiveFacet");
// Dependencies System.Xml.Schema.XmlSchemaFacet
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaMaxInclusiveFacet
class CORDL_TYPE XmlSchemaMaxInclusiveFacet : public ::System::Xml::Schema::XmlSchemaFacet {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaMaxInclusiveFacet* New_ctor();

  /// @brief Method .ctor, addr 0x622bee8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaMaxInclusiveFacet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMaxInclusiveFacet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaMaxInclusiveFacet(XmlSchemaMaxInclusiveFacet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMaxInclusiveFacet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaMaxInclusiveFacet(XmlSchemaMaxInclusiveFacet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9750 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::Schema::XmlSchemaMaxInclusiveFacet) == 0x60, "Size mismatch!");

} // namespace System::Xml::Schema
