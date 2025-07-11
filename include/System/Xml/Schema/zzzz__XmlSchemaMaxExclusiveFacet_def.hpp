#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaMaxExclusiveFacet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaMaxExclusiveFacet)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaMaxExclusiveFacet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaMaxExclusiveFacet);
// Dependencies System.Xml.Schema.XmlSchemaFacet
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaMaxExclusiveFacet
class CORDL_TYPE XmlSchemaMaxExclusiveFacet : public ::System::Xml::Schema::XmlSchemaFacet {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaMaxExclusiveFacet* New_ctor();

  /// @brief Method .ctor, addr 0x42bec10, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaMaxExclusiveFacet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMaxExclusiveFacet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaMaxExclusiveFacet(XmlSchemaMaxExclusiveFacet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMaxExclusiveFacet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaMaxExclusiveFacet(XmlSchemaMaxExclusiveFacet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7688 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaMaxExclusiveFacet, 0x60>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaMaxExclusiveFacet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaMaxExclusiveFacet*, "System.Xml.Schema", "XmlSchemaMaxExclusiveFacet");
