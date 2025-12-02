#pragma once
// IWYU pragma private; include "System/Data/XmlToDatasetMap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlToDatasetMap)
namespace System::Collections {
class ArrayList;
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
class XmlToDatasetMap_TableSchemaInfo;
}
namespace System::Data {
class XmlToDatasetMap_XmlNodeIdHashtable;
}
namespace System::Data {
class XmlToDatasetMap_XmlNodeIdentety;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlReader;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class XmlToDatasetMap;
}
namespace System::Data {
class XmlToDatasetMap_TableSchemaInfo;
}
namespace System::Data {
class XmlToDatasetMap_XmlNodeIdHashtable;
}
namespace System::Data {
class XmlToDatasetMap_XmlNodeIdentety;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::XmlToDatasetMap);
MARK_REF_PTR_T(::System::Data::XmlToDatasetMap_TableSchemaInfo);
MARK_REF_PTR_T(::System::Data::XmlToDatasetMap_XmlNodeIdHashtable);
MARK_REF_PTR_T(::System::Data::XmlToDatasetMap_XmlNodeIdentety);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.XmlToDatasetMap/XmlNodeIdentety
class CORDL_TYPE XmlToDatasetMap_XmlNodeIdentety : public ::System::Object {
public:
  // Declarations
  /// @brief Field LocalName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_LocalName, put = __cordl_internal_set_LocalName)) ::StringW LocalName;

  /// @brief Field NamespaceURI, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_NamespaceURI, put = __cordl_internal_set_NamespaceURI)) ::StringW NamespaceURI;

  /// @brief Method Equals, addr 0x5e5339c, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x5e53380, size 0x1c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Data::XmlToDatasetMap_XmlNodeIdentety* New_ctor(::StringW localName, ::StringW namespaceURI);

  constexpr ::StringW const& __cordl_internal_get_LocalName() const;

  constexpr ::StringW& __cordl_internal_get_LocalName();

  constexpr ::StringW const& __cordl_internal_get_NamespaceURI() const;

  constexpr ::StringW& __cordl_internal_get_NamespaceURI();

  constexpr void __cordl_internal_set_LocalName(::StringW value);

  constexpr void __cordl_internal_set_NamespaceURI(::StringW value);

  /// @brief Method .ctor, addr 0x5e529ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW localName, ::StringW namespaceURI);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlToDatasetMap_XmlNodeIdentety();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlToDatasetMap_XmlNodeIdentety", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlToDatasetMap_XmlNodeIdentety(XmlToDatasetMap_XmlNodeIdentety&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlToDatasetMap_XmlNodeIdentety", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlToDatasetMap_XmlNodeIdentety(XmlToDatasetMap_XmlNodeIdentety const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13842 };

  /// @brief Field LocalName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___LocalName;

  /// @brief Field NamespaceURI, offset: 0x18, size: 0x8, def value: None
  ::StringW ___NamespaceURI;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::XmlToDatasetMap_XmlNodeIdentety, ___LocalName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlToDatasetMap_XmlNodeIdentety, ___NamespaceURI) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::XmlToDatasetMap_XmlNodeIdentety, 0x20>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.Collections.Hashtable
namespace System::Data {
// Is value type: false
// CS Name: System.Data.XmlToDatasetMap/XmlNodeIdHashtable
class CORDL_TYPE XmlToDatasetMap_XmlNodeIdHashtable : public ::System::Collections::Hashtable {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::System::Object* Item[];

  __declspec(property(get = get_Item)) ::System::Object* Item[];

  __declspec(property(get = get_Item)) ::System::Object* Item[];

  __declspec(property(get = get_Item)) ::System::Object* Item[];

  /// @brief Field _id, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) ::System::Data::XmlToDatasetMap_XmlNodeIdentety* _id;

  static inline ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* New_ctor(int32_t capacity);

  constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdentety* const& __cordl_internal_get__id() const;

  constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdentety*& __cordl_internal_get__id();

  constexpr void __cordl_internal_set__id(::System::Data::XmlToDatasetMap_XmlNodeIdentety* value);

  /// @brief Method .ctor, addr 0x5e53448, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_Item, addr 0x5e53540, size 0x70, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(::System::Xml::XmlReader* dataReader);

  /// @brief Method get_Item, addr 0x5e53620, size 0x38, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(::StringW name);

  /// @brief Method get_Item, addr 0x5e534c8, size 0x78, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(::System::Xml::XmlNode* node);

  /// @brief Method get_Item, addr 0x5e535b0, size 0x70, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(::System::Data::DataTable* table);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlToDatasetMap_XmlNodeIdHashtable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlToDatasetMap_XmlNodeIdHashtable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlToDatasetMap_XmlNodeIdHashtable(XmlToDatasetMap_XmlNodeIdHashtable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlToDatasetMap_XmlNodeIdHashtable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlToDatasetMap_XmlNodeIdHashtable(XmlToDatasetMap_XmlNodeIdHashtable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13843 };

