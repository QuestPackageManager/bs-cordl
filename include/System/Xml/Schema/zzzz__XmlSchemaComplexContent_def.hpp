#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaComplexContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaContentModel_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaComplexContent)
namespace System::Xml::Schema {
class XmlSchemaContent;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaComplexContent;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaComplexContent);
// Type: System.Xml.Schema::XmlSchemaComplexContent
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 90, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaComplexContent*
class CORDL_TYPE XmlSchemaComplexContent : public ::System::Xml::Schema::XmlSchemaContentModel {
public:
  // Declarations
  __declspec(property(get = get_Content, put = set_Content)) ::System::Xml::Schema::XmlSchemaContent* Content;

  __declspec(property(get = get_HasMixedAttribute)) bool HasMixedAttribute;

  __declspec(property(get = get_IsMixed, put = set_IsMixed)) bool IsMixed;

  /// @brief Field content, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::System::Xml::Schema::XmlSchemaContent* content;

  /// @brief Field hasMixedAttribute, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_hasMixedAttribute, put = __cordl_internal_set_hasMixedAttribute)) bool hasMixedAttribute;

  /// @brief Field isMixed, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_isMixed, put = __cordl_internal_set_isMixed)) bool isMixed;

  static inline ::System::Xml::Schema::XmlSchemaComplexContent* New_ctor();

  constexpr ::System::Xml::Schema::XmlSchemaContent*& __cordl_internal_get_content();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaContent*> const& __cordl_internal_get_content() const;

  constexpr bool const& __cordl_internal_get_hasMixedAttribute() const;

  constexpr bool& __cordl_internal_get_hasMixedAttribute();

  constexpr bool const& __cordl_internal_get_isMixed() const;

  constexpr bool& __cordl_internal_get_isMixed();

  constexpr void __cordl_internal_set_content(::System::Xml::Schema::XmlSchemaContent* value);

  constexpr void __cordl_internal_set_hasMixedAttribute(bool value);

  constexpr void __cordl_internal_set_isMixed(bool value);

  /// @brief Method .ctor, addr 0x4258bbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Content, addr 0x4258ba4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContent* get_Content();

  /// @brief Method get_HasMixedAttribute, addr 0x4258bb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasMixedAttribute();

  /// @brief Method get_IsMixed, addr 0x4258b88, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsMixed();

  /// @brief Method set_Content, addr 0x4258bac, size 0x8, virtual true, abstract: false, final false
  inline void set_Content(::System::Xml::Schema::XmlSchemaContent* value);

  /// @brief Method set_IsMixed, addr 0x4258b90, size 0x14, virtual false, abstract: false, final false
  inline void set_IsMixed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaComplexContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaComplexContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaComplexContent(XmlSchemaComplexContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaComplexContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaComplexContent(XmlSchemaComplexContent const&) = delete;

  /// @brief Field content, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaContent* ___content;

  /// @brief Field isMixed, offset: 0x58, size: 0x1, def value: None
  bool ___isMixed;

  /// @brief Field hasMixedAttribute, offset: 0x59, size: 0x1, def value: None
  bool ___hasMixedAttribute;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7634 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaComplexContent, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexContent, ___content) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexContent, ___isMixed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexContent, ___hasMixedAttribute) == 0x59, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaComplexContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaComplexContent*, "System.Xml.Schema", "XmlSchemaComplexContent");
