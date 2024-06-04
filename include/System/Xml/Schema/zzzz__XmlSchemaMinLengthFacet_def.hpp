#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaMinLengthFacet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaNumericFacet_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaMinLengthFacet)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaMinLengthFacet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaMinLengthFacet);
// Type: System.Xml.Schema::XmlSchemaMinLengthFacet
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaMinLengthFacet*
class CORDL_TYPE XmlSchemaMinLengthFacet : public ::System::Xml::Schema::XmlSchemaNumericFacet {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaMinLengthFacet* New_ctor();

  /// @brief Method .ctor, addr 0x2e34844, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaMinLengthFacet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMinLengthFacet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaMinLengthFacet(XmlSchemaMinLengthFacet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMinLengthFacet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaMinLengthFacet(XmlSchemaMinLengthFacet const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaMinLengthFacet, 0x60>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaMinLengthFacet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaMinLengthFacet*, "System.Xml.Schema", "XmlSchemaMinLengthFacet");