  /// @brief Field _id, offset: 0x50, size: 0x8, def value: None
  ::System::Data::XmlToDatasetMap_XmlNodeIdentety* ____id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::XmlToDatasetMap_XmlNodeIdHashtable, ____id) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::XmlToDatasetMap_XmlNodeIdHashtable, 0x58>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.XmlToDatasetMap/TableSchemaInfo
class CORDL_TYPE XmlToDatasetMap_TableSchemaInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field ColumnsSchemaMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ColumnsSchemaMap, put = __cordl_internal_set_ColumnsSchemaMap)) ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* ColumnsSchemaMap;

  /// @brief Field TableSchema, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_TableSchema, put = __cordl_internal_set_TableSchema)) ::System::Data::DataTable* TableSchema;

  static inline ::System::Data::XmlToDatasetMap_TableSchemaInfo* New_ctor(::System::Data::DataTable* tableSchema);

  constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* const& __cordl_internal_get_ColumnsSchemaMap() const;

  constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*& __cordl_internal_get_ColumnsSchemaMap();

  constexpr ::System::Data::DataTable* const& __cordl_internal_get_TableSchema() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get_TableSchema();

  constexpr void __cordl_internal_set_ColumnsSchemaMap(::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* value);

  constexpr void __cordl_internal_set_TableSchema(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x5e53658, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* tableSchema);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlToDatasetMap_TableSchemaInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlToDatasetMap_TableSchemaInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlToDatasetMap_TableSchemaInfo(XmlToDatasetMap_TableSchemaInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlToDatasetMap_TableSchemaInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlToDatasetMap_TableSchemaInfo(XmlToDatasetMap_TableSchemaInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13844 };

  /// @brief Field TableSchema, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataTable* ___TableSchema;

  /// @brief Field ColumnsSchemaMap, offset: 0x18, size: 0x8, def value: None
  ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* ___ColumnsSchemaMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::XmlToDatasetMap_TableSchemaInfo, ___TableSchema) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlToDatasetMap_TableSchemaInfo, ___ColumnsSchemaMap) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::XmlToDatasetMap_TableSchemaInfo, 0x20>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.XmlToDatasetMap
class CORDL_TYPE XmlToDatasetMap : public ::System::Object {
public:
  // Declarations
  using TableSchemaInfo = ::System::Data::XmlToDatasetMap_TableSchemaInfo;

  using XmlNodeIdHashtable = ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable;

  using XmlNodeIdentety = ::System::Data::XmlToDatasetMap_XmlNodeIdentety;

  /// @brief Field _lastTableSchemaInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lastTableSchemaInfo, put = __cordl_internal_set__lastTableSchemaInfo)) ::System::Data::XmlToDatasetMap_TableSchemaInfo* _lastTableSchemaInfo;

  /// @brief Field _tableSchemaMap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tableSchemaMap, put = __cordl_internal_set__tableSchemaMap)) ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* _tableSchemaMap;

  /// @brief Method AddColumnSchema, addr 0x5e52b1c, size 0x124, virtual false, abstract: false, final false
  inline bool AddColumnSchema(::System::Data::DataColumn* col, ::System::Xml::XmlNameTable* nameTable, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* columns);

  /// @brief Method AddColumnSchema, addr 0x5e52da0, size 0x1a4, virtual false, abstract: false, final false
  inline bool AddColumnSchema(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataColumn* col, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* columns);

  /// @brief Method AddTableSchema, addr 0x5e529b4, size 0x168, virtual false, abstract: false, final false
  inline ::System::Data::XmlToDatasetMap_TableSchemaInfo* AddTableSchema(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* table);

  /// @brief Method AddTableSchema, addr 0x5e52894, size 0x118, virtual false, abstract: false, final false
  inline ::System::Data::XmlToDatasetMap_TableSchemaInfo* AddTableSchema(::System::Data::DataTable* table, ::System::Xml::XmlNameTable* nameTable);

  /// @brief Method BuildIdentityMap, addr 0x5e50b24, size 0x5c0, virtual false, abstract: false, final false
  inline void BuildIdentityMap(::System::Data::DataSet* dataSet, ::System::Xml::XmlNameTable* nameTable);

  /// @brief Method BuildIdentityMap, addr 0x5e51b44, size 0x32c, virtual false, abstract: false, final false
  inline void BuildIdentityMap(::System::Data::DataTable* dataTable, ::System::Xml::XmlNameTable* nameTable);

  /// @brief Method BuildIdentityMap, addr 0x5e510e4, size 0xa60, virtual false, abstract: false, final false
  inline void BuildIdentityMap(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataSet* dataSet);

