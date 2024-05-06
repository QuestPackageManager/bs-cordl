#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaNumericFacet_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaLengthFacet)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaLengthFacet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaLengthFacet);
// Type: System.Xml.Schema::XmlSchemaLengthFacet
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaLengthFacet*
class CORDL_TYPE XmlSchemaLengthFacet : public ::System::Xml::Schema::XmlSchemaNumericFacet {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaLengthFacet* New_ctor();

  /// @brief Method .ctor, addr 0x2e13134, size 0x20, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaLengthFacet, 0x60>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaLengthFacet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaLengthFacet*, "System.Xml.Schema", "XmlSchemaLengthFacet");
