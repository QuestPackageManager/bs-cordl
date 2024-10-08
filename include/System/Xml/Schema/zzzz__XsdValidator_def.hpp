#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__BaseValidator_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XsdValidator)
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
class XmlSchemaCollection;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml {
class HWStack;
}
namespace System::Xml {
class IValidationEventHandling;
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
class XsdValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XsdValidator);
// Type: System.Xml.Schema::XsdValidator
// SizeInfo { instance_size: 256, native_size: -1, calculated_instance_size: 256, calculated_native_size: 256, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XsdValidator*
class CORDL_TYPE XsdValidator : public ::System::Xml::Schema::BaseValidator {
public:
  // Declarations
  __declspec(property(get = get_HasIdentityConstraints)) bool HasIdentityConstraints;

  __declspec(property(get = get_HasSchema)) bool HasSchema;

  /// @brief Field IDs, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_IDs, put = __cordl_internal_set_IDs)) ::System::Collections::Hashtable* IDs;

  __declspec(property(get = get_IsInlineSchemaStarted)) bool IsInlineSchemaStarted;

  /// @brief Field NsXmlNs, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXmlNs, put = __cordl_internal_set_NsXmlNs)) ::StringW NsXmlNs;

  /// @brief Field NsXs, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXs, put = __cordl_internal_set_NsXs)) ::StringW NsXs;

  /// @brief Field NsXsi, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXsi, put = __cordl_internal_set_NsXsi)) ::StringW NsXsi;

  __declspec(property(get = get_PreserveWhitespace)) bool PreserveWhitespace;

  /// @brief Field XsdSchema, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_XsdSchema, put = __cordl_internal_set_XsdSchema)) ::StringW XsdSchema;

  /// @brief Field XsiNil, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_XsiNil, put = __cordl_internal_set_XsiNil)) ::StringW XsiNil;

  /// @brief Field XsiNoNamespaceSchemaLocation, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_XsiNoNamespaceSchemaLocation, put = __cordl_internal_set_XsiNoNamespaceSchemaLocation)) ::StringW XsiNoNamespaceSchemaLocation;

  /// @brief Field XsiSchemaLocation, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_XsiSchemaLocation, put = __cordl_internal_set_XsiSchemaLocation)) ::StringW XsiSchemaLocation;

  /// @brief Field XsiType, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_XsiType, put = __cordl_internal_set_XsiType)) ::StringW XsiType;

  /// @brief Field attPresence, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_attPresence, put = __cordl_internal_set_attPresence)) ::System::Collections::Hashtable* attPresence;

  /// @brief Field bManageNamespaces, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_bManageNamespaces, put = __cordl_internal_set_bManageNamespaces)) bool bManageNamespaces;

  /// @brief Field dtCDATA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dtCDATA, put = setStaticF_dtCDATA)) ::System::Xml::Schema::XmlSchemaDatatype* dtCDATA;

  /// @brief Field dtQName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dtQName, put = setStaticF_dtQName)) ::System::Xml::Schema::XmlSchemaDatatype* dtQName;

  /// @brief Field dtStringArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dtStringArray, put = setStaticF_dtStringArray)) ::System::Xml::Schema::XmlSchemaDatatype* dtStringArray;

  /// @brief Field idRefListHead, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_idRefListHead, put = __cordl_internal_set_idRefListHead)) ::System::Xml::Schema::IdRefNode* idRefListHead;

  /// @brief Field inlineSchemaParser, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_inlineSchemaParser, put = __cordl_internal_set_inlineSchemaParser)) ::System::Xml::Schema::Parser* inlineSchemaParser;

  /// @brief Field nsManager, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_nsManager, put = __cordl_internal_set_nsManager)) ::System::Xml::XmlNamespaceManager* nsManager;

  /// @brief Field processContents, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_processContents, put = __cordl_internal_set_processContents)) ::System::Xml::Schema::XmlSchemaContentProcessing processContents;

  /// @brief Field startIDConstraint, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_startIDConstraint, put = __cordl_internal_set_startIDConstraint)) int32_t startIDConstraint;

  /// @brief Field validationStack, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_validationStack, put = __cordl_internal_set_validationStack)) ::System::Xml::HWStack* validationStack;

  /// @brief Method AddID, addr 0x428ec28, size 0x90, virtual false, abstract: false, final false
  inline void AddID(::StringW name, ::System::Object* node);

