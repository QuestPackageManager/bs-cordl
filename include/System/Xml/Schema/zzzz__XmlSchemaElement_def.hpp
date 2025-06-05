#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaForm_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaElement)
namespace System::Xml::Schema {
class SchemaElementDecl;
}
namespace System::Xml::Schema {
struct XmlSchemaDerivationMethod;
}
namespace System::Xml::Schema {
struct XmlSchemaForm;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaElement);
// Dependencies System.Xml.Schema.XmlSchemaDerivationMethod, System.Xml.Schema.XmlSchemaForm, System.Xml.Schema.XmlSchemaParticle
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaElement
class CORDL_TYPE XmlSchemaElement : public ::System::Xml::Schema::XmlSchemaParticle {
public:
  // Declarations
  __declspec(property(get = get_Block, put = set_Block)) ::System::Xml::Schema::XmlSchemaDerivationMethod Block;

  __declspec(property(get = get_BlockResolved)) ::System::Xml::Schema::XmlSchemaDerivationMethod BlockResolved;

  __declspec(property(get = get_Constraints)) ::System::Xml::Schema::XmlSchemaObjectCollection* Constraints;

  __declspec(property(get = get_DefaultValue, put = set_DefaultValue)) ::StringW DefaultValue;

  __declspec(property(get = get_ElementDecl, put = set_ElementDecl)) ::System::Xml::Schema::SchemaElementDecl* ElementDecl;

  __declspec(property(get = get_ElementSchemaType)) ::System::Xml::Schema::XmlSchemaType* ElementSchemaType;

  __declspec(property(get = get_Final, put = set_Final)) ::System::Xml::Schema::XmlSchemaDerivationMethod Final;

  __declspec(property(get = get_FinalResolved)) ::System::Xml::Schema::XmlSchemaDerivationMethod FinalResolved;

  __declspec(property(get = get_FixedValue, put = set_FixedValue)) ::StringW FixedValue;

  __declspec(property(get = get_Form, put = set_Form)) ::System::Xml::Schema::XmlSchemaForm Form;

  __declspec(property(get = get_HasAbstractAttribute)) bool HasAbstractAttribute;

  __declspec(property(get = get_HasConstraints)) bool HasConstraints;

  __declspec(property(get = get_HasNillableAttribute)) bool HasNillableAttribute;

  __declspec(property(get = get_IsAbstract, put = set_IsAbstract)) bool IsAbstract;

  __declspec(property(get = get_IsLocalTypeDerivationChecked, put = set_IsLocalTypeDerivationChecked)) bool IsLocalTypeDerivationChecked;

