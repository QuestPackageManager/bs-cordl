#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaForm_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlArrayItemAttribute)
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Schema {
struct XmlSchemaForm;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlArrayItemAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlArrayItemAttribute);
// Type: System.Xml.Serialization::XmlArrayItemAttribute
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlArrayItemAttribute*
class CORDL_TYPE XmlArrayItemAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_DataType))::StringW DataType;

  __declspec(property(get = get_ElementName))::StringW ElementName;

  __declspec(property(get = get_Form))::System::Xml::Schema::XmlSchemaForm Form;

  __declspec(property(get = get_IsNullable)) bool IsNullable;

  __declspec(property(get = get_IsNullableSpecified)) bool IsNullableSpecified;

  __declspec(property(get = get_Namespace))::StringW Namespace;

  __declspec(property(get = get_NestingLevel)) int32_t NestingLevel;

  __declspec(property(get = get_Type))::System::Type* Type;

  /// @brief Field dataType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dataType, put = __cordl_internal_set_dataType))::StringW dataType;

  /// @brief Field elementName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_elementName, put = __cordl_internal_set_elementName))::StringW elementName;

  /// @brief Field form, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_form, put = __cordl_internal_set_form))::System::Xml::Schema::XmlSchemaForm form;

  /// @brief Field isNullable, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isNullable, put = __cordl_internal_set_isNullable)) bool isNullable;

  /// @brief Field isNullableSpecified, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_isNullableSpecified, put = __cordl_internal_set_isNullableSpecified)) bool isNullableSpecified;

  /// @brief Field nestingLevel, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_nestingLevel, put = __cordl_internal_set_nestingLevel)) int32_t nestingLevel;

  /// @brief Field ns, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns))::StringW ns;

  /// @brief Field type, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  /// @brief Method AddKeyHash, addr 0x2dccefc, size 0x164, virtual false, abstract: false, final false
  inline void AddKeyHash(::System::Text::StringBuilder* sb);

  constexpr ::StringW const& __cordl_internal_get_dataType() const;

  constexpr ::StringW& __cordl_internal_get_dataType();

  constexpr ::StringW const& __cordl_internal_get_elementName() const;

  constexpr ::StringW& __cordl_internal_get_elementName();

  constexpr ::System::Xml::Schema::XmlSchemaForm const& __cordl_internal_get_form() const;

  constexpr ::System::Xml::Schema::XmlSchemaForm& __cordl_internal_get_form();

  constexpr bool const& __cordl_internal_get_isNullable() const;

  constexpr bool& __cordl_internal_get_isNullable();

  constexpr bool const& __cordl_internal_get_isNullableSpecified() const;

  constexpr bool& __cordl_internal_get_isNullableSpecified();

  constexpr int32_t const& __cordl_internal_get_nestingLevel() const;

  constexpr int32_t& __cordl_internal_get_nestingLevel();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_dataType(::StringW value);

  constexpr void __cordl_internal_set_elementName(::StringW value);

  constexpr void __cordl_internal_set_form(::System::Xml::Schema::XmlSchemaForm value);

  constexpr void __cordl_internal_set_isNullable(bool value);

  constexpr void __cordl_internal_set_isNullableSpecified(bool value);

  constexpr void __cordl_internal_set_nestingLevel(int32_t value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method get_DataType, addr 0x2dcce24, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_DataType();

  /// @brief Method get_ElementName, addr 0x2dcce78, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_ElementName();

  /// @brief Method get_Form, addr 0x2dccecc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaForm get_Form();

  /// @brief Method get_IsNullable, addr 0x2dccedc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNullable();

  /// @brief Method get_IsNullableSpecified, addr 0x2dccee4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNullableSpecified();

  /// @brief Method get_Namespace, addr 0x2dcced4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_NestingLevel, addr 0x2dccef4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_NestingLevel();

  /// @brief Method get_Type, addr 0x2dcceec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlArrayItemAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlArrayItemAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlArrayItemAttribute(XmlArrayItemAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlArrayItemAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlArrayItemAttribute(XmlArrayItemAttribute const&) = delete;

  /// @brief Field dataType, offset: 0x10, size: 0x8, def value: None
  ::StringW ___dataType;

  /// @brief Field elementName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___elementName;

  /// @brief Field form, offset: 0x20, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaForm ___form;

  /// @brief Field ns, offset: 0x28, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field isNullable, offset: 0x30, size: 0x1, def value: None
  bool ___isNullable;

  /// @brief Field isNullableSpecified, offset: 0x31, size: 0x1, def value: None
  bool ___isNullableSpecified;

  /// @brief Field nestingLevel, offset: 0x34, size: 0x4, def value: None
  int32_t ___nestingLevel;

  /// @brief Field type, offset: 0x38, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlArrayItemAttribute, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlArrayItemAttribute, ___dataType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlArrayItemAttribute, ___elementName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlArrayItemAttribute, ___form) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlArrayItemAttribute, ___ns) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlArrayItemAttribute, ___isNullable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlArrayItemAttribute, ___isNullableSpecified) == 0x31, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlArrayItemAttribute, ___nestingLevel) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlArrayItemAttribute, ___type) == 0x38, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlArrayItemAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlArrayItemAttribute*, "System.Xml.Serialization", "XmlArrayItemAttribute");
