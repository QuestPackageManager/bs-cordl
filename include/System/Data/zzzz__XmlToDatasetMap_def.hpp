#pragma once
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
class __XmlToDatasetMap__TableSchemaInfo;
}
namespace System::Data {
class __XmlToDatasetMap__XmlNodeIdHashtable;
}
namespace System::Data {
class __XmlToDatasetMap__XmlNodeIdentety;
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
class __XmlToDatasetMap__TableSchemaInfo;
}
namespace System::Data {
class __XmlToDatasetMap__XmlNodeIdHashtable;
}
namespace System::Data {
class __XmlToDatasetMap__XmlNodeIdentety;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::XmlToDatasetMap);
MARK_REF_PTR_T(::System::Data::__XmlToDatasetMap__TableSchemaInfo);
MARK_REF_PTR_T(::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable);
MARK_REF_PTR_T(::System::Data::__XmlToDatasetMap__XmlNodeIdentety);
// Type: ::XmlNodeIdentety
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::XmlToDatasetMap::XmlNodeIdentety*
class CORDL_TYPE __XmlToDatasetMap__XmlNodeIdentety : public ::System::Object {
public:
  // Declarations
  /// @brief Field LocalName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_LocalName, put = __cordl_internal_set_LocalName))::StringW LocalName;

  /// @brief Field NamespaceURI, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_NamespaceURI, put = __cordl_internal_set_NamespaceURI))::StringW NamespaceURI;

  /// @brief Method Equals, addr 0x2cffa00, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2cff9e0, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Data::__XmlToDatasetMap__XmlNodeIdentety* New_ctor(::StringW localName, ::StringW namespaceURI);

  constexpr ::StringW const& __cordl_internal_get_LocalName() const;

  constexpr ::StringW& __cordl_internal_get_LocalName();

  constexpr ::StringW const& __cordl_internal_get_NamespaceURI() const;

  constexpr ::StringW& __cordl_internal_get_NamespaceURI();

  constexpr void __cordl_internal_set_LocalName(::StringW value);

  constexpr void __cordl_internal_set_NamespaceURI(::StringW value);

  /// @brief Method .ctor, addr 0x2cfefa4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW localName, ::StringW namespaceURI);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlToDatasetMap__XmlNodeIdentety();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlToDatasetMap__XmlNodeIdentety", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlToDatasetMap__XmlNodeIdentety(__XmlToDatasetMap__XmlNodeIdentety&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlToDatasetMap__XmlNodeIdentety", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlToDatasetMap__XmlNodeIdentety(__XmlToDatasetMap__XmlNodeIdentety const&) = delete;

  /// @brief Field LocalName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___LocalName;

  /// @brief Field NamespaceURI, offset: 0x18, size: 0x8, def value: None
  ::StringW ___NamespaceURI;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::__XmlToDatasetMap__XmlNodeIdentety, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Data::__XmlToDatasetMap__XmlNodeIdentety, ___LocalName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::__XmlToDatasetMap__XmlNodeIdentety, ___NamespaceURI) == 0x18, "Offset mismatch!");

} // namespace System::Data
// Type: ::XmlNodeIdHashtable
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::XmlToDatasetMap::XmlNodeIdHashtable*
class CORDL_TYPE __XmlToDatasetMap__XmlNodeIdHashtable : public ::System::Collections::Hashtable {
public:
  // Declarations
  __declspec(property(get = get_Item))::System::Object* Item[];

  __declspec(property(get = get_Item))::System::Object* Item[];

  __declspec(property(get = get_Item))::System::Object* Item[];

  __declspec(property(get = get_Item))::System::Object* Item[];

  /// @brief Field _id, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id))::System::Data::__XmlToDatasetMap__XmlNodeIdentety* _id;

  static inline ::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable* New_ctor(int32_t capacity);

  constexpr ::System::Data::__XmlToDatasetMap__XmlNodeIdentety*& __cordl_internal_get__id();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::__XmlToDatasetMap__XmlNodeIdentety*> const& __cordl_internal_get__id() const;

  constexpr void __cordl_internal_set__id(::System::Data::__XmlToDatasetMap__XmlNodeIdentety* value);

  /// @brief Method .ctor, addr 0x2cffa9c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_Item, addr 0x2cffbb4, size 0x70, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(::System::Xml::XmlReader* dataReader);

  /// @brief Method get_Item, addr 0x2cffc8c, size 0x74, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(::StringW name);

  /// @brief Method get_Item, addr 0x2cffb3c, size 0x78, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(::System::Xml::XmlNode* node);

