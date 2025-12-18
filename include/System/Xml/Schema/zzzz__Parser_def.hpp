#pragma once
// IWYU pragma private; include "System/Xml/Schema/Parser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SchemaType_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Parser)
namespace System::Xml::Schema {
class SchemaBuilder;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class SchemaNames;
}
namespace System::Xml::Schema {
struct SchemaType;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class PositionInfo;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlElement;
}
namespace System::Xml {
class XmlEntityReference;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlResolver;
}
// Forward declare root types
namespace System::Xml::Schema {
class Parser;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Parser);
// Dependencies System.Object, System.Xml.Schema.SchemaType, System.Xml.XmlCharType
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Parser
class CORDL_TYPE Parser : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_XdrSchema)) ::System::Xml::Schema::SchemaInfo* XdrSchema;

  __declspec(property(put = set_XmlResolver)) ::System::Xml::XmlResolver* XmlResolver;

  __declspec(property(get = get_XmlSchema)) ::System::Xml::Schema::XmlSchema* XmlSchema;

  /// @brief Field annotationNSManager, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_annotationNSManager, put = __cordl_internal_set_annotationNSManager)) ::System::Xml::XmlNamespaceManager* annotationNSManager;

  /// @brief Field builder, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_builder, put = __cordl_internal_set_builder)) ::System::Xml::Schema::SchemaBuilder* builder;

  /// @brief Field dummyDocument, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_dummyDocument, put = __cordl_internal_set_dummyDocument)) ::System::Xml::XmlDocument* dummyDocument;

  /// @brief Field eventHandler, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_eventHandler, put = __cordl_internal_set_eventHandler)) ::System::Xml::Schema::ValidationEventHandler* eventHandler;

  /// @brief Field isProcessNamespaces, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_isProcessNamespaces, put = __cordl_internal_set_isProcessNamespaces)) bool isProcessNamespaces;

  /// @brief Field markupDepth, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_markupDepth, put = __cordl_internal_set_markupDepth)) int32_t markupDepth;

  /// @brief Field nameTable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable)) ::System::Xml::XmlNameTable* nameTable;

  /// @brief Field namespaceManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaceManager, put = __cordl_internal_set_namespaceManager)) ::System::Xml::XmlNamespaceManager* namespaceManager;

  /// @brief Field parentNode, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_parentNode, put = __cordl_internal_set_parentNode)) ::System::Xml::XmlNode* parentNode;

  /// @brief Field positionInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_positionInfo, put = __cordl_internal_set_positionInfo)) ::System::Xml::PositionInfo* positionInfo;

  /// @brief Field processMarkup, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_processMarkup, put = __cordl_internal_set_processMarkup)) bool processMarkup;

  /// @brief Field reader, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader)) ::System::Xml::XmlReader* reader;

  /// @brief Field schema, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_schema, put = __cordl_internal_set_schema)) ::System::Xml::Schema::XmlSchema* schema;

  /// @brief Field schemaNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaNames, put = __cordl_internal_set_schemaNames)) ::System::Xml::Schema::SchemaNames* schemaNames;

  /// @brief Field schemaType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_schemaType, put = __cordl_internal_set_schemaType)) ::System::Xml::Schema::SchemaType schemaType;

  /// @brief Field schemaXmlDepth, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_schemaXmlDepth, put = __cordl_internal_set_schemaXmlDepth)) int32_t schemaXmlDepth;

  /// @brief Field xdrSchema, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_xdrSchema, put = __cordl_internal_set_xdrSchema)) ::System::Xml::Schema::SchemaInfo* xdrSchema;

  /// @brief Field xmlCharType, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlCharType, put = __cordl_internal_set_xmlCharType)) ::System::Xml::XmlCharType xmlCharType;

  /// @brief Field xmlResolver, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlResolver, put = __cordl_internal_set_xmlResolver)) ::System::Xml::XmlResolver* xmlResolver;

  /// @brief Field xmlns, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlns, put = __cordl_internal_set_xmlns)) ::StringW xmlns;

  /// @brief Method CheckSchemaRoot, addr 0x602b704, size 0x120, virtual false, abstract: false, final false
  inline bool CheckSchemaRoot(::System::Xml::Schema::SchemaType rootType, ::ByRef<::StringW> code);

  /// @brief Method CreateXmlNsAttribute, addr 0x602bff4, size 0x118, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* CreateXmlNsAttribute(::StringW prefix, ::StringW value);

  /// @brief Method FinishParsing, addr 0x602b824, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaType FinishParsing();

  /// @brief Method LoadAttributeNode, addr 0x602be88, size 0x16c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* LoadAttributeNode();

  /// @brief Method LoadElementNode, addr 0x602bab0, size 0x3d8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlElement* LoadElementNode(bool root);

  /// @brief Method LoadEntityReferenceInAttribute, addr 0x602c10c, size 0x1e4, virtual false, abstract: false, final false
  inline ::System::Xml::XmlEntityReference* LoadEntityReferenceInAttribute();

  static inline ::System::Xml::Schema::Parser* New_ctor(::System::Xml::Schema::SchemaType schemaType, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                        ::System::Xml::Schema::ValidationEventHandler* eventHandler);

  /// @brief Method Parse, addr 0x602ac8c, size 0x50, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaType Parse(::System::Xml::XmlReader* reader, ::StringW targetNamespace);

  /// @brief Method ParseReaderNode, addr 0x602b09c, size 0x668, virtual false, abstract: false, final false
  inline bool ParseReaderNode();

  /// @brief Method ProcessAppInfoDocMarkup, addr 0x602b844, size 0x26c, virtual false, abstract: false, final false
  inline void ProcessAppInfoDocMarkup(bool root);

  /// @brief Method StartParsing, addr 0x602acdc, size 0x3c0, virtual false, abstract: false, final false
  inline void StartParsing(::System::Xml::XmlReader* reader, ::StringW targetNamespace);

  constexpr ::System::Xml::XmlNamespaceManager* const& __cordl_internal_get_annotationNSManager() const;

  constexpr ::System::Xml::XmlNamespaceManager*& __cordl_internal_get_annotationNSManager();

  constexpr ::System::Xml::Schema::SchemaBuilder* const& __cordl_internal_get_builder() const;

  constexpr ::System::Xml::Schema::SchemaBuilder*& __cordl_internal_get_builder();

  constexpr ::System::Xml::XmlDocument* const& __cordl_internal_get_dummyDocument() const;

  constexpr ::System::Xml::XmlDocument*& __cordl_internal_get_dummyDocument();

  constexpr ::System::Xml::Schema::ValidationEventHandler* const& __cordl_internal_get_eventHandler() const;

  constexpr ::System::Xml::Schema::ValidationEventHandler*& __cordl_internal_get_eventHandler();

  constexpr bool const& __cordl_internal_get_isProcessNamespaces() const;

  constexpr bool& __cordl_internal_get_isProcessNamespaces();

  constexpr int32_t const& __cordl_internal_get_markupDepth() const;

  constexpr int32_t& __cordl_internal_get_markupDepth();

  constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_nameTable() const;

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::System::Xml::XmlNamespaceManager* const& __cordl_internal_get_namespaceManager() const;

  constexpr ::System::Xml::XmlNamespaceManager*& __cordl_internal_get_namespaceManager();

  constexpr ::System::Xml::XmlNode* const& __cordl_internal_get_parentNode() const;

  constexpr ::System::Xml::XmlNode*& __cordl_internal_get_parentNode();

  constexpr ::System::Xml::PositionInfo* const& __cordl_internal_get_positionInfo() const;

  constexpr ::System::Xml::PositionInfo*& __cordl_internal_get_positionInfo();

  constexpr bool const& __cordl_internal_get_processMarkup() const;

  constexpr bool& __cordl_internal_get_processMarkup();

  constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_reader() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_reader();

  constexpr ::System::Xml::Schema::XmlSchema* const& __cordl_internal_get_schema() const;

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_schema();

  constexpr ::System::Xml::Schema::SchemaNames* const& __cordl_internal_get_schemaNames() const;

  constexpr ::System::Xml::Schema::SchemaNames*& __cordl_internal_get_schemaNames();

  constexpr ::System::Xml::Schema::SchemaType const& __cordl_internal_get_schemaType() const;

  constexpr ::System::Xml::Schema::SchemaType& __cordl_internal_get_schemaType();

  constexpr int32_t const& __cordl_internal_get_schemaXmlDepth() const;

  constexpr int32_t& __cordl_internal_get_schemaXmlDepth();

  constexpr ::System::Xml::Schema::SchemaInfo* const& __cordl_internal_get_xdrSchema() const;

  constexpr ::System::Xml::Schema::SchemaInfo*& __cordl_internal_get_xdrSchema();

  constexpr ::System::Xml::XmlCharType const& __cordl_internal_get_xmlCharType() const;

  constexpr ::System::Xml::XmlCharType& __cordl_internal_get_xmlCharType();

  constexpr ::System::Xml::XmlResolver* const& __cordl_internal_get_xmlResolver() const;

  constexpr ::System::Xml::XmlResolver*& __cordl_internal_get_xmlResolver();

  constexpr ::StringW const& __cordl_internal_get_xmlns() const;

  constexpr ::StringW& __cordl_internal_get_xmlns();

  constexpr void __cordl_internal_set_annotationNSManager(::System::Xml::XmlNamespaceManager* value);

  constexpr void __cordl_internal_set_builder(::System::Xml::Schema::SchemaBuilder* value);

  constexpr void __cordl_internal_set_dummyDocument(::System::Xml::XmlDocument* value);

  constexpr void __cordl_internal_set_eventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  constexpr void __cordl_internal_set_isProcessNamespaces(bool value);

  constexpr void __cordl_internal_set_markupDepth(int32_t value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_namespaceManager(::System::Xml::XmlNamespaceManager* value);

  constexpr void __cordl_internal_set_parentNode(::System::Xml::XmlNode* value);

  constexpr void __cordl_internal_set_positionInfo(::System::Xml::PositionInfo* value);

  constexpr void __cordl_internal_set_processMarkup(bool value);

  constexpr void __cordl_internal_set_reader(::System::Xml::XmlReader* value);

  constexpr void __cordl_internal_set_schema(::System::Xml::Schema::XmlSchema* value);

  constexpr void __cordl_internal_set_schemaNames(::System::Xml::Schema::SchemaNames* value);

  constexpr void __cordl_internal_set_schemaType(::System::Xml::Schema::SchemaType value);

  constexpr void __cordl_internal_set_schemaXmlDepth(int32_t value);

  constexpr void __cordl_internal_set_xdrSchema(::System::Xml::Schema::SchemaInfo* value);

  constexpr void __cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value);

  constexpr void __cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value);

  constexpr void __cordl_internal_set_xmlns(::StringW value);

  /// @brief Method .ctor, addr 0x602abe4, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::SchemaType schemaType, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                    ::System::Xml::Schema::ValidationEventHandler* eventHandler);

  /// @brief Method get_XdrSchema, addr 0x602b83c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaInfo* get_XdrSchema();

  /// @brief Method get_XmlSchema, addr 0x602b82c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* get_XmlSchema();

  /// @brief Method set_XmlResolver, addr 0x602b834, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parser(Parser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parser(Parser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9676 };

  /// @brief Field schemaType, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::Schema::SchemaType ___schemaType;

  /// @brief Field nameTable, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field schemaNames, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaNames* ___schemaNames;

  /// @brief Field eventHandler, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::ValidationEventHandler* ___eventHandler;

  /// @brief Field namespaceManager, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlNamespaceManager* ___namespaceManager;

  /// @brief Field reader, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___reader;

  /// @brief Field positionInfo, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::PositionInfo* ___positionInfo;

  /// @brief Field isProcessNamespaces, offset: 0x48, size: 0x1, def value: None
  bool ___isProcessNamespaces;

  /// @brief Field schemaXmlDepth, offset: 0x4c, size: 0x4, def value: None
  int32_t ___schemaXmlDepth;

  /// @brief Field markupDepth, offset: 0x50, size: 0x4, def value: None
  int32_t ___markupDepth;

  /// @brief Field builder, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaBuilder* ___builder;

  /// @brief Field schema, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ___schema;

  /// @brief Field xdrSchema, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaInfo* ___xdrSchema;

  /// @brief Field xmlResolver, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::XmlResolver* ___xmlResolver;

  /// @brief Field dummyDocument, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::XmlDocument* ___dummyDocument;

  /// @brief Field processMarkup, offset: 0x80, size: 0x1, def value: None
  bool ___processMarkup;

  /// @brief Field parentNode, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___parentNode;

  /// @brief Field annotationNSManager, offset: 0x90, size: 0x8, def value: None
  ::System::Xml::XmlNamespaceManager* ___annotationNSManager;

  /// @brief Field xmlns, offset: 0x98, size: 0x8, def value: None
  ::StringW ___xmlns;

  /// @brief Field xmlCharType, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::XmlCharType ___xmlCharType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::Parser, ___schemaType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___nameTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___schemaNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___eventHandler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___namespaceManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___reader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___positionInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___isProcessNamespaces) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___schemaXmlDepth) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___markupDepth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___builder) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___schema) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___xdrSchema) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___xmlResolver) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___dummyDocument) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___processMarkup) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___parentNode) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___annotationNSManager) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___xmlns) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Parser, ___xmlCharType) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Parser, 0xa8>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Parser);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Parser*, "System.Xml.Schema", "Parser");
