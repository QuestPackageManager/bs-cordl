#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SchemaElementDecl)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Xml {
class IDtdAttributeInfo;
}
namespace System::Xml::Schema {
class ContentValidator;
}
namespace System::Xml {
class IDtdDefaultAttributeInfo;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml {
class IDtdAttributeListInfo;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaElementDecl;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SchemaElementDecl);
// Type: System.Xml.Schema::SchemaElementDecl
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11631))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11632))
// CS Name: ::System.Xml.Schema::SchemaElementDecl*
class CORDL_TYPE SchemaElementDecl : public ::System::Xml::Schema::SchemaDeclBase {
public:
  // Declarations
  /// @brief Field attdefs, offset 0x60, size 0x8
  __declspec(property(get = __get_attdefs, put = __set_attdefs))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* attdefs;

  /// @brief Field defaultAttdefs, offset 0x68, size 0x8
  __declspec(property(get = __get_defaultAttdefs, put = __set_defaultAttdefs))::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>* defaultAttdefs;

  /// @brief Field isIdDeclared, offset 0x70, size 0x1
  __declspec(property(get = __get_isIdDeclared, put = __set_isIdDeclared)) bool isIdDeclared;

  /// @brief Field hasNonCDataAttribute, offset 0x71, size 0x1
  __declspec(property(get = __get_hasNonCDataAttribute, put = __set_hasNonCDataAttribute)) bool hasNonCDataAttribute;

  /// @brief Field hasRequiredAttribute, offset 0x72, size 0x1
  __declspec(property(get = __get_hasRequiredAttribute, put = __set_hasRequiredAttribute)) bool hasRequiredAttribute;

  /// @brief Field isNotationDeclared, offset 0x73, size 0x1
  __declspec(property(get = __get_isNotationDeclared, put = __set_isNotationDeclared)) bool isNotationDeclared;

  /// @brief Field prohibitedAttributes, offset 0x78, size 0x8
  __declspec(property(get = __get_prohibitedAttributes,
                      put = __set_prohibitedAttributes))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* prohibitedAttributes;

  /// @brief Field contentValidator, offset 0x80, size 0x8
  __declspec(property(get = __get_contentValidator, put = __set_contentValidator))::System::Xml::Schema::ContentValidator* contentValidator;

  /// @brief Field anyAttribute, offset 0x88, size 0x8
  __declspec(property(get = __get_anyAttribute, put = __set_anyAttribute))::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::Xml::Schema::SchemaElementDecl* Empty;

  __declspec(property(get = System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes)) bool System_Xml_IDtdAttributeListInfo_HasNonCDataAttributes;

  __declspec(property(get = get_IsIdDeclared, put = set_IsIdDeclared)) bool IsIdDeclared;

  __declspec(property(get = get_HasNonCDataAttribute, put = set_HasNonCDataAttribute)) bool HasNonCDataAttribute;

  __declspec(property(get = get_IsNotationDeclared, put = set_IsNotationDeclared)) bool IsNotationDeclared;

  __declspec(property(get = get_ContentValidator, put = set_ContentValidator))::System::Xml::Schema::ContentValidator* ContentValidator;

  __declspec(property(put = set_AnyAttribute))::System::Xml::Schema::XmlSchemaAnyAttribute* AnyAttribute;

  __declspec(property(get = get_DefaultAttDefs))::System::Collections::Generic::IList_1<::System::Xml::IDtdDefaultAttributeInfo*>* DefaultAttDefs;

  __declspec(property(get = get_AttDefs))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* AttDefs;

  /// @brief Convert operator to "::System::Xml::IDtdAttributeListInfo"
  constexpr operator ::System::Xml::IDtdAttributeListInfo*() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*& __get_attdefs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*> const& __get_attdefs() const;

  constexpr void __set_attdefs(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* value);

  constexpr ::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>*& __get_defaultAttdefs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>*> const& __get_defaultAttdefs() const;

  constexpr void __set_defaultAttdefs(::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>* value);

  constexpr bool& __get_isIdDeclared();

  constexpr bool const& __get_isIdDeclared() const;

  constexpr void __set_isIdDeclared(bool value);

  constexpr bool& __get_hasNonCDataAttribute();

  constexpr bool const& __get_hasNonCDataAttribute() const;

  constexpr void __set_hasNonCDataAttribute(bool value);

  constexpr bool& __get_hasRequiredAttribute();

  constexpr bool const& __get_hasRequiredAttribute() const;

  constexpr void __set_hasRequiredAttribute(bool value);

  constexpr bool& __get_isNotationDeclared();

  constexpr bool const& __get_isNotationDeclared() const;

  constexpr void __set_isNotationDeclared(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>*& __get_prohibitedAttributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>*> const&
  __get_prohibitedAttributes() const;

  constexpr void __set_prohibitedAttributes(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* value);

  constexpr ::System::Xml::Schema::ContentValidator*& __get_contentValidator();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ContentValidator*> const& __get_contentValidator() const;

  constexpr void __set_contentValidator(::System::Xml::Schema::ContentValidator* value);

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& __get_anyAttribute();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAnyAttribute*> const& __get_anyAttribute() const;

  constexpr void __set_anyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  static inline void setStaticF_Empty(::System::Xml::Schema::SchemaElementDecl* value);

  static inline ::System::Xml::Schema::SchemaElementDecl* getStaticF_Empty();

  static inline ::System::Xml::Schema::SchemaElementDecl* New_ctor();

  /// @brief Method .ctor addr 0x2746b00 size 0xbc virtual false final false
  inline void _ctor();

  static inline ::System::Xml::Schema::SchemaElementDecl* New_ctor(::System::Xml::Schema::XmlSchemaDatatype* dtype);

  /// @brief Method .ctor addr 0x2746bbc size 0x104 virtual false final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaDatatype* dtype);

  static inline ::System::Xml::Schema::SchemaElementDecl* New_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix);

