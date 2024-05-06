#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaContentModel)
namespace System::Xml::Schema {
class XmlSchemaContent;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaContentModel;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaContentModel);
// Type: System.Xml.Schema::XmlSchemaContentModel
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaContentModel*
class CORDL_TYPE XmlSchemaContentModel : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  __declspec(property(get = get_Content, put = set_Content))::System::Xml::Schema::XmlSchemaContent* Content;

  static inline ::System::Xml::Schema::XmlSchemaContentModel* New_ctor();

  /// @brief Method .ctor, addr 0x2e0fab4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Content, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::Schema::XmlSchemaContent* get_Content();

  /// @brief Method set_Content, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Content(::System::Xml::Schema::XmlSchemaContent* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaContentModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaContentModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaContentModel(XmlSchemaContentModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaContentModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaContentModel(XmlSchemaContentModel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaContentModel, 0x50>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaContentModel);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaContentModel*, "System.Xml.Schema", "XmlSchemaContentModel");
