#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaElementDecl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SchemaElementDecl)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Schema {
class CompiledIdentityConstraint;
}
namespace System::Xml::Schema {
class ContentValidator;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
struct XmlSchemaDerivationMethod;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml {
class IDtdAttributeInfo;
}
namespace System::Xml {
class IDtdAttributeListInfo;
}
namespace System::Xml {
class IDtdDefaultAttributeInfo;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaElementDecl;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SchemaElementDecl);
// Type: System.Xml.Schema::SchemaElementDecl
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::SchemaElementDecl*
class CORDL_TYPE SchemaElementDecl : public ::System::Xml::Schema::SchemaDeclBase {
public:
  // Declarations
  __declspec(property(get = get_AnyAttribute, put = set_AnyAttribute))::System::Xml::Schema::XmlSchemaAnyAttribute* AnyAttribute;

  __declspec(property(get = get_AttDefs))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* AttDefs;

  __declspec(property(get = get_Block, put = set_Block))::System::Xml::Schema::XmlSchemaDerivationMethod Block;

  __declspec(property(get = get_Constraints,
                      put = set_Constraints))::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*, ::Array<::System::Xml::Schema::CompiledIdentityConstraint*>*> Constraints;

  __declspec(property(get = get_ContentValidator, put = set_ContentValidator))::System::Xml::Schema::ContentValidator* ContentValidator;

  __declspec(property(get = get_DefaultAttDefs))::System::Collections::Generic::IList_1<::System::Xml::IDtdDefaultAttributeInfo*>* DefaultAttDefs;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::Xml::Schema::SchemaElementDecl* Empty;

  __declspec(property(get = get_HasDefaultAttribute)) bool HasDefaultAttribute;

  __declspec(property(get = get_HasNonCDataAttribute, put = set_HasNonCDataAttribute)) bool HasNonCDataAttribute;

  __declspec(property(get = get_HasRequiredAttribute)) bool HasRequiredAttribute;

  __declspec(property(get = get_IsAbstract, put = set_IsAbstract)) bool IsAbstract;

  __declspec(property(get = get_IsIdDeclared, put = set_IsIdDeclared)) bool IsIdDeclared;

  __declspec(property(get = get_IsNillable, put = set_IsNillable)) bool IsNillable;

  __declspec(property(get = get_IsNotationDeclared, put = set_IsNotationDeclared)) bool IsNotationDeclared;

  __declspec(property(get = get_ProhibitedAttributes))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* ProhibitedAttributes;

  __declspec(property(get = get_SchemaElement, put = set_SchemaElement))::System::Xml::Schema::XmlSchemaElement* SchemaElement;

  __declspec(property(get = System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes)) bool System_Xml_IDtdAttributeListInfo_HasNonCDataAttributes;

  /// @brief Field anyAttribute, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_anyAttribute, put = __cordl_internal_set_anyAttribute))::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;

