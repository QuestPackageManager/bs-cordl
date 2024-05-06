#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SchemaType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SchemaInfo)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Xml::Schema {
struct AttributeMatchState;
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
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
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
// CS Name: ::System.Xml.Schema::SchemaInfo*
class CORDL_TYPE SchemaInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttributeDecls))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* AttributeDecls;

  __declspec(property(get = get_DocTypeName, put = set_DocTypeName))::System::Xml::XmlQualifiedName* DocTypeName;

  __declspec(property(get = get_ElementDecls))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* ElementDecls;

  __declspec(property(get = get_ElementDeclsByType))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* ElementDeclsByType;

  __declspec(property(get = get_ErrorCount, put = set_ErrorCount)) int32_t ErrorCount;

  __declspec(property(get = get_GeneralEntities))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* GeneralEntities;

  __declspec(property(put = set_InternalDtdSubset))::StringW InternalDtdSubset;

  __declspec(property(get = get_Notations))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* Notations;

  __declspec(property(get = get_ParameterEntities))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* ParameterEntities;

  __declspec(property(get = get_SchemaType, put = set_SchemaType))::System::Xml::Schema::SchemaType SchemaType;

  __declspec(property(get = System_Xml_IDtdInfo_get_HasDefaultAttributes)) bool System_Xml_IDtdInfo_HasDefaultAttributes;

  __declspec(property(get = System_Xml_IDtdInfo_get_HasNonCDataAttributes)) bool System_Xml_IDtdInfo_HasNonCDataAttributes;

  __declspec(property(get = System_Xml_IDtdInfo_get_InternalDtdSubset))::StringW System_Xml_IDtdInfo_InternalDtdSubset;

  __declspec(property(get = System_Xml_IDtdInfo_get_Name))::System::Xml::XmlQualifiedName* System_Xml_IDtdInfo_Name;

  __declspec(property(get = get_TargetNamespaces))::System::Collections::Generic::Dictionary_2<::StringW, bool>* TargetNamespaces;

  __declspec(
      property(get = get_UndeclaredElementDecls))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* UndeclaredElementDecls;

  /// @brief Field attributeDecls, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeDecls,
                      put = __cordl_internal_set_attributeDecls))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* attributeDecls;

  /// @brief Field docTypeName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_docTypeName, put = __cordl_internal_set_docTypeName))::System::Xml::XmlQualifiedName* docTypeName;

  /// @brief Field elementDecls, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_elementDecls,
                      put = __cordl_internal_set_elementDecls))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* elementDecls;

  /// @brief Field elementDeclsByType, offset 0x60, size 0x8
  __declspec(property(
      get = __cordl_internal_get_elementDeclsByType,
      put = __cordl_internal_set_elementDeclsByType))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* elementDeclsByType;

  /// @brief Field errorCount, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_errorCount, put = __cordl_internal_set_errorCount)) int32_t errorCount;

  /// @brief Field generalEntities, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_generalEntities,
                      put = __cordl_internal_set_generalEntities))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* generalEntities;

  /// @brief Field hasDefaultAttributes, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_hasDefaultAttributes, put = __cordl_internal_set_hasDefaultAttributes)) bool hasDefaultAttributes;

  /// @brief Field hasNonCDataAttributes, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_hasNonCDataAttributes, put = __cordl_internal_set_hasNonCDataAttributes)) bool hasNonCDataAttributes;

  /// @brief Field internalDtdSubset, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_internalDtdSubset, put = __cordl_internal_set_internalDtdSubset))::StringW internalDtdSubset;

  /// @brief Field notations, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_notations,
                      put = __cordl_internal_set_notations))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* notations;

  /// @brief Field parameterEntities, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get_parameterEntities,
               put = __cordl_internal_set_parameterEntities))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* parameterEntities;

  /// @brief Field schemaType, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_schemaType, put = __cordl_internal_set_schemaType))::System::Xml::Schema::SchemaType schemaType;

  /// @brief Field targetNamespaces, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_targetNamespaces, put = __cordl_internal_set_targetNamespaces))::System::Collections::Generic::Dictionary_2<::StringW, bool>* targetNamespaces;

  /// @brief Field undeclaredElementDecls, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_undeclaredElementDecls,
                      put = __cordl_internal_set_undeclaredElementDecls))::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*,
                                                                                                                      ::System::Xml::Schema::SchemaElementDecl*>* undeclaredElementDecls;

  /// @brief Convert operator to "::System::Xml::IDtdInfo"
  constexpr operator ::System::Xml::IDtdInfo*() noexcept;

  /// @brief Method Add, addr 0x2de5f18, size 0x8e0, virtual false, abstract: false, final false
  inline void Add(::System::Xml::Schema::SchemaInfo* sinfo, ::System::Xml::Schema::ValidationEventHandler* eventhandler);

  /// @brief Method Contains, addr 0x2de5a58, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(::StringW ns);

  /// @brief Method Finish, addr 0x2de67f8, size 0x1b4, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method GetAttributeXdr, addr 0x2de5ab0, size 0x150, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaAttDef* GetAttributeXdr(::System::Xml::Schema::SchemaElementDecl* ed, ::System::Xml::XmlQualifiedName* qname);

  /// @brief Method GetAttributeXsd, addr 0x2de5c00, size 0x218, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaAttDef* GetAttributeXsd(::System::Xml::Schema::SchemaElementDecl* ed, ::System::Xml::XmlQualifiedName* qname,
                                                              ::System::Xml::Schema::XmlSchemaObject* partialValidationType, ByRef<::System::Xml::Schema::AttributeMatchState> attributeMatchState);

  /// @brief Method GetAttributeXsd, addr 0x2de5e18, size 0x100, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaAttDef* GetAttributeXsd(::System::Xml::Schema::SchemaElementDecl* ed, ::System::Xml::XmlQualifiedName* qname, ByRef<bool> skip);

  /// @brief Method GetElement, addr 0x2de59e8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaElement* GetElement(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method GetElementDecl, addr 0x2de58f8, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaElementDecl* GetElementDecl(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method GetTypeDecl, addr 0x2de5970, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaElementDecl* GetTypeDecl(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method HasSchema, addr 0x2de5a00, size 0x58, virtual false, abstract: false, final false
  inline bool HasSchema(::StringW ns);

  static inline ::System::Xml::Schema::SchemaInfo* New_ctor();

  /// @brief Method System.Xml.IDtdInfo.LookupAttributeList, addr 0x2de69bc, size 0xcc, virtual true, abstract: false, final true
  inline ::System::Xml::IDtdAttributeListInfo* System_Xml_IDtdInfo_LookupAttributeList(::StringW prefix, ::StringW localName);

  /// @brief Method System.Xml.IDtdInfo.LookupEntity, addr 0x2de6a88, size 0xb8, virtual true, abstract: false, final true
  inline ::System::Xml::IDtdEntityInfo* System_Xml_IDtdInfo_LookupEntity(::StringW name);

  /// @brief Method System.Xml.IDtdInfo.get_HasDefaultAttributes, addr 0x2de69ac, size 0x8, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdInfo_get_HasDefaultAttributes();

  /// @brief Method System.Xml.IDtdInfo.get_HasNonCDataAttributes, addr 0x2de69b4, size 0x8, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdInfo_get_HasNonCDataAttributes();

  /// @brief Method System.Xml.IDtdInfo.get_InternalDtdSubset, addr 0x2de6b48, size 0x8, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IDtdInfo_get_InternalDtdSubset();

  /// @brief Method System.Xml.IDtdInfo.get_Name, addr 0x2de6b40, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::XmlQualifiedName* System_Xml_IDtdInfo_get_Name();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*& __cordl_internal_get_attributeDecls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*> const&
  __cordl_internal_get_attributeDecls() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_docTypeName();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_docTypeName() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*& __cordl_internal_get_elementDecls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*> const&
  __cordl_internal_get_elementDecls() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*& __cordl_internal_get_elementDeclsByType();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*> const&
  __cordl_internal_get_elementDeclsByType() const;

  constexpr int32_t const& __cordl_internal_get_errorCount() const;

  constexpr int32_t& __cordl_internal_get_errorCount();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*& __cordl_internal_get_generalEntities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*> const&
  __cordl_internal_get_generalEntities() const;

  constexpr bool const& __cordl_internal_get_hasDefaultAttributes() const;

  constexpr bool& __cordl_internal_get_hasDefaultAttributes();

  constexpr bool const& __cordl_internal_get_hasNonCDataAttributes() const;

  constexpr bool& __cordl_internal_get_hasNonCDataAttributes();

  constexpr ::StringW const& __cordl_internal_get_internalDtdSubset() const;

  constexpr ::StringW& __cordl_internal_get_internalDtdSubset();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>*& __cordl_internal_get_notations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>*> const& __cordl_internal_get_notations() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*& __cordl_internal_get_parameterEntities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*> const&
  __cordl_internal_get_parameterEntities() const;

  constexpr ::System::Xml::Schema::SchemaType const& __cordl_internal_get_schemaType() const;

  constexpr ::System::Xml::Schema::SchemaType& __cordl_internal_get_schemaType();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, bool>*& __cordl_internal_get_targetNamespaces();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, bool>*> const& __cordl_internal_get_targetNamespaces() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*& __cordl_internal_get_undeclaredElementDecls();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*> const&
  __cordl_internal_get_undeclaredElementDecls() const;

  constexpr void __cordl_internal_set_attributeDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* value);

  constexpr void __cordl_internal_set_docTypeName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_elementDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* value);

  constexpr void __cordl_internal_set_elementDeclsByType(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* value);

  constexpr void __cordl_internal_set_errorCount(int32_t value);

  constexpr void __cordl_internal_set_generalEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* value);

  constexpr void __cordl_internal_set_hasDefaultAttributes(bool value);

  constexpr void __cordl_internal_set_hasNonCDataAttributes(bool value);

  constexpr void __cordl_internal_set_internalDtdSubset(::StringW value);

  constexpr void __cordl_internal_set_notations(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* value);

  constexpr void __cordl_internal_set_parameterEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* value);

  constexpr void __cordl_internal_set_schemaType(::System::Xml::Schema::SchemaType value);

  constexpr void __cordl_internal_set_targetNamespaces(::System::Collections::Generic::Dictionary_2<::StringW, bool>* value);

  constexpr void __cordl_internal_set_undeclaredElementDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* value);

  /// @brief Method .ctor, addr 0x2de556c, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AttributeDecls, addr 0x2de5860, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* get_AttributeDecls();

  /// @brief Method get_DocTypeName, addr 0x2de5718, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_DocTypeName();

  /// @brief Method get_ElementDecls, addr 0x2de5730, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* get_ElementDecls();

  /// @brief Method get_ElementDeclsByType, addr 0x2de5858, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* get_ElementDeclsByType();

  /// @brief Method get_ErrorCount, addr 0x2de58e8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ErrorCount();

  /// @brief Method get_GeneralEntities, addr 0x2de5740, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* get_GeneralEntities();

  /// @brief Method get_Notations, addr 0x2de5868, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* get_Notations();

  /// @brief Method get_ParameterEntities, addr 0x2de57c0, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* get_ParameterEntities();

  /// @brief Method get_SchemaType, addr 0x2de5840, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaType get_SchemaType();

  /// @brief Method get_TargetNamespaces, addr 0x2de5850, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, bool>* get_TargetNamespaces();

  /// @brief Method get_UndeclaredElementDecls, addr 0x2de5738, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* get_UndeclaredElementDecls();

  /// @brief Convert to "::System::Xml::IDtdInfo"
  constexpr ::System::Xml::IDtdInfo* i___System__Xml__IDtdInfo() noexcept;

  /// @brief Method set_DocTypeName, addr 0x2de5720, size 0x8, virtual false, abstract: false, final false
  inline void set_DocTypeName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method set_ErrorCount, addr 0x2de58f0, size 0x8, virtual false, abstract: false, final false
  inline void set_ErrorCount(int32_t value);

  /// @brief Method set_InternalDtdSubset, addr 0x2de5728, size 0x8, virtual false, abstract: false, final false
  inline void set_InternalDtdSubset(::StringW value);

  /// @brief Method set_SchemaType, addr 0x2de5848, size 0x8, virtual false, abstract: false, final false
  inline void set_SchemaType(::System::Xml::Schema::SchemaType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SchemaInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaInfo(SchemaInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaInfo(SchemaInfo const&) = delete;

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

  /// @brief Field errorCount, offset: 0x58, size: 0x4, def value: None
  int32_t ___errorCount;

  /// @brief Field schemaType, offset: 0x5c, size: 0x4, def value: None
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

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___errorCount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___schemaType) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___elementDeclsByType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SchemaInfo, ___notations) == 0x68, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SchemaInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaInfo*, "System.Xml.Schema", "SchemaInfo");
