#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaMinExclusiveFacet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaMinExclusiveFacet)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaMinExclusiveFacet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaMinExclusiveFacet);
// Type: System.Xml.Schema::XmlSchemaMinExclusiveFacet
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaMinExclusiveFacet*
class CORDL_TYPE XmlSchemaMinExclusiveFacet : public ::System::Xml::Schema::XmlSchemaFacet {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaMinExclusiveFacet* New_ctor();

  /// @brief Method .ctor, addr 0x4247b64, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaMinExclusiveFacet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMinExclusiveFacet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaMinExclusiveFacet(XmlSchemaMinExclusiveFacet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaMinExclusiveFacet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaMinExclusiveFacet(XmlSchemaMinExclusiveFacet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7651 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaMinExclusiveFacet, 0x60>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaMinExclusiveFacet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaMinExclusiveFacet*, "System.Xml.Schema", "XmlSchemaMinExclusiveFacet");