  /// @brief Method get_Item, addr 0x2cffc24, size 0x68, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(::System::Data::DataTable* table);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlToDatasetMap__XmlNodeIdHashtable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlToDatasetMap__XmlNodeIdHashtable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlToDatasetMap__XmlNodeIdHashtable(__XmlToDatasetMap__XmlNodeIdHashtable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlToDatasetMap__XmlNodeIdHashtable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlToDatasetMap__XmlNodeIdHashtable(__XmlToDatasetMap__XmlNodeIdHashtable const&) = delete;

  /// @brief Field _id, offset: 0x50, size: 0x8, def value: None
  ::System::Data::__XmlToDatasetMap__XmlNodeIdentety* ____id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable, ____id) == 0x50, "Offset mismatch!");

} // namespace System::Data
// Type: ::TableSchemaInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::XmlToDatasetMap::TableSchemaInfo*
class CORDL_TYPE __XmlToDatasetMap__TableSchemaInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field ColumnsSchemaMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ColumnsSchemaMap, put = __cordl_internal_set_ColumnsSchemaMap))::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable* ColumnsSchemaMap;

  /// @brief Field TableSchema, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_TableSchema, put = __cordl_internal_set_TableSchema))::System::Data::DataTable* TableSchema;

  static inline ::System::Data::__XmlToDatasetMap__TableSchemaInfo* New_ctor(::System::Data::DataTable* tableSchema);

  constexpr ::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable*& __cordl_internal_get_ColumnsSchemaMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable*> const& __cordl_internal_get_ColumnsSchemaMap() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get_TableSchema();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get_TableSchema() const;

  constexpr void __cordl_internal_set_ColumnsSchemaMap(::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable* value);

  constexpr void __cordl_internal_set_TableSchema(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x2cffd00, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* tableSchema);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlToDatasetMap__TableSchemaInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlToDatasetMap__TableSchemaInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlToDatasetMap__TableSchemaInfo(__XmlToDatasetMap__TableSchemaInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlToDatasetMap__TableSchemaInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlToDatasetMap__TableSchemaInfo(__XmlToDatasetMap__TableSchemaInfo const&) = delete;

  /// @brief Field TableSchema, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataTable* ___TableSchema;

  /// @brief Field ColumnsSchemaMap, offset: 0x18, size: 0x8, def value: None
  ::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable* ___ColumnsSchemaMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::__XmlToDatasetMap__TableSchemaInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Data::__XmlToDatasetMap__TableSchemaInfo, ___TableSchema) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::__XmlToDatasetMap__TableSchemaInfo, ___ColumnsSchemaMap) == 0x18, "Offset mismatch!");

} // namespace System::Data
// Type: System.Data::XmlToDatasetMap
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::XmlToDatasetMap*
class CORDL_TYPE XmlToDatasetMap : public ::System::Object {
public:
  // Declarations
  using TableSchemaInfo = ::System::Data::__XmlToDatasetMap__TableSchemaInfo;

  using XmlNodeIdHashtable = ::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable;

  using XmlNodeIdentety = ::System::Data::__XmlToDatasetMap__XmlNodeIdentety;

  /// @brief Field _lastTableSchemaInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lastTableSchemaInfo, put = __cordl_internal_set__lastTableSchemaInfo))::System::Data::__XmlToDatasetMap__TableSchemaInfo* _lastTableSchemaInfo;

  /// @brief Field _tableSchemaMap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tableSchemaMap, put = __cordl_internal_set__tableSchemaMap))::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable* _tableSchemaMap;

  /// @brief Method AddColumnSchema, addr 0x2cff14c, size 0x138, virtual false, abstract: false, final false
  inline bool AddColumnSchema(::System::Data::DataColumn* col, ::System::Xml::XmlNameTable* nameTable, ::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable* columns);

  /// @brief Method AddColumnSchema, addr 0x2cff3e4, size 0x1b0, virtual false, abstract: false, final false
  inline bool AddColumnSchema(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataColumn* col, ::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable* columns);

  /// @brief Method AddTableSchema, addr 0x2cfefd0, size 0x17c, virtual false, abstract: false, final false
  inline ::System::Data::__XmlToDatasetMap__TableSchemaInfo* AddTableSchema(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* table);

  /// @brief Method AddTableSchema, addr 0x2cfee78, size 0x12c, virtual false, abstract: false, final false
  inline ::System::Data::__XmlToDatasetMap__TableSchemaInfo* AddTableSchema(::System::Data::DataTable* table, ::System::Xml::XmlNameTable* nameTable);

  /// @brief Method BuildIdentityMap, addr 0x2cfce8c, size 0x620, virtual false, abstract: false, final false
  inline void BuildIdentityMap(::System::Data::DataSet* dataSet, ::System::Xml::XmlNameTable* nameTable);

  /// @brief Method BuildIdentityMap, addr 0x2cfdff8, size 0x368, virtual false, abstract: false, final false
  inline void BuildIdentityMap(::System::Data::DataTable* dataTable, ::System::Xml::XmlNameTable* nameTable);

