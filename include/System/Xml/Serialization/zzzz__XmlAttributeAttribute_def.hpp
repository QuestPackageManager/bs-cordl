#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlAttributeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaForm_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlAttributeAttribute)
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
class XmlAttributeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlAttributeAttribute);
// Dependencies System.Attribute, System.Xml.Schema.XmlSchemaForm
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlAttributeAttribute
class CORDL_TYPE XmlAttributeAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_AttributeName)) ::StringW AttributeName;

  __declspec(property(get = get_DataType, put = set_DataType)) ::StringW DataType;

  __declspec(property(get = get_Form)) ::System::Xml::Schema::XmlSchemaForm Form;

  __declspec(property(get = get_Namespace)) ::StringW Namespace;

  /// @brief Field attributeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeName, put = __cordl_internal_set_attributeName)) ::StringW attributeName;

  /// @brief Field dataType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dataType, put = __cordl_internal_set_dataType)) ::StringW dataType;

  /// @brief Field form, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_form, put = __cordl_internal_set_form)) ::System::Xml::Schema::XmlSchemaForm form;

  /// @brief Field ns, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Field type, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  /// @brief Method AddKeyHash, addr 0x436ecf8, size 0x134, virtual false, abstract: false, final false
  inline void AddKeyHash(::System::Text::StringBuilder* sb);

  static inline ::System::Xml::Serialization::XmlAttributeAttribute* New_ctor(::StringW attributeName);

  constexpr ::StringW const& __cordl_internal_get_attributeName() const;

  constexpr ::StringW& __cordl_internal_get_attributeName();

  constexpr ::StringW const& __cordl_internal_get_dataType() const;

  constexpr ::StringW& __cordl_internal_get_dataType();

  constexpr ::System::Xml::Schema::XmlSchemaForm const& __cordl_internal_get_form() const;

  constexpr ::System::Xml::Schema::XmlSchemaForm& __cordl_internal_get_form();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_attributeName(::StringW value);

  constexpr void __cordl_internal_set_dataType(::StringW value);

  constexpr void __cordl_internal_set_form(::System::Xml::Schema::XmlSchemaForm value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x436ec10, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW attributeName);

  /// @brief Method get_AttributeName, addr 0x436ec38, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_AttributeName();

  /// @brief Method get_DataType, addr 0x436ec8c, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_DataType();

  /// @brief Method get_Form, addr 0x436ece8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaForm get_Form();

  /// @brief Method get_Namespace, addr 0x436ecf0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method set_DataType, addr 0x436ece0, size 0x8, virtual false, abstract: false, final false
  inline void set_DataType(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAttributeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAttributeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAttributeAttribute(XmlAttributeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAttributeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAttributeAttribute(XmlAttributeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7412 };

  /// @brief Field attributeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___attributeName;

  /// @brief Field dataType, offset: 0x18, size: 0x8, def value: None
  ::StringW ___dataType;

  /// @brief Field type, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field form, offset: 0x28, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaForm ___form;

  /// @brief Field ns, offset: 0x30, size: 0x8, def value: None
  ::StringW ___ns;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlAttributeAttribute, ___attributeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributeAttribute, ___dataType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributeAttribute, ___type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributeAttribute, ___form) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributeAttribute, ___ns) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlAttributeAttribute, 0x38>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlAttributeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlAttributeAttribute*, "System.Xml.Serialization", "XmlAttributeAttribute");