  __declspec(property(get = get_IsNillable, put = set_IsNillable)) bool IsNillable;

  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_NameAttribute, put = set_NameAttribute)) ::StringW NameAttribute;

  __declspec(property(get = get_NameString)) ::StringW NameString;

  __declspec(property(get = get_QualifiedName)) ::System::Xml::XmlQualifiedName* QualifiedName;

  __declspec(property(get = get_RefName, put = set_RefName)) ::System::Xml::XmlQualifiedName* RefName;

  __declspec(property(get = get_SchemaType, put = set_SchemaType)) ::System::Xml::Schema::XmlSchemaType* SchemaType;

  __declspec(property(get = get_SchemaTypeName, put = set_SchemaTypeName)) ::System::Xml::XmlQualifiedName* SchemaTypeName;

  __declspec(property(get = get_SubstitutionGroup, put = set_SubstitutionGroup)) ::System::Xml::XmlQualifiedName* SubstitutionGroup;

  /// @brief Field block, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_block, put = __cordl_internal_set_block)) ::System::Xml::Schema::XmlSchemaDerivationMethod block;

  /// @brief Field blockResolved, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_blockResolved, put = __cordl_internal_set_blockResolved)) ::System::Xml::Schema::XmlSchemaDerivationMethod blockResolved;

  /// @brief Field constraints, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_constraints, put = __cordl_internal_set_constraints)) ::System::Xml::Schema::XmlSchemaObjectCollection* constraints;

  /// @brief Field defaultValue, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultValue, put = __cordl_internal_set_defaultValue)) ::StringW defaultValue;

  /// @brief Field elementDecl, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_elementDecl, put = __cordl_internal_set_elementDecl)) ::System::Xml::Schema::SchemaElementDecl* elementDecl;

  /// @brief Field elementType, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_elementType, put = __cordl_internal_set_elementType)) ::System::Xml::Schema::XmlSchemaType* elementType;

  /// @brief Field final, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_final, put = __cordl_internal_set_final)) ::System::Xml::Schema::XmlSchemaDerivationMethod final;

  /// @brief Field finalResolved, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_finalResolved, put = __cordl_internal_set_finalResolved)) ::System::Xml::Schema::XmlSchemaDerivationMethod finalResolved;

  /// @brief Field fixedValue, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_fixedValue, put = __cordl_internal_set_fixedValue)) ::StringW fixedValue;

  /// @brief Field form, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_form, put = __cordl_internal_set_form)) ::System::Xml::Schema::XmlSchemaForm form;

  /// @brief Field hasAbstractAttribute, offset 0x75, size 0x1
  __declspec(property(get = __cordl_internal_get_hasAbstractAttribute, put = __cordl_internal_set_hasAbstractAttribute)) bool hasAbstractAttribute;

  /// @brief Field hasNillableAttribute, offset 0x77, size 0x1
  __declspec(property(get = __cordl_internal_get_hasNillableAttribute, put = __cordl_internal_set_hasNillableAttribute)) bool hasNillableAttribute;

  /// @brief Field isAbstract, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_isAbstract, put = __cordl_internal_set_isAbstract)) bool isAbstract;

  /// @brief Field isLocalTypeDerivationChecked, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_isLocalTypeDerivationChecked, put = __cordl_internal_set_isLocalTypeDerivationChecked)) bool isLocalTypeDerivationChecked;

  /// @brief Field isNillable, offset 0x76, size 0x1
  __declspec(property(get = __cordl_internal_get_isNillable, put = __cordl_internal_set_isNillable)) bool isNillable;

  /// @brief Field name, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field qualifiedName, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_qualifiedName, put = __cordl_internal_set_qualifiedName)) ::System::Xml::XmlQualifiedName* qualifiedName;

  /// @brief Field refName, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_refName, put = __cordl_internal_set_refName)) ::System::Xml::XmlQualifiedName* refName;

  /// @brief Field substitutionGroup, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_substitutionGroup, put = __cordl_internal_set_substitutionGroup)) ::System::Xml::XmlQualifiedName* substitutionGroup;

  /// @brief Field type, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Xml::Schema::XmlSchemaType* type;

  /// @brief Field typeName, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_typeName, put = __cordl_internal_set_typeName)) ::System::Xml::XmlQualifiedName* typeName;

  /// @brief Method Clone, addr 0x42be29c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* Clone();

  /// @brief Method Clone, addr 0x42b8ee0, size 0x1cc, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* Clone(::System::Xml::Schema::XmlSchema* parentSchema);

  static inline ::System::Xml::Schema::XmlSchemaElement* New_ctor();

  /// @brief Method SetBlockResolved, addr 0x42be214, size 0x8, virtual false, abstract: false, final false
  inline void SetBlockResolved(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  /// @brief Method SetElementType, addr 0x42be20c, size 0x8, virtual false, abstract: false, final false
  inline void SetElementType(::System::Xml::Schema::XmlSchemaType* value);

  /// @brief Method SetFinalResolved, addr 0x42be21c, size 0x8, virtual false, abstract: false, final false
  inline void SetFinalResolved(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  /// @brief Method SetQualifiedName, addr 0x42be204, size 0x8, virtual false, abstract: false, final false
  inline void SetQualifiedName(::System::Xml::XmlQualifiedName* value);

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_block() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_block();

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_blockResolved() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_blockResolved();

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& __cordl_internal_get_constraints() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_constraints();

  constexpr ::StringW const& __cordl_internal_get_defaultValue() const;

  constexpr ::StringW& __cordl_internal_get_defaultValue();

  constexpr ::System::Xml::Schema::SchemaElementDecl* const& __cordl_internal_get_elementDecl() const;

  constexpr ::System::Xml::Schema::SchemaElementDecl*& __cordl_internal_get_elementDecl();

  constexpr ::System::Xml::Schema::XmlSchemaType* const& __cordl_internal_get_elementType() const;

  constexpr ::System::Xml::Schema::XmlSchemaType*& __cordl_internal_get_elementType();

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_final() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_final();

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_finalResolved() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_finalResolved();

  constexpr ::StringW const& __cordl_internal_get_fixedValue() const;

  constexpr ::StringW& __cordl_internal_get_fixedValue();

  constexpr ::System::Xml::Schema::XmlSchemaForm const& __cordl_internal_get_form() const;

  constexpr ::System::Xml::Schema::XmlSchemaForm& __cordl_internal_get_form();

  constexpr bool const& __cordl_internal_get_hasAbstractAttribute() const;

  constexpr bool& __cordl_internal_get_hasAbstractAttribute();

  constexpr bool const& __cordl_internal_get_hasNillableAttribute() const;

  constexpr bool& __cordl_internal_get_hasNillableAttribute();

  constexpr bool const& __cordl_internal_get_isAbstract() const;

  constexpr bool& __cordl_internal_get_isAbstract();

  constexpr bool const& __cordl_internal_get_isLocalTypeDerivationChecked() const;

  constexpr bool& __cordl_internal_get_isLocalTypeDerivationChecked();

  constexpr bool const& __cordl_internal_get_isNillable() const;

  constexpr bool& __cordl_internal_get_isNillable();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_qualifiedName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_qualifiedName();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_refName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_refName();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_substitutionGroup() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_substitutionGroup();

  constexpr ::System::Xml::Schema::XmlSchemaType* const& __cordl_internal_get_type() const;

  constexpr ::System::Xml::Schema::XmlSchemaType*& __cordl_internal_get_type();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_typeName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_typeName();

  constexpr void __cordl_internal_set_block(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_blockResolved(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_constraints(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  constexpr void __cordl_internal_set_defaultValue(::StringW value);

  constexpr void __cordl_internal_set_elementDecl(::System::Xml::Schema::SchemaElementDecl* value);

  constexpr void __cordl_internal_set_elementType(::System::Xml::Schema::XmlSchemaType* value);

  constexpr void __cordl_internal_set_final(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_finalResolved(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_fixedValue(::StringW value);

  constexpr void __cordl_internal_set_form(::System::Xml::Schema::XmlSchemaForm value);

  constexpr void __cordl_internal_set_hasAbstractAttribute(bool value);

  constexpr void __cordl_internal_set_hasNillableAttribute(bool value);

  constexpr void __cordl_internal_set_isAbstract(bool value);

  constexpr void __cordl_internal_set_isLocalTypeDerivationChecked(bool value);

  constexpr void __cordl_internal_set_isNillable(bool value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_qualifiedName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_refName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_substitutionGroup(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_type(::System::Xml::Schema::XmlSchemaType* value);

  constexpr void __cordl_internal_set_typeName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method .ctor, addr 0x42be2a4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Block, addr 0x42bdf04, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDerivationMethod get_Block();

  /// @brief Method get_BlockResolved, addr 0x42be1f4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDerivationMethod get_BlockResolved();

  /// @brief Method get_Constraints, addr 0x42be180, size 0x64, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Constraints();

  /// @brief Method get_DefaultValue, addr 0x42bdf14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DefaultValue();

  /// @brief Method get_ElementDecl, addr 0x42be25c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaElementDecl* get_ElementDecl();

  /// @brief Method get_ElementSchemaType, addr 0x42be1ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* get_ElementSchemaType();

  /// @brief Method get_Final, addr 0x42bdf24, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDerivationMethod get_Final();

  /// @brief Method get_FinalResolved, addr 0x42be1fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDerivationMethod get_FinalResolved();

  /// @brief Method get_FixedValue, addr 0x42bdf34, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FixedValue();

  /// @brief Method get_Form, addr 0x42bdf44, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaForm get_Form();

  /// @brief Method get_HasAbstractAttribute, addr 0x42bdf88, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasAbstractAttribute();

  /// @brief Method get_HasConstraints, addr 0x42be224, size 0x24, virtual false, abstract: false, final false
  inline bool get_HasConstraints();

  /// @brief Method get_HasNillableAttribute, addr 0x42bdf80, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasNillableAttribute();

  /// @brief Method get_IsAbstract, addr 0x42bdee8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsAbstract();

  /// @brief Method get_IsLocalTypeDerivationChecked, addr 0x42be248, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsLocalTypeDerivationChecked();

  /// @brief Method get_IsNillable, addr 0x42bdf64, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNillable();

  /// @brief Method get_Name, addr 0x42bdf54, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameAttribute, addr 0x42be26c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_NameAttribute();

  /// @brief Method get_NameString, addr 0x42be27c, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_NameString();

  /// @brief Method get_QualifiedName, addr 0x42be1e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_QualifiedName();

  /// @brief Method get_RefName, addr 0x42bdf90, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_RefName();

  /// @brief Method get_SchemaType, addr 0x42be170, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* get_SchemaType();

  /// @brief Method get_SchemaTypeName, addr 0x42be0d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_SchemaTypeName();

  /// @brief Method get_SubstitutionGroup, addr 0x42be030, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_SubstitutionGroup();

  /// @brief Method set_Block, addr 0x42bdf0c, size 0x8, virtual false, abstract: false, final false
  inline void set_Block(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  /// @brief Method set_DefaultValue, addr 0x42bdf1c, size 0x8, virtual false, abstract: false, final false
  inline void set_DefaultValue(::StringW value);

  /// @brief Method set_ElementDecl, addr 0x42be264, size 0x8, virtual false, abstract: false, final false
  inline void set_ElementDecl(::System::Xml::Schema::SchemaElementDecl* value);

  /// @brief Method set_Final, addr 0x42bdf2c, size 0x8, virtual false, abstract: false, final false
  inline void set_Final(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  /// @brief Method set_FixedValue, addr 0x42bdf3c, size 0x8, virtual false, abstract: false, final false
  inline void set_FixedValue(::StringW value);

  /// @brief Method set_Form, addr 0x42bdf4c, size 0x8, virtual false, abstract: false, final false
  inline void set_Form(::System::Xml::Schema::XmlSchemaForm value);

  /// @brief Method set_IsAbstract, addr 0x42bdef0, size 0x14, virtual false, abstract: false, final false
  inline void set_IsAbstract(bool value);

  /// @brief Method set_IsLocalTypeDerivationChecked, addr 0x42be250, size 0xc, virtual false, abstract: false, final false
  inline void set_IsLocalTypeDerivationChecked(bool value);

  /// @brief Method set_IsNillable, addr 0x42bdf6c, size 0x14, virtual false, abstract: false, final false
  inline void set_IsNillable(bool value);

  /// @brief Method set_Name, addr 0x42bdf5c, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_NameAttribute, addr 0x42be274, size 0x8, virtual true, abstract: false, final false
  inline void set_NameAttribute(::StringW value);

  /// @brief Method set_RefName, addr 0x42bdf98, size 0x98, virtual false, abstract: false, final false
  inline void set_RefName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method set_SchemaType, addr 0x42be178, size 0x8, virtual false, abstract: false, final false
  inline void set_SchemaType(::System::Xml::Schema::XmlSchemaType* value);

  /// @brief Method set_SchemaTypeName, addr 0x42be0d8, size 0x98, virtual false, abstract: false, final false
  inline void set_SchemaTypeName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method set_SubstitutionGroup, addr 0x42be038, size 0x98, virtual false, abstract: false, final false
  inline void set_SubstitutionGroup(::System::Xml::XmlQualifiedName* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaElement(XmlSchemaElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaElement(XmlSchemaElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7675 };

  /// @brief Field isAbstract, offset: 0x74, size: 0x1, def value: None
  bool ___isAbstract;

  /// @brief Field hasAbstractAttribute, offset: 0x75, size: 0x1, def value: None
  bool ___hasAbstractAttribute;

  /// @brief Field isNillable, offset: 0x76, size: 0x1, def value: None
  bool ___isNillable;

  /// @brief Field hasNillableAttribute, offset: 0x77, size: 0x1, def value: None
  bool ___hasNillableAttribute;

  /// @brief Field isLocalTypeDerivationChecked, offset: 0x78, size: 0x1, def value: None
  bool ___isLocalTypeDerivationChecked;

  /// @brief Field block, offset: 0x7c, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___block;

  /// @brief Field final, offset: 0x80, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___final;

  /// @brief Field form, offset: 0x84, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaForm ___form;

  /// @brief Field defaultValue, offset: 0x88, size: 0x8, def value: None
  ::StringW ___defaultValue;

  /// @brief Field fixedValue, offset: 0x90, size: 0x8, def value: None
  ::StringW ___fixedValue;

  /// @brief Field name, offset: 0x98, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field refName, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___refName;

  /// @brief Field substitutionGroup, offset: 0xa8, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___substitutionGroup;

  /// @brief Field typeName, offset: 0xb0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___typeName;

  /// @brief Field type, offset: 0xb8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaType* ___type;

  /// @brief Field qualifiedName, offset: 0xc0, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___qualifiedName;

  /// @brief Field elementType, offset: 0xc8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaType* ___elementType;

  /// @brief Field blockResolved, offset: 0xd0, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___blockResolved;

  /// @brief Field finalResolved, offset: 0xd4, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___finalResolved;

  /// @brief Field constraints, offset: 0xd8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___constraints;

  /// @brief Field elementDecl, offset: 0xe0, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaElementDecl* ___elementDecl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___isAbstract) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___hasAbstractAttribute) == 0x75, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___isNillable) == 0x76, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___hasNillableAttribute) == 0x77, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___isLocalTypeDerivationChecked) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___block) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___final) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___form) == 0x84, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___defaultValue) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___fixedValue) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___name) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___refName) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___substitutionGroup) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___typeName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___type) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___qualifiedName) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___elementType) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___blockResolved) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___finalResolved) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___constraints) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaElement, ___elementDecl) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaElement, 0xe8>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaElement*, "System.Xml.Schema", "XmlSchemaElement");