  /// @brief Method AddIdentityConstraints, addr 0x428ecd4, size 0x3e0, virtual false, abstract: false, final false
  inline void AddIdentityConstraints();

  /// @brief Method AttributeIdentityConstraints, addr 0x428e1e0, size 0x2dc, virtual false, abstract: false, final false
  inline void AttributeIdentityConstraints(::StringW name, ::StringW ns, ::System::Object* obj, ::StringW sobj, ::System::Xml::Schema::SchemaAttDef* attdef);

  /// @brief Method CheckForwardRefs, addr 0x428b10c, size 0x104, virtual false, abstract: false, final false
  inline void CheckForwardRefs();

  /// @brief Method CheckValue, addr 0x428cfe4, size 0x464, virtual false, abstract: false, final false
  inline void CheckValue(::StringW value, ::System::Xml::Schema::SchemaAttDef* attdef);

  /// @brief Method CompleteValidation, addr 0x428b108, size 0x4, virtual true, abstract: false, final false
  inline void CompleteValidation();

  /// @brief Method ElementIdentityConstraints, addr 0x428f0b4, size 0x348, virtual false, abstract: false, final false
  inline void ElementIdentityConstraints();

  /// @brief Method EndElementIdentityConstraints, addr 0x428d458, size 0xc44, virtual false, abstract: false, final false
  inline void EndElementIdentityConstraints();

  /// @brief Method FastGetElementDecl, addr 0x428b678, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaElementDecl* FastGetElementDecl(::System::Object* particle);

  /// @brief Method FindId, addr 0x428ecb8, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Object* FindId(::StringW name);

  /// @brief Method Init, addr 0x428a654, size 0x338, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method IsXSDRoot, addr 0x428b3fc, size 0x50, virtual false, abstract: false, final false
  inline bool IsXSDRoot(::StringW localName, ::StringW ns);

  /// @brief Method LoadSchema, addr 0x428ce24, size 0x1c0, virtual false, abstract: false, final false
  inline void LoadSchema(::StringW uri, ::StringW url);

  /// @brief Method LoadSchemaFromLocation, addr 0x428e4bc, size 0x530, virtual false, abstract: false, final false
  inline void LoadSchemaFromLocation(::StringW uri, ::StringW url);

