#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaSimpleContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaContentModel_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSimpleContent)
namespace System::Xml::Schema {
class XmlSchemaContent;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleContent;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSimpleContent);
// Dependencies System.Xml.Schema.XmlSchemaContentModel
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaSimpleContent
class CORDL_TYPE XmlSchemaSimpleContent : public ::System::Xml::Schema::XmlSchemaContentModel {
public:
  // Declarations
  __declspec(property(get = get_Content, put = set_Content)) ::System::Xml::Schema::XmlSchemaContent* Content;

  /// @brief Field content, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::System::Xml::Schema::XmlSchemaContent* content;

  static inline ::System::Xml::Schema::XmlSchemaSimpleContent* New_ctor();

  constexpr ::System::Xml::Schema::XmlSchemaContent* const& __cordl_internal_get_content() const;

  constexpr ::System::Xml::Schema::XmlSchemaContent*& __cordl_internal_get_content();

  constexpr void __cordl_internal_set_content(::System::Xml::Schema::XmlSchemaContent* value);

  /// @brief Method .ctor, addr 0x601f168, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Content, addr 0x601f158, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContent* get_Content();

  /// @brief Method set_Content, addr 0x601f160, size 0x8, virtual true, abstract: false, final false
  inline void set_Content(::System::Xml::Schema::XmlSchemaContent* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSimpleContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSimpleContent(XmlSchemaSimpleContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSimpleContent(XmlSchemaSimpleContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9785 };

  /// @brief Field content, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaContent* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleContent, ___content) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSimpleContent, 0x58>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleContent*, "System.Xml.Schema", "XmlSchemaSimpleContent");
