#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaSimpleType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSimpleType)
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeContent;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSimpleType);
// Dependencies System.Xml.Schema.XmlSchemaType
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaSimpleType
class CORDL_TYPE XmlSchemaSimpleType : public ::System::Xml::Schema::XmlSchemaType {
public:
  // Declarations
  __declspec(property(get = get_Content, put = set_Content)) ::System::Xml::Schema::XmlSchemaSimpleTypeContent* Content;

  /// @brief Field content, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::System::Xml::Schema::XmlSchemaSimpleTypeContent* content;

  /// @brief Method Clone, addr 0x42c9ab8, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* Clone();

  static inline ::System::Xml::Schema::XmlSchemaSimpleType* New_ctor();

  constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeContent* const& __cordl_internal_get_content() const;

  constexpr ::System::Xml::Schema::XmlSchemaSimpleTypeContent*& __cordl_internal_get_content();

  constexpr void __cordl_internal_set_content(::System::Xml::Schema::XmlSchemaSimpleTypeContent* value);

  /// @brief Method .ctor, addr 0x42c9a30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Content, addr 0x42c9aa8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSimpleTypeContent* get_Content();

  /// @brief Method set_Content, addr 0x42c9ab0, size 0x8, virtual false, abstract: false, final false
  inline void set_Content(::System::Xml::Schema::XmlSchemaSimpleTypeContent* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSimpleType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSimpleType(XmlSchemaSimpleType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSimpleType(XmlSchemaSimpleType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7724 };

  /// @brief Field content, offset: 0x98, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleTypeContent* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaSimpleType, ___content) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSimpleType, 0xa0>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSimpleType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSimpleType*, "System.Xml.Schema", "XmlSchemaSimpleType");