  static inline ::System::Xml::Schema::XsdValidator* New_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection,
                                                              ::System::Xml::IValidationEventHandling* eventHandling);

  static inline ::System::Xml::Schema::XsdValidator* New_ctor(::System::Xml::Schema::BaseValidator* validator);

  /// @brief Method Pop, addr 0x428e09c, size 0xc0, virtual false, abstract: false, final false
  inline void Pop();

  /// @brief Method ProcessElement, addr 0x428b44c, size 0x22c, virtual false, abstract: false, final false
  inline void ProcessElement(::System::Object* particle);

  /// @brief Method ProcessInlineSchema, addr 0x428ab5c, size 0x270, virtual false, abstract: false, final false
  inline void ProcessInlineSchema();

  /// @brief Method ProcessTokenizedType, addr 0x428ea24, size 0x204, virtual false, abstract: false, final false
  inline void ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::StringW name);

  /// @brief Method ProcessXsiAttributes, addr 0x428b754, size 0x7e4, virtual false, abstract: false, final false
  inline void ProcessXsiAttributes(ByRef<::System::Xml::XmlQualifiedName*> xsiType, ByRef<::StringW> xsiNil);

  /// @brief Method Push, addr 0x428a9b0, size 0xe4, virtual false, abstract: false, final false
  inline void Push(::System::Xml::XmlQualifiedName* elementName);

  /// @brief Method ThoroughGetElementDecl, addr 0x428bf38, size 0x3d0, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaElementDecl* ThoroughGetElementDecl(::System::Xml::Schema::SchemaElementDecl* elementDecl, ::System::Xml::XmlQualifiedName* xsiType, ::StringW xsiNil);

  /// @brief Method UnWrapUnion, addr 0x428e15c, size 0x84, virtual false, abstract: false, final false
  inline ::System::Object* UnWrapUnion(::System::Object* typedValue);

  /// @brief Method Validate, addr 0x428aa94, size 0xb8, virtual true, abstract: false, final false
  inline void Validate();

  /// @brief Method ValidateChildElement, addr 0x428b210, size 0x1ec, virtual false, abstract: false, final false
  inline ::System::Object* ValidateChildElement();

  /// @brief Method ValidateElement, addr 0x428adcc, size 0x15c, virtual false, abstract: false, final false
  inline void ValidateElement();

  /// @brief Method ValidateEndElement, addr 0x428af28, size 0x1e0, virtual false, abstract: false, final false
  inline void ValidateEndElement();

  /// @brief Method ValidateEndStartElement, addr 0x428ca40, size 0x3e4, virtual false, abstract: false, final false
  inline void ValidateEndStartElement();

  /// @brief Method ValidateStartElement, addr 0x428c378, size 0x6c8, virtual false, abstract: false, final false
  inline void ValidateStartElement();

  /// @brief Method ValidateStartElementIdentityConstraints, addr 0x428c32c, size 0x4c, virtual false, abstract: false, final false
  inline void ValidateStartElementIdentityConstraints();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_IDs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_IDs() const;

  constexpr ::StringW const& __cordl_internal_get_NsXmlNs() const;

  constexpr ::StringW& __cordl_internal_get_NsXmlNs();

  constexpr ::StringW const& __cordl_internal_get_NsXs() const;

  constexpr ::StringW& __cordl_internal_get_NsXs();

  constexpr ::StringW const& __cordl_internal_get_NsXsi() const;

  constexpr ::StringW& __cordl_internal_get_NsXsi();

  constexpr ::StringW const& __cordl_internal_get_XsdSchema() const;

  constexpr ::StringW& __cordl_internal_get_XsdSchema();

  constexpr ::StringW const& __cordl_internal_get_XsiNil() const;

  constexpr ::StringW& __cordl_internal_get_XsiNil();

  constexpr ::StringW const& __cordl_internal_get_XsiNoNamespaceSchemaLocation() const;

  constexpr ::StringW& __cordl_internal_get_XsiNoNamespaceSchemaLocation();

  constexpr ::StringW const& __cordl_internal_get_XsiSchemaLocation() const;

  constexpr ::StringW& __cordl_internal_get_XsiSchemaLocation();

  constexpr ::StringW const& __cordl_internal_get_XsiType() const;

  constexpr ::StringW& __cordl_internal_get_XsiType();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_attPresence();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_attPresence() const;

  constexpr bool const& __cordl_internal_get_bManageNamespaces() const;

  constexpr bool& __cordl_internal_get_bManageNamespaces();

  constexpr ::System::Xml::Schema::IdRefNode*& __cordl_internal_get_idRefListHead();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::IdRefNode*> const& __cordl_internal_get_idRefListHead() const;

  constexpr ::System::Xml::Schema::Parser*& __cordl_internal_get_inlineSchemaParser();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::Parser*> const& __cordl_internal_get_inlineSchemaParser() const;

  constexpr ::System::Xml::XmlNamespaceManager*& __cordl_internal_get_nsManager();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamespaceManager*> const& __cordl_internal_get_nsManager() const;

  constexpr ::System::Xml::Schema::XmlSchemaContentProcessing const& __cordl_internal_get_processContents() const;

  constexpr ::System::Xml::Schema::XmlSchemaContentProcessing& __cordl_internal_get_processContents();

  constexpr int32_t const& __cordl_internal_get_startIDConstraint() const;

  constexpr int32_t& __cordl_internal_get_startIDConstraint();

  constexpr ::System::Xml::HWStack*& __cordl_internal_get_validationStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::HWStack*> const& __cordl_internal_get_validationStack() const;

  constexpr void __cordl_internal_set_IDs(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_NsXmlNs(::StringW value);

  constexpr void __cordl_internal_set_NsXs(::StringW value);

  constexpr void __cordl_internal_set_NsXsi(::StringW value);

  constexpr void __cordl_internal_set_XsdSchema(::StringW value);

  constexpr void __cordl_internal_set_XsiNil(::StringW value);

  constexpr void __cordl_internal_set_XsiNoNamespaceSchemaLocation(::StringW value);

  constexpr void __cordl_internal_set_XsiSchemaLocation(::StringW value);

  constexpr void __cordl_internal_set_XsiType(::StringW value);

  constexpr void __cordl_internal_set_attPresence(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_bManageNamespaces(bool value);

  constexpr void __cordl_internal_set_idRefListHead(::System::Xml::Schema::IdRefNode* value);

  constexpr void __cordl_internal_set_inlineSchemaParser(::System::Xml::Schema::Parser* value);

  constexpr void __cordl_internal_set_nsManager(::System::Xml::XmlNamespaceManager* value);

  constexpr void __cordl_internal_set_processContents(::System::Xml::Schema::XmlSchemaContentProcessing value);

  constexpr void __cordl_internal_set_startIDConstraint(int32_t value);

  constexpr void __cordl_internal_set_validationStack(::System::Xml::HWStack* value);

  /// @brief Method .ctor, addr 0x428a98c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection, ::System::Xml::IValidationEventHandling* eventHandling);

  /// @brief Method .ctor, addr 0x428a630, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::BaseValidator* validator);

  static inline ::System::Xml::Schema::XmlSchemaDatatype* getStaticF_dtCDATA();

  static inline ::System::Xml::Schema::XmlSchemaDatatype* getStaticF_dtQName();

  static inline ::System::Xml::Schema::XmlSchemaDatatype* getStaticF_dtStringArray();

  /// @brief Method get_HasIdentityConstraints, addr 0x428d448, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasIdentityConstraints();

  /// @brief Method get_HasSchema, addr 0x428c308, size 0x24, virtual false, abstract: false, final false
  inline bool get_HasSchema();

  /// @brief Method get_IsInlineSchemaStarted, addr 0x428ab4c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsInlineSchemaStarted();

  /// @brief Method get_PreserveWhitespace, addr 0x428e9ec, size 0x38, virtual true, abstract: false, final false
  inline bool get_PreserveWhitespace();

  static inline void setStaticF_dtCDATA(::System::Xml::Schema::XmlSchemaDatatype* value);

  static inline void setStaticF_dtQName(::System::Xml::Schema::XmlSchemaDatatype* value);

  static inline void setStaticF_dtStringArray(::System::Xml::Schema::XmlSchemaDatatype* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XsdValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XsdValidator(XsdValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XsdValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XsdValidator(XsdValidator const&) = delete;

  /// @brief Field startIDConstraint, offset: 0x7c, size: 0x4, def value: None
  int32_t ___startIDConstraint;

  /// @brief Field validationStack, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::HWStack* ___validationStack;

  /// @brief Field attPresence, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___attPresence;

  /// @brief Field nsManager, offset: 0x90, size: 0x8, def value: None
  ::System::Xml::XmlNamespaceManager* ___nsManager;

  /// @brief Field bManageNamespaces, offset: 0x98, size: 0x1, def value: None
  bool ___bManageNamespaces;

  /// @brief Field IDs, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___IDs;

  /// @brief Field idRefListHead, offset: 0xa8, size: 0x8, def value: None
  ::System::Xml::Schema::IdRefNode* ___idRefListHead;

  /// @brief Field inlineSchemaParser, offset: 0xb0, size: 0x8, def value: None
  ::System::Xml::Schema::Parser* ___inlineSchemaParser;

  /// @brief Field processContents, offset: 0xb8, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaContentProcessing ___processContents;

  /// @brief Field NsXmlNs, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___NsXmlNs;

  /// @brief Field NsXs, offset: 0xc8, size: 0x8, def value: None
  ::StringW ___NsXs;

  /// @brief Field NsXsi, offset: 0xd0, size: 0x8, def value: None
  ::StringW ___NsXsi;

  /// @brief Field XsiType, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___XsiType;

  /// @brief Field XsiNil, offset: 0xe0, size: 0x8, def value: None
  ::StringW ___XsiNil;

  /// @brief Field XsiSchemaLocation, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___XsiSchemaLocation;

  /// @brief Field XsiNoNamespaceSchemaLocation, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___XsiNoNamespaceSchemaLocation;

  /// @brief Field XsdSchema, offset: 0xf8, size: 0x8, def value: None
  ::StringW ___XsdSchema;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7736 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdValidator, 0x100>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___startIDConstraint) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___validationStack) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___attPresence) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___nsManager) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___bManageNamespaces) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___IDs) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___idRefListHead) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___inlineSchemaParser) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___processContents) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___NsXmlNs) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___NsXs) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___NsXsi) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___XsiType) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___XsiNil) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___XsiSchemaLocation) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___XsiNoNamespaceSchemaLocation) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdValidator, ___XsdSchema) == 0xf8, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XsdValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdValidator*, "System.Xml.Schema", "XsdValidator");
