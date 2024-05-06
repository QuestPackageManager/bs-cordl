#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaMinInclusiveFacet)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaMinInclusiveFacet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaMinInclusiveFacet);
// Type: System.Xml.Schema::XmlSchemaMinInclusiveFacet
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaMinInclusiveFacet*
class CORDL_TYPE XmlSchemaMinInclusiveFacet : public ::System::Xml::Schema::XmlSchemaFacet {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaMinInclusiveFacet* New_ctor();

  /// @brief Method .ctor, addr 0x2e131f4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaMinInclusiveFacet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMinInclusiveFacet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaMinInclusiveFacet(XmlSchemaMinInclusiveFacet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMinInclusiveFacet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaMinInclusiveFacet(XmlSchemaMinInclusiveFacet const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaMinInclusiveFacet, 0x60>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaMinInclusiveFacet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaMinInclusiveFacet*, "System.Xml.Schema", "XmlSchemaMinInclusiveFacet");
