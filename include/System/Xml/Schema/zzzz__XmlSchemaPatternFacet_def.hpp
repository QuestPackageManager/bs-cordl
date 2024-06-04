#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaPatternFacet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaPatternFacet)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaPatternFacet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaPatternFacet);
// Type: System.Xml.Schema::XmlSchemaPatternFacet
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaPatternFacet*
class CORDL_TYPE XmlSchemaPatternFacet : public ::System::Xml::Schema::XmlSchemaFacet {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaPatternFacet* New_ctor();

  /// @brief Method .ctor, addr 0x2e34884, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaPatternFacet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaPatternFacet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaPatternFacet(XmlSchemaPatternFacet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaPatternFacet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaPatternFacet(XmlSchemaPatternFacet const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaPatternFacet, 0x60>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaPatternFacet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaPatternFacet*, "System.Xml.Schema", "XmlSchemaPatternFacet");
