#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaSet)
namespace System::Collections {
struct DictionaryEntry;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class SortedList;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class SchemaNames;
}
namespace System::Xml::Schema {
class ValidationEventArgs;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml::Schema {
class XmlSchemaCompilationSettings;
}
namespace System::Xml::Schema {
class XmlSchemaException;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml::Schema {
class XmlSchemaSubstitutionGroup;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlResolver;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSet);
// Type: System.Xml.Schema::XmlSchemaSet
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaSet*
class CORDL_TYPE XmlSchemaSet : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CompilationSettings, put = set_CompilationSettings))::System::Xml::Schema::XmlSchemaCompilationSettings* CompilationSettings;

  __declspec(property(get = get_CompiledInfo))::System::Xml::Schema::SchemaInfo* CompiledInfo;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_GlobalAttributes))::System::Xml::Schema::XmlSchemaObjectTable* GlobalAttributes;

  __declspec(property(get = get_GlobalElements))::System::Xml::Schema::XmlSchemaObjectTable* GlobalElements;

  __declspec(property(get = get_GlobalTypes))::System::Xml::Schema::XmlSchemaObjectTable* GlobalTypes;

  __declspec(property(get = get_InternalSyncObject))::System::Object* InternalSyncObject;

  __declspec(property(get = get_IsCompiled)) bool IsCompiled;

  __declspec(property(get = get_ReaderSettings))::System::Xml::XmlReaderSettings* ReaderSettings;

  __declspec(property(get = get_SchemaLocations))::System::Collections::Hashtable* SchemaLocations;

  __declspec(property(get = get_SortedSchemas))::System::Collections::SortedList* SortedSchemas;

  __declspec(property(get = get_SubstitutionGroups))::System::Xml::Schema::XmlSchemaObjectTable* SubstitutionGroups;

  __declspec(property(get = get_TypeExtensions))::System::Xml::Schema::XmlSchemaObjectTable* TypeExtensions;

  __declspec(property(put = set_XmlResolver))::System::Xml::XmlResolver* XmlResolver;

  /// @brief Field attributes, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes))::System::Xml::Schema::XmlSchemaObjectTable* attributes;

  /// @brief Field cachedCompiledInfo, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_cachedCompiledInfo, put = __cordl_internal_set_cachedCompiledInfo))::System::Xml::Schema::SchemaInfo* cachedCompiledInfo;

  /// @brief Field chameleonSchemas, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_chameleonSchemas, put = __cordl_internal_set_chameleonSchemas))::System::Collections::Hashtable* chameleonSchemas;

  /// @brief Field compilationSettings, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_compilationSettings, put = __cordl_internal_set_compilationSettings))::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings;

  /// @brief Field compileAll, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_compileAll, put = __cordl_internal_set_compileAll)) bool compileAll;

  /// @brief Field elements, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_elements, put = __cordl_internal_set_elements))::System::Xml::Schema::XmlSchemaObjectTable* elements;

  /// @brief Field eventHandler, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_eventHandler, put = __cordl_internal_set_eventHandler))::System::Xml::Schema::ValidationEventHandler* eventHandler;

  /// @brief Field internalEventHandler, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_internalEventHandler, put = __cordl_internal_set_internalEventHandler))::System::Xml::Schema::ValidationEventHandler* internalEventHandler;

  /// @brief Field internalSyncObject, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_internalSyncObject, put = __cordl_internal_set_internalSyncObject))::System::Object* internalSyncObject;

  /// @brief Field isCompiled, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isCompiled, put = __cordl_internal_set_isCompiled)) bool isCompiled;

  /// @brief Field nameTable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable))::System::Xml::XmlNameTable* nameTable;

  /// @brief Field readerSettings, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_readerSettings, put = __cordl_internal_set_readerSettings))::System::Xml::XmlReaderSettings* readerSettings;

  /// @brief Field schemaForSchema, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaForSchema, put = __cordl_internal_set_schemaForSchema))::System::Xml::Schema::XmlSchema* schemaForSchema;

  /// @brief Field schemaLocations, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaLocations, put = __cordl_internal_set_schemaLocations))::System::Collections::Hashtable* schemaLocations;

  /// @brief Field schemaNames, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaNames, put = __cordl_internal_set_schemaNames))::System::Xml::Schema::SchemaNames* schemaNames;

  /// @brief Field schemaTypes, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaTypes, put = __cordl_internal_set_schemaTypes))::System::Xml::Schema::XmlSchemaObjectTable* schemaTypes;

  /// @brief Field schemas, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_schemas, put = __cordl_internal_set_schemas))::System::Collections::SortedList* schemas;

  /// @brief Field substitutionGroups, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_substitutionGroups, put = __cordl_internal_set_substitutionGroups))::System::Xml::Schema::XmlSchemaObjectTable* substitutionGroups;

  /// @brief Field targetNamespaces, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_targetNamespaces, put = __cordl_internal_set_targetNamespaces))::System::Collections::Hashtable* targetNamespaces;

  /// @brief Field typeExtensions, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_typeExtensions, put = __cordl_internal_set_typeExtensions))::System::Xml::Schema::XmlSchemaObjectTable* typeExtensions;

  /// @brief Method Add, addr 0x2e3b628, size 0x1ac, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* Add(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method Add, addr 0x2e3b5cc, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* Add(::StringW targetNamespace, ::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method Add, addr 0x2e38f50, size 0x984, virtual false, abstract: false, final false
  inline void Add(::System::Xml::Schema::XmlSchemaSet* schemas);

  /// @brief Method Add, addr 0x2e3eb18, size 0x3a8, virtual false, abstract: false, final false
  inline void Add(::StringW targetNamespace, ::System::Xml::XmlReader* reader, ::System::Collections::Hashtable* validatedNamespaces);

  /// @brief Method AddSchemaToSet, addr 0x2e3e7a4, size 0x374, virtual false, abstract: false, final false
  inline void AddSchemaToSet(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method AddToTable, addr 0x2e3fb9c, size 0x2e4, virtual false, abstract: false, final false
  inline bool AddToTable(::System::Xml::Schema::XmlSchemaObjectTable* table, ::System::Xml::XmlQualifiedName* qname, ::System::Xml::Schema::XmlSchemaObject* item);

  /// @brief Method ClearTables, addr 0x2e3cbd4, size 0x5c, virtual false, abstract: false, final false
  inline void ClearTables();

  /// @brief Method Compile, addr 0x2e3c72c, size 0x4a8, virtual false, abstract: false, final false
  inline void Compile();

  /// @brief Method Contains, addr 0x2e3c6b0, size 0x7c, virtual false, abstract: false, final false
  inline bool Contains(::StringW targetNamespace);

  /// @brief Method CopyFromCompiledSet, addr 0x2e398d4, size 0x1a84, virtual false, abstract: false, final false
  inline void CopyFromCompiledSet(::System::Xml::Schema::XmlSchemaSet* otherSet);

  /// @brief Method CopyTo, addr 0x2e3e614, size 0x16c, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<::System::Xml::Schema::XmlSchema*, ::Array<::System::Xml::Schema::XmlSchema*>*> schemas, int32_t index);

  /// @brief Method FindSchemaByNSAndUrl, addr 0x2e3b358, size 0x274, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* FindSchemaByNSAndUrl(::System::Uri* schemaUri, ::StringW ns,
                                                                ::ArrayW<::System::Collections::DictionaryEntry, ::Array<::System::Collections::DictionaryEntry>*> locationsTable);

  /// @brief Method GetEventHandler, addr 0x2e40030, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::ValidationEventHandler* GetEventHandler();

  /// @brief Method GetResolver, addr 0x2e40014, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlResolver* GetResolver();

  /// @brief Method GetSchemaByUri, addr 0x2e40038, size 0x140, virtual false, abstract: false, final false
  inline bool GetSchemaByUri(::System::Uri* schemaUri, ByRef<::System::Xml::Schema::XmlSchema*> schema);

  /// @brief Method GetSchemaNames, addr 0x2e3fe80, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaNames* GetSchemaNames(::System::Xml::XmlNameTable* nt);

  /// @brief Method GetTargetNamespace, addr 0x2e3c230, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW GetTargetNamespace(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method InternalValidationCallback, addr 0x2e40180, size 0x44, virtual false, abstract: false, final false
  inline void InternalValidationCallback(::System::Object* sender, ::System::Xml::Schema::ValidationEventArgs* e);

  /// @brief Method IsSchemaLoaded, addr 0x2e3eec0, size 0x2bc, virtual false, abstract: false, final false
  inline bool IsSchemaLoaded(::System::Uri* schemaUri, ::StringW targetNamespace, ByRef<::System::Xml::Schema::XmlSchema*> schema);

  static inline ::System::Xml::Schema::XmlSchemaSet* New_ctor();

  static inline ::System::Xml::Schema::XmlSchemaSet* New_ctor(::System::Xml::XmlNameTable* nameTable);

  /// @brief Method ParseSchema, addr 0x2e3f17c, size 0x16c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* ParseSchema(::StringW targetNamespace, ::System::Xml::XmlReader* reader);

  /// @brief Method PreprocessSchema, addr 0x2e3e520, size 0xf4, virtual false, abstract: false, final false
  inline bool PreprocessSchema(ByRef<::System::Xml::Schema::XmlSchema*> schema, ::StringW targetNamespace);

  /// @brief Method ProcessNewSubstitutionGroups, addr 0x2e3f2e8, size 0x4d8, virtual false, abstract: false, final false
  inline void ProcessNewSubstitutionGroups(::System::Xml::Schema::XmlSchemaObjectTable* substitutionGroupsTable, bool resolve);

  /// @brief Method Remove, addr 0x2e3c334, size 0x37c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* Remove(::System::Xml::Schema::XmlSchema* schema, bool forceCompile);

  /// @brief Method RemoveRecursive, addr 0x2e3b7d4, size 0xa5c, virtual false, abstract: false, final false
  inline bool RemoveRecursive(::System::Xml::Schema::XmlSchema* schemaToRemove);

  /// @brief Method RemoveSchemaFromCaches, addr 0x2e3ddc4, size 0x5f8, virtual false, abstract: false, final false
  inline void RemoveSchemaFromCaches(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method RemoveSchemaFromGlobalTables, addr 0x2e3d328, size 0xa9c, virtual false, abstract: false, final false
  inline void RemoveSchemaFromGlobalTables(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method Reprocess, addr 0x2e3cc30, size 0x6f8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchema* Reprocess(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method ResolveSubstitutionGroup, addr 0x2e3f7c0, size 0x3dc, virtual false, abstract: false, final false
  inline void ResolveSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup, ::System::Xml::Schema::XmlSchemaObjectTable* substTable);

  /// @brief Method Schemas, addr 0x2e3e780, size 0x24, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* Schemas();

  /// @brief Method Schemas, addr 0x2e3e3bc, size 0x164, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* Schemas(::StringW targetNamespace);

  /// @brief Method SendValidationEvent, addr 0x2e3c28c, size 0xa8, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method VerifyTables, addr 0x2e3ff28, size 0xc4, virtual false, abstract: false, final false
  inline void VerifyTables();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& __cordl_internal_get_attributes() const;

  constexpr ::System::Xml::Schema::SchemaInfo*& __cordl_internal_get_cachedCompiledInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaInfo*> const& __cordl_internal_get_cachedCompiledInfo() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_chameleonSchemas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_chameleonSchemas() const;

  constexpr ::System::Xml::Schema::XmlSchemaCompilationSettings*& __cordl_internal_get_compilationSettings();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaCompilationSettings*> const& __cordl_internal_get_compilationSettings() const;

  constexpr bool const& __cordl_internal_get_compileAll() const;

  constexpr bool& __cordl_internal_get_compileAll();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_elements();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& __cordl_internal_get_elements() const;

  constexpr ::System::Xml::Schema::ValidationEventHandler*& __cordl_internal_get_eventHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ValidationEventHandler*> const& __cordl_internal_get_eventHandler() const;

  constexpr ::System::Xml::Schema::ValidationEventHandler*& __cordl_internal_get_internalEventHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ValidationEventHandler*> const& __cordl_internal_get_internalEventHandler() const;

  constexpr ::System::Object*& __cordl_internal_get_internalSyncObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_internalSyncObject() const;

  constexpr bool const& __cordl_internal_get_isCompiled() const;

  constexpr bool& __cordl_internal_get_isCompiled();

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __cordl_internal_get_nameTable() const;

  constexpr ::System::Xml::XmlReaderSettings*& __cordl_internal_get_readerSettings();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReaderSettings*> const& __cordl_internal_get_readerSettings() const;

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get_schemaForSchema();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchema*> const& __cordl_internal_get_schemaForSchema() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_schemaLocations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_schemaLocations() const;

  constexpr ::System::Xml::Schema::SchemaNames*& __cordl_internal_get_schemaNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaNames*> const& __cordl_internal_get_schemaNames() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_schemaTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& __cordl_internal_get_schemaTypes() const;

  constexpr ::System::Collections::SortedList*& __cordl_internal_get_schemas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& __cordl_internal_get_schemas() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_substitutionGroups();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& __cordl_internal_get_substitutionGroups() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_targetNamespaces();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_targetNamespaces() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_typeExtensions();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& __cordl_internal_get_typeExtensions() const;

  constexpr void __cordl_internal_set_attributes(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_cachedCompiledInfo(::System::Xml::Schema::SchemaInfo* value);

  constexpr void __cordl_internal_set_chameleonSchemas(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_compilationSettings(::System::Xml::Schema::XmlSchemaCompilationSettings* value);

  constexpr void __cordl_internal_set_compileAll(bool value);

  constexpr void __cordl_internal_set_elements(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_eventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  constexpr void __cordl_internal_set_internalEventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  constexpr void __cordl_internal_set_internalSyncObject(::System::Object* value);

  constexpr void __cordl_internal_set_isCompiled(bool value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_readerSettings(::System::Xml::XmlReaderSettings* value);

  constexpr void __cordl_internal_set_schemaForSchema(::System::Xml::Schema::XmlSchema* value);

  constexpr void __cordl_internal_set_schemaLocations(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_schemaNames(::System::Xml::Schema::SchemaNames* value);

  constexpr void __cordl_internal_set_schemaTypes(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_schemas(::System::Collections::SortedList* value);

  constexpr void __cordl_internal_set_substitutionGroups(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_targetNamespaces(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_typeExtensions(::System::Xml::Schema::XmlSchemaObjectTable* value);

  /// @brief Method .ctor, addr 0x2e388ac, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2e38910, size 0x28c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nameTable);

  /// @brief Method add_ValidationEventHandler, addr 0x2e38b9c, size 0xc8, virtual false, abstract: false, final false
  inline void add_ValidationEventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  /// @brief Method get_CompilationSettings, addr 0x2e38d0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaCompilationSettings* get_CompilationSettings();

  /// @brief Method get_CompiledInfo, addr 0x2e40004, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaInfo* get_CompiledInfo();

  /// @brief Method get_Count, addr 0x2e38d1c, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_GlobalAttributes, addr 0x2e38da8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_GlobalAttributes();

  /// @brief Method get_GlobalElements, addr 0x2e38d40, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_GlobalElements();

  /// @brief Method get_GlobalTypes, addr 0x2e38e10, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_GlobalTypes();

  /// @brief Method get_InternalSyncObject, addr 0x2e38834, size 0x78, virtual false, abstract: false, final false
  inline ::System::Object* get_InternalSyncObject();

  /// @brief Method get_IsCompiled, addr 0x2e38ce8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCompiled();

  /// @brief Method get_ReaderSettings, addr 0x2e4000c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlReaderSettings* get_ReaderSettings();

  /// @brief Method get_SchemaLocations, addr 0x2e38ee0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Hashtable* get_SchemaLocations();

  /// @brief Method get_SortedSchemas, addr 0x2e40178, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::SortedList* get_SortedSchemas();

  /// @brief Method get_SubstitutionGroups, addr 0x2e38e78, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_SubstitutionGroups();

  /// @brief Method get_TypeExtensions, addr 0x2e38ee8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_TypeExtensions();

  /// @brief Method remove_ValidationEventHandler, addr 0x2e38c64, size 0x84, virtual false, abstract: false, final false
  inline void remove_ValidationEventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  /// @brief Method set_CompilationSettings, addr 0x2e38d14, size 0x8, virtual false, abstract: false, final false
  inline void set_CompilationSettings(::System::Xml::Schema::XmlSchemaCompilationSettings* value);

  /// @brief Method set_XmlResolver, addr 0x2e38cf0, size 0x1c, virtual false, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSet(XmlSchemaSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSet(XmlSchemaSet const&) = delete;

  /// @brief Field nameTable, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field schemaNames, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaNames* ___schemaNames;

  /// @brief Field schemas, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::SortedList* ___schemas;

  /// @brief Field internalEventHandler, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::ValidationEventHandler* ___internalEventHandler;

  /// @brief Field eventHandler, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::ValidationEventHandler* ___eventHandler;

  /// @brief Field isCompiled, offset: 0x38, size: 0x1, def value: None
  bool ___isCompiled;

  /// @brief Field schemaLocations, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___schemaLocations;

  /// @brief Field chameleonSchemas, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___chameleonSchemas;

  /// @brief Field targetNamespaces, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___targetNamespaces;

  /// @brief Field compileAll, offset: 0x58, size: 0x1, def value: None
  bool ___compileAll;

  /// @brief Field cachedCompiledInfo, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaInfo* ___cachedCompiledInfo;

  /// @brief Field readerSettings, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::XmlReaderSettings* ___readerSettings;

  /// @brief Field schemaForSchema, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ___schemaForSchema;

  /// @brief Field compilationSettings, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaCompilationSettings* ___compilationSettings;

  /// @brief Field elements, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___elements;

  /// @brief Field attributes, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___attributes;

  /// @brief Field schemaTypes, offset: 0x90, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___schemaTypes;

  /// @brief Field substitutionGroups, offset: 0x98, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___substitutionGroups;

  /// @brief Field typeExtensions, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___typeExtensions;

  /// @brief Field internalSyncObject, offset: 0xa8, size: 0x8, def value: None
  ::System::Object* ___internalSyncObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSet, 0xb0>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___nameTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___schemaNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___schemas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___internalEventHandler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___eventHandler) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___isCompiled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___schemaLocations) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___chameleonSchemas) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___targetNamespaces) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___compileAll) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___cachedCompiledInfo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___readerSettings) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___schemaForSchema) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___compilationSettings) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___elements) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___attributes) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___schemaTypes) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___substitutionGroups) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___typeExtensions) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___internalSyncObject) == 0xa8, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSet*, "System.Xml.Schema", "XmlSchemaSet");
