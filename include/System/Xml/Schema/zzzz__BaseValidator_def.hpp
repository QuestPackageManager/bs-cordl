#pragma once
// IWYU pragma private; include "System/Xml/Schema/BaseValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseValidator)
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class SchemaNames;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml::Schema {
class ValidationState;
}
namespace System::Xml::Schema {
class XmlSchemaCollection;
}
namespace System::Xml::Schema {
class XmlSchemaException;
}
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class IValidationEventHandling;
}
namespace System::Xml {
class PositionInfo;
}
namespace System::Xml {
struct ValidationType;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlResolver;
}
namespace System::Xml {
class XmlValidatingReaderImpl;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml::Schema {
class BaseValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::BaseValidator);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.BaseValidator
class CORDL_TYPE BaseValidator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BaseUri, put = set_BaseUri)) ::System::Uri* BaseUri;

  __declspec(property(put = set_DtdInfo)) ::System::Xml::IDtdInfo* DtdInfo;

  __declspec(property(get = get_EventHandler)) ::System::Xml::Schema::ValidationEventHandler* EventHandler;

  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_PositionInfo)) ::System::Xml::PositionInfo* PositionInfo;

  __declspec(property(get = get_PreserveWhitespace)) bool PreserveWhitespace;

  __declspec(property(get = get_Reader)) ::System::Xml::XmlValidatingReaderImpl* Reader;

  __declspec(property(get = get_SchemaCollection)) ::System::Xml::Schema::XmlSchemaCollection* SchemaCollection;

  __declspec(property(get = get_SchemaInfo)) ::System::Xml::Schema::SchemaInfo* SchemaInfo;

  __declspec(property(get = get_SchemaNames)) ::System::Xml::Schema::SchemaNames* SchemaNames;

  __declspec(property(get = get_XmlResolver, put = set_XmlResolver)) ::System::Xml::XmlResolver* XmlResolver;

  /// @brief Field baseUri, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_baseUri, put = __cordl_internal_set_baseUri)) ::System::Uri* baseUri;

  /// @brief Field checkDatatype, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get_checkDatatype, put = __cordl_internal_set_checkDatatype)) bool checkDatatype;

  /// @brief Field context, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context)) ::System::Xml::Schema::ValidationState* context;

  /// @brief Field elementName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_elementName, put = __cordl_internal_set_elementName)) ::System::Xml::XmlQualifiedName* elementName;

  /// @brief Field eventHandling, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_eventHandling, put = __cordl_internal_set_eventHandling)) ::System::Xml::IValidationEventHandling* eventHandling;

  /// @brief Field hasSibling, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_hasSibling, put = __cordl_internal_set_hasSibling)) bool hasSibling;

  /// @brief Field nameTable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable)) ::System::Xml::XmlNameTable* nameTable;

  /// @brief Field positionInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_positionInfo, put = __cordl_internal_set_positionInfo)) ::System::Xml::PositionInfo* positionInfo;

  /// @brief Field reader, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader)) ::System::Xml::XmlValidatingReaderImpl* reader;

  /// @brief Field schemaCollection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaCollection, put = __cordl_internal_set_schemaCollection)) ::System::Xml::Schema::XmlSchemaCollection* schemaCollection;

  /// @brief Field schemaInfo, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaInfo, put = __cordl_internal_set_schemaInfo)) ::System::Xml::Schema::SchemaInfo* schemaInfo;

  /// @brief Field schemaNames, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaNames, put = __cordl_internal_set_schemaNames)) ::System::Xml::Schema::SchemaNames* schemaNames;

  /// @brief Field textString, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_textString, put = __cordl_internal_set_textString)) ::StringW textString;

  /// @brief Field textValue, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_textValue, put = __cordl_internal_set_textValue)) ::System::Text::StringBuilder* textValue;

  /// @brief Field xmlResolver, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlResolver, put = __cordl_internal_set_xmlResolver)) ::System::Xml::XmlResolver* xmlResolver;

  /// @brief Method CompleteValidation, addr 0x43971cc, size 0x4, virtual true, abstract: false, final false
  inline void CompleteValidation();

  /// @brief Method CreateInstance, addr 0x4397eb0, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::BaseValidator* CreateInstance(::System::Xml::ValidationType valType, ::System::Xml::XmlValidatingReaderImpl* reader,
                                                                     ::System::Xml::Schema::XmlSchemaCollection* schemaCollection, ::System::Xml::IValidationEventHandling* eventHandling,
                                                                     bool processIdentityConstraints);

  /// @brief Method FindId, addr 0x43971d0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* FindId(::StringW name);

  static inline ::System::Xml::Schema::BaseValidator* New_ctor(::System::Xml::Schema::BaseValidator* other);

  static inline ::System::Xml::Schema::BaseValidator* New_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection,
                                                               ::System::Xml::IValidationEventHandling* eventHandling);

  /// @brief Method ProcessEntity, addr 0x4397cbc, size 0x1f4, virtual false, abstract: false, final false
  static inline void ProcessEntity(::System::Xml::Schema::SchemaInfo* sinfo, ::StringW name, ::System::Xml::IValidationEventHandling* eventHandling, ::StringW baseUriStr, int32_t lineNumber,
                                   int32_t linePosition);

  /// @brief Method ProcessEntity, addr 0x4397afc, size 0x1c0, virtual false, abstract: false, final false
  static inline void ProcessEntity(::System::Xml::Schema::SchemaInfo* sinfo, ::StringW name, ::System::Object* sender, ::System::Xml::Schema::ValidationEventHandler* eventhandler, ::StringW baseUri,
                                   int32_t lineNumber, int32_t linePosition);

  /// @brief Method SaveTextValue, addr 0x4397618, size 0x74, virtual false, abstract: false, final false
  inline void SaveTextValue(::StringW value);

  /// @brief Method SendValidationEvent, addr 0x43977c8, size 0x60, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code);

  /// @brief Method SendValidationEvent, addr 0x4397448, size 0xe8, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::StringW arg);

  /// @brief Method SendValidationEvent, addr 0x4397530, size 0xe8, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method SendValidationEvent, addr 0x4397a08, size 0xf4, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SendValidationEvent, addr 0x4397914, size 0xf4, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::StringW msg, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SendValidationEvent, addr 0x4397828, size 0x8, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e);

  /// @brief Method SendValidationEvent, addr 0x4397830, size 0xe4, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method Validate, addr 0x43971c8, size 0x4, virtual true, abstract: false, final false
  inline void Validate();

  /// @brief Method ValidateText, addr 0x43971d8, size 0x270, virtual false, abstract: false, final false
  inline void ValidateText();

  /// @brief Method ValidateWhitespace, addr 0x439768c, size 0x13c, virtual false, abstract: false, final false
  inline void ValidateWhitespace();

  constexpr ::System::Uri* const& __cordl_internal_get_baseUri() const;

  constexpr ::System::Uri*& __cordl_internal_get_baseUri();

  constexpr bool const& __cordl_internal_get_checkDatatype() const;

  constexpr bool& __cordl_internal_get_checkDatatype();

  constexpr ::System::Xml::Schema::ValidationState* const& __cordl_internal_get_context() const;

  constexpr ::System::Xml::Schema::ValidationState*& __cordl_internal_get_context();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_elementName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_elementName();

  constexpr ::System::Xml::IValidationEventHandling* const& __cordl_internal_get_eventHandling() const;

  constexpr ::System::Xml::IValidationEventHandling*& __cordl_internal_get_eventHandling();

  constexpr bool const& __cordl_internal_get_hasSibling() const;

  constexpr bool& __cordl_internal_get_hasSibling();

  constexpr ::System::Xml::XmlNameTable* const& __cordl_internal_get_nameTable() const;

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::System::Xml::PositionInfo* const& __cordl_internal_get_positionInfo() const;

  constexpr ::System::Xml::PositionInfo*& __cordl_internal_get_positionInfo();

  constexpr ::System::Xml::XmlValidatingReaderImpl* const& __cordl_internal_get_reader() const;

  constexpr ::System::Xml::XmlValidatingReaderImpl*& __cordl_internal_get_reader();

  constexpr ::System::Xml::Schema::XmlSchemaCollection* const& __cordl_internal_get_schemaCollection() const;

  constexpr ::System::Xml::Schema::XmlSchemaCollection*& __cordl_internal_get_schemaCollection();

  constexpr ::System::Xml::Schema::SchemaInfo* const& __cordl_internal_get_schemaInfo() const;

  constexpr ::System::Xml::Schema::SchemaInfo*& __cordl_internal_get_schemaInfo();

  constexpr ::System::Xml::Schema::SchemaNames* const& __cordl_internal_get_schemaNames() const;

  constexpr ::System::Xml::Schema::SchemaNames*& __cordl_internal_get_schemaNames();

  constexpr ::StringW const& __cordl_internal_get_textString() const;

  constexpr ::StringW& __cordl_internal_get_textString();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_textValue() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_textValue();

  constexpr ::System::Xml::XmlResolver* const& __cordl_internal_get_xmlResolver() const;

  constexpr ::System::Xml::XmlResolver*& __cordl_internal_get_xmlResolver();

  constexpr void __cordl_internal_set_baseUri(::System::Uri* value);

  constexpr void __cordl_internal_set_checkDatatype(bool value);

  constexpr void __cordl_internal_set_context(::System::Xml::Schema::ValidationState* value);

  constexpr void __cordl_internal_set_elementName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_eventHandling(::System::Xml::IValidationEventHandling* value);

  constexpr void __cordl_internal_set_hasSibling(bool value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_positionInfo(::System::Xml::PositionInfo* value);

  constexpr void __cordl_internal_set_reader(::System::Xml::XmlValidatingReaderImpl* value);

  constexpr void __cordl_internal_set_schemaCollection(::System::Xml::Schema::XmlSchemaCollection* value);

  constexpr void __cordl_internal_set_schemaInfo(::System::Xml::Schema::SchemaInfo* value);

  constexpr void __cordl_internal_set_schemaNames(::System::Xml::Schema::SchemaNames* value);

  constexpr void __cordl_internal_set_textString(::StringW value);

  constexpr void __cordl_internal_set_textValue(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value);

  /// @brief Method .ctor, addr 0x4396f5c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::BaseValidator* other);

  /// @brief Method .ctor, addr 0x4395a78, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection, ::System::Xml::IValidationEventHandling* eventHandling);

  /// @brief Method get_BaseUri, addr 0x4397000, size 0x8, virtual false, abstract: false, final false
  inline ::System::Uri* get_BaseUri();

  /// @brief Method get_EventHandler, addr 0x4397010, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::ValidationEventHandler* get_EventHandler();

  /// @brief Method get_NameTable, addr 0x4396fe0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_PositionInfo, addr 0x4396fe8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::PositionInfo* get_PositionInfo();

  /// @brief Method get_PreserveWhitespace, addr 0x43971c0, size 0x8, virtual true, abstract: false, final false
  inline bool get_PreserveWhitespace();

  /// @brief Method get_Reader, addr 0x4396fd0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlValidatingReaderImpl* get_Reader();

  /// @brief Method get_SchemaCollection, addr 0x4396fd8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaCollection* get_SchemaCollection();

  /// @brief Method get_SchemaInfo, addr 0x43970e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaInfo* get_SchemaInfo();

  /// @brief Method get_SchemaNames, addr 0x4395f5c, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaNames* get_SchemaNames();

  /// @brief Method get_XmlResolver, addr 0x4396ff0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlResolver* get_XmlResolver();

  /// @brief Method set_BaseUri, addr 0x4397008, size 0x8, virtual false, abstract: false, final false
  inline void set_BaseUri(::System::Uri* value);

  /// @brief Method set_DtdInfo, addr 0x43970e8, size 0xd8, virtual false, abstract: false, final false
  inline void set_DtdInfo(::System::Xml::IDtdInfo* value);

  /// @brief Method set_XmlResolver, addr 0x4396ff8, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseValidator(BaseValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseValidator(BaseValidator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7483 };

  /// @brief Field schemaCollection, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaCollection* ___schemaCollection;

  /// @brief Field eventHandling, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::IValidationEventHandling* ___eventHandling;

  /// @brief Field nameTable, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field schemaNames, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaNames* ___schemaNames;

  /// @brief Field positionInfo, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::PositionInfo* ___positionInfo;

  /// @brief Field xmlResolver, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::XmlResolver* ___xmlResolver;

  /// @brief Field baseUri, offset: 0x40, size: 0x8, def value: None
  ::System::Uri* ___baseUri;

  /// @brief Field schemaInfo, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaInfo* ___schemaInfo;

  /// @brief Field reader, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::XmlValidatingReaderImpl* ___reader;

  /// @brief Field elementName, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___elementName;

  /// @brief Field context, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::ValidationState* ___context;

  /// @brief Field textValue, offset: 0x68, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___textValue;

  /// @brief Field textString, offset: 0x70, size: 0x8, def value: None
  ::StringW ___textString;

  /// @brief Field hasSibling, offset: 0x78, size: 0x1, def value: None
  bool ___hasSibling;

  /// @brief Field checkDatatype, offset: 0x79, size: 0x1, def value: None
  bool ___checkDatatype;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___schemaCollection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___eventHandling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___nameTable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___schemaNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___positionInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___xmlResolver) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___baseUri) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___schemaInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___reader) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___elementName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___context) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___textValue) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___textString) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___hasSibling) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::BaseValidator, ___checkDatatype) == 0x79, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::BaseValidator, 0x80>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::BaseValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::BaseValidator*, "System.Xml.Schema", "BaseValidator");
