#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaSet)
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Object;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Collections {
class SortedList;
}
namespace System::Xml::Schema {
class XmlSchemaCompilationSettings;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Schema {
class ValidationEventArgs;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaSet);
// Type: System.Xml.Schema::XmlSchemaSet
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11736))
// CS Name: ::System.Xml.Schema::XmlSchemaSet*
class CORDL_TYPE XmlSchemaSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field nameTable, offset 0x10, size 0x8
  __declspec(property(get = __get_nameTable, put = __set_nameTable))::System::Xml::XmlNameTable* nameTable;

  /// @brief Field schemas, offset 0x18, size 0x8
  __declspec(property(get = __get_schemas, put = __set_schemas))::System::Collections::SortedList* schemas;

  /// @brief Field internalEventHandler, offset 0x20, size 0x8
  __declspec(property(get = __get_internalEventHandler, put = __set_internalEventHandler))::System::Xml::Schema::ValidationEventHandler* internalEventHandler;

  /// @brief Field eventHandler, offset 0x28, size 0x8
  __declspec(property(get = __get_eventHandler, put = __set_eventHandler))::System::Xml::Schema::ValidationEventHandler* eventHandler;

  /// @brief Field schemaLocations, offset 0x30, size 0x8
  __declspec(property(get = __get_schemaLocations, put = __set_schemaLocations))::System::Collections::Hashtable* schemaLocations;

  /// @brief Field chameleonSchemas, offset 0x38, size 0x8
  __declspec(property(get = __get_chameleonSchemas, put = __set_chameleonSchemas))::System::Collections::Hashtable* chameleonSchemas;

  /// @brief Field targetNamespaces, offset 0x40, size 0x8
  __declspec(property(get = __get_targetNamespaces, put = __set_targetNamespaces))::System::Collections::Hashtable* targetNamespaces;

  /// @brief Field compileAll, offset 0x48, size 0x1
  __declspec(property(get = __get_compileAll, put = __set_compileAll)) bool compileAll;

  /// @brief Field cachedCompiledInfo, offset 0x50, size 0x8
  __declspec(property(get = __get_cachedCompiledInfo, put = __set_cachedCompiledInfo))::System::Xml::Schema::SchemaInfo* cachedCompiledInfo;

  /// @brief Field readerSettings, offset 0x58, size 0x8
  __declspec(property(get = __get_readerSettings, put = __set_readerSettings))::System::Xml::XmlReaderSettings* readerSettings;

  /// @brief Field compilationSettings, offset 0x60, size 0x8
  __declspec(property(get = __get_compilationSettings, put = __set_compilationSettings))::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings;

  constexpr ::System::Xml::XmlNameTable*& __get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __get_nameTable() const;

  constexpr void __set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr ::System::Collections::SortedList*& __get_schemas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& __get_schemas() const;

  constexpr void __set_schemas(::System::Collections::SortedList* value);

  constexpr ::System::Xml::Schema::ValidationEventHandler*& __get_internalEventHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ValidationEventHandler*> const& __get_internalEventHandler() const;

  constexpr void __set_internalEventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  constexpr ::System::Xml::Schema::ValidationEventHandler*& __get_eventHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ValidationEventHandler*> const& __get_eventHandler() const;

  constexpr void __set_eventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  constexpr ::System::Collections::Hashtable*& __get_schemaLocations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_schemaLocations() const;

  constexpr void __set_schemaLocations(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::Hashtable*& __get_chameleonSchemas();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_chameleonSchemas() const;

  constexpr void __set_chameleonSchemas(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::Hashtable*& __get_targetNamespaces();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_targetNamespaces() const;

  constexpr void __set_targetNamespaces(::System::Collections::Hashtable* value);

  constexpr bool& __get_compileAll();

  constexpr bool const& __get_compileAll() const;

  constexpr void __set_compileAll(bool value);

  constexpr ::System::Xml::Schema::SchemaInfo*& __get_cachedCompiledInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaInfo*> const& __get_cachedCompiledInfo() const;

  constexpr void __set_cachedCompiledInfo(::System::Xml::Schema::SchemaInfo* value);

  constexpr ::System::Xml::XmlReaderSettings*& __get_readerSettings();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReaderSettings*> const& __get_readerSettings() const;

  constexpr void __set_readerSettings(::System::Xml::XmlReaderSettings* value);

  constexpr ::System::Xml::Schema::XmlSchemaCompilationSettings*& __get_compilationSettings();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaCompilationSettings*> const& __get_compilationSettings() const;

  constexpr void __set_compilationSettings(::System::Xml::Schema::XmlSchemaCompilationSettings* value);

  static inline ::System::Xml::Schema::XmlSchemaSet* New_ctor();

  /// @brief Method .ctor, addr 0x28c8db0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::Schema::XmlSchemaSet* New_ctor(::System::Xml::XmlNameTable* nameTable);

  /// @brief Method .ctor, addr 0x28c8e14, size 0x288, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nameTable);

  /// @brief Method InternalValidationCallback, addr 0x28c909c, size 0x44, virtual false, abstract: false, final false
  inline void InternalValidationCallback(::System::Object* sender, ::System::Xml::Schema::ValidationEventArgs* e);

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaSet(XmlSchemaSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaSet(XmlSchemaSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaSet();

public:
  /// @brief Field nameTable, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field schemas, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::SortedList* ___schemas;

  /// @brief Field internalEventHandler, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::ValidationEventHandler* ___internalEventHandler;

  /// @brief Field eventHandler, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::ValidationEventHandler* ___eventHandler;

  /// @brief Field schemaLocations, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___schemaLocations;

  /// @brief Field chameleonSchemas, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___chameleonSchemas;

  /// @brief Field targetNamespaces, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___targetNamespaces;

  /// @brief Field compileAll, offset: 0x48, size: 0x1, def value: None
  bool ___compileAll;

  /// @brief Field cachedCompiledInfo, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaInfo* ___cachedCompiledInfo;

  /// @brief Field readerSettings, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::XmlReaderSettings* ___readerSettings;

  /// @brief Field compilationSettings, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaCompilationSettings* ___compilationSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaSet, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___nameTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___schemas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___internalEventHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___eventHandler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___schemaLocations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___chameleonSchemas) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___targetNamespaces) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___compileAll) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___cachedCompiledInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___readerSettings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaSet, ___compilationSettings) == 0x60, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaSet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaSet*, "System.Xml.Schema", "XmlSchemaSet");
