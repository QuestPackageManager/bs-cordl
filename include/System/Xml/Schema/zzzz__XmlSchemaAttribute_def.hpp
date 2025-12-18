#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaForm_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaUse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaAttribute)
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
struct XmlSchemaForm;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
struct XmlSchemaUse;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaAttribute);
// Dependencies System.Xml.Schema.XmlSchemaAnnotated, System.Xml.Schema.XmlSchemaForm, System.Xml.Schema.XmlSchemaUse
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaAttribute
class CORDL_TYPE XmlSchemaAttribute : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  __declspec(property(get = get_AttDef, put = set_AttDef)) ::System::Xml::Schema::SchemaAttDef* AttDef;

  __declspec(property(get = get_AttributeSchemaType)) ::System::Xml::Schema::XmlSchemaSimpleType* AttributeSchemaType;

  __declspec(property(get = get_Datatype)) ::System::Xml::Schema::XmlSchemaDatatype* Datatype;

  __declspec(property(get = get_DefaultValue, put = set_DefaultValue)) ::StringW DefaultValue;

  __declspec(property(get = get_FixedValue, put = set_FixedValue)) ::StringW FixedValue;

  __declspec(property(get = get_Form, put = set_Form)) ::System::Xml::Schema::XmlSchemaForm Form;

  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_NameAttribute, put = set_NameAttribute)) ::StringW NameAttribute;

  __declspec(property(get = get_QualifiedName)) ::System::Xml::XmlQualifiedName* QualifiedName;

  __declspec(property(get = get_RefName, put = set_RefName)) ::System::Xml::XmlQualifiedName* RefName;

  __declspec(property(get = get_SchemaType, put = set_SchemaType)) ::System::Xml::Schema::XmlSchemaSimpleType* SchemaType;

  __declspec(property(get = get_SchemaTypeName, put = set_SchemaTypeName)) ::System::Xml::XmlQualifiedName* SchemaTypeName;

  __declspec(property(get = get_Use, put = set_Use)) ::System::Xml::Schema::XmlSchemaUse Use;

  /// @brief Field attDef, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_attDef, put = __cordl_internal_set_attDef)) ::System::Xml::Schema::SchemaAttDef* attDef;

  /// @brief Field attributeType, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeType, put = __cordl_internal_set_attributeType)) ::System::Xml::Schema::XmlSchemaSimpleType* attributeType;

  /// @brief Field defaultValue, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultValue, put = __cordl_internal_set_defaultValue)) ::StringW defaultValue;

  /// @brief Field fixedValue, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_fixedValue, put = __cordl_internal_set_fixedValue)) ::StringW fixedValue;

  /// @brief Field form, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_form, put = __cordl_internal_set_form)) ::System::Xml::Schema::XmlSchemaForm form;

  /// @brief Field name, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field qualifiedName, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_qualifiedName, put = __cordl_internal_set_qualifiedName)) ::System::Xml::XmlQualifiedName* qualifiedName;

  /// @brief Field refName, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_refName, put = __cordl_internal_set_refName)) ::System::Xml::XmlQualifiedName* refName;

  /// @brief Field type, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Xml::Schema::XmlSchemaSimpleType* type;

  /// @brief Field typeName, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_typeName, put = __cordl_internal_set_typeName)) ::System::Xml::XmlQualifiedName* typeName;

  /// @brief Field use, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_use, put = __cordl_internal_set_use)) ::System::Xml::Schema::XmlSchemaUse use;

  /// @brief Method Clone, addr 0x6077f80, size 0xec, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* Clone();

  static inline ::System::Xml::Schema::XmlSchemaAttribute* New_ctor();

  /// @brief Method SetAttributeType, addr 0x6077f58, size 0x8, virtual false, abstract: false, final false
  inline void SetAttributeType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  /// @brief Method SetQualifiedName, addr 0x6077f50, size 0x8, virtual false, abstract: false, final false
  inline void SetQualifiedName(::System::Xml::XmlQualifiedName* value);

  constexpr ::System::Xml::Schema::SchemaAttDef* const& __cordl_internal_get_attDef() const;

  constexpr ::System::Xml::Schema::SchemaAttDef*& __cordl_internal_get_attDef();

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType* const& __cordl_internal_get_attributeType() const;

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& __cordl_internal_get_attributeType();

  constexpr ::StringW const& __cordl_internal_get_defaultValue() const;

  constexpr ::StringW& __cordl_internal_get_defaultValue();

  constexpr ::StringW const& __cordl_internal_get_fixedValue() const;

  constexpr ::StringW& __cordl_internal_get_fixedValue();

  constexpr ::System::Xml::Schema::XmlSchemaForm const& __cordl_internal_get_form() const;

  constexpr ::System::Xml::Schema::XmlSchemaForm& __cordl_internal_get_form();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_qualifiedName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_qualifiedName();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_refName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_refName();

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType* const& __cordl_internal_get_type() const;

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& __cordl_internal_get_type();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_typeName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_typeName();

  constexpr ::System::Xml::Schema::XmlSchemaUse const& __cordl_internal_get_use() const;

  constexpr ::System::Xml::Schema::XmlSchemaUse& __cordl_internal_get_use();

  constexpr void __cordl_internal_set_attDef(::System::Xml::Schema::SchemaAttDef* value);

  constexpr void __cordl_internal_set_attributeType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  constexpr void __cordl_internal_set_defaultValue(::StringW value);

  constexpr void __cordl_internal_set_fixedValue(::StringW value);

  constexpr void __cordl_internal_set_form(::System::Xml::Schema::XmlSchemaForm value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_qualifiedName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_refName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_type(::System::Xml::Schema::XmlSchemaSimpleType* value);

  constexpr void __cordl_internal_set_typeName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_use(::System::Xml::Schema::XmlSchemaUse value);

  /// @brief Method .ctor, addr 0x607806c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AttDef, addr 0x6077f60, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaAttDef* get_AttDef();

  /// @brief Method get_AttributeSchemaType, addr 0x6077f30, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSimpleType* get_AttributeSchemaType();

  /// @brief Method get_Datatype, addr 0x6077f38, size 0x18, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDatatype* get_Datatype();

  /// @brief Method get_DefaultValue, addr 0x6077d90, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DefaultValue();

  /// @brief Method get_FixedValue, addr 0x6077da0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FixedValue();

  /// @brief Method get_Form, addr 0x6077db0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaForm get_Form();

  /// @brief Method get_Name, addr 0x6077dc0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameAttribute, addr 0x6077f70, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_NameAttribute();

  /// @brief Method get_QualifiedName, addr 0x6077f28, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_QualifiedName();

  /// @brief Method get_RefName, addr 0x6077dd0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_RefName();

  /// @brief Method get_SchemaType, addr 0x6077f08, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSimpleType* get_SchemaType();

  /// @brief Method get_SchemaTypeName, addr 0x6077e6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_SchemaTypeName();

  /// @brief Method get_Use, addr 0x6077f18, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaUse get_Use();

  /// @brief Method set_AttDef, addr 0x6077f68, size 0x8, virtual false, abstract: false, final false
  inline void set_AttDef(::System::Xml::Schema::SchemaAttDef* value);

  /// @brief Method set_DefaultValue, addr 0x6077d98, size 0x8, virtual false, abstract: false, final false
  inline void set_DefaultValue(::StringW value);

  /// @brief Method set_FixedValue, addr 0x6077da8, size 0x8, virtual false, abstract: false, final false
  inline void set_FixedValue(::StringW value);

  /// @brief Method set_Form, addr 0x6077db8, size 0x8, virtual false, abstract: false, final false
  inline void set_Form(::System::Xml::Schema::XmlSchemaForm value);

  /// @brief Method set_Name, addr 0x6077dc8, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_NameAttribute, addr 0x6077f78, size 0x8, virtual true, abstract: false, final false
  inline void set_NameAttribute(::StringW value);

  /// @brief Method set_RefName, addr 0x6077dd8, size 0x94, virtual false, abstract: false, final false
  inline void set_RefName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method set_SchemaType, addr 0x6077f10, size 0x8, virtual false, abstract: false, final false
  inline void set_SchemaType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  /// @brief Method set_SchemaTypeName, addr 0x6077e74, size 0x94, virtual false, abstract: false, final false
  inline void set_SchemaTypeName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method set_Use, addr 0x6077f20, size 0x8, virtual false, abstract: false, final false
  inline void set_Use(::System::Xml::Schema::XmlSchemaUse value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaAttribute(XmlSchemaAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaAttribute(XmlSchemaAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9724 };

  /// @brief Field defaultValue, offset: 0x50, size: 0x8, def value: None
  ::StringW ___defaultValue;

  /// @brief Field fixedValue, offset: 0x58, size: 0x8, def value: None
  ::StringW ___fixedValue;

  /// @brief Field name, offset: 0x60, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field form, offset: 0x68, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaForm ___form;

  /// @brief Field use, offset: 0x6c, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaUse ___use;

  /// @brief Field refName, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___refName;

  /// @brief Field typeName, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___typeName;

  /// @brief Field qualifiedName, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___qualifiedName;

  /// @brief Field type, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleType* ___type;

  /// @brief Field attributeType, offset: 0x90, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleType* ___attributeType;

  /// @brief Field attDef, offset: 0x98, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaAttDef* ___attDef;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttribute, ___defaultValue) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttribute, ___fixedValue) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttribute, ___name) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttribute, ___form) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttribute, ___use) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttribute, ___refName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttribute, ___typeName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttribute, ___qualifiedName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttribute, ___type) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttribute, ___attributeType) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAttribute, ___attDef) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaAttribute, 0xa0>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAttribute*, "System.Xml.Schema", "XmlSchemaAttribute");
