#pragma once
// IWYU pragma private; include "System/Xml/Schema/BaseProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseProcessor)
namespace System::Xml::Schema {
class SchemaNames;
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
struct XmlSeverityType;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml::Schema {
class BaseProcessor;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::BaseProcessor);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.BaseProcessor
class CORDL_TYPE BaseProcessor : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CompilationSettings)) ::System::Xml::Schema::XmlSchemaCompilationSettings* CompilationSettings;

  __declspec(property(get = get_EventHandler)) ::System::Xml::Schema::ValidationEventHandler* EventHandler;

  __declspec(property(get = get_HasErrors)) bool HasErrors;

  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  /// @brief Field NsXml, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXml, put = __cordl_internal_set_NsXml)) ::StringW NsXml;

  __declspec(property(get = get_SchemaNames)) ::System::Xml::Schema::SchemaNames* SchemaNames;

  /// @brief Field compilationSettings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_compilationSettings, put = __cordl_internal_set_compilationSettings)) ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings;

  /// @brief Field errorCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_errorCount, put = __cordl_internal_set_errorCount)) int32_t errorCount;

  /// @brief Field eventHandler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_eventHandler, put = __cordl_internal_set_eventHandler)) ::System::Xml::Schema::ValidationEventHandler* eventHandler;

  /// @brief Field nameTable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable)) ::System::Xml::XmlNameTable* nameTable;

  /// @brief Field schemaNames, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaNames, put = __cordl_internal_set_schemaNames)) ::System::Xml::Schema::SchemaNames* schemaNames;

  /// @brief Method AddToTable, addr 0x4395e2c, size 0x460, virtual false, abstract: false, final false
  inline void AddToTable(::System::Xml::Schema::XmlSchemaObjectTable* table, ::System::Xml::XmlQualifiedName* qname, ::System::Xml::Schema::XmlSchemaObject* item);

  /// @brief Method IsValidAttributeGroupRedefine, addr 0x439628c, size 0x128, virtual false, abstract: false, final false
  inline bool IsValidAttributeGroupRedefine(::System::Xml::Schema::XmlSchemaObject* existingObject, ::System::Xml::Schema::XmlSchemaObject* item, ::System::Xml::Schema::XmlSchemaObjectTable* table);

  /// @brief Method IsValidGroupRedefine, addr 0x43964dc, size 0x114, virtual false, abstract: false, final false
  inline bool IsValidGroupRedefine(::System::Xml::Schema::XmlSchemaObject* existingObject, ::System::Xml::Schema::XmlSchemaObject* item, ::System::Xml::Schema::XmlSchemaObjectTable* table);

  /// @brief Method IsValidTypeRedefine, addr 0x43963b4, size 0x128, virtual false, abstract: false, final false
  inline bool IsValidTypeRedefine(::System::Xml::Schema::XmlSchemaObject* existingObject, ::System::Xml::Schema::XmlSchemaObject* item, ::System::Xml::Schema::XmlSchemaObjectTable* table);

  static inline ::System::Xml::Schema::BaseProcessor* New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                               ::System::Xml::Schema::ValidationEventHandler* eventHandler);

  static inline ::System::Xml::Schema::BaseProcessor* New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                               ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings);

  /// @brief Method SendValidationEvent, addr 0x439688c, size 0xbc, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException, ::System::Xml::Schema::XmlSchemaObject* source);

  /// @brief Method SendValidationEvent, addr 0x43965f0, size 0x88, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::StringW msg, ::System::Xml::Schema::XmlSchemaObject* source);

  /// @brief Method SendValidationEvent, addr 0x4396ac0, size 0x8c, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::StringW msg, ::System::Xml::Schema::XmlSchemaObject* source, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SendValidationEvent, addr 0x43967b8, size 0xd4, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::StringW msg1, ::StringW msg2, ::System::Xml::Schema::XmlSchemaObject* source);

  /// @brief Method SendValidationEvent, addr 0x4396948, size 0xec, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::StringW msg1, ::StringW msg2, ::StringW sourceUri, int32_t lineNumber, int32_t linePosition);

  /// @brief Method SendValidationEvent, addr 0x4396678, size 0x78, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::System::Xml::Schema::XmlSchemaObject* source);

  /// @brief Method SendValidationEvent, addr 0x4396a34, size 0x84, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::System::Xml::Schema::XmlSchemaObject* source, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SendValidationEvent, addr 0x4396ab8, size 0x8, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e);

  /// @brief Method SendValidationEvent, addr 0x43966f0, size 0xc8, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SendValidationEventNoThrow, addr 0x4396b4c, size 0xa8, virtual false, abstract: false, final false
  inline void SendValidationEventNoThrow(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity);

  constexpr ::StringW const& __cordl_internal_get_NsXml() const;

  constexpr ::StringW& __cordl_internal_get_NsXml();

  constexpr ::System::Xml::Schema::XmlSchemaCompilationSettings* const& __cordl_internal_get_compilationSettings() const;

  constexpr ::System::Xml::Schema::XmlSchemaCompilationSettings*& __cordl_internal_get_compilationSettings();

  constexpr int32_t const& __cordl_internal_get_errorCount() const;

  constexpr int32_t& __cordl_internal_get_errorCount();

  constexpr ::System::Xml::Schema::ValidationEventHandler* const& __cordl_internal_get_eventHandler() const;

  constexpr ::System::Xml::Schema::ValidationEventHandler*& __cordl_internal_get_eventHandler();

  constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_nameTable() const;

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::System::Xml::Schema::SchemaNames* const& __cordl_internal_get_schemaNames() const;

  constexpr ::System::Xml::Schema::SchemaNames*& __cordl_internal_get_schemaNames();

  constexpr void __cordl_internal_set_NsXml(::StringW value);

  constexpr void __cordl_internal_set_compilationSettings(::System::Xml::Schema::XmlSchemaCompilationSettings* value);

  constexpr void __cordl_internal_set_errorCount(int32_t value);

  constexpr void __cordl_internal_set_eventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_schemaNames(::System::Xml::Schema::SchemaNames* value);

  /// @brief Method .ctor, addr 0x4395c80, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventHandler);

  /// @brief Method .ctor, addr 0x4395d04, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventHandler,
                    ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings);

  /// @brief Method get_CompilationSettings, addr 0x4395e14, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaCompilationSettings* get_CompilationSettings();

  /// @brief Method get_EventHandler, addr 0x4395e0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::ValidationEventHandler* get_EventHandler();

  /// @brief Method get_HasErrors, addr 0x4395e1c, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasErrors();

  /// @brief Method get_NameTable, addr 0x4395d98, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_SchemaNames, addr 0x4395da0, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaNames* get_SchemaNames();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseProcessor(BaseProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseProcessor(BaseProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7482 };

  /// @brief Field nameTable, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field schemaNames, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaNames* ___schemaNames;

  /// @brief Field eventHandler, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::ValidationEventHandler* ___eventHandler;

  /// @brief Field compilationSettings, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaCompilationSettings* ___compilationSettings;

  /// @brief Field errorCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___errorCount;

  /// @brief Field NsXml, offset: 0x38, size: 0x8, def value: None
  ::StringW ___NsXml;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::BaseProcessor, ___nameTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseProcessor, ___schemaNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseProcessor, ___eventHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseProcessor, ___compilationSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseProcessor, ___errorCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseProcessor, ___NsXml) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::BaseProcessor, 0x40>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::BaseProcessor);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::BaseProcessor*, "System.Xml.Schema", "BaseProcessor");