  /// @brief Method .ctor addr 0x2746cc0 size 0xd4 virtual false final false
  inline void _ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix);

  /// @brief Method CreateAnyTypeElementDecl addr 0x2746d94 size 0xc4 virtual false final false
  static inline ::System::Xml::Schema::SchemaElementDecl* CreateAnyTypeElementDecl();

  /// @brief Method System.Xml.IDtdAttributeListInfo.get_HasNonCDataAttributes addr 0x2746e58 size 0x8 virtual true final true
  inline bool System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes();

  /// @brief Method System.Xml.IDtdAttributeListInfo.LookupAttribute addr 0x2746e60 size 0xb8 virtual true final true
  inline ::System::Xml::IDtdAttributeInfo* System_Xml_IDtdAttributeListInfo_LookupAttribute(::StringW prefix, ::StringW localName);

  /// @brief Method System.Xml.IDtdAttributeListInfo.LookupDefaultAttributes addr 0x2746f18 size 0x8 virtual true final true
  inline ::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>* System_Xml_IDtdAttributeListInfo_LookupDefaultAttributes();

  /// @brief Method get_IsIdDeclared addr 0x2746f20 size 0x8 virtual false final false
  inline bool get_IsIdDeclared();

  /// @brief Method set_IsIdDeclared addr 0x2746f28 size 0xc virtual false final false
  inline void set_IsIdDeclared(bool value);

  /// @brief Method get_HasNonCDataAttribute addr 0x2746f34 size 0x8 virtual false final false
  inline bool get_HasNonCDataAttribute();

  /// @brief Method set_HasNonCDataAttribute addr 0x2746f3c size 0xc virtual false final false
  inline void set_HasNonCDataAttribute(bool value);

  /// @brief Method get_IsNotationDeclared addr 0x2746f48 size 0x8 virtual false final false
  inline bool get_IsNotationDeclared();

  /// @brief Method set_IsNotationDeclared addr 0x2746f50 size 0xc virtual false final false
  inline void set_IsNotationDeclared(bool value);

  /// @brief Method get_ContentValidator addr 0x2746f5c size 0x8 virtual false final false
  inline ::System::Xml::Schema::ContentValidator* get_ContentValidator();

  /// @brief Method set_ContentValidator addr 0x2746f64 size 0x8 virtual false final false
  inline void set_ContentValidator(::System::Xml::Schema::ContentValidator* value);

  /// @brief Method set_AnyAttribute addr 0x2746f6c size 0x8 virtual false final false
  inline void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  /// @brief Method AddAttDef addr 0x2746f74 size 0x154 virtual false final false
  inline void AddAttDef(::System::Xml::Schema::SchemaAttDef* attdef);

  /// @brief Method GetAttDef addr 0x27470c8 size 0x78 virtual false final false
  inline ::System::Xml::Schema::SchemaAttDef* GetAttDef(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method get_DefaultAttDefs addr 0x2747140 size 0x8 virtual false final false
  inline ::System::Collections::Generic::IList_1<::System::Xml::IDtdDefaultAttributeInfo*>* get_DefaultAttDefs();

  /// @brief Method get_AttDefs addr 0x2747148 size 0x8 virtual false final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* get_AttDefs();

  // Ctor Parameters [CppParam { name: "", ty: "SchemaElementDecl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaElementDecl(SchemaElementDecl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaElementDecl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaElementDecl(SchemaElementDecl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaElementDecl();

public:
  /// @brief Field attdefs, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* ___attdefs;

  /// @brief Field defaultAttdefs, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>* ___defaultAttdefs;

  /// @brief Field isIdDeclared, offset: 0x70, size: 0x1, def value: None
  bool ___isIdDeclared;

  /// @brief Field hasNonCDataAttribute, offset: 0x71, size: 0x1, def value: None
  bool ___hasNonCDataAttribute;

  /// @brief Field hasRequiredAttribute, offset: 0x72, size: 0x1, def value: None
  bool ___hasRequiredAttribute;

  /// @brief Field isNotationDeclared, offset: 0x73, size: 0x1, def value: None
  bool ___isNotationDeclared;

  /// @brief Field prohibitedAttributes, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* ___prohibitedAttributes;

  /// @brief Field contentValidator, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::Schema::ContentValidator* ___contentValidator;

  /// @brief Field anyAttribute, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnyAttribute* ___anyAttribute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaElementDecl, 0x90>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___attdefs) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___defaultAttdefs) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___isIdDeclared) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___hasNonCDataAttribute) == 0x71, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___hasRequiredAttribute) == 0x72, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___isNotationDeclared) == 0x73, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___prohibitedAttributes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___contentValidator) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaElementDecl, ___anyAttribute) == 0x88, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SchemaElementDecl);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaElementDecl*, "System.Xml.Schema", "SchemaElementDecl");
