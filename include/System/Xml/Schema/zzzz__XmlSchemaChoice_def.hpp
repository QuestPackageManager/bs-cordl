#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaChoice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaGroupBase_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaChoice)
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaChoice;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaChoice);
// Dependencies System.Xml.Schema.XmlSchemaGroupBase
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaChoice
class CORDL_TYPE XmlSchemaChoice : public ::System::Xml::Schema::XmlSchemaGroupBase {
public:
  // Declarations
  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Items)) ::System::Xml::Schema::XmlSchemaObjectCollection* Items;

  /// @brief Field items, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_items, put = __cordl_internal_set_items)) ::System::Xml::Schema::XmlSchemaObjectCollection* items;

  static inline ::System::Xml::Schema::XmlSchemaChoice* New_ctor();

  /// @brief Method SetItems, addr 0x42bad10, size 0x8, virtual true, abstract: false, final false
  inline void SetItems(::System::Xml::Schema::XmlSchemaObjectCollection* newItems);

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& __cordl_internal_get_items() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_items();

  constexpr void __cordl_internal_set_items(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  /// @brief Method .ctor, addr 0x42bad18, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsEmpty, addr 0x42bad08, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Items, addr 0x42bad00, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Items();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaChoice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaChoice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaChoice(XmlSchemaChoice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaChoice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaChoice(XmlSchemaChoice const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7659 };

  /// @brief Field items, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___items;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaChoice, ___items) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaChoice, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaChoice);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaChoice*, "System.Xml.Schema", "XmlSchemaChoice");
