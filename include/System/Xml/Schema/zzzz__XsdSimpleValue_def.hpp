#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdSimpleValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XsdSimpleValue)
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class XsdSimpleValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XsdSimpleValue);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XsdSimpleValue
class CORDL_TYPE XsdSimpleValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_TypedValue)) ::System::Object* TypedValue;

  __declspec(property(get = get_XmlType)) ::System::Xml::Schema::XmlSchemaSimpleType* XmlType;

  /// @brief Field typedValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_typedValue, put = __cordl_internal_set_typedValue)) ::System::Object* typedValue;

  /// @brief Field xmlType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlType, put = __cordl_internal_set_xmlType)) ::System::Xml::Schema::XmlSchemaSimpleType* xmlType;

  static inline ::System::Xml::Schema::XsdSimpleValue* New_ctor(::System::Xml::Schema::XmlSchemaSimpleType* st, ::System::Object* value);

  constexpr ::System::Object* const& __cordl_internal_get_typedValue() const;

  constexpr ::System::Object*& __cordl_internal_get_typedValue();

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType* const& __cordl_internal_get_xmlType() const;

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& __cordl_internal_get_xmlType();

  constexpr void __cordl_internal_set_typedValue(::System::Object* value);

  constexpr void __cordl_internal_set_xmlType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  /// @brief Method .ctor, addr 0x6007908, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaSimpleType* st, ::System::Object* value);

  /// @brief Method get_TypedValue, addr 0x6007918, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_TypedValue();

  /// @brief Method get_XmlType, addr 0x6007910, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSimpleType* get_XmlType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdSimpleValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XsdSimpleValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XsdSimpleValue(XsdSimpleValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XsdSimpleValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XsdSimpleValue(XsdSimpleValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9586 };

  /// @brief Field xmlType, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleType* ___xmlType;

  /// @brief Field typedValue, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___typedValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XsdSimpleValue, ___xmlType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdSimpleValue, ___typedValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdSimpleValue, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XsdSimpleValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdSimpleValue*, "System.Xml.Schema", "XsdSimpleValue");