  /// @brief Field attdefs, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_attdefs,
                      put = __cordl_internal_set_attdefs))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* attdefs;

  /// @brief Field block, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_block, put = __cordl_internal_set_block))::System::Xml::Schema::XmlSchemaDerivationMethod block;

  /// @brief Field constraints, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_constraints,
                      put = __cordl_internal_set_constraints))::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*, ::Array<::System::Xml::Schema::CompiledIdentityConstraint*>*> constraints;

  /// @brief Field contentValidator, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_contentValidator, put = __cordl_internal_set_contentValidator))::System::Xml::Schema::ContentValidator* contentValidator;

  /// @brief Field defaultAttdefs, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultAttdefs,
                      put = __cordl_internal_set_defaultAttdefs))::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>* defaultAttdefs;

  /// @brief Field hasNonCDataAttribute, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_hasNonCDataAttribute, put = __cordl_internal_set_hasNonCDataAttribute)) bool hasNonCDataAttribute;

  /// @brief Field hasRequiredAttribute, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_hasRequiredAttribute, put = __cordl_internal_set_hasRequiredAttribute)) bool hasRequiredAttribute;

  /// @brief Field isAbstract, offset 0x72, size 0x1
  __declspec(property(get = __cordl_internal_get_isAbstract, put = __cordl_internal_set_isAbstract)) bool isAbstract;

  /// @brief Field isIdDeclared, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_isIdDeclared, put = __cordl_internal_set_isIdDeclared)) bool isIdDeclared;

  /// @brief Field isNillable, offset 0x73, size 0x1
  __declspec(property(get = __cordl_internal_get_isNillable, put = __cordl_internal_set_isNillable)) bool isNillable;

  /// @brief Field isNotationDeclared, offset 0x75, size 0x1
  __declspec(property(get = __cordl_internal_get_isNotationDeclared, put = __cordl_internal_set_isNotationDeclared)) bool isNotationDeclared;

  /// @brief Field prohibitedAttributes, offset 0x78, size 0x8
  __declspec(
      property(get = __cordl_internal_get_prohibitedAttributes,
               put = __cordl_internal_set_prohibitedAttributes))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* prohibitedAttributes;

  /// @brief Field schemaElement, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaElement, put = __cordl_internal_set_schemaElement))::System::Xml::Schema::XmlSchemaElement* schemaElement;

  /// @brief Convert operator to "::System::Xml::IDtdAttributeListInfo"
  constexpr operator ::System::Xml::IDtdAttributeListInfo*() noexcept;

  /// @brief Method AddAttDef, addr 0x2e0735c, size 0x154, virtual false, abstract: false, final false
  inline void AddAttDef(::System::Xml::Schema::SchemaAttDef* attdef);

  /// @brief Method CheckAttributes, addr 0x2e07540, size 0x2a8, virtual false, abstract: false, final false
  inline void CheckAttributes(::System::Collections::Hashtable* presence, bool standalone);

  /// @brief Method Clone, addr 0x2e07254, size 0x64, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaElementDecl* Clone();

  /// @brief Method CreateAnyTypeElementDecl, addr 0x2e070a0, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::SchemaElementDecl* CreateAnyTypeElementDecl();

  /// @brief Method GetAttDef, addr 0x2e074b0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaAttDef* GetAttDef(::System::Xml::XmlQualifiedName* qname);

  static inline ::System::Xml::Schema::SchemaElementDecl* New_ctor();

  static inline ::System::Xml::Schema::SchemaElementDecl* New_ctor(::System::Xml::Schema::XmlSchemaDatatype* dtype);

  static inline ::System::Xml::Schema::SchemaElementDecl* New_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix);

  /// @brief Method System.Xml.IDtdAttributeListInfo.LookupAttribute, addr 0x2e0716c, size 0xb8, virtual true, abstract: false, final true
  inline ::System::Xml::IDtdAttributeInfo* System_Xml_IDtdAttributeListInfo_LookupAttribute(::StringW prefix, ::StringW localName);

  /// @brief Method System.Xml.IDtdAttributeListInfo.LookupDefaultAttributes, addr 0x2e07224, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>* System_Xml_IDtdAttributeListInfo_LookupDefaultAttributes();

  /// @brief Method System.Xml.IDtdAttributeListInfo.get_HasNonCDataAttributes, addr 0x2e07164, size 0x8, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes();

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& __cordl_internal_get_anyAttribute();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAnyAttribute*> const& __cordl_internal_get_anyAttribute() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*& __cordl_internal_get_attdefs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*> const&
  __cordl_internal_get_attdefs() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_block() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_block();

  constexpr ::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*, ::Array<::System::Xml::Schema::CompiledIdentityConstraint*>*> const& __cordl_internal_get_constraints() const;

  constexpr ::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*, ::Array<::System::Xml::Schema::CompiledIdentityConstraint*>*>& __cordl_internal_get_constraints();

  constexpr ::System::Xml::Schema::ContentValidator*& __cordl_internal_get_contentValidator();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ContentValidator*> const& __cordl_internal_get_contentValidator() const;

  constexpr ::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>*& __cordl_internal_get_defaultAttdefs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>*> const& __cordl_internal_get_defaultAttdefs() const;

  constexpr bool const& __cordl_internal_get_hasNonCDataAttribute() const;

  constexpr bool& __cordl_internal_get_hasNonCDataAttribute();

  constexpr bool const& __cordl_internal_get_hasRequiredAttribute() const;

  constexpr bool& __cordl_internal_get_hasRequiredAttribute();

  constexpr bool const& __cordl_internal_get_isAbstract() const;

  constexpr bool& __cordl_internal_get_isAbstract();

  constexpr bool const& __cordl_internal_get_isIdDeclared() const;

  constexpr bool& __cordl_internal_get_isIdDeclared();

  constexpr bool const& __cordl_internal_get_isNillable() const;

  constexpr bool& __cordl_internal_get_isNillable();

  constexpr bool const& __cordl_internal_get_isNotationDeclared() const;

  constexpr bool& __cordl_internal_get_isNotationDeclared();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>*& __cordl_internal_get_prohibitedAttributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>*> const&
  __cordl_internal_get_prohibitedAttributes() const;

  constexpr ::System::Xml::Schema::XmlSchemaElement*& __cordl_internal_get_schemaElement();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaElement*> const& __cordl_internal_get_schemaElement() const;

  constexpr void __cordl_internal_set_anyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  constexpr void __cordl_internal_set_attdefs(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* value);

  constexpr void __cordl_internal_set_block(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_constraints(::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*, ::Array<::System::Xml::Schema::CompiledIdentityConstraint*>*> value);

  constexpr void __cordl_internal_set_contentValidator(::System::Xml::Schema::ContentValidator* value);

  constexpr void __cordl_internal_set_defaultAttdefs(::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>* value);

  constexpr void __cordl_internal_set_hasNonCDataAttribute(bool value);

  constexpr void __cordl_internal_set_hasRequiredAttribute(bool value);

  constexpr void __cordl_internal_set_isAbstract(bool value);

  constexpr void __cordl_internal_set_isIdDeclared(bool value);

  constexpr void __cordl_internal_set_isNillable(bool value);

  constexpr void __cordl_internal_set_isNotationDeclared(bool value);

  constexpr void __cordl_internal_set_prohibitedAttributes(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* value);

  constexpr void __cordl_internal_set_schemaElement(::System::Xml::Schema::XmlSchemaElement* value);

  /// @brief Method .ctor, addr 0x2e06e0c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2e06ec8, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaDatatype* dtype);

  /// @brief Method .ctor, addr 0x2e06fcc, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix);

  static inline ::System::Xml::Schema::SchemaElementDecl* getStaticF_Empty();

  /// @brief Method get_AnyAttribute, addr 0x2e0732c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute();

  /// @brief Method get_AttDefs, addr 0x2e07530, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* get_AttDefs();

  /// @brief Method get_Block, addr 0x2e072e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDerivationMethod get_Block();

  /// @brief Method get_Constraints, addr 0x2e0733c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*, ::Array<::System::Xml::Schema::CompiledIdentityConstraint*>*> get_Constraints();

  /// @brief Method get_ContentValidator, addr 0x2e0731c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::ContentValidator* get_ContentValidator();

  /// @brief Method get_DefaultAttDefs, addr 0x2e07528, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::System::Xml::IDtdDefaultAttributeInfo*>* get_DefaultAttDefs();

  /// @brief Method get_HasDefaultAttribute, addr 0x2e07304, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasDefaultAttribute();

  /// @brief Method get_HasNonCDataAttribute, addr 0x2e07240, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasNonCDataAttribute();

  /// @brief Method get_HasRequiredAttribute, addr 0x2e07314, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasRequiredAttribute();

  /// @brief Method get_IsAbstract, addr 0x2e072b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsAbstract();

  /// @brief Method get_IsIdDeclared, addr 0x2e0722c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsIdDeclared();

  /// @brief Method get_IsNillable, addr 0x2e072cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNillable();

  /// @brief Method get_IsNotationDeclared, addr 0x2e072f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsNotationDeclared();

  /// @brief Method get_ProhibitedAttributes, addr 0x2e07538, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* get_ProhibitedAttributes();

  /// @brief Method get_SchemaElement, addr 0x2e0734c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaElement* get_SchemaElement();

  /// @brief Convert to "::System::Xml::IDtdAttributeListInfo"
  constexpr ::System::Xml::IDtdAttributeListInfo* i___System__Xml__IDtdAttributeListInfo() noexcept;

  static inline void setStaticF_Empty(::System::Xml::Schema::SchemaElementDecl* value);

  /// @brief Method set_AnyAttribute, addr 0x2e07334, size 0x8, virtual false, abstract: false, final false
  inline void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  /// @brief Method set_Block, addr 0x2e072e8, size 0x8, virtual false, abstract: false, final false
  inline void set_Block(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  /// @brief Method set_Constraints, addr 0x2e07344, size 0x8, virtual false, abstract: false, final false
  inline void set_Constraints(::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*, ::Array<::System::Xml::Schema::CompiledIdentityConstraint*>*> value);

  /// @brief Method set_ContentValidator, addr 0x2e07324, size 0x8, virtual false, abstract: false, final false
  inline void set_ContentValidator(::System::Xml::Schema::ContentValidator* value);

  /// @brief Method set_HasNonCDataAttribute, addr 0x2e07248, size 0xc, virtual false, abstract: false, final false
  inline void set_HasNonCDataAttribute(bool value);

  /// @brief Method set_IsAbstract, addr 0x2e072c0, size 0xc, virtual false, abstract: false, final false
  inline void set_IsAbstract(bool value);

  /// @brief Method set_IsIdDeclared, addr 0x2e07234, size 0xc, virtual false, abstract: false, final false
  inline void set_IsIdDeclared(bool value);

  /// @brief Method set_IsNillable, addr 0x2e072d4, size 0xc, virtual false, abstract: false, final false
  inline void set_IsNillable(bool value);

  /// @brief Method set_IsNotationDeclared, addr 0x2e072f8, size 0xc, virtual false, abstract: false, final false
  inline void set_IsNotationDeclared(bool value);

  /// @brief Method set_SchemaElement, addr 0x2e07354, size 0x8, virtual false, abstract: false, final false
  inline void set_SchemaElement(::System::Xml::Schema::XmlSchemaElement* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaElementDecl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SchemaElementDecl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaElementDecl(SchemaElementDecl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaElementDecl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaElementDecl(SchemaElementDecl const&) = delete;

  /// @brief Field attdefs, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* ___attdefs;

  /// @brief Field defaultAttdefs, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>* ___defaultAttdefs;

  /// @brief Field isIdDeclared, offset: 0x70, size: 0x1, def value: None
  bool ___isIdDeclared;

  /// @brief Field hasNonCDataAttribute, offset: 0x71, size: 0x1, def value: None
  bool ___hasNonCDataAttribute;

  /// @brief Field isAbstract, offset: 0x72, size: 0x1, def value: None
  bool ___isAbstract;

  /// @brief Field isNillable, offset: 0x73, size: 0x1, def value: None
  bool ___isNillable;

  /// @brief Field hasRequiredAttribute, offset: 0x74, size: 0x1, def value: None
  bool ___hasRequiredAttribute;

  /// @brief Field isNotationDeclared, offset: 0x75, size: 0x1, def value: None
  bool ___isNotationDeclared;

  /// @brief Field prohibitedAttributes, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* ___prohibitedAttributes;

  /// @brief Field contentValidator, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::Schema::ContentValidator* ___contentValidator;

  /// @brief Field anyAttribute, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnyAttribute* ___anyAttribute;

  /// @brief Field block, offset: 0x90, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___block;

  /// @brief Field constraints, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*, ::Array<::System::Xml::Schema::CompiledIdentityConstraint*>*> ___constraints;

  /// @brief Field schemaElement, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaElement* ___schemaElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaElementDecl, 0xa8>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___attdefs) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___defaultAttdefs) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___isIdDeclared) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___hasNonCDataAttribute) == 0x71, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___isAbstract) == 0x72, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___isNillable) == 0x73, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___hasRequiredAttribute) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___isNotationDeclared) == 0x75, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___prohibitedAttributes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___contentValidator) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___anyAttribute) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___block) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___constraints) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___schemaElement) == 0xa0, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SchemaElementDecl);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaElementDecl*, "System.Xml.Schema", "SchemaElementDecl");
