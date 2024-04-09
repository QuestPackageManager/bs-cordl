#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__ValidatorState_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidationFlags_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaValidator)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Schema {
class IdRefNode;
}
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml::Schema {
class SchemaDeclBase;
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
class ValidationState;
}
namespace System::Xml::Schema {
struct ValidatorState;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
class XmlSchemaException;
}
namespace System::Xml::Schema {
class XmlSchemaInfo;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class XmlSchemaValidationException;
}
namespace System::Xml::Schema {
struct XmlSchemaValidationFlags;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System::Xml::Schema {
class XmlValueGetter;
}
namespace System::Xml {
class HWStack;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class IXmlLineInfo;
}
namespace System::Xml {
class IXmlNamespaceResolver;
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
struct XmlTokenizedType;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaValidator);
// Type: System.Xml.Schema::XmlSchemaValidator
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaValidator*
class CORDL_TYPE XmlSchemaValidator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CurrentContentType))::System::Xml::Schema::XmlSchemaContentType CurrentContentType;

  /// @brief Field EmptyAttributeArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyAttributeArray,
                             put = setStaticF_EmptyAttributeArray))::ArrayW<::System::Xml::Schema::XmlSchemaAttribute*, ::Array<::System::Xml::Schema::XmlSchemaAttribute*>*> EmptyAttributeArray;

  /// @brief Field EmptyParticleArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmptyParticleArray,
                             put = setStaticF_EmptyParticleArray))::ArrayW<::System::Xml::Schema::XmlSchemaParticle*, ::Array<::System::Xml::Schema::XmlSchemaParticle*>*> EmptyParticleArray;

  __declspec(property(get = get_HasIdentityConstraints)) bool HasIdentityConstraints;

  __declspec(property(get = get_HasSchema)) bool HasSchema;

  /// @brief Field IDs, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_IDs, put = __cordl_internal_set_IDs))::System::Collections::Hashtable* IDs;

  __declspec(property(put = set_LineInfoProvider))::System::Xml::IXmlLineInfo* LineInfoProvider;

  /// @brief Field MethodNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MethodNames, put = setStaticF_MethodNames))::ArrayW<::StringW, ::Array<::StringW>*> MethodNames;

  /// @brief Field NsXml, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXml, put = __cordl_internal_set_NsXml))::StringW NsXml;

  /// @brief Field NsXmlNs, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXmlNs, put = __cordl_internal_set_NsXmlNs))::StringW NsXmlNs;

  /// @brief Field NsXs, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXs, put = __cordl_internal_set_NsXs))::StringW NsXs;

  /// @brief Field NsXsi, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_NsXsi, put = __cordl_internal_set_NsXsi))::StringW NsXsi;

  __declspec(property(get = get_ProcessIdentityConstraints)) bool ProcessIdentityConstraints;

  __declspec(property(get = get_ProcessSchemaHints)) bool ProcessSchemaHints;

  __declspec(property(get = get_ReportValidationWarnings)) bool ReportValidationWarnings;

  __declspec(property(get = get_SchemaSet))::System::Xml::Schema::XmlSchemaSet* SchemaSet;

  __declspec(property(put = set_SourceUri))::System::Uri* SourceUri;

  __declspec(property(get = get_StrictlyAssessed)) bool StrictlyAssessed;

  /// @brief Field ValidStates, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ValidStates, put = setStaticF_ValidStates)) Il2CppObject* ValidStates;

  __declspec(property(put = set_ValidationEventSender))::System::Object* ValidationEventSender;

  __declspec(property(get = get_ValidationFlags))::System::Xml::Schema::XmlSchemaValidationFlags ValidationFlags;

  __declspec(property(put = set_XmlResolver))::System::Xml::XmlResolver* XmlResolver;

  /// @brief Field attPresence, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_attPresence, put = __cordl_internal_set_attPresence))::System::Collections::Hashtable* attPresence;

  /// @brief Field attrValid, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get_attrValid, put = __cordl_internal_set_attrValid)) bool attrValid;

  /// @brief Field checkEntity, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get_checkEntity, put = __cordl_internal_set_checkEntity)) bool checkEntity;

  /// @brief Field compiledSchemaInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_compiledSchemaInfo, put = __cordl_internal_set_compiledSchemaInfo))::System::Xml::Schema::SchemaInfo* compiledSchemaInfo;

  /// @brief Field context, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_context, put = __cordl_internal_set_context))::System::Xml::Schema::ValidationState* context;

  /// @brief Field contextQName, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_contextQName, put = __cordl_internal_set_contextQName))::System::Xml::XmlQualifiedName* contextQName;

  /// @brief Field currentState, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_currentState, put = __cordl_internal_set_currentState))::System::Xml::Schema::ValidatorState currentState;

  /// @brief Field dtCDATA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dtCDATA, put = setStaticF_dtCDATA))::System::Xml::Schema::XmlSchemaDatatype* dtCDATA;

  /// @brief Field dtQName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dtQName, put = setStaticF_dtQName))::System::Xml::Schema::XmlSchemaDatatype* dtQName;

  /// @brief Field dtStringArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dtStringArray, put = setStaticF_dtStringArray))::System::Xml::Schema::XmlSchemaDatatype* dtStringArray;

  /// @brief Field dtdSchemaInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_dtdSchemaInfo, put = __cordl_internal_set_dtdSchemaInfo))::System::Xml::IDtdInfo* dtdSchemaInfo;

  /// @brief Field dummyPositionInfo, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_dummyPositionInfo, put = __cordl_internal_set_dummyPositionInfo))::System::Xml::IXmlLineInfo* dummyPositionInfo;

  /// @brief Field eventHandler, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_eventHandler, put = __cordl_internal_set_eventHandler))::System::Xml::Schema::ValidationEventHandler* eventHandler;

  /// @brief Field idRefListHead, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_idRefListHead, put = __cordl_internal_set_idRefListHead))::System::Xml::Schema::IdRefNode* idRefListHead;

  /// @brief Field isRoot, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isRoot, put = __cordl_internal_set_isRoot)) bool isRoot;

  /// @brief Field nameTable, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable))::System::Xml::XmlNameTable* nameTable;

  /// @brief Field nsResolver, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_nsResolver, put = __cordl_internal_set_nsResolver))::System::Xml::IXmlNamespaceResolver* nsResolver;

  /// @brief Field partialValidationType, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_partialValidationType, put = __cordl_internal_set_partialValidationType))::System::Xml::Schema::XmlSchemaObject* partialValidationType;

  /// @brief Field positionInfo, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_positionInfo, put = __cordl_internal_set_positionInfo))::System::Xml::IXmlLineInfo* positionInfo;

  /// @brief Field processContents, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_processContents, put = __cordl_internal_set_processContents))::System::Xml::Schema::XmlSchemaContentProcessing processContents;

  /// @brief Field rootHasSchema, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_rootHasSchema, put = __cordl_internal_set_rootHasSchema)) bool rootHasSchema;

  /// @brief Field schemaSet, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaSet, put = __cordl_internal_set_schemaSet))::System::Xml::Schema::XmlSchemaSet* schemaSet;

  /// @brief Field sourceUri, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceUri, put = __cordl_internal_set_sourceUri))::System::Uri* sourceUri;

  /// @brief Field sourceUriString, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_sourceUriString, put = __cordl_internal_set_sourceUriString))::StringW sourceUriString;

  /// @brief Field startIDConstraint, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_startIDConstraint, put = __cordl_internal_set_startIDConstraint)) int32_t startIDConstraint;

  /// @brief Field textValue, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_textValue, put = __cordl_internal_set_textValue))::System::Text::StringBuilder* textValue;

  /// @brief Field validatedNamespaces, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_validatedNamespaces, put = __cordl_internal_set_validatedNamespaces))::System::Collections::Hashtable* validatedNamespaces;

  /// @brief Field validationEventSender, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_validationEventSender, put = __cordl_internal_set_validationEventSender))::System::Object* validationEventSender;

  /// @brief Field validationFlags, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_validationFlags, put = __cordl_internal_set_validationFlags))::System::Xml::Schema::XmlSchemaValidationFlags validationFlags;

  /// @brief Field validationStack, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_validationStack, put = __cordl_internal_set_validationStack))::System::Xml::HWStack* validationStack;

  /// @brief Field wildID, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_wildID, put = __cordl_internal_set_wildID))::System::Xml::Schema::SchemaAttDef* wildID;

  /// @brief Field xmlCharType, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlCharType, put = __cordl_internal_set_xmlCharType))::System::Xml::XmlCharType xmlCharType;

  /// @brief Field xmlResolver, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlResolver, put = __cordl_internal_set_xmlResolver))::System::Xml::XmlResolver* xmlResolver;

  /// @brief Field xsiNilString, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_xsiNilString, put = __cordl_internal_set_xsiNilString))::StringW xsiNilString;

  /// @brief Field xsiNoNamespaceSchemaLocationString, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_xsiNoNamespaceSchemaLocationString, put = __cordl_internal_set_xsiNoNamespaceSchemaLocationString))::StringW xsiNoNamespaceSchemaLocationString;

  /// @brief Field xsiSchemaLocationString, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_xsiSchemaLocationString, put = __cordl_internal_set_xsiSchemaLocationString))::StringW xsiSchemaLocationString;

  /// @brief Field xsiTypeString, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_xsiTypeString, put = __cordl_internal_set_xsiTypeString))::StringW xsiTypeString;

  /// @brief Method AddIdentityConstraints, addr 0x2d29b98, size 0x3f8, virtual false, abstract: false, final false
  inline void AddIdentityConstraints();

  /// @brief Method AddSchema, addr 0x2d210d8, size 0x43c, virtual false, abstract: false, final false
  inline void AddSchema(::System::Xml::Schema::XmlSchema* schema);

  /// @brief Method AddXmlNamespaceSchema, addr 0x2d2a340, size 0x88, virtual false, abstract: false, final false
  inline void AddXmlNamespaceSchema();

  /// @brief Method AttributeIdentityConstraints, addr 0x2d24794, size 0x2a8, virtual false, abstract: false, final false
  inline void AttributeIdentityConstraints(::StringW name, ::StringW ns, ::System::Object* obj, ::StringW sobj, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method BuildElementName, addr 0x2d25198, size 0x12c, virtual false, abstract: false, final false
  static inline ::StringW BuildElementName(::StringW localName, ::StringW ns);

  /// @brief Method BuildElementName, addr 0x2d28e04, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW BuildElementName(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method CheckAttributeValue, addr 0x2d24364, size 0x284, virtual false, abstract: false, final false
  inline ::System::Object* CheckAttributeValue(::System::Object* value, ::System::Xml::Schema::SchemaAttDef* attdef);

  /// @brief Method CheckElementProperties, addr 0x2d23370, size 0xb4, virtual false, abstract: false, final false
  inline void CheckElementProperties();

  /// @brief Method CheckElementValue, addr 0x2d2986c, size 0x258, virtual false, abstract: false, final false
  inline ::System::Object* CheckElementValue(::StringW stringValue);

  /// @brief Method CheckForwardRefs, addr 0x2d26218, size 0xf0, virtual false, abstract: false, final false
  inline void CheckForwardRefs();

  /// @brief Method CheckIsXmlAttribute, addr 0x2d2410c, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaAttDef* CheckIsXmlAttribute(::System::Xml::XmlQualifiedName* attQName);

  /// @brief Method CheckMixedValueConstraint, addr 0x2d27370, size 0xdc, virtual false, abstract: false, final false
  inline ::System::Object* CheckMixedValueConstraint(::StringW elementValue);

  /// @brief Method CheckRequiredAttributes, addr 0x2d24b04, size 0x204, virtual false, abstract: false, final false
  inline void CheckRequiredAttributes(::System::Xml::Schema::SchemaElementDecl* currentElementDecl);

  /// @brief Method CheckStateTransition, addr 0x2d21fe4, size 0x250, virtual false, abstract: false, final false
  inline void CheckStateTransition(::System::Xml::Schema::ValidatorState toState, ::StringW methodName);

  /// @brief Method CheckTokenizedTypes, addr 0x2d245e8, size 0x18c, virtual false, abstract: false, final false
  inline void CheckTokenizedTypes(::System::Xml::Schema::XmlSchemaDatatype* dtype, ::System::Object* typedValue, bool attrValue);

  /// @brief Method CheckXsiTypeAndNil, addr 0x2d22c38, size 0x5f0, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaElementDecl* CheckXsiTypeAndNil(::System::Xml::Schema::SchemaElementDecl* elementDecl, ::StringW xsiType, ::StringW xsiNil, ByRef<bool> declFound);

  /// @brief Method ClearPSVI, addr 0x2d22234, size 0x44, virtual false, abstract: false, final false
  inline void ClearPSVI();

  /// @brief Method CompleteValidationError, addr 0x2d2744c, size 0x4a8, virtual false, abstract: false, final false
  static inline void CompleteValidationError(::System::Xml::Schema::ValidationState* context, ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Object* sender,
                                             ::StringW sourceUri, int32_t lineNo, int32_t linePos, ::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method ElementIdentityConstraints, addr 0x2d29f90, size 0x3b0, virtual false, abstract: false, final false
  inline void ElementIdentityConstraints();

  /// @brief Method ElementValidationError, addr 0x2d29084, size 0x7e8, virtual false, abstract: false, final false
  static inline void ElementValidationError(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ::System::Xml::Schema::ValidationEventHandler* eventHandler,
                                            ::System::Object* sender, ::StringW sourceUri, int32_t lineNo, int32_t linePos, ::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method EndElementIdentityConstraints, addr 0x2d278f4, size 0xd5c, virtual false, abstract: false, final false
  inline void EndElementIdentityConstraints(::System::Object* typedValue, ::StringW stringValue, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method EndValidation, addr 0x2d26124, size 0xf4, virtual false, abstract: false, final false
  inline void EndValidation();

  /// @brief Method EnumerateAny, addr 0x2d2b1a0, size 0x230, virtual false, abstract: false, final false
  static inline void EnumerateAny(::System::Text::StringBuilder* builder, ::StringW namespaces);

  /// @brief Method FastGetElementDecl, addr 0x2d22680, size 0x250, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaElementDecl* FastGetElementDecl(::System::Xml::XmlQualifiedName* elementName, ::System::Object* particle);

  /// @brief Method FindId, addr 0x2d2a838, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Object* FindId(::StringW name);

  /// @brief Method GetConcatenatedValue, addr 0x2d26d88, size 0x20, virtual false, abstract: false, final false
  inline ::StringW GetConcatenatedValue();

  /// @brief Method GetDefaultAttributePrefix, addr 0x2d268b8, size 0x3f0, virtual false, abstract: false, final false
  inline ::StringW GetDefaultAttributePrefix(::StringW attributeNS);

  /// @brief Method GetSchemaElement, addr 0x2d23480, size 0x108, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaElement* GetSchemaElement();

  /// @brief Method GetSubstitutionGroupHead, addr 0x2d28bd8, size 0x22c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaElement* GetSubstitutionGroupHead(::System::Xml::XmlQualifiedName* member);

  /// @brief Method GetTypeName, addr 0x2d29ac4, size 0x68, virtual false, abstract: false, final false
  inline ::StringW GetTypeName(::System::Xml::Schema::SchemaDeclBase* decl);

  /// @brief Method GetUnspecifiedDefaultAttributes, addr 0x2d26308, size 0x5b0, virtual false, abstract: false, final false
  inline void GetUnspecifiedDefaultAttributes(::System::Collections::ArrayList* defaultAttributes, bool createNodeData);

  /// @brief Method Init, addr 0x2d20a1c, size 0x314, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method Initialize, addr 0x2d21860, size 0x160, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method Initialize, addr 0x2d219c0, size 0x2c4, virtual false, abstract: false, final false
  inline void Initialize(::System::Xml::Schema::XmlSchemaObject* partialValidationType);

  /// @brief Method InternalValidateEndElement, addr 0x2d25904, size 0x4f8, virtual false, abstract: false, final false
  inline ::System::Object* InternalValidateEndElement(::System::Xml::Schema::XmlSchemaInfo* schemaInfo, ::System::Object* typedValue);

  /// @brief Method LoadSchema, addr 0x2d28650, size 0x4d4, virtual false, abstract: false, final false
  inline void LoadSchema(::StringW uri, ::StringW url);

  static inline ::System::Xml::Schema::XmlSchemaValidator* New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::XmlSchemaSet* schemas,
                                                                    ::System::Xml::IXmlNamespaceResolver* namespaceResolver, ::System::Xml::Schema::XmlSchemaValidationFlags validationFlags);

  /// @brief Method Pop, addr 0x2d26000, size 0x124, virtual false, abstract: false, final false
  inline void Pop();

  /// @brief Method PrintExpectedElements, addr 0x2d252c4, size 0x3fc, virtual false, abstract: false, final false
  static inline ::StringW PrintExpectedElements(::System::Collections::ArrayList* expected, bool getParticles);

  /// @brief Method PrintNames, addr 0x2d2b024, size 0x17c, virtual false, abstract: false, final false
  static inline ::StringW PrintNames(::System::Collections::ArrayList* expected);

  /// @brief Method PrintNamesWithNS, addr 0x2d2abb4, size 0x470, virtual false, abstract: false, final false
  static inline void PrintNamesWithNS(::System::Collections::ArrayList* expected, ::System::Text::StringBuilder* builder);

  /// @brief Method ProcessEntity, addr 0x2d2a854, size 0x174, virtual false, abstract: false, final false
  inline void ProcessEntity(::StringW name);

  /// @brief Method ProcessSchemaLocations, addr 0x2d228d0, size 0x368, virtual false, abstract: false, final false
  inline void ProcessSchemaLocations(::StringW xsiSchemaLocation, ::StringW xsiNoNamespaceSchemaLocation);

  /// @brief Method ProcessTokenizedType, addr 0x2d2a594, size 0x2a4, virtual false, abstract: false, final false
  inline void ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::StringW name, bool attrValue);

  /// @brief Method Push, addr 0x2d20d30, size 0xf0, virtual false, abstract: false, final false
  inline void Push(::System::Xml::XmlQualifiedName* elementName);

  /// @brief Method QNameString, addr 0x2d250e4, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW QNameString(::StringW localName, ::StringW ns);

  /// @brief Method RecompileSchemaSet, addr 0x2d20eac, size 0xc0, virtual false, abstract: false, final false
  inline void RecompileSchemaSet();

  /// @brief Method Reset, addr 0x2d20e20, size 0x8c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SaveTextValue, addr 0x2d25158, size 0x40, virtual false, abstract: false, final false
  inline void SaveTextValue(::System::Object* value);

  /// @brief Method SendValidationEvent, addr 0x2d29b2c, size 0x60, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code);

  /// @brief Method SendValidationEvent, addr 0x2d23f90, size 0x17c, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::StringW arg);

  /// @brief Method SendValidationEvent, addr 0x2d28e6c, size 0x218, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::StringW arg1, ::StringW arg2);

  /// @brief Method SendValidationEvent, addr 0x2d241d4, size 0x190, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method SendValidationEvent, addr 0x2d216c4, size 0x19c, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException);

  /// @brief Method SendValidationEvent, addr 0x2d2a3c8, size 0x1cc, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SendValidationEvent, addr 0x2d21514, size 0x1b0, virtual false, abstract: false, final false
  inline void SendValidationEvent(::StringW code, ::StringW msg, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SendValidationEvent, addr 0x2d28b24, size 0xb4, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e);

  /// @brief Method SendValidationEvent, addr 0x2d2aaf0, size 0x8, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSchemaValidationException* e);

  /// @brief Method SendValidationEvent, addr 0x2d2a9c8, size 0x11c, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSchemaValidationException* e, ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SendValidationEvent, addr 0x2d2aaf8, size 0xbc, virtual false, abstract: false, final false
  static inline void SendValidationEvent(::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Object* sender, ::System::Xml::Schema::XmlSchemaValidationException* e,
                                         ::System::Xml::Schema::XmlSeverityType severity);

  /// @brief Method SetDtdSchemaInfo, addr 0x2d26cec, size 0x10, virtual false, abstract: false, final false
  inline void SetDtdSchemaInfo(::System::Xml::IDtdInfo* dtdSchemaInfo);

  /// @brief Method SkipToEndElement, addr 0x2d25dfc, size 0x204, virtual false, abstract: false, final false
  inline void SkipToEndElement(::System::Xml::Schema::XmlSchemaInfo* schemaInfo);

  /// @brief Method ThrowDeclNotFoundWarningOrError, addr 0x2d23228, size 0x148, virtual false, abstract: false, final false
  inline void ThrowDeclNotFoundWarningOrError(bool declFound);

  /// @brief Method ValidateAtomicValue, addr 0x2d2703c, size 0x334, virtual false, abstract: false, final false
  inline ::System::Object* ValidateAtomicValue(::System::Object* parsedValue, ByRef<::System::Xml::Schema::XmlSchemaSimpleType*> memberType);

  /// @brief Method ValidateAtomicValue, addr 0x2d26da8, size 0x294, virtual false, abstract: false, final false
  inline ::System::Object* ValidateAtomicValue(::StringW stringValue, ByRef<::System::Xml::Schema::XmlSchemaSimpleType*> memberType);

  /// @brief Method ValidateAttribute, addr 0x2d235e8, size 0x9a8, virtual false, abstract: false, final false
  inline ::System::Object* ValidateAttribute(::StringW lName, ::StringW ns, ::System::Xml::Schema::XmlValueGetter* attributeValueGetter, ::StringW attributeStringValue,
                                             ::System::Xml::Schema::XmlSchemaInfo* schemaInfo);

  /// @brief Method ValidateAttribute, addr 0x2d23588, size 0x60, virtual false, abstract: false, final false
  inline ::System::Object* ValidateAttribute(::StringW localName, ::StringW namespaceUri, ::System::Xml::Schema::XmlValueGetter* attributeValue, ::System::Xml::Schema::XmlSchemaInfo* schemaInfo);

  /// @brief Method ValidateElement, addr 0x2d21c84, size 0x360, virtual false, abstract: false, final false
  inline void ValidateElement(::StringW localName, ::StringW namespaceUri, ::System::Xml::Schema::XmlSchemaInfo* schemaInfo, ::StringW xsiType, ::StringW xsiNil, ::StringW xsiSchemaLocation,
                              ::StringW xsiNoNamespaceSchemaLocation);

  /// @brief Method ValidateElementContext, addr 0x2d22278, size 0x408, virtual false, abstract: false, final false
  inline ::System::Object* ValidateElementContext(::System::Xml::XmlQualifiedName* elementName, ByRef<bool> invalidElementInContext);

  /// @brief Method ValidateEndElement, addr 0x2d258fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* ValidateEndElement(::System::Xml::Schema::XmlSchemaInfo* schemaInfo);

  /// @brief Method ValidateEndOfAttributes, addr 0x2d24a3c, size 0xc8, virtual false, abstract: false, final false
  inline void ValidateEndOfAttributes(::System::Xml::Schema::XmlSchemaInfo* schemaInfo);

  /// @brief Method ValidateStartElementIdentityConstraints, addr 0x2d23424, size 0x5c, virtual false, abstract: false, final false
  inline void ValidateStartElementIdentityConstraints();

  /// @brief Method ValidateText, addr 0x2d24d68, size 0x37c, virtual false, abstract: false, final false
  inline void ValidateText(::StringW elementStringValue, ::System::Xml::Schema::XmlValueGetter* elementValueGetter);

  /// @brief Method ValidateText, addr 0x2d24d08, size 0x60, virtual false, abstract: false, final false
  inline void ValidateText(::System::Xml::Schema::XmlValueGetter* elementValue);

  /// @brief Method ValidateWhitespace, addr 0x2d25720, size 0x1dc, virtual false, abstract: false, final false
  inline void ValidateWhitespace(::StringW elementStringValue, ::System::Xml::Schema::XmlValueGetter* elementValueGetter);

  /// @brief Method ValidateWhitespace, addr 0x2d256c0, size 0x60, virtual false, abstract: false, final false
  inline void ValidateWhitespace(::System::Xml::Schema::XmlValueGetter* elementValue);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_IDs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_IDs() const;

  constexpr ::StringW const& __cordl_internal_get_NsXml() const;

  constexpr ::StringW& __cordl_internal_get_NsXml();

  constexpr ::StringW const& __cordl_internal_get_NsXmlNs() const;

  constexpr ::StringW& __cordl_internal_get_NsXmlNs();

  constexpr ::StringW const& __cordl_internal_get_NsXs() const;

  constexpr ::StringW& __cordl_internal_get_NsXs();

  constexpr ::StringW const& __cordl_internal_get_NsXsi() const;

  constexpr ::StringW& __cordl_internal_get_NsXsi();

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_attPresence();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_attPresence() const;

  constexpr bool const& __cordl_internal_get_attrValid() const;

  constexpr bool& __cordl_internal_get_attrValid();

  constexpr bool const& __cordl_internal_get_checkEntity() const;

  constexpr bool& __cordl_internal_get_checkEntity();

  constexpr ::System::Xml::Schema::SchemaInfo*& __cordl_internal_get_compiledSchemaInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaInfo*> const& __cordl_internal_get_compiledSchemaInfo() const;

  constexpr ::System::Xml::Schema::ValidationState*& __cordl_internal_get_context();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ValidationState*> const& __cordl_internal_get_context() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_contextQName();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __cordl_internal_get_contextQName() const;

  constexpr ::System::Xml::Schema::ValidatorState const& __cordl_internal_get_currentState() const;

  constexpr ::System::Xml::Schema::ValidatorState& __cordl_internal_get_currentState();

  constexpr ::System::Xml::IDtdInfo*& __cordl_internal_get_dtdSchemaInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IDtdInfo*> const& __cordl_internal_get_dtdSchemaInfo() const;

  constexpr ::System::Xml::IXmlLineInfo*& __cordl_internal_get_dummyPositionInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IXmlLineInfo*> const& __cordl_internal_get_dummyPositionInfo() const;

  constexpr ::System::Xml::Schema::ValidationEventHandler*& __cordl_internal_get_eventHandler();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ValidationEventHandler*> const& __cordl_internal_get_eventHandler() const;

  constexpr ::System::Xml::Schema::IdRefNode*& __cordl_internal_get_idRefListHead();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::IdRefNode*> const& __cordl_internal_get_idRefListHead() const;

  constexpr bool const& __cordl_internal_get_isRoot() const;

  constexpr bool& __cordl_internal_get_isRoot();

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __cordl_internal_get_nameTable() const;

  constexpr ::System::Xml::IXmlNamespaceResolver*& __cordl_internal_get_nsResolver();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IXmlNamespaceResolver*> const& __cordl_internal_get_nsResolver() const;

  constexpr ::System::Xml::Schema::XmlSchemaObject*& __cordl_internal_get_partialValidationType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObject*> const& __cordl_internal_get_partialValidationType() const;

  constexpr ::System::Xml::IXmlLineInfo*& __cordl_internal_get_positionInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IXmlLineInfo*> const& __cordl_internal_get_positionInfo() const;

  constexpr ::System::Xml::Schema::XmlSchemaContentProcessing const& __cordl_internal_get_processContents() const;

  constexpr ::System::Xml::Schema::XmlSchemaContentProcessing& __cordl_internal_get_processContents();

  constexpr bool const& __cordl_internal_get_rootHasSchema() const;

  constexpr bool& __cordl_internal_get_rootHasSchema();

  constexpr ::System::Xml::Schema::XmlSchemaSet*& __cordl_internal_get_schemaSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSet*> const& __cordl_internal_get_schemaSet() const;

  constexpr ::System::Uri*& __cordl_internal_get_sourceUri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_sourceUri() const;

  constexpr ::StringW const& __cordl_internal_get_sourceUriString() const;

  constexpr ::StringW& __cordl_internal_get_sourceUriString();

  constexpr int32_t const& __cordl_internal_get_startIDConstraint() const;

  constexpr int32_t& __cordl_internal_get_startIDConstraint();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_textValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_textValue() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_validatedNamespaces();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_validatedNamespaces() const;

  constexpr ::System::Object*& __cordl_internal_get_validationEventSender();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_validationEventSender() const;

  constexpr ::System::Xml::Schema::XmlSchemaValidationFlags const& __cordl_internal_get_validationFlags() const;

  constexpr ::System::Xml::Schema::XmlSchemaValidationFlags& __cordl_internal_get_validationFlags();

  constexpr ::System::Xml::HWStack*& __cordl_internal_get_validationStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::HWStack*> const& __cordl_internal_get_validationStack() const;

  constexpr ::System::Xml::Schema::SchemaAttDef*& __cordl_internal_get_wildID();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SchemaAttDef*> const& __cordl_internal_get_wildID() const;

  constexpr ::System::Xml::XmlCharType const& __cordl_internal_get_xmlCharType() const;

  constexpr ::System::Xml::XmlCharType& __cordl_internal_get_xmlCharType();

  constexpr ::System::Xml::XmlResolver*& __cordl_internal_get_xmlResolver();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlResolver*> const& __cordl_internal_get_xmlResolver() const;

  constexpr ::StringW const& __cordl_internal_get_xsiNilString() const;

  constexpr ::StringW& __cordl_internal_get_xsiNilString();

  constexpr ::StringW const& __cordl_internal_get_xsiNoNamespaceSchemaLocationString() const;

  constexpr ::StringW& __cordl_internal_get_xsiNoNamespaceSchemaLocationString();

  constexpr ::StringW const& __cordl_internal_get_xsiSchemaLocationString() const;

  constexpr ::StringW& __cordl_internal_get_xsiSchemaLocationString();

  constexpr ::StringW const& __cordl_internal_get_xsiTypeString() const;

  constexpr ::StringW& __cordl_internal_get_xsiTypeString();

  constexpr void __cordl_internal_set_IDs(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_NsXml(::StringW value);

  constexpr void __cordl_internal_set_NsXmlNs(::StringW value);

  constexpr void __cordl_internal_set_NsXs(::StringW value);

  constexpr void __cordl_internal_set_NsXsi(::StringW value);

  constexpr void __cordl_internal_set_attPresence(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_attrValid(bool value);

  constexpr void __cordl_internal_set_checkEntity(bool value);

  constexpr void __cordl_internal_set_compiledSchemaInfo(::System::Xml::Schema::SchemaInfo* value);

  constexpr void __cordl_internal_set_context(::System::Xml::Schema::ValidationState* value);

  constexpr void __cordl_internal_set_contextQName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_currentState(::System::Xml::Schema::ValidatorState value);

  constexpr void __cordl_internal_set_dtdSchemaInfo(::System::Xml::IDtdInfo* value);

  constexpr void __cordl_internal_set_dummyPositionInfo(::System::Xml::IXmlLineInfo* value);

  constexpr void __cordl_internal_set_eventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  constexpr void __cordl_internal_set_idRefListHead(::System::Xml::Schema::IdRefNode* value);

  constexpr void __cordl_internal_set_isRoot(bool value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_nsResolver(::System::Xml::IXmlNamespaceResolver* value);

  constexpr void __cordl_internal_set_partialValidationType(::System::Xml::Schema::XmlSchemaObject* value);

  constexpr void __cordl_internal_set_positionInfo(::System::Xml::IXmlLineInfo* value);

  constexpr void __cordl_internal_set_processContents(::System::Xml::Schema::XmlSchemaContentProcessing value);

  constexpr void __cordl_internal_set_rootHasSchema(bool value);

  constexpr void __cordl_internal_set_schemaSet(::System::Xml::Schema::XmlSchemaSet* value);

  constexpr void __cordl_internal_set_sourceUri(::System::Uri* value);

  constexpr void __cordl_internal_set_sourceUriString(::StringW value);

  constexpr void __cordl_internal_set_startIDConstraint(int32_t value);

  constexpr void __cordl_internal_set_textValue(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_validatedNamespaces(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_validationEventSender(::System::Object* value);

  constexpr void __cordl_internal_set_validationFlags(::System::Xml::Schema::XmlSchemaValidationFlags value);

  constexpr void __cordl_internal_set_validationStack(::System::Xml::HWStack* value);

  constexpr void __cordl_internal_set_wildID(::System::Xml::Schema::SchemaAttDef* value);

  constexpr void __cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value);

  constexpr void __cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value);

  constexpr void __cordl_internal_set_xsiNilString(::StringW value);

  constexpr void __cordl_internal_set_xsiNoNamespaceSchemaLocationString(::StringW value);

  constexpr void __cordl_internal_set_xsiSchemaLocationString(::StringW value);

  constexpr void __cordl_internal_set_xsiTypeString(::StringW value);

  /// @brief Method .ctor, addr 0x2d20830, size 0x1ec, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::XmlSchemaSet* schemas, ::System::Xml::IXmlNamespaceResolver* namespaceResolver,
                    ::System::Xml::Schema::XmlSchemaValidationFlags validationFlags);

  /// @brief Method add_ValidationEventHandler, addr 0x2d20fd8, size 0x80, virtual false, abstract: false, final false
  inline void add_ValidationEventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  static inline ::ArrayW<::System::Xml::Schema::XmlSchemaAttribute*, ::Array<::System::Xml::Schema::XmlSchemaAttribute*>*> getStaticF_EmptyAttributeArray();

  static inline ::ArrayW<::System::Xml::Schema::XmlSchemaParticle*, ::Array<::System::Xml::Schema::XmlSchemaParticle*>*> getStaticF_EmptyParticleArray();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_MethodNames();

  static inline Il2CppObject* getStaticF_ValidStates();

  static inline ::System::Xml::Schema::XmlSchemaDatatype* getStaticF_dtCDATA();

  static inline ::System::Xml::Schema::XmlSchemaDatatype* getStaticF_dtQName();

  static inline ::System::Xml::Schema::XmlSchemaDatatype* getStaticF_dtStringArray();

  /// @brief Method get_CurrentContentType, addr 0x2d26cb8, size 0x34, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContentType get_CurrentContentType();

  /// @brief Method get_HasIdentityConstraints, addr 0x2d24774, size 0x20, virtual false, abstract: false, final false
  inline bool get_HasIdentityConstraints();

  /// @brief Method get_HasSchema, addr 0x2d26d40, size 0x48, virtual false, abstract: false, final false
  inline bool get_HasSchema();

  /// @brief Method get_ProcessIdentityConstraints, addr 0x2d29b8c, size 0xc, virtual false, abstract: false, final false
  inline bool get_ProcessIdentityConstraints();

  /// @brief Method get_ProcessSchemaHints, addr 0x2d20f6c, size 0x10, virtual false, abstract: false, final false
  inline bool get_ProcessSchemaHints();

  /// @brief Method get_ReportValidationWarnings, addr 0x2d2aae4, size 0xc, virtual false, abstract: false, final false
  inline bool get_ReportValidationWarnings();

  /// @brief Method get_SchemaSet, addr 0x2d26ca8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaSet* get_SchemaSet();

  /// @brief Method get_StrictlyAssessed, addr 0x2d26cfc, size 0x44, virtual false, abstract: false, final false
  inline bool get_StrictlyAssessed();

  /// @brief Method get_ValidationFlags, addr 0x2d26cb0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaValidationFlags get_ValidationFlags();

  /// @brief Method remove_ValidationEventHandler, addr 0x2d21058, size 0x80, virtual false, abstract: false, final false
  inline void remove_ValidationEventHandler(::System::Xml::Schema::ValidationEventHandler* value);

  static inline void setStaticF_EmptyAttributeArray(::ArrayW<::System::Xml::Schema::XmlSchemaAttribute*, ::Array<::System::Xml::Schema::XmlSchemaAttribute*>*> value);

  static inline void setStaticF_EmptyParticleArray(::ArrayW<::System::Xml::Schema::XmlSchemaParticle*, ::Array<::System::Xml::Schema::XmlSchemaParticle*>*> value);

  static inline void setStaticF_MethodNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_ValidStates(Il2CppObject* value);

  static inline void setStaticF_dtCDATA(::System::Xml::Schema::XmlSchemaDatatype* value);

  static inline void setStaticF_dtQName(::System::Xml::Schema::XmlSchemaDatatype* value);

  static inline void setStaticF_dtStringArray(::System::Xml::Schema::XmlSchemaDatatype* value);

  /// @brief Method set_LineInfoProvider, addr 0x2d20f84, size 0x18, virtual false, abstract: false, final false
  inline void set_LineInfoProvider(::System::Xml::IXmlLineInfo* value);

  /// @brief Method set_SourceUri, addr 0x2d20f9c, size 0x34, virtual false, abstract: false, final false
  inline void set_SourceUri(::System::Uri* value);

  /// @brief Method set_ValidationEventSender, addr 0x2d20fd0, size 0x8, virtual false, abstract: false, final false
  inline void set_ValidationEventSender(::System::Object* value);

  /// @brief Method set_XmlResolver, addr 0x2d20f7c, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaValidator(XmlSchemaValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaValidator(XmlSchemaValidator const&) = delete;

  /// @brief Field schemaSet, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSet* ___schemaSet;

  /// @brief Field validationFlags, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaValidationFlags ___validationFlags;

  /// @brief Field startIDConstraint, offset: 0x1c, size: 0x4, def value: None
  int32_t ___startIDConstraint;

  /// @brief Field isRoot, offset: 0x20, size: 0x1, def value: None
  bool ___isRoot;

  /// @brief Field rootHasSchema, offset: 0x21, size: 0x1, def value: None
  bool ___rootHasSchema;

  /// @brief Field attrValid, offset: 0x22, size: 0x1, def value: None
  bool ___attrValid;

  /// @brief Field checkEntity, offset: 0x23, size: 0x1, def value: None
  bool ___checkEntity;

  /// @brief Field compiledSchemaInfo, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaInfo* ___compiledSchemaInfo;

  /// @brief Field dtdSchemaInfo, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::IDtdInfo* ___dtdSchemaInfo;

  /// @brief Field validatedNamespaces, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___validatedNamespaces;

  /// @brief Field validationStack, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::HWStack* ___validationStack;

  /// @brief Field context, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::Schema::ValidationState* ___context;

  /// @brief Field currentState, offset: 0x50, size: 0x4, def value: None
  ::System::Xml::Schema::ValidatorState ___currentState;

  /// @brief Field attPresence, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___attPresence;

  /// @brief Field wildID, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaAttDef* ___wildID;

  /// @brief Field IDs, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___IDs;

  /// @brief Field idRefListHead, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Schema::IdRefNode* ___idRefListHead;

  /// @brief Field contextQName, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___contextQName;

  /// @brief Field NsXs, offset: 0x80, size: 0x8, def value: None
  ::StringW ___NsXs;

  /// @brief Field NsXsi, offset: 0x88, size: 0x8, def value: None
  ::StringW ___NsXsi;

  /// @brief Field NsXmlNs, offset: 0x90, size: 0x8, def value: None
  ::StringW ___NsXmlNs;

  /// @brief Field NsXml, offset: 0x98, size: 0x8, def value: None
  ::StringW ___NsXml;

  /// @brief Field partialValidationType, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObject* ___partialValidationType;

  /// @brief Field textValue, offset: 0xa8, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___textValue;

  /// @brief Field eventHandler, offset: 0xb0, size: 0x8, def value: None
  ::System::Xml::Schema::ValidationEventHandler* ___eventHandler;

  /// @brief Field validationEventSender, offset: 0xb8, size: 0x8, def value: None
  ::System::Object* ___validationEventSender;

  /// @brief Field nameTable, offset: 0xc0, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field positionInfo, offset: 0xc8, size: 0x8, def value: None
  ::System::Xml::IXmlLineInfo* ___positionInfo;

  /// @brief Field dummyPositionInfo, offset: 0xd0, size: 0x8, def value: None
  ::System::Xml::IXmlLineInfo* ___dummyPositionInfo;

  /// @brief Field xmlResolver, offset: 0xd8, size: 0x8, def value: None
  ::System::Xml::XmlResolver* ___xmlResolver;

  /// @brief Field sourceUri, offset: 0xe0, size: 0x8, def value: None
  ::System::Uri* ___sourceUri;

  /// @brief Field sourceUriString, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___sourceUriString;

  /// @brief Field nsResolver, offset: 0xf0, size: 0x8, def value: None
  ::System::Xml::IXmlNamespaceResolver* ___nsResolver;

  /// @brief Field processContents, offset: 0xf8, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaContentProcessing ___processContents;

  /// @brief Field xsiTypeString, offset: 0x100, size: 0x8, def value: None
  ::StringW ___xsiTypeString;

  /// @brief Field xsiNilString, offset: 0x108, size: 0x8, def value: None
  ::StringW ___xsiNilString;

  /// @brief Field xsiSchemaLocationString, offset: 0x110, size: 0x8, def value: None
  ::StringW ___xsiSchemaLocationString;

  /// @brief Field xsiNoNamespaceSchemaLocationString, offset: 0x118, size: 0x8, def value: None
  ::StringW ___xsiNoNamespaceSchemaLocationString;

  /// @brief Field xmlCharType, offset: 0x120, size: 0x8, def value: None
  ::System::Xml::XmlCharType ___xmlCharType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaValidator, 0x128>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___schemaSet) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___validationFlags) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___startIDConstraint) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___isRoot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___rootHasSchema) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___attrValid) == 0x22, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___checkEntity) == 0x23, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___compiledSchemaInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___dtdSchemaInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___validatedNamespaces) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___validationStack) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___context) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___currentState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___attPresence) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___wildID) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___IDs) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___idRefListHead) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___contextQName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___NsXs) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___NsXsi) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___NsXmlNs) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___NsXml) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___partialValidationType) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___textValue) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___eventHandler) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___validationEventSender) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___nameTable) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___positionInfo) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___dummyPositionInfo) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___xmlResolver) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___sourceUri) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___sourceUriString) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___nsResolver) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___processContents) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___xsiTypeString) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___xsiNilString) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___xsiSchemaLocationString) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___xsiNoNamespaceSchemaLocationString) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidator, ___xmlCharType) == 0x120, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaValidator*, "System.Xml.Schema", "XmlSchemaValidator");