  /// @brief Method BuildIdentityMap, addr 0x5e51e70, size 0xa24, virtual false, abstract: false, final false
  inline void BuildIdentityMap(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* dataTable);

  /// @brief Method GetColumnSchema, addr 0x5e4cc40, size 0x1f8, virtual false, abstract: false, final false
  inline ::System::Object* GetColumnSchema(::System::Xml::XmlNode* node, bool fIgnoreNamespace);

  /// @brief Method GetColumnSchema, addr 0x5e500c0, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Object* GetColumnSchema(::System::Data::DataTable* table, ::System::Xml::XmlReader* dataReader, bool fIgnoreNamespace);

  /// @brief Method GetSchemaForNode, addr 0x5e4d1c0, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Object* GetSchemaForNode(::System::Xml::XmlNode* node, bool fIgnoreNamespace);

  /// @brief Method GetSelfAndDescendants, addr 0x5e52f44, size 0x43c, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* GetSelfAndDescendants(::System::Data::DataTable* dt);

  /// @brief Method GetTableForNode, addr 0x5e4f150, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* GetTableForNode(::System::Xml::XmlReader* node, bool fIgnoreNamespace);

  /// @brief Method HandleSpecialColumn, addr 0x5e52c40, size 0x160, virtual false, abstract: false, final false
  inline void HandleSpecialColumn(::System::Data::DataColumn* col, ::System::Xml::XmlNameTable* nameTable, ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* columns);

  /// @brief Method IsMappedColumn, addr 0x5e4e210, size 0x28, virtual false, abstract: false, final false
  static inline bool IsMappedColumn(::System::Data::DataColumn* c);

  static inline ::System::Data::XmlToDatasetMap* New_ctor(::System::Data::DataSet* dataSet, ::System::Xml::XmlNameTable* nameTable);

  static inline ::System::Data::XmlToDatasetMap* New_ctor(::System::Data::DataTable* dataTable, ::System::Xml::XmlNameTable* nameTable);

  static inline ::System::Data::XmlToDatasetMap* New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataSet* dataSet);

  static inline ::System::Data::XmlToDatasetMap* New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* dataTable);

  constexpr ::System::Data::XmlToDatasetMap_TableSchemaInfo* const& __cordl_internal_get__lastTableSchemaInfo() const;

  constexpr ::System::Data::XmlToDatasetMap_TableSchemaInfo*& __cordl_internal_get__lastTableSchemaInfo();

  constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* const& __cordl_internal_get__tableSchemaMap() const;

  constexpr ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*& __cordl_internal_get__tableSchemaMap();

  constexpr void __cordl_internal_set__lastTableSchemaInfo(::System::Data::XmlToDatasetMap_TableSchemaInfo* value);

  constexpr void __cordl_internal_set__tableSchemaMap(::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* value);

  /// @brief Method .ctor, addr 0x5e4d1bc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* dataSet, ::System::Xml::XmlNameTable* nameTable);

  /// @brief Method .ctor, addr 0x5e4d1b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* dataTable, ::System::Xml::XmlNameTable* nameTable);

  /// @brief Method .ctor, addr 0x5e4e824, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataSet* dataSet);

  /// @brief Method .ctor, addr 0x5e4e828, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* dataTable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlToDatasetMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlToDatasetMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlToDatasetMap(XmlToDatasetMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlToDatasetMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlToDatasetMap(XmlToDatasetMap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13845 };

  /// @brief Field _tableSchemaMap, offset: 0x10, size: 0x8, def value: None
  ::System::Data::XmlToDatasetMap_XmlNodeIdHashtable* ____tableSchemaMap;

  /// @brief Field _lastTableSchemaInfo, offset: 0x18, size: 0x8, def value: None
  ::System::Data::XmlToDatasetMap_TableSchemaInfo* ____lastTableSchemaInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::XmlToDatasetMap, ____tableSchemaMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlToDatasetMap, ____lastTableSchemaInfo) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::XmlToDatasetMap, 0x20>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::XmlToDatasetMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlToDatasetMap*, "System.Data", "XmlToDatasetMap");
NEED_NO_BOX(::System::Data::XmlToDatasetMap_TableSchemaInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlToDatasetMap_TableSchemaInfo*, "System.Data", "XmlToDatasetMap/TableSchemaInfo");
NEED_NO_BOX(::System::Data::XmlToDatasetMap_XmlNodeIdHashtable);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlToDatasetMap_XmlNodeIdHashtable*, "System.Data", "XmlToDatasetMap/XmlNodeIdHashtable");
NEED_NO_BOX(::System::Data::XmlToDatasetMap_XmlNodeIdentety);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlToDatasetMap_XmlNodeIdentety*, "System.Data", "XmlToDatasetMap/XmlNodeIdentety");