  /// @brief Method BuildIdentityMap, addr 0x2cfd4ac, size 0xb4c, virtual false, abstract: false, final false
  inline void BuildIdentityMap(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataSet* dataSet);

  /// @brief Method BuildIdentityMap, addr 0x2cfe360, size 0xb18, virtual false, abstract: false, final false
  inline void BuildIdentityMap(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* dataTable);

  /// @brief Method GetColumnSchema, addr 0x2cf8e3c, size 0x1e4, virtual false, abstract: false, final false
  inline ::System::Object* GetColumnSchema(::System::Xml::XmlNode* node, bool fIgnoreNamespace);

  /// @brief Method GetColumnSchema, addr 0x2cfc444, size 0x130, virtual false, abstract: false, final false
  inline ::System::Object* GetColumnSchema(::System::Data::DataTable* table, ::System::Xml::XmlReader* dataReader, bool fIgnoreNamespace);

  /// @brief Method GetSchemaForNode, addr 0x2cf93fc, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Object* GetSchemaForNode(::System::Xml::XmlNode* node, bool fIgnoreNamespace);

  /// @brief Method GetSelfAndDescendants, addr 0x2cff594, size 0x44c, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* GetSelfAndDescendants(::System::Data::DataTable* dt);

  /// @brief Method GetTableForNode, addr 0x2cfb45c, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* GetTableForNode(::System::Xml::XmlReader* node, bool fIgnoreNamespace);

  /// @brief Method HandleSpecialColumn, addr 0x2cff284, size 0x160, virtual false, abstract: false, final false
  inline void HandleSpecialColumn(::System::Data::DataColumn* col, ::System::Xml::XmlNameTable* nameTable, ::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable* columns);

  /// @brief Method IsMappedColumn, addr 0x2cfa4f4, size 0x28, virtual false, abstract: false, final false
  static inline bool IsMappedColumn(::System::Data::DataColumn* c);

  static inline ::System::Data::XmlToDatasetMap* New_ctor(::System::Data::DataSet* dataSet, ::System::Xml::XmlNameTable* nameTable);

  static inline ::System::Data::XmlToDatasetMap* New_ctor(::System::Data::DataTable* dataTable, ::System::Xml::XmlNameTable* nameTable);

  static inline ::System::Data::XmlToDatasetMap* New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataSet* dataSet);

  static inline ::System::Data::XmlToDatasetMap* New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataTable* dataTable);

  constexpr ::System::Data::__XmlToDatasetMap__TableSchemaInfo*& __cordl_internal_get__lastTableSchemaInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::__XmlToDatasetMap__TableSchemaInfo*> const& __cordl_internal_get__lastTableSchemaInfo() const;

  constexpr ::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable*& __cordl_internal_get__tableSchemaMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable*> const& __cordl_internal_get__tableSchemaMap() const;

  constexpr void __cordl_internal_set__lastTableSchemaInfo(::System::Data::__XmlToDatasetMap__TableSchemaInfo* value);

  constexpr void __cordl_internal_set__tableSchemaMap(::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable* value);

  /// @brief Method .ctor, addr 0x2cf93c8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* dataSet, ::System::Xml::XmlNameTable* nameTable);

  /// @brief Method .ctor, addr 0x2cf9394, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* dataTable, ::System::Xml::XmlNameTable* nameTable);

  /// @brief Method .ctor, addr 0x2cfaab0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Data::DataSet* dataSet);

  /// @brief Method .ctor, addr 0x2cfaae4, size 0x34, virtual false, abstract: false, final false
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

  /// @brief Field _tableSchemaMap, offset: 0x10, size: 0x8, def value: None
  ::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable* ____tableSchemaMap;

  /// @brief Field _lastTableSchemaInfo, offset: 0x18, size: 0x8, def value: None
  ::System::Data::__XmlToDatasetMap__TableSchemaInfo* ____lastTableSchemaInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::XmlToDatasetMap, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Data::XmlToDatasetMap, ____tableSchemaMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlToDatasetMap, ____lastTableSchemaInfo) == 0x18, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::XmlToDatasetMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlToDatasetMap*, "System.Data", "XmlToDatasetMap");
NEED_NO_BOX(::System::Data::__XmlToDatasetMap__TableSchemaInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::__XmlToDatasetMap__TableSchemaInfo*, "System.Data", "XmlToDatasetMap/TableSchemaInfo");
NEED_NO_BOX(::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::__XmlToDatasetMap__XmlNodeIdHashtable*, "System.Data", "XmlToDatasetMap/XmlNodeIdHashtable");
NEED_NO_BOX(::System::Data::__XmlToDatasetMap__XmlNodeIdentety);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::__XmlToDatasetMap__XmlNodeIdentety*, "System.Data", "XmlToDatasetMap/XmlNodeIdentety");
