#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaSequence.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaGroupBase_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSequence)
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSequence;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSequence);
// Type: System.Xml.Schema::XmlSchemaSequence
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaSequence*
class CORDL_TYPE XmlSchemaSequence : public ::System::Xml::Schema::XmlSchemaGroupBase {
public:
  // Declarations
  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Items))::System::Xml::Schema::XmlSchemaObjectCollection* Items;

  /// @brief Field items, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_items, put = __cordl_internal_set_items))::System::Xml::Schema::XmlSchemaObjectCollection* items;

  static inline ::System::Xml::Schema::XmlSchemaSequence* New_ctor();

  /// @brief Method SetItems, addr 0x2e387c4, size 0x8, virtual true, abstract: false, final false
  inline void SetItems(::System::Xml::Schema::XmlSchemaObjectCollection* newItems);

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_items();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> const& __cordl_internal_get_items() const;

  constexpr void __cordl_internal_set_items(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  /// @brief Method .ctor, addr 0x2e387cc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsEmpty, addr 0x2e38788, size 0x3c, virtual true, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Items, addr 0x2e38780, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Items();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSequence();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSequence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSequence(XmlSchemaSequence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSequence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSequence(XmlSchemaSequence const&) = delete;

  /// @brief Field items, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___items;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSequence, 0x80>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSequence, ___items) == 0x78, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSequence);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSequence*, "System.Xml.Schema", "XmlSchemaSequence");
