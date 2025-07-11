#pragma once
// IWYU pragma private; include "System/Data/XSDSchema.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__XMLSchema_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XSDSchema)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Data {
struct AcceptRejectRule;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
class DataSet;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
struct Rule;
}
namespace System::Data {
class XSDSchema_NameType;
}
namespace System::Xml::Schema {
class XmlSchemaAnnotated;
}
namespace System::Xml::Schema {
class XmlSchemaAnnotation;
}
namespace System::Xml::Schema {
class XmlSchemaAttributeGroup;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
class XmlSchemaIdentityConstraint;
}
namespace System::Xml::Schema {
class XmlSchemaKeyref;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class XmlAttributeCollection;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System::Xml {
class XmlElement;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class XSDSchema;
}
namespace System::Data {
class XSDSchema_NameType;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::XSDSchema);
MARK_REF_PTR_T(::System::Data::XSDSchema_NameType);
// Dependencies System.IComparable, System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.XSDSchema/NameType
class CORDL_TYPE XSDSchema_NameType : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Method CompareTo, addr 0x41a2238, size 0x70, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  static inline ::System::Data::XSDSchema_NameType* New_ctor(::StringW n, ::System::Type* t);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x41a220c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW n, ::System::Type* t);

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XSDSchema_NameType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XSDSchema_NameType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XSDSchema_NameType(XSDSchema_NameType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XSDSchema_NameType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XSDSchema_NameType(XSDSchema_NameType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11479 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::XSDSchema_NameType, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema_NameType, ___type) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::XSDSchema_NameType, 0x20>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.Data.XMLSchema
namespace System::Data {
// Is value type: false
// CS Name: System.Data.XSDSchema
class CORDL_TYPE XSDSchema : public ::System::Data::XMLSchema {
public:
  // Declarations
  using NameType = ::System::Data::XSDSchema_NameType;

  __declspec(property(get = get_FromInference, put = set_FromInference)) bool FromInference;

  /// @brief Field _annotations, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__annotations, put = __cordl_internal_set__annotations)) ::System::Xml::Schema::XmlSchemaObjectCollection* _annotations;

  /// @brief Field _attributeGroups, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__attributeGroups, put = __cordl_internal_set__attributeGroups)) ::System::Collections::Hashtable* _attributeGroups;

  /// @brief Field _attributes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__attributes, put = __cordl_internal_set__attributes)) ::System::Collections::Hashtable* _attributes;

  /// @brief Field _columnExpressions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__columnExpressions, put = __cordl_internal_set__columnExpressions)) ::System::Collections::ArrayList* _columnExpressions;

  /// @brief Field _complexTypes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__complexTypes, put = __cordl_internal_set__complexTypes)) ::System::Collections::ArrayList* _complexTypes;

  /// @brief Field _constraintNodes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__constraintNodes, put = __cordl_internal_set__constraintNodes)) ::System::Collections::Hashtable* _constraintNodes;

  /// @brief Field _ds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ds, put = __cordl_internal_set__ds)) ::System::Data::DataSet* _ds;

  /// @brief Field _dsElement, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dsElement, put = __cordl_internal_set__dsElement)) ::System::Xml::Schema::XmlSchemaElement* _dsElement;

  /// @brief Field _elements, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__elements, put = __cordl_internal_set__elements)) ::System::Xml::Schema::XmlSchemaObjectCollection* _elements;

  /// @brief Field _elementsTable, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__elementsTable, put = __cordl_internal_set__elementsTable)) ::System::Collections::Hashtable* _elementsTable;

  /// @brief Field _existingSimpleTypeMap, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__existingSimpleTypeMap, put = __cordl_internal_set__existingSimpleTypeMap)) ::System::Collections::Hashtable* _existingSimpleTypeMap;

  /// @brief Field _expressions, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__expressions, put = __cordl_internal_set__expressions)) ::System::Collections::Hashtable* _expressions;

  /// @brief Field _fromInference, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__fromInference, put = __cordl_internal_set__fromInference)) bool _fromInference;

  /// @brief Field _refTables, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__refTables, put = __cordl_internal_set__refTables)) ::System::Collections::ArrayList* _refTables;

  /// @brief Field _schemaName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__schemaName, put = __cordl_internal_set__schemaName)) ::StringW _schemaName;

  /// @brief Field _schemaSet, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__schemaSet, put = __cordl_internal_set__schemaSet)) ::System::Xml::Schema::XmlSchemaSet* _schemaSet;

  /// @brief Field _schemaTypes, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__schemaTypes, put = __cordl_internal_set__schemaTypes)) ::System::Collections::Hashtable* _schemaTypes;

  /// @brief Field _tableDictionary, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__tableDictionary,
                      put = __cordl_internal_set__tableDictionary)) ::System::Collections::Generic::Dictionary_2<::System::Data::DataTable*,
                                                                                                                 ::System::Collections::Generic::List_1<::System::Data::DataTable*>*>* _tableDictionary;

  /// @brief Field _udSimpleTypes, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__udSimpleTypes, put = __cordl_internal_set__udSimpleTypes)) ::System::Collections::Hashtable* _udSimpleTypes;

  /// @brief Field s_mapNameTypeXsd, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_mapNameTypeXsd, put = setStaticF_s_mapNameTypeXsd)) ::ArrayW<::System::Data::XSDSchema_NameType*, ::Array<::System::Data::XSDSchema_NameType*>*>
      s_mapNameTypeXsd;

  /// @brief Method AddTablesToList, addr 0x41a0b3c, size 0x20c, virtual false, abstract: false, final false
  inline void AddTablesToList(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList, ::System::Data::DataTable* dt);

  /// @brief Method BuildKey, addr 0x419d4bc, size 0x2d4, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> BuildKey(::System::Xml::Schema::XmlSchemaIdentityConstraint* keyNode, ::System::Data::DataTable* table);

  /// @brief Method CollectElementsAnnotations, addr 0x41920fc, size 0x88, virtual false, abstract: false, final false
  inline void CollectElementsAnnotations(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method CollectElementsAnnotations, addr 0x4192184, size 0x994, virtual false, abstract: false, final false
  inline void CollectElementsAnnotations(::System::Xml::Schema::XmlSchema* schema, ::System::Collections::ArrayList* schemaList);

  /// @brief Method DatasetElementCount, addr 0x4195078, size 0x240, virtual false, abstract: false, final false
  inline int32_t DatasetElementCount(::System::Xml::Schema::XmlSchemaObjectCollection* elements);

  /// @brief Method FindDatasetElement, addr 0x4195410, size 0x4d0, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaElement* FindDatasetElement(::System::Xml::Schema::XmlSchemaObjectCollection* elements);

  /// @brief Method FindField, addr 0x419d340, size 0x17c, virtual false, abstract: false, final false
  inline ::System::Data::DataColumn* FindField(::System::Data::DataTable* table, ::StringW field);

  /// @brief Method FindNameType, addr 0x41a0890, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Data::XSDSchema_NameType* FindNameType(::StringW name);

  /// @brief Method FindTypeNode, addr 0x4197ac8, size 0x2ac, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAnnotated* FindTypeNode(::System::Xml::Schema::XmlSchemaAnnotated* node);

  /// @brief Method GetBooleanAttribute, addr 0x41952b8, size 0x158, virtual false, abstract: false, final false
  inline bool GetBooleanAttribute(::System::Xml::Schema::XmlSchemaAnnotated* element, ::StringW attrName, bool defVal);

  /// @brief Method GetInstanceName, addr 0x4193ab8, size 0xd8, virtual false, abstract: false, final false
  inline ::StringW GetInstanceName(::System::Xml::Schema::XmlSchemaAnnotated* node);

  /// @brief Method GetMsdataAttribute, addr 0x4192b18, size 0x118, virtual false, abstract: false, final false
  static inline ::StringW GetMsdataAttribute(::System::Xml::Schema::XmlSchemaAnnotated* node, ::StringW ln);

  /// @brief Method GetNamespaceFromPrefix, addr 0x41a0d48, size 0x418, virtual false, abstract: false, final false
  inline ::StringW GetNamespaceFromPrefix(::StringW prefix);

  /// @brief Method GetParticle, addr 0x41958e0, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* GetParticle(::System::Xml::Schema::XmlSchemaComplexType* ct);

  /// @brief Method GetParticleItems, addr 0x4194bfc, size 0x210, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* GetParticleItems(::System::Xml::Schema::XmlSchemaParticle* pt);

  /// @brief Method GetPrefix, addr 0x419ed3c, size 0x410, virtual false, abstract: false, final false
  inline ::StringW GetPrefix(::StringW ns);

  /// @brief Method GetStringAttribute, addr 0x4197a44, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetStringAttribute(::System::Xml::Schema::XmlSchemaAnnotated* element, ::StringW attrName, ::StringW defVal);

  /// @brief Method GetTableName, addr 0x419e0ac, size 0x118, virtual false, abstract: false, final false
  inline ::StringW GetTableName(::System::Xml::Schema::XmlSchemaIdentityConstraint* key);

  /// @brief Method GetTableNamespace, addr 0x41a0624, size 0x190, virtual false, abstract: false, final false
  inline ::StringW GetTableNamespace(::System::Xml::Schema::XmlSchemaIdentityConstraint* key);

  /// @brief Method HandleAttributeColumn, addr 0x419aeb4, size 0x9b4, virtual false, abstract: false, final false
  inline void HandleAttributeColumn(::System::Xml::Schema::XmlSchemaAttribute* attrib, ::System::Data::DataTable* table, bool isBase);

  /// @brief Method HandleAttributeGroup, addr 0x419b868, size 0x3e8, virtual false, abstract: false, final false
  inline void HandleAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup, ::System::Data::DataTable* table, bool isBase);

  /// @brief Method HandleAttributes, addr 0x419abb8, size 0x2fc, virtual false, abstract: false, final false
  inline void HandleAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Data::DataTable* table, bool isBase);

  /// @brief Method HandleColumnExpression, addr 0x41935a4, size 0x1ec, virtual false, abstract: false, final false
  inline void HandleColumnExpression(::System::Object* instance, ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> attrs);

  /// @brief Method HandleComplexType, addr 0x419bc50, size 0x5ec, virtual false, abstract: false, final false
  inline void HandleComplexType(::System::Xml::Schema::XmlSchemaComplexType* ct, ::System::Data::DataTable* table, ::System::Collections::ArrayList* tableChildren, bool isNillable);

  /// @brief Method HandleConstraint, addr 0x419e1c4, size 0x438, virtual false, abstract: false, final false
  inline void HandleConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* keyNode);

  /// @brief Method HandleDataSet, addr 0x4197eec, size 0x12d8, virtual false, abstract: false, final false
  inline void HandleDataSet(::System::Xml::Schema::XmlSchemaElement* node, bool isNewDataSet);

  /// @brief Method HandleElementColumn, addr 0x4199eb8, size 0xd00, virtual false, abstract: false, final false
  inline void HandleElementColumn(::System::Xml::Schema::XmlSchemaElement* elem, ::System::Data::DataTable* table, bool isBase);

  /// @brief Method HandleKeyref, addr 0x419d900, size 0x7ac, virtual false, abstract: false, final false
  inline void HandleKeyref(::System::Xml::Schema::XmlSchemaKeyref* keyref);

  /// @brief Method HandleParticle, addr 0x41994f0, size 0x9c8, virtual false, abstract: false, final false
  inline void HandleParticle(::System::Xml::Schema::XmlSchemaParticle* pt, ::System::Data::DataTable* table, ::System::Collections::ArrayList* tableChildren, bool isBase);

  /// @brief Method HandleRefTableProperties, addr 0x41939d4, size 0xe4, virtual false, abstract: false, final false
  inline void HandleRefTableProperties(::System::Collections::ArrayList* RefTables, ::System::Xml::Schema::XmlSchemaElement* element);

  /// @brief Method HandleRelation, addr 0x4193b90, size 0x840, virtual false, abstract: false, final false
  inline void HandleRelation(::System::Xml::XmlElement* node, bool fNested);

  /// @brief Method HandleRelations, addr 0x41991c4, size 0x32c, virtual false, abstract: false, final false
  inline void HandleRelations(::System::Xml::Schema::XmlSchemaAnnotation* ann, bool fNested);

  /// @brief Method HandleSimpleContentColumn, addr 0x419c23c, size 0x77c, virtual false, abstract: false, final false
  inline void HandleSimpleContentColumn(::StringW strType, ::System::Data::DataTable* table, bool isBase, ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> attrs,
                                        bool isNillable);

  /// @brief Method HandleSimpleTypeSimpleContentColumn, addr 0x419c9b8, size 0x988, virtual false, abstract: false, final false
  inline void HandleSimpleTypeSimpleContentColumn(::System::Xml::Schema::XmlSchemaSimpleType* typeNode, ::StringW strType, ::System::Data::DataTable* table, bool isBase,
                                                  ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> attrs, bool isNillable);

  /// @brief Method HandleTable, addr 0x4197d74, size 0x178, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* HandleTable(::System::Xml::Schema::XmlSchemaElement* node);

  /// @brief Method HasAttributes, addr 0x41943d0, size 0x280, virtual false, abstract: false, final false
  inline bool HasAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes);

  /// @brief Method InstantiateSimpleTable, addr 0x419e5fc, size 0x740, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* InstantiateSimpleTable(::System::Xml::Schema::XmlSchemaElement* node);

  /// @brief Method InstantiateTable, addr 0x419f14c, size 0x14d8, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* InstantiateTable(::System::Xml::Schema::XmlSchemaElement* node, ::System::Xml::Schema::XmlSchemaComplexType* typeNode, bool isRef);

  /// @brief Method IsDatasetParticle, addr 0x4194650, size 0x5ac, virtual false, abstract: false, final false
  inline bool IsDatasetParticle(::System::Xml::Schema::XmlSchemaParticle* pt);

  /// @brief Method IsTable, addr 0x4194e0c, size 0x26c, virtual false, abstract: false, final false
  inline bool IsTable(::System::Xml::Schema::XmlSchemaElement* node);

  /// @brief Method IsXsdType, addr 0x41a0acc, size 0x70, virtual false, abstract: false, final false
  static inline bool IsXsdType(::StringW name);

  /// @brief Method LoadSchema, addr 0x4195a20, size 0x2024, virtual false, abstract: false, final false
  inline void LoadSchema(::System::Xml::Schema::XmlSchemaSet* schemaSet, ::System::Data::DataSet* ds);

  /// @brief Method LoadSchema, addr 0x41959fc, size 0x24, virtual false, abstract: false, final false
  inline void LoadSchema(::System::Xml::Schema::XmlSchemaSet* schemaSet, ::System::Data::DataTable* dt);

  static inline ::System::Data::XSDSchema* New_ctor();

  /// @brief Method ParseDataType, addr 0x41a0964, size 0x168, virtual false, abstract: false, final false
  inline ::System::Type* ParseDataType(::StringW dt);

  /// @brief Method QualifiedName, addr 0x4192c30, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW QualifiedName(::StringW name);

  /// @brief Method SetExtProperties, addr 0x4193214, size 0x390, virtual false, abstract: false, final false
  static inline void SetExtProperties(::System::Object* instance, ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> attrs);

  /// @brief Method SetExtProperties, addr 0x4193790, size 0x244, virtual false, abstract: false, final false
  static inline void SetExtProperties(::System::Object* instance, ::System::Xml::XmlAttributeCollection* attrs);

  /// @brief Method SetProperties, addr 0x4192cac, size 0x568, virtual false, abstract: false, final false
  static inline void SetProperties(::System::Object* instance, ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> attrs);

  /// @brief Method TranslateAcceptRejectRule, addr 0x419d790, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Data::AcceptRejectRule TranslateAcceptRejectRule(::StringW strRule);

  /// @brief Method TranslateRule, addr 0x419d814, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Data::Rule TranslateRule(::StringW strRule);

  /// @brief Method XsdtoClr, addr 0x41a07b4, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Type* XsdtoClr(::StringW xsdTypeName);

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& __cordl_internal_get__annotations() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get__annotations();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__attributeGroups() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__attributeGroups();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__attributes() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__attributes();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__columnExpressions() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__columnExpressions();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__complexTypes() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__complexTypes();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__constraintNodes() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__constraintNodes();

  constexpr ::System::Data::DataSet* const& __cordl_internal_get__ds() const;

  constexpr ::System::Data::DataSet*& __cordl_internal_get__ds();

  constexpr ::System::Xml::Schema::XmlSchemaElement* const& __cordl_internal_get__dsElement() const;

  constexpr ::System::Xml::Schema::XmlSchemaElement*& __cordl_internal_get__dsElement();

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& __cordl_internal_get__elements() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get__elements();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__elementsTable() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__elementsTable();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__existingSimpleTypeMap() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__existingSimpleTypeMap();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__expressions() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__expressions();

  constexpr bool const& __cordl_internal_get__fromInference() const;

  constexpr bool& __cordl_internal_get__fromInference();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__refTables() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__refTables();

  constexpr ::StringW const& __cordl_internal_get__schemaName() const;

  constexpr ::StringW& __cordl_internal_get__schemaName();

  constexpr ::System::Xml::Schema::XmlSchemaSet* const& __cordl_internal_get__schemaSet() const;

  constexpr ::System::Xml::Schema::XmlSchemaSet*& __cordl_internal_get__schemaSet();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__schemaTypes() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__schemaTypes();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*>* const&
  __cordl_internal_get__tableDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*>*& __cordl_internal_get__tableDictionary();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__udSimpleTypes() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__udSimpleTypes();

  constexpr void __cordl_internal_set__annotations(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  constexpr void __cordl_internal_set__attributeGroups(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__attributes(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__columnExpressions(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__complexTypes(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__constraintNodes(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__ds(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__dsElement(::System::Xml::Schema::XmlSchemaElement* value);

  constexpr void __cordl_internal_set__elements(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  constexpr void __cordl_internal_set__elementsTable(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__existingSimpleTypeMap(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__expressions(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__fromInference(bool value);

  constexpr void __cordl_internal_set__refTables(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__schemaName(::StringW value);

  constexpr void __cordl_internal_set__schemaSet(::System::Xml::Schema::XmlSchemaSet* value);

  constexpr void __cordl_internal_set__schemaTypes(::System::Collections::Hashtable* value);

  constexpr void
  __cordl_internal_set__tableDictionary(::System::Collections::Generic::Dictionary_2<::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*>* value);

  constexpr void __cordl_internal_set__udSimpleTypes(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x41a1160, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Data::XSDSchema_NameType*, ::Array<::System::Data::XSDSchema_NameType*>*> getStaticF_s_mapNameTypeXsd();

  /// @brief Method get_FromInference, addr 0x41920e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_FromInference();

  static inline void setStaticF_s_mapNameTypeXsd(::ArrayW<::System::Data::XSDSchema_NameType*, ::Array<::System::Data::XSDSchema_NameType*>*> value);

  /// @brief Method set_FromInference, addr 0x41920f0, size 0xc, virtual false, abstract: false, final false
  inline void set_FromInference(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XSDSchema();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XSDSchema", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XSDSchema(XSDSchema&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XSDSchema", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XSDSchema(XSDSchema const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11480 };

  /// @brief Field _schemaSet, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSet* ____schemaSet;

  /// @brief Field _dsElement, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaElement* ____dsElement;

  /// @brief Field _ds, offset: 0x20, size: 0x8, def value: None
  ::System::Data::DataSet* ____ds;

  /// @brief Field _schemaName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____schemaName;

  /// @brief Field _columnExpressions, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____columnExpressions;

  /// @brief Field _constraintNodes, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____constraintNodes;

  /// @brief Field _refTables, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____refTables;

  /// @brief Field _complexTypes, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____complexTypes;

  /// @brief Field _annotations, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ____annotations;

  /// @brief Field _elements, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ____elements;

  /// @brief Field _attributes, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____attributes;

  /// @brief Field _elementsTable, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____elementsTable;

  /// @brief Field _attributeGroups, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____attributeGroups;

  /// @brief Field _schemaTypes, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____schemaTypes;

  /// @brief Field _expressions, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____expressions;

  /// @brief Field _tableDictionary, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Data::DataTable*, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*>* ____tableDictionary;

  /// @brief Field _udSimpleTypes, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____udSimpleTypes;

  /// @brief Field _existingSimpleTypeMap, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____existingSimpleTypeMap;

  /// @brief Field _fromInference, offset: 0xa0, size: 0x1, def value: None
  bool ____fromInference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::XSDSchema, ____schemaSet) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____dsElement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____ds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____schemaName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____columnExpressions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____constraintNodes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____refTables) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____complexTypes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____annotations) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____elements) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____attributes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____elementsTable) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____attributeGroups) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____schemaTypes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____expressions) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____tableDictionary) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____udSimpleTypes) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____existingSimpleTypeMap) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Data::XSDSchema, ____fromInference) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::XSDSchema, 0xa8>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::XSDSchema);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XSDSchema*, "System.Data", "XSDSchema");
NEED_NO_BOX(::System::Data::XSDSchema_NameType);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XSDSchema_NameType*, "System.Data", "XSDSchema/NameType");
