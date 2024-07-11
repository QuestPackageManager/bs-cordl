#pragma once
// IWYU pragma private; include "System/Xml/Schema/XdrValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__BaseValidator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XdrValidator)
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Schema {
class BaseValidator;
}
namespace System::Xml::Schema {
class IdRefNode;
}
namespace System::Xml::Schema {
class Parser;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml::Schema {
class SchemaElementDecl;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Xml::Schema {
class XmlSchemaCollection;
}
namespace System::Xml {
class HWStack;
}
namespace System::Xml {
class IValidationEventHandling;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System::Xml {
class XmlValidatingReaderImpl;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class XdrValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XdrValidator);
// Type: System.Xml.Schema::XdrValidator
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XdrValidator*
class CORDL_TYPE XdrValidator : public ::System::Xml::Schema::BaseValidator {
public:
  // Declarations
  __declspec(property(get = get_HasSchema)) bool HasSchema;

  /// @brief Field IDs, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_IDs, put = __cordl_internal_set_IDs))::System::Collections::Hashtable* IDs;

  __declspec(property(get = get_IsInlineSchemaStarted)) bool IsInlineSchemaStarted;

  __declspec(property(get = get_PreserveWhitespace)) bool PreserveWhitespace;

  /// @brief Field attPresence, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_attPresence, put = __cordl_internal_set_attPresence))::System::Collections::Hashtable* attPresence;

  /// @brief Field idRefListHead, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_idRefListHead, put = __cordl_internal_set_idRefListHead))::System::Xml::Schema::IdRefNode* idRefListHead;

  /// @brief Field inlineSchemaParser, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_inlineSchemaParser, put = __cordl_internal_set_inlineSchemaParser))::System::Xml::Schema::Parser* inlineSchemaParser;

  /// @brief Field isProcessContents, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_isProcessContents, put = __cordl_internal_set_isProcessContents)) bool isProcessContents;

  /// @brief Field name, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::System::Xml::XmlQualifiedName* name;

  /// @brief Field nsManager, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_nsManager, put = __cordl_internal_set_nsManager))::System::Xml::XmlNamespaceManager* nsManager;

  /// @brief Field validationStack, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_validationStack, put = __cordl_internal_set_validationStack))::System::Xml::HWStack* validationStack;

  /// @brief Method AddID, addr 0x2e3c74c, size 0x90, virtual false, abstract: false, final false
  inline void AddID(::StringW name, ::System::Object* node);

  /// @brief Method CheckDefaultValue, addr 0x2e377f4, size 0x47c, virtual false, abstract: false, final false
  static inline void CheckDefaultValue(::StringW value, ::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::Schema::SchemaInfo* sinfo, ::System::Xml::XmlNamespaceManager* nsManager,
                                       ::System::Xml::XmlNameTable* NameTable, ::System::Object* sender, ::System::Xml::Schema::ValidationEventHandler* eventhandler, ::StringW baseUri, int32_t lineNo,
                                       int32_t linePos);

  /// @brief Method CheckForwardRefs, addr 0x2e3c8a0, size 0x104, virtual false, abstract: false, final false
  inline void CheckForwardRefs();

  /// @brief Method CheckValue, addr 0x2e3b52c, size 0x5ec, virtual false, abstract: false, final false
  inline void CheckValue(::StringW value, ::System::Xml::Schema::SchemaAttDef* attdef);

  /// @brief Method CompleteValidation, addr 0x2e3c7dc, size 0xc4, virtual true, abstract: false, final false
  inline void CompleteValidation();

  /// @brief Method FindId, addr 0x2e3ca78, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Object* FindId(::StringW name);

  /// @brief Method Init, addr 0x2e39fb0, size 0x1a8, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method LoadSchema, addr 0x2e3bbb4, size 0x194, virtual false, abstract: false, final false
  inline void LoadSchema(::StringW uri);

  /// @brief Method LoadSchemaFromLocation, addr 0x2e3bdf4, size 0x650, virtual false, abstract: false, final false
  inline void LoadSchemaFromLocation(::StringW uri);

  static inline ::System::Xml::Schema::XdrValidator* New_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection,
                                                              ::System::Xml::IValidationEventHandling* eventHandling);

  static inline ::System::Xml::Schema::XdrValidator* New_ctor(::System::Xml::Schema::BaseValidator* validator);

  /// @brief Method Pop, addr 0x2e3bb18, size 0x9c, virtual false, abstract: false, final false
  inline void Pop();

  /// @brief Method ProcessElement, addr 0x2e3aa2c, size 0xa8, virtual false, abstract: false, final false
  inline void ProcessElement();

  /// @brief Method ProcessInlineSchema, addr 0x2e3a38c, size 0x208, virtual false, abstract: false, final false
  inline void ProcessInlineSchema();

  /// @brief Method ProcessTokenizedType, addr 0x2e3c544, size 0x208, virtual false, abstract: false, final false
  inline void ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::StringW name);

