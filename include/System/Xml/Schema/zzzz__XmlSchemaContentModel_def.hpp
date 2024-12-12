#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaContentModel.hpp"
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
// Dependencies System.Xml.Schema.XmlSchemaAnnotated
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaContentModel
class CORDL_TYPE XmlSchemaContentModel : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  __declspec(property(get = get_Content, put = set_Content)) ::System::Xml::Schema::XmlSchemaContent* Content;

  static inline ::System::Xml::Schema::XmlSchemaContentModel* New_ctor();

  /// @brief Method .ctor, addr 0x42b9ed8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Content, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContent* get_Content();

  /// @brief Method set_Content, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7664 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaContentModel, 0x50>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaContentModel);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaContentModel*, "System.Xml.Schema", "XmlSchemaContentModel");
