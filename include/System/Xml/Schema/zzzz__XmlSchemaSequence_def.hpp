#pragma once
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
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11655))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11663))
// CS Name: ::System.Xml.Schema::XmlSchemaSequence*
class CORDL_TYPE XmlSchemaSequence : public ::System::Xml::Schema::XmlSchemaGroupBase {
public:
  // Declarations
  /// @brief Field items, offset 0x38, size 0x8
  __declspec(property(get = __get_items, put = __set_items))::System::Xml::Schema::XmlSchemaObjectCollection* items;

  __declspec(property(get = get_Items))::System::Xml::Schema::XmlSchemaObjectCollection* Items;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __get_items();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> const& __get_items() const;

  constexpr void __set_items(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  /// @brief Method get_Items addr 0x274ad84 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Items();

  static inline ::System::Xml::Schema::XmlSchemaSequence* New_ctor();

  /// @brief Method .ctor addr 0x2749b3c size 0x64 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSequence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSequence(XmlSchemaSequence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSequence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSequence(XmlSchemaSequence const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSequence();

public:
  /// @brief Field items, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___items;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSequence, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSequence, ___items) == 0x38, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSequence);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSequence*, "System.Xml.Schema", "XmlSchemaSequence");
