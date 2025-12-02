#pragma once
// IWYU pragma private; include "System/Data/XmlDataLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlDataLoader)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class Stack;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataSet;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class XmlToDatasetMap;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlElement;
}
namespace System::Xml {
struct XmlNodeType;
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
class XmlDataLoader;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::XmlDataLoader);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.XmlDataLoader
class CORDL_TYPE XmlDataLoader : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FromInference, put = set_FromInference)) bool FromInference;

  /// @brief Field _DFFNS, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__DFFNS, put = __cordl_internal_set__DFFNS)) ::System::Object* _DFFNS;

  /// @brief Field _DIFFID, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__DIFFID, put = __cordl_internal_set__DIFFID)) ::System::Object* _DIFFID;

  /// @brief Field _HASCHANGES, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__HASCHANGES, put = __cordl_internal_set__HASCHANGES)) ::System::Object* _HASCHANGES;

  /// @brief Field _MSDNS, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__MSDNS, put = __cordl_internal_set__MSDNS)) ::System::Object* _MSDNS;

  /// @brief Field _ROWORDER, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__ROWORDER, put = __cordl_internal_set__ROWORDER)) ::System::Object* _ROWORDER;

  /// @brief Field _SQL_SYNC, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__SQL_SYNC, put = __cordl_internal_set__SQL_SYNC)) ::System::Object* _SQL_SYNC;

  /// @brief Field _UPDGNS, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__UPDGNS, put = __cordl_internal_set__UPDGNS)) ::System::Object* _UPDGNS;

  /// @brief Field _XDRNS, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__XDRNS, put = __cordl_internal_set__XDRNS)) ::System::Object* _XDRNS;

  /// @brief Field _XDR_SCHEMA, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__XDR_SCHEMA, put = __cordl_internal_set__XDR_SCHEMA)) ::System::Object* _XDR_SCHEMA;

  /// @brief Field _XSDNS, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__XSDNS, put = __cordl_internal_set__XSDNS)) ::System::Object* _XSDNS;

  /// @brief Field _XSD_SCHEMA, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__XSD_SCHEMA, put = __cordl_internal_set__XSD_SCHEMA)) ::System::Object* _XSD_SCHEMA;

  /// @brief Field _XSD_XMLNS_NS, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__XSD_XMLNS_NS, put = __cordl_internal_set__XSD_XMLNS_NS)) ::System::Object* _XSD_XMLNS_NS;

  /// @brief Field _childRowsStack, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__childRowsStack, put = __cordl_internal_set__childRowsStack)) ::System::Collections::Stack* _childRowsStack;

  /// @brief Field _dataReader, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__dataReader, put = __cordl_internal_set__dataReader)) ::System::Xml::XmlReader* _dataReader;

  /// @brief Field _dataSet, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSet, put = __cordl_internal_set__dataSet)) ::System::Data::DataSet* _dataSet;

  /// @brief Field _dataTable, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__dataTable, put = __cordl_internal_set__dataTable)) ::System::Data::DataTable* _dataTable;

  /// @brief Field _fIsXdr, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__fIsXdr, put = __cordl_internal_set__fIsXdr)) bool _fIsXdr;

  /// @brief Field _fromInference, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__fromInference, put = __cordl_internal_set__fromInference)) bool _fromInference;

  /// @brief Field _htableExcludedNS, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__htableExcludedNS, put = __cordl_internal_set__htableExcludedNS)) ::System::Collections::Hashtable* _htableExcludedNS;

  /// @brief Field _ignoreSchema, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__ignoreSchema, put = __cordl_internal_set__ignoreSchema)) bool _ignoreSchema;

  /// @brief Field _isDiffgram, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__isDiffgram, put = __cordl_internal_set__isDiffgram)) bool _isDiffgram;

  /// @brief Field _isTableLevel, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__isTableLevel, put = __cordl_internal_set__isTableLevel)) bool _isTableLevel;

  /// @brief Field _nodeToRowMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__nodeToRowMap, put = __cordl_internal_set__nodeToRowMap)) ::System::Collections::Hashtable* _nodeToRowMap;

  /// @brief Field _nodeToSchemaMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__nodeToSchemaMap, put = __cordl_internal_set__nodeToSchemaMap)) ::System::Data::XmlToDatasetMap* _nodeToSchemaMap;

  /// @brief Field _topMostNode, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__topMostNode, put = __cordl_internal_set__topMostNode)) ::System::Xml::XmlElement* _topMostNode;

  /// @brief Method AttachRows, addr 0x5e4c218, size 0x160, virtual false, abstract: false, final false
  inline void AttachRows(::System::Data::DataRow* parentRow, ::System::Xml::XmlNode* parentElement);

  /// @brief Method CountNonNSAttributes, addr 0x5e4c41c, size 0xf4, virtual false, abstract: false, final false
  inline int32_t CountNonNSAttributes(::System::Xml::XmlNode* node);

  /// @brief Method FColumnElement, addr 0x5e4ca58, size 0xf4, virtual false, abstract: false, final false
  inline bool FColumnElement(::System::Xml::XmlElement* e);

  /// @brief Method FExcludedNamespace, addr 0x5e4c510, size 0x9c, virtual false, abstract: false, final false
  inline bool FExcludedNamespace(::StringW ns);

  /// @brief Method FIgnoreNamespace, addr 0x5e4cb4c, size 0xf4, virtual false, abstract: false, final false
  inline bool FIgnoreNamespace(::System::Xml::XmlNode* node);

  /// @brief Method FIgnoreNamespace, addr 0x5e4ce38, size 0x94, virtual false, abstract: false, final false
  inline bool FIgnoreNamespace(::System::Xml::XmlReader* node);

  /// @brief Method GetInitialTextFromNodes, addr 0x5e4c7c4, size 0x1d0, virtual false, abstract: false, final false
  inline ::StringW GetInitialTextFromNodes(::ByRef<::System::Xml::XmlNode*> n);

  /// @brief Method GetRowFromElement, addr 0x5e4c378, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* GetRowFromElement(::System::Xml::XmlElement* e);

  /// @brief Method GetTextOnlyColumn, addr 0x5e4c994, size 0x94, virtual false, abstract: false, final false
  inline ::System::Data::DataColumn* GetTextOnlyColumn(::System::Data::DataRow* row);

  /// @brief Method GetValueForTextOnlyColums, addr 0x5e4c5ac, size 0x1c4, virtual false, abstract: false, final false
  inline ::StringW GetValueForTextOnlyColums(::System::Xml::XmlNode* n);

  /// @brief Method InitNameTable, addr 0x5e4e238, size 0x28c, virtual false, abstract: false, final false
  inline void InitNameTable();

  /// @brief Method IsTextLikeNode, addr 0x5e4c770, size 0x54, virtual false, abstract: false, final false
  inline bool IsTextLikeNode(::System::Xml::XmlNodeType n);

  /// @brief Method IsTextOnly, addr 0x5e4ca28, size 0x30, virtual false, abstract: false, final false
  inline bool IsTextOnly(::System::Data::DataColumn* c);

  /// @brief Method LoadColumn, addr 0x5e501fc, size 0x928, virtual false, abstract: false, final false
  inline void LoadColumn(::System::Data::DataColumn* column, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> foundColumns);

  /// @brief Method LoadData, addr 0x5e4e4c4, size 0x360, virtual false, abstract: false, final false
  inline void LoadData(::System::Xml::XmlReader* reader);

  /// @brief Method LoadData, addr 0x5e4cecc, size 0x2ec, virtual false, abstract: false, final false
  inline void LoadData(::System::Xml::XmlDocument* xdoc);

  /// @brief Method LoadRowData, addr 0x5e4d2b4, size 0xbd0, virtual false, abstract: false, final false
  inline void LoadRowData(::System::Data::DataRow* row, ::System::Xml::XmlElement* rowElement);

  /// @brief Method LoadRows, addr 0x5e4de84, size 0x344, virtual false, abstract: false, final false
  inline void LoadRows(::System::Data::DataRow* parentRow, ::System::Xml::XmlNode* parentElement);

  /// @brief Method LoadTable, addr 0x5e4f418, size 0xca8, virtual false, abstract: false, final false
  inline void LoadTable(::System::Data::DataTable* table, bool isNested);

  /// @brief Method LoadTopMostTable, addr 0x5e4e82c, size 0x924, virtual false, abstract: false, final false
  inline void LoadTopMostTable(::System::Data::DataTable* table);

  static inline ::System::Data::XmlDataLoader* New_ctor(::System::Data::DataSet* dataset, bool IsXdr, bool ignoreSchema);

  static inline ::System::Data::XmlDataLoader* New_ctor(::System::Data::DataSet* dataset, bool IsXdr, ::System::Xml::XmlElement* topNode, bool ignoreSchema);

  static inline ::System::Data::XmlDataLoader* New_ctor(::System::Data::DataTable* datatable, bool IsXdr, bool ignoreSchema);

  static inline ::System::Data::XmlDataLoader* New_ctor(::System::Data::DataTable* datatable, bool IsXdr, ::System::Xml::XmlElement* topNode, bool ignoreSchema);

  /// @brief Method ProcessXsdSchema, addr 0x5e4f21c, size 0x1fc, virtual false, abstract: false, final false
  inline bool ProcessXsdSchema();

  /// @brief Method SetRowValueFromXmlText, addr 0x5e4e1c8, size 0x48, virtual false, abstract: false, final false
  inline void SetRowValueFromXmlText(::System::Data::DataRow* row, ::System::Data::DataColumn* col, ::StringW xmlText);

  constexpr ::System::Object* const& __cordl_internal_get__DFFNS() const;

  constexpr ::System::Object*& __cordl_internal_get__DFFNS();

  constexpr ::System::Object* const& __cordl_internal_get__DIFFID() const;

  constexpr ::System::Object*& __cordl_internal_get__DIFFID();

  constexpr ::System::Object* const& __cordl_internal_get__HASCHANGES() const;

  constexpr ::System::Object*& __cordl_internal_get__HASCHANGES();

  constexpr ::System::Object* const& __cordl_internal_get__MSDNS() const;

  constexpr ::System::Object*& __cordl_internal_get__MSDNS();

  constexpr ::System::Object* const& __cordl_internal_get__ROWORDER() const;

  constexpr ::System::Object*& __cordl_internal_get__ROWORDER();

  constexpr ::System::Object* const& __cordl_internal_get__SQL_SYNC() const;

  constexpr ::System::Object*& __cordl_internal_get__SQL_SYNC();

  constexpr ::System::Object* const& __cordl_internal_get__UPDGNS() const;

  constexpr ::System::Object*& __cordl_internal_get__UPDGNS();

  constexpr ::System::Object* const& __cordl_internal_get__XDRNS() const;

  constexpr ::System::Object*& __cordl_internal_get__XDRNS();

  constexpr ::System::Object* const& __cordl_internal_get__XDR_SCHEMA() const;

  constexpr ::System::Object*& __cordl_internal_get__XDR_SCHEMA();

  constexpr ::System::Object* const& __cordl_internal_get__XSDNS() const;

  constexpr ::System::Object*& __cordl_internal_get__XSDNS();

  constexpr ::System::Object* const& __cordl_internal_get__XSD_SCHEMA() const;

  constexpr ::System::Object*& __cordl_internal_get__XSD_SCHEMA();

  constexpr ::System::Object* const& __cordl_internal_get__XSD_XMLNS_NS() const;

  constexpr ::System::Object*& __cordl_internal_get__XSD_XMLNS_NS();

  constexpr ::System::Collections::Stack* const& __cordl_internal_get__childRowsStack() const;

  constexpr ::System::Collections::Stack*& __cordl_internal_get__childRowsStack();

  constexpr ::System::Xml::XmlReader* const& __cordl_internal_get__dataReader() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get__dataReader();

  constexpr ::System::Data::DataSet* const& __cordl_internal_get__dataSet() const;

  constexpr ::System::Data::DataSet*& __cordl_internal_get__dataSet();

  constexpr ::System::Data::DataTable* const& __cordl_internal_get__dataTable() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__dataTable();

  constexpr bool const& __cordl_internal_get__fIsXdr() const;

  constexpr bool& __cordl_internal_get__fIsXdr();

  constexpr bool const& __cordl_internal_get__fromInference() const;

  constexpr bool& __cordl_internal_get__fromInference();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__htableExcludedNS() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__htableExcludedNS();

  constexpr bool const& __cordl_internal_get__ignoreSchema() const;

  constexpr bool& __cordl_internal_get__ignoreSchema();

  constexpr bool const& __cordl_internal_get__isDiffgram() const;

  constexpr bool& __cordl_internal_get__isDiffgram();

  constexpr bool const& __cordl_internal_get__isTableLevel() const;

  constexpr bool& __cordl_internal_get__isTableLevel();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__nodeToRowMap() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get__nodeToRowMap();

  constexpr ::System::Data::XmlToDatasetMap* const& __cordl_internal_get__nodeToSchemaMap() const;

  constexpr ::System::Data::XmlToDatasetMap*& __cordl_internal_get__nodeToSchemaMap();

  constexpr ::System::Xml::XmlElement* const& __cordl_internal_get__topMostNode() const;

  constexpr ::System::Xml::XmlElement*& __cordl_internal_get__topMostNode();

  constexpr void __cordl_internal_set__DFFNS(::System::Object* value);

  constexpr void __cordl_internal_set__DIFFID(::System::Object* value);

  constexpr void __cordl_internal_set__HASCHANGES(::System::Object* value);

  constexpr void __cordl_internal_set__MSDNS(::System::Object* value);

  constexpr void __cordl_internal_set__ROWORDER(::System::Object* value);

  constexpr void __cordl_internal_set__SQL_SYNC(::System::Object* value);

  constexpr void __cordl_internal_set__UPDGNS(::System::Object* value);

  constexpr void __cordl_internal_set__XDRNS(::System::Object* value);

  constexpr void __cordl_internal_set__XDR_SCHEMA(::System::Object* value);

  constexpr void __cordl_internal_set__XSDNS(::System::Object* value);

  constexpr void __cordl_internal_set__XSD_SCHEMA(::System::Object* value);

  constexpr void __cordl_internal_set__XSD_XMLNS_NS(::System::Object* value);

  constexpr void __cordl_internal_set__childRowsStack(::System::Collections::Stack* value);

  constexpr void __cordl_internal_set__dataReader(::System::Xml::XmlReader* value);

  constexpr void __cordl_internal_set__dataSet(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__dataTable(::System::Data::DataTable* value);

  constexpr void __cordl_internal_set__fIsXdr(bool value);

  constexpr void __cordl_internal_set__fromInference(bool value);

  constexpr void __cordl_internal_set__htableExcludedNS(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__ignoreSchema(bool value);

  constexpr void __cordl_internal_set__isDiffgram(bool value);

  constexpr void __cordl_internal_set__isTableLevel(bool value);

  constexpr void __cordl_internal_set__nodeToRowMap(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set__nodeToSchemaMap(::System::Data::XmlToDatasetMap* value);

  constexpr void __cordl_internal_set__topMostNode(::System::Xml::XmlElement* value);

  /// @brief Method .ctor, addr 0x5e4bf38, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* dataset, bool IsXdr, bool ignoreSchema);

  /// @brief Method .ctor, addr 0x5e4bfc8, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* dataset, bool IsXdr, ::System::Xml::XmlElement* topNode, bool ignoreSchema);

  /// @brief Method .ctor, addr 0x5e4c094, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* datatable, bool IsXdr, bool ignoreSchema);

  /// @brief Method .ctor, addr 0x5e4c130, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* datatable, bool IsXdr, ::System::Xml::XmlElement* topNode, bool ignoreSchema);

  /// @brief Method get_FromInference, addr 0x5e4c208, size 0x8, virtual false, abstract: false, final false
  inline bool get_FromInference();

  /// @brief Method set_FromInference, addr 0x5e4c210, size 0x8, virtual false, abstract: false, final false
  inline void set_FromInference(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDataLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDataLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDataLoader(XmlDataLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDataLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDataLoader(XmlDataLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13840 };

  /// @brief Field _dataSet, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataSet* ____dataSet;

  /// @brief Field _nodeToSchemaMap, offset: 0x18, size: 0x8, def value: None
  ::System::Data::XmlToDatasetMap* ____nodeToSchemaMap;

  /// @brief Field _nodeToRowMap, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____nodeToRowMap;

  /// @brief Field _childRowsStack, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Stack* ____childRowsStack;

  /// @brief Field _htableExcludedNS, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Hashtable* ____htableExcludedNS;

  /// @brief Field _fIsXdr, offset: 0x38, size: 0x1, def value: None
  bool ____fIsXdr;

  /// @brief Field _isDiffgram, offset: 0x39, size: 0x1, def value: None
  bool ____isDiffgram;

  /// @brief Field _topMostNode, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::XmlElement* ____topMostNode;

  /// @brief Field _ignoreSchema, offset: 0x48, size: 0x1, def value: None
  bool ____ignoreSchema;

  /// @brief Field _dataTable, offset: 0x50, size: 0x8, def value: None
  ::System::Data::DataTable* ____dataTable;

  /// @brief Field _isTableLevel, offset: 0x58, size: 0x1, def value: None
  bool ____isTableLevel;

  /// @brief Field _fromInference, offset: 0x59, size: 0x1, def value: None
  bool ____fromInference;

  /// @brief Field _dataReader, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::XmlReader* ____dataReader;

  /// @brief Field _XSD_XMLNS_NS, offset: 0x68, size: 0x8, def value: None
  ::System::Object* ____XSD_XMLNS_NS;

  /// @brief Field _XDR_SCHEMA, offset: 0x70, size: 0x8, def value: None
  ::System::Object* ____XDR_SCHEMA;

  /// @brief Field _XDRNS, offset: 0x78, size: 0x8, def value: None
  ::System::Object* ____XDRNS;

  /// @brief Field _SQL_SYNC, offset: 0x80, size: 0x8, def value: None
  ::System::Object* ____SQL_SYNC;

  /// @brief Field _UPDGNS, offset: 0x88, size: 0x8, def value: None
  ::System::Object* ____UPDGNS;

  /// @brief Field _XSD_SCHEMA, offset: 0x90, size: 0x8, def value: None
  ::System::Object* ____XSD_SCHEMA;

  /// @brief Field _XSDNS, offset: 0x98, size: 0x8, def value: None
  ::System::Object* ____XSDNS;

  /// @brief Field _DFFNS, offset: 0xa0, size: 0x8, def value: None
  ::System::Object* ____DFFNS;

  /// @brief Field _MSDNS, offset: 0xa8, size: 0x8, def value: None
  ::System::Object* ____MSDNS;

  /// @brief Field _DIFFID, offset: 0xb0, size: 0x8, def value: None
  ::System::Object* ____DIFFID;

  /// @brief Field _HASCHANGES, offset: 0xb8, size: 0x8, def value: None
  ::System::Object* ____HASCHANGES;

  /// @brief Field _ROWORDER, offset: 0xc0, size: 0x8, def value: None
  ::System::Object* ____ROWORDER;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::XmlDataLoader, ____dataSet) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____nodeToSchemaMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____nodeToRowMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____childRowsStack) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____htableExcludedNS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____fIsXdr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____isDiffgram) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____topMostNode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____ignoreSchema) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____dataTable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____isTableLevel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____fromInference) == 0x59, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____dataReader) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____XSD_XMLNS_NS) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____XDR_SCHEMA) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____XDRNS) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____SQL_SYNC) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____UPDGNS) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____XSD_SCHEMA) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____XSDNS) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____DFFNS) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____MSDNS) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____DIFFID) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____HASCHANGES) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Data::XmlDataLoader, ____ROWORDER) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::XmlDataLoader, 0xc8>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::XmlDataLoader);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlDataLoader*, "System.Data", "XmlDataLoader");