  /// @brief Method Push, addr 0x2e3a1f0, size 0xd4, virtual false, abstract: false, final false
  inline void Push(::System::Xml::XmlQualifiedName* elementName);

  /// @brief Method QualifiedName, addr 0x2e3bd48, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* QualifiedName(::StringW name, ::StringW ns);

  /// @brief Method ThoroughGetElementDecl, addr 0x2e3aae0, size 0x314, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaElementDecl* ThoroughGetElementDecl();

  /// @brief Method Validate, addr 0x2e3a2c4, size 0xb8, virtual true, abstract: false, final false
  inline void Validate();

  /// @brief Method ValidateChildElement, addr 0x2e3a8e4, size 0x148, virtual false, abstract: false, final false
  inline void ValidateChildElement();

  /// @brief Method ValidateElement, addr 0x2e3a594, size 0x190, virtual false, abstract: false, final false
  inline void ValidateElement();

  /// @brief Method ValidateEndElement, addr 0x2e3a724, size 0x1c0, virtual false, abstract: false, final false
  inline void ValidateEndElement();

  /// @brief Method ValidateEndStartElement, addr 0x2e3b1d0, size 0x35c, virtual false, abstract: false, final false
  inline void ValidateEndStartElement();

  /// @brief Method ValidateStartElement, addr 0x2e3adf4, size 0x3dc, virtual false, abstract: false, final false
  inline void ValidateStartElement();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_IDs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_IDs() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_attPresence();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_attPresence() const;

  constexpr ::System::Xml::Schema::IdRefNode*& __cordl_internal_get_idRefListHead();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::IdRefNode*> const& __cordl_internal_get_idRefListHead() const;

  constexpr ::System::Xml::Schema::Parser*& __cordl_internal_get_inlineSchemaParser();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::Parser*> const& __cordl_internal_get_inlineSchemaParser() const;

  constexpr bool const& __cordl_internal_get_isProcessContents() const;

  constexpr bool& __cordl_internal_get_isProcessContents();

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_name();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_name() const;

  constexpr ::System::Xml::XmlNamespaceManager*& __cordl_internal_get_nsManager();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamespaceManager*> const& __cordl_internal_get_nsManager() const;

  constexpr ::System::Xml::HWStack*& __cordl_internal_get_validationStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::HWStack*> const& __cordl_internal_get_validationStack() const;

  constexpr void __cordl_internal_set_IDs(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_attPresence(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_idRefListHead(::System::Xml::Schema::IdRefNode* value);

  constexpr void __cordl_internal_set_inlineSchemaParser(::System::Xml::Schema::Parser* value);

  constexpr void __cordl_internal_set_isProcessContents(bool value);

  constexpr void __cordl_internal_set_name(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_nsManager(::System::Xml::XmlNamespaceManager* value);

  constexpr void __cordl_internal_set_validationStack(::System::Xml::HWStack* value);

  /// @brief Method .ctor, addr 0x2e3a158, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection, ::System::Xml::IValidationEventHandling* eventHandling);

  /// @brief Method .ctor, addr 0x2e39f30, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::BaseValidator* validator);

  /// @brief Method get_HasSchema, addr 0x2e3c4e8, size 0x24, virtual false, abstract: false, final false
  inline bool get_HasSchema();

  /// @brief Method get_IsInlineSchemaStarted, addr 0x2e3a37c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsInlineSchemaStarted();

  /// @brief Method get_PreserveWhitespace, addr 0x2e3c50c, size 0x38, virtual true, abstract: false, final false
  inline bool get_PreserveWhitespace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XdrValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XdrValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XdrValidator(XdrValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XdrValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XdrValidator(XdrValidator const&) = delete;

  /// @brief Field validationStack, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::HWStack* ___validationStack;

  /// @brief Field attPresence, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___attPresence;

  /// @brief Field name, offset: 0x90, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___name;

  /// @brief Field nsManager, offset: 0x98, size: 0x8, def value: None
  ::System::Xml::XmlNamespaceManager* ___nsManager;

  /// @brief Field isProcessContents, offset: 0xa0, size: 0x1, def value: None
  bool ___isProcessContents;

  /// @brief Field IDs, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___IDs;

  /// @brief Field idRefListHead, offset: 0xb0, size: 0x8, def value: None
  ::System::Xml::Schema::IdRefNode* ___idRefListHead;

  /// @brief Field inlineSchemaParser, offset: 0xb8, size: 0x8, def value: None
  ::System::Xml::Schema::Parser* ___inlineSchemaParser;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XdrValidator, 0xc0>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrValidator, ___validationStack) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrValidator, ___attPresence) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrValidator, ___name) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrValidator, ___nsManager) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrValidator, ___isProcessContents) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrValidator, ___IDs) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrValidator, ___idRefListHead) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XdrValidator, ___inlineSchemaParser) == 0xb8, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XdrValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XdrValidator*, "System.Xml.Schema", "XdrValidator");
