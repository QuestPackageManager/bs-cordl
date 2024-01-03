#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SchemaType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SchemaInfo)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml::Schema {
class SchemaElementDecl;
}
namespace System::Xml::Schema {
class SchemaEntity;
}
namespace System::Xml::Schema {
class SchemaNotation;
}
namespace System::Xml::Schema {
struct SchemaType;
}
namespace System::Xml {
class IDtdAttributeListInfo;
}
namespace System::Xml {
class IDtdEntityInfo;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SchemaInfo);
// Type: System.Xml.Schema::SchemaInfo
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11708))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11706))
// CS Name: ::System.Xml.Schema::SchemaInfo*
class CORDL_TYPE SchemaInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field elementDecls, offset 0x10, size 0x8
  __declspec(property(get = __get_elementDecls,
                      put = __set_elementDecls))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* elementDecls;

  /// @brief Field undeclaredElementDecls, offset 0x18, size 0x8
  __declspec(
      property(get = __get_undeclaredElementDecls,
               put = __set_undeclaredElementDecls))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* undeclaredElementDecls;

  /// @brief Field generalEntities, offset 0x20, size 0x8
  __declspec(property(get = __get_generalEntities,
                      put = __set_generalEntities))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* generalEntities;

  /// @brief Field parameterEntities, offset 0x28, size 0x8
  __declspec(property(get = __get_parameterEntities,
                      put = __set_parameterEntities))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* parameterEntities;

  /// @brief Field docTypeName, offset 0x30, size 0x8
  __declspec(property(get = __get_docTypeName, put = __set_docTypeName))::System::Xml::XmlQualifiedName* docTypeName;

  /// @brief Field internalDtdSubset, offset 0x38, size 0x8
  __declspec(property(get = __get_internalDtdSubset, put = __set_internalDtdSubset))::StringW internalDtdSubset;

  /// @brief Field hasNonCDataAttributes, offset 0x40, size 0x1
  __declspec(property(get = __get_hasNonCDataAttributes, put = __set_hasNonCDataAttributes)) bool hasNonCDataAttributes;

  /// @brief Field hasDefaultAttributes, offset 0x41, size 0x1
  __declspec(property(get = __get_hasDefaultAttributes, put = __set_hasDefaultAttributes)) bool hasDefaultAttributes;

  /// @brief Field targetNamespaces, offset 0x48, size 0x8
  __declspec(property(get = __get_targetNamespaces, put = __set_targetNamespaces))::System::Collections::Generic::Dictionary_2<::StringW, bool>* targetNamespaces;

  /// @brief Field attributeDecls, offset 0x50, size 0x8
  __declspec(property(get = __get_attributeDecls,
                      put = __set_attributeDecls))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* attributeDecls;

  /// @brief Field schemaType, offset 0x58, size 0x4
  __declspec(property(get = __get_schemaType, put = __set_schemaType))::System::Xml::Schema::SchemaType schemaType;

  /// @brief Field elementDeclsByType, offset 0x60, size 0x8
  __declspec(property(get = __get_elementDeclsByType,
                      put = __set_elementDeclsByType))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* elementDeclsByType;

  /// @brief Field notations, offset 0x68, size 0x8
  __declspec(property(get = __get_notations, put = __set_notations))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* notations;

  __declspec(property(put = set_DocTypeName))::System::Xml::XmlQualifiedName* DocTypeName;

  __declspec(property(put = set_InternalDtdSubset))::StringW InternalDtdSubset;

  __declspec(property(get = get_ElementDecls))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* ElementDecls;

  __declspec(
      property(get = get_UndeclaredElementDecls))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* UndeclaredElementDecls;

  __declspec(property(get = get_GeneralEntities))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* GeneralEntities;

  __declspec(property(get = get_ParameterEntities))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* ParameterEntities;

  __declspec(property(get = get_SchemaType, put = set_SchemaType))::System::Xml::Schema::SchemaType SchemaType;

  __declspec(property(get = get_Notations))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* Notations;

  __declspec(property(get = System_Xml_IDtdInfo_get_HasDefaultAttributes)) bool System_Xml_IDtdInfo_HasDefaultAttributes;

  __declspec(property(get = System_Xml_IDtdInfo_get_HasNonCDataAttributes)) bool System_Xml_IDtdInfo_HasNonCDataAttributes;

  __declspec(property(get = System_Xml_IDtdInfo_get_Name))::System::Xml::XmlQualifiedName* System_Xml_IDtdInfo_Name;

  __declspec(property(get = System_Xml_IDtdInfo_get_InternalDtdSubset))::StringW System_Xml_IDtdInfo_InternalDtdSubset;

  /// @brief Convert operator to "::System::Xml::IDtdInfo"
  constexpr operator ::System::Xml::IDtdInfo*() noexcept;

  /// @brief Convert to "::System::Xml::IDtdInfo"
  constexpr ::System::Xml::IDtdInfo* i___System__Xml__IDtdInfo() noexcept;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*& __get_elementDecls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*> const&
  __get_elementDecls() const;

  constexpr void __set_elementDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*& __get_undeclaredElementDecls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*> const&
  __get_undeclaredElementDecls() const;

  constexpr void __set_undeclaredElementDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*& __get_generalEntities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*> const&
  __get_generalEntities() const;

  constexpr void __set_generalEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*& __get_parameterEntities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*> const&
  __get_parameterEntities() const;

  constexpr void __set_parameterEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* value);

  constexpr ::System::Xml::XmlQualifiedName*& __get_docTypeName();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __get_docTypeName() const;

  constexpr void __set_docTypeName(::System::Xml::XmlQualifiedName* value);

  constexpr ::StringW& __get_internalDtdSubset();

  constexpr ::StringW const& __get_internalDtdSubset() const;

  constexpr void __set_internalDtdSubset(::StringW value);

  constexpr bool& __get_hasNonCDataAttributes();

  constexpr bool const& __get_hasNonCDataAttributes() const;

  constexpr void __set_hasNonCDataAttributes(bool value);

  constexpr bool& __get_hasDefaultAttributes();

  constexpr bool const& __get_hasDefaultAttributes() const;

  constexpr void __set_hasDefaultAttributes(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, bool>*& __get_targetNamespaces();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, bool>*> const& __get_targetNamespaces() const;

  constexpr void __set_targetNamespaces(::System::Collections::Generic::Dictionary_2<::StringW, bool>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*& __get_attributeDecls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*> const&
  __get_attributeDecls() const;

  constexpr void __set_attributeDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* value);

  constexpr ::System::Xml::Schema::SchemaType& __get_schemaType();

  constexpr ::System::Xml::Schema::SchemaType const& __get_schemaType() const;

  constexpr void __set_schemaType(::System::Xml::Schema::SchemaType value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*& __get_elementDeclsByType();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*> const&
  __get_elementDeclsByType() const;

  constexpr void __set_elementDeclsByType(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>*& __get_notations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>*> const& __get_notations() const;

  constexpr void __set_notations(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* value);

  static inline ::System::Xml::Schema::SchemaInfo* New_ctor();

  /// @brief Method .ctor, addr 0x28c54ec, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_DocTypeName, addr 0x28c5698, size 0x8, virtual false, abstract: false, final false
  inline void set_DocTypeName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method set_InternalDtdSubset, addr 0x28c56a0, size 0x8, virtual false, abstract: false, final false
  inline void set_InternalDtdSubset(::StringW value);

  /// @brief Method get_ElementDecls, addr 0x28c56a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* get_ElementDecls();

  /// @brief Method get_UndeclaredElementDecls, addr 0x28c56b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* get_UndeclaredElementDecls();

  /// @brief Method get_GeneralEntities, addr 0x28c56b8, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* get_GeneralEntities();

  /// @brief Method get_ParameterEntities, addr 0x28c5738, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* get_ParameterEntities();

  /// @brief Method get_SchemaType, addr 0x28c57b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaType get_SchemaType();

  /// @brief Method set_SchemaType, addr 0x28c57c0, size 0x8, virtual false, abstract: false, final false
  inline void set_SchemaType(::System::Xml::Schema::SchemaType value);

  /// @brief Method get_Notations, addr 0x28c57c8, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* get_Notations();

  /// @brief Method Finish, addr 0x28c5848, size 0x1b4, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method System.Xml.IDtdInfo.get_HasDefaultAttributes, addr 0x28c59fc, size 0x8, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdInfo_get_HasDefaultAttributes();

  /// @brief Method System.Xml.IDtdInfo.get_HasNonCDataAttributes, addr 0x28c5a04, size 0x8, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdInfo_get_HasNonCDataAttributes();

  /// @brief Method System.Xml.IDtdInfo.LookupAttributeList, addr 0x28c5a0c, size 0xcc, virtual true, abstract: false, final true
  inline ::System::Xml::IDtdAttributeListInfo* System_Xml_IDtdInfo_LookupAttributeList(::StringW prefix, ::StringW localName);

  /// @brief Method System.Xml.IDtdInfo.LookupEntity, addr 0x28c5ad8, size 0xb8, virtual true, abstract: false, final true
  inline ::System::Xml::IDtdEntityInfo* System_Xml_IDtdInfo_LookupEntity(::StringW name);

  /// @brief Method System.Xml.IDtdInfo.get_Name, addr 0x28c5b90, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::XmlQualifiedName* System_Xml_IDtdInfo_get_Name();

  /// @brief Method System.Xml.IDtdInfo.get_InternalDtdSubset, addr 0x28c5b98, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IDtdInfo_get_InternalDtdSubset();

  // Ctor Parameters [CppParam { name: "", ty: "SchemaInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaInfo(SchemaInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaInfo(SchemaInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaInfo();

public:
  /// @brief Field elementDecls, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* ___elementDecls;

  /// @brief Field undeclaredElementDecls, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* ___undeclaredElementDecls;

  /// @brief Field generalEntities, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* ___generalEntities;

  /// @brief Field parameterEntities, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* ___parameterEntities;

  /// @brief Field docTypeName, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___docTypeName;

  /// @brief Field internalDtdSubset, offset: 0x38, size: 0x8, def value: None
  ::StringW ___internalDtdSubset;

  /// @brief Field hasNonCDataAttributes, offset: 0x40, size: 0x1, def value: None
  bool ___hasNonCDataAttributes;

  /// @brief Field hasDefaultAttributes, offset: 0x41, size: 0x1, def value: None
  bool ___hasDefaultAttributes;

  /// @brief Field targetNamespaces, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, bool>* ___targetNamespaces;

  /// @brief Field attributeDecls, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* ___attributeDecls;

  /// @brief Field schemaType, offset: 0x58, size: 0x4, def value: None
  ::System::Xml::Schema::SchemaType ___schemaType;

  /// @brief Field elementDeclsByType, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* ___elementDeclsByType;

  /// @brief Field notations, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* ___notations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaInfo, 0x70>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___elementDecls) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___undeclaredElementDecls) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___generalEntities) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___parameterEntities) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___docTypeName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___internalDtdSubset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___hasNonCDataAttributes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___hasDefaultAttributes) == 0x41, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___targetNamespaces) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___attributeDecls) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___schemaType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___elementDeclsByType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___notations) == 0x68, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SchemaInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaInfo*, "System.Xml.Schema", "SchemaInfo");
