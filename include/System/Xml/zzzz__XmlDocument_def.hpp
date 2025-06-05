#pragma once
// IWYU pragma private; include "System/Xml/XmlDocument.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDocument)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
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
class XmlSchemaSet;
}
namespace System::Xml {
class DomNameTable;
}
namespace System::Xml {
class EmptyEnumerator;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System::Xml {
class XmlCDataSection;
}
namespace System::Xml {
class XmlComment;
}
namespace System::Xml {
class XmlDeclaration;
}
namespace System::Xml {
class XmlDocumentFragment;
}
namespace System::Xml {
class XmlDocumentType;
}
namespace System::Xml {
class XmlElement;
}
namespace System::Xml {
class XmlEntityReference;
}
namespace System::Xml {
class XmlEntity;
}
namespace System::Xml {
class XmlImplementation;
}
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlName;
}
namespace System::Xml {
class XmlNamedNodeMap;
}
namespace System::Xml {
struct XmlNodeChangedAction;
}
namespace System::Xml {
class XmlNodeChangedEventArgs;
}
namespace System::Xml {
class XmlNodeChangedEventHandler;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlProcessingInstruction;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlResolver;
}
namespace System::Xml {
class XmlSignificantWhitespace;
}
namespace System::Xml {
class XmlTextReader;
}
namespace System::Xml {
class XmlText;
}
namespace System::Xml {
class XmlWhitespace;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class Object;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Xml {
class XmlDocument;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDocument);
// Dependencies System.Xml.XmlNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDocument
class CORDL_TYPE XmlDocument : public ::System::Xml::XmlNode {
public:
  // Declarations
  __declspec(property(get = get_ActualLoadingStatus)) bool ActualLoadingStatus;

  __declspec(property(get = get_BaseURI)) ::StringW BaseURI;

  __declspec(property(get = get_CanReportValidity)) bool CanReportValidity;

  __declspec(property(get = get_Declaration)) ::System::Xml::XmlDeclaration* Declaration;

  __declspec(property(get = get_DocumentElement)) ::System::Xml::XmlElement* DocumentElement;

  __declspec(property(get = get_DocumentType)) ::System::Xml::XmlDocumentType* DocumentType;

  __declspec(property(get = get_DtdSchemaInfo, put = set_DtdSchemaInfo)) ::System::Xml::Schema::SchemaInfo* DtdSchemaInfo;

  /// @brief Field EmptyEnumerator, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyEnumerator, put = setStaticF_EmptyEnumerator)) ::System::Xml::EmptyEnumerator* EmptyEnumerator;

  __declspec(property(get = get_Encoding)) ::StringW Encoding;

  __declspec(property(get = get_Entities, put = set_Entities)) ::System::Xml::XmlNamedNodeMap* Entities;

  __declspec(property(get = get_HasSetResolver)) bool HasSetResolver;

  __declspec(property(get = get_Implementation)) ::System::Xml::XmlImplementation* Implementation;

  __declspec(property(put = set_InnerText)) ::StringW InnerText;

  __declspec(property(put = set_InnerXml)) ::StringW InnerXml;

  /// @brief Field InvalidSchemaInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InvalidSchemaInfo, put = setStaticF_InvalidSchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo* InvalidSchemaInfo;

  __declspec(property(get = get_IsContainer)) bool IsContainer;

  __declspec(property(get = get_IsLoading, put = set_IsLoading)) bool IsLoading;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_LastNode, put = set_LastNode)) ::System::Xml::XmlLinkedNode* LastNode;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NameTable)) ::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  /// @brief Field NotKnownSchemaInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_NotKnownSchemaInfo, put = setStaticF_NotKnownSchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo* NotKnownSchemaInfo;

  __declspec(property(get = get_OwnerDocument)) ::System::Xml::XmlDocument* OwnerDocument;

  __declspec(property(get = get_ParentNode)) ::System::Xml::XmlNode* ParentNode;

  __declspec(property(get = get_SchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo* SchemaInfo;

  __declspec(property(put = set_Schemas)) ::System::Xml::Schema::XmlSchemaSet* Schemas;

  __declspec(property(get = get_Standalone)) ::StringW Standalone;

  /// @brief Field ValidSchemaInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ValidSchemaInfo, put = setStaticF_ValidSchemaInfo)) ::System::Xml::Schema::IXmlSchemaInfo* ValidSchemaInfo;

  __declspec(property(get = get_Version)) ::StringW Version;

  __declspec(property(put = set_XmlResolver)) ::System::Xml::XmlResolver* XmlResolver;

  /// @brief Field actualLoadingStatus, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_actualLoadingStatus, put = __cordl_internal_set_actualLoadingStatus)) bool actualLoadingStatus;

  /// @brief Field bSetResolver, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get_bSetResolver, put = __cordl_internal_set_bSetResolver)) bool bSetResolver;

  /// @brief Field baseURI, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_baseURI, put = __cordl_internal_set_baseURI)) ::StringW baseURI;

  /// @brief Field domNameTable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_domNameTable, put = __cordl_internal_set_domNameTable)) ::System::Xml::DomNameTable* domNameTable;

  /// @brief Field entities, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_entities, put = __cordl_internal_set_entities)) ::System::Xml::XmlNamedNodeMap* entities;

  /// @brief Field fCDataNodesPresent, offset 0x91, size 0x1
  __declspec(property(get = __cordl_internal_get_fCDataNodesPresent, put = __cordl_internal_set_fCDataNodesPresent)) bool fCDataNodesPresent;

  /// @brief Field fEntRefNodesPresent, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_fEntRefNodesPresent, put = __cordl_internal_set_fEntRefNodesPresent)) bool fEntRefNodesPresent;

  /// @brief Field htElementIDAttrDecl, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_htElementIDAttrDecl, put = __cordl_internal_set_htElementIDAttrDecl)) ::System::Collections::Hashtable* htElementIDAttrDecl;

  /// @brief Field htElementIdMap, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_htElementIdMap, put = __cordl_internal_set_htElementIdMap)) ::System::Collections::Hashtable* htElementIdMap;

  /// @brief Field implementation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_implementation, put = __cordl_internal_set_implementation)) ::System::Xml::XmlImplementation* implementation;

  /// @brief Field isLoading, offset 0x93, size 0x1
  __declspec(property(get = __cordl_internal_get_isLoading, put = __cordl_internal_set_isLoading)) bool isLoading;

  /// @brief Field lastChild, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_lastChild, put = __cordl_internal_set_lastChild)) ::System::Xml::XmlLinkedNode* lastChild;

  /// @brief Field objLock, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_objLock, put = __cordl_internal_set_objLock)) ::System::Object* objLock;

  /// @brief Field onNodeChangedDelegate, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_onNodeChangedDelegate, put = __cordl_internal_set_onNodeChangedDelegate)) ::System::Xml::XmlNodeChangedEventHandler* onNodeChangedDelegate;

  /// @brief Field onNodeChangingDelegate, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_onNodeChangingDelegate, put = __cordl_internal_set_onNodeChangingDelegate)) ::System::Xml::XmlNodeChangedEventHandler* onNodeChangingDelegate;

  /// @brief Field onNodeInsertedDelegate, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_onNodeInsertedDelegate, put = __cordl_internal_set_onNodeInsertedDelegate)) ::System::Xml::XmlNodeChangedEventHandler* onNodeInsertedDelegate;

  /// @brief Field onNodeInsertingDelegate, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_onNodeInsertingDelegate, put = __cordl_internal_set_onNodeInsertingDelegate)) ::System::Xml::XmlNodeChangedEventHandler* onNodeInsertingDelegate;

  /// @brief Field onNodeRemovedDelegate, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_onNodeRemovedDelegate, put = __cordl_internal_set_onNodeRemovedDelegate)) ::System::Xml::XmlNodeChangedEventHandler* onNodeRemovedDelegate;

  /// @brief Field onNodeRemovingDelegate, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_onNodeRemovingDelegate, put = __cordl_internal_set_onNodeRemovingDelegate)) ::System::Xml::XmlNodeChangedEventHandler* onNodeRemovingDelegate;

  /// @brief Field preserveWhitespace, offset 0x92, size 0x1
  __declspec(property(get = __cordl_internal_get_preserveWhitespace, put = __cordl_internal_set_preserveWhitespace)) bool preserveWhitespace;

  /// @brief Field reportValidity, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_reportValidity, put = __cordl_internal_set_reportValidity)) bool reportValidity;

  /// @brief Field resolver, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_resolver, put = __cordl_internal_set_resolver)) ::System::Xml::XmlResolver* resolver;

  /// @brief Field schemaInfo, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaInfo, put = __cordl_internal_set_schemaInfo)) ::System::Xml::Schema::SchemaInfo* schemaInfo;

  /// @brief Field schemas, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_schemas, put = __cordl_internal_set_schemas)) ::System::Xml::Schema::XmlSchemaSet* schemas;

  /// @brief Field strCDataSectionName, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_strCDataSectionName, put = __cordl_internal_set_strCDataSectionName)) ::StringW strCDataSectionName;

  /// @brief Field strCommentName, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_strCommentName, put = __cordl_internal_set_strCommentName)) ::StringW strCommentName;

  /// @brief Field strDocumentFragmentName, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_strDocumentFragmentName, put = __cordl_internal_set_strDocumentFragmentName)) ::StringW strDocumentFragmentName;

  /// @brief Field strDocumentName, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_strDocumentName, put = __cordl_internal_set_strDocumentName)) ::StringW strDocumentName;

  /// @brief Field strEmpty, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_strEmpty, put = __cordl_internal_set_strEmpty)) ::StringW strEmpty;

  /// @brief Field strEntityName, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_strEntityName, put = __cordl_internal_set_strEntityName)) ::StringW strEntityName;

  /// @brief Field strID, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_strID, put = __cordl_internal_set_strID)) ::StringW strID;

  /// @brief Field strLang, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_strLang, put = __cordl_internal_set_strLang)) ::StringW strLang;

  /// @brief Field strNonSignificantWhitespaceName, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_strNonSignificantWhitespaceName, put = __cordl_internal_set_strNonSignificantWhitespaceName)) ::StringW strNonSignificantWhitespaceName;

  /// @brief Field strReservedXml, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_strReservedXml, put = __cordl_internal_set_strReservedXml)) ::StringW strReservedXml;

  /// @brief Field strReservedXmlns, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_strReservedXmlns, put = __cordl_internal_set_strReservedXmlns)) ::StringW strReservedXmlns;

  /// @brief Field strSignificantWhitespaceName, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_strSignificantWhitespaceName, put = __cordl_internal_set_strSignificantWhitespaceName)) ::StringW strSignificantWhitespaceName;

  /// @brief Field strSpace, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_strSpace, put = __cordl_internal_set_strSpace)) ::StringW strSpace;

  /// @brief Field strTextName, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_strTextName, put = __cordl_internal_set_strTextName)) ::StringW strTextName;

  /// @brief Field strXml, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_strXml, put = __cordl_internal_set_strXml)) ::StringW strXml;

  /// @brief Field strXmlns, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_strXmlns, put = __cordl_internal_set_strXmlns)) ::StringW strXmlns;

  /// @brief Method AddAttrXmlName, addr 0x4333014, size 0x114, virtual false, abstract: false, final false
  inline ::System::Xml::XmlName* AddAttrXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  /// @brief Method AddDefaultAttributes, addr 0x4338374, size 0x288, virtual false, abstract: false, final false
  inline void AddDefaultAttributes(::System::Xml::XmlElement* elem);

  /// @brief Method AddElementWithId, addr 0x43353b8, size 0x1e8, virtual false, abstract: false, final false
  inline void AddElementWithId(::StringW id, ::System::Xml::XmlElement* elem);

  /// @brief Method AddIdInfo, addr 0x4336d88, size 0xc0, virtual false, abstract: false, final false
  inline bool AddIdInfo(::System::Xml::XmlName* eleName, ::System::Xml::XmlName* attrName);

  /// @brief Method AddXmlName, addr 0x4336d58, size 0x18, virtual false, abstract: false, final false
  inline ::System::Xml::XmlName* AddXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  /// @brief Method AfterEvent, addr 0x433a39c, size 0x54, virtual true, abstract: false, final false
  inline void AfterEvent(::System::Xml::XmlNodeChangedEventArgs* args);

  /// @brief Method AppendChildForLoad, addr 0x433a6b8, size 0x1cc, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc);

  /// @brief Method BeforeEvent, addr 0x433a348, size 0x54, virtual true, abstract: false, final false
  inline void BeforeEvent(::System::Xml::XmlNodeChangedEventArgs* args);

  /// @brief Method CanInsertAfter, addr 0x4337d74, size 0xfc, virtual true, abstract: false, final false
  inline bool CanInsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild);

  /// @brief Method CanInsertBefore, addr 0x4337c10, size 0x164, virtual true, abstract: false, final false
  inline bool CanInsertBefore(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild);

  /// @brief Method CheckName, addr 0x4332ee8, size 0xd4, virtual false, abstract: false, final false
  static inline void CheckName(::StringW name);

  /// @brief Method CloneNode, addr 0x4337578, size 0x60, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method CreateAttribute, addr 0x4337e70, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* CreateAttribute(::StringW name);

  /// @brief Method CreateAttribute, addr 0x4339290, size 0x98, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* CreateAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceURI);

  /// @brief Method CreateAttribute, addr 0x4338b8c, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* CreateAttribute(::StringW qualifiedName, ::StringW namespaceURI);

  /// @brief Method CreateCDataSection, addr 0x4337fc0, size 0x74, virtual true, abstract: false, final false
  inline ::System::Xml::XmlCDataSection* CreateCDataSection(::StringW data);

  /// @brief Method CreateComment, addr 0x4338034, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlComment* CreateComment(::StringW data);

  /// @brief Method CreateDefaultAttribute, addr 0x4339328, size 0x84, virtual true, abstract: false, final false
  inline ::System::Xml::XmlAttribute* CreateDefaultAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceURI);

  /// @brief Method CreateDocumentFragment, addr 0x43381f0, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDocumentFragment* CreateDocumentFragment();

  /// @brief Method CreateDocumentType, addr 0x43380a0, size 0x88, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDocumentType* CreateDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset);

  /// @brief Method CreateElement, addr 0x43382c4, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Xml::XmlElement* CreateElement(::StringW name);

  /// @brief Method CreateElement, addr 0x43393ac, size 0xb0, virtual true, abstract: false, final false
  inline ::System::Xml::XmlElement* CreateElement(::StringW prefix, ::StringW localName, ::StringW namespaceURI);

  /// @brief Method CreateElement, addr 0x4338c30, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Xml::XmlElement* CreateElement(::StringW qualifiedName, ::StringW namespaceURI);

  /// @brief Method CreateEntityReference, addr 0x4338804, size 0x68, virtual true, abstract: false, final false
  inline ::System::Xml::XmlEntityReference* CreateEntityReference(::StringW name);

  /// @brief Method CreateProcessingInstruction, addr 0x4338954, size 0x74, virtual true, abstract: false, final false
  inline ::System::Xml::XmlProcessingInstruction* CreateProcessingInstruction(::StringW target, ::StringW data);

  /// @brief Method CreateSignificantWhitespace, addr 0x4338ab4, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSignificantWhitespace* CreateSignificantWhitespace(::StringW text);

  /// @brief Method CreateTextNode, addr 0x4338a48, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlText* CreateTextNode(::StringW text);

  /// @brief Method CreateWhitespace, addr 0x4338b20, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlWhitespace* CreateWhitespace(::StringW text);

  /// @brief Method CreateXmlDeclaration, addr 0x43389c8, size 0x80, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDeclaration* CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone);

  /// @brief Method GetDefaultAttribute, addr 0x4335110, size 0x294, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* GetDefaultAttribute(::System::Xml::XmlElement* elem, ::StringW attrPrefix, ::StringW attrLocalname, ::StringW attrNamespaceURI);

  /// @brief Method GetElement, addr 0x4336f1c, size 0x65c, virtual false, abstract: false, final false
  inline ::System::WeakReference* GetElement(::System::Collections::ArrayList* elementList, ::System::Xml::XmlElement* elem);

  /// @brief Method GetEntityNode, addr 0x433a438, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Xml::XmlEntity* GetEntityNode(::StringW name);

  /// @brief Method GetEventArgs, addr 0x433a250, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeChangedEventArgs* GetEventArgs(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent, ::StringW oldValue,
                                                              ::StringW newValue, ::System::Xml::XmlNodeChangedAction action);

  /// @brief Method GetIDInfoByElement, addr 0x43353a4, size 0x14, virtual false, abstract: false, final false
  inline ::System::Xml::XmlName* GetIDInfoByElement(::System::Xml::XmlName* eleName);

  /// @brief Method GetIDInfoByElement_, addr 0x4336e48, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Xml::XmlName* GetIDInfoByElement_(::System::Xml::XmlName* eleName);

  /// @brief Method GetInsertEventArgsForLoad, addr 0x4333804, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNodeChangedEventArgs* GetInsertEventArgsForLoad(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* newParent);

  /// @brief Method GetResolver, addr 0x4337890, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlResolver* GetResolver();

  /// @brief Method GetSchemaElementDecl, addr 0x43385fc, size 0x10c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaElementDecl* GetSchemaElementDecl(::System::Xml::XmlElement* elem);

  /// @brief Method GetXmlName, addr 0x4336d70, size 0x18, virtual false, abstract: false, final false
  inline ::System::Xml::XmlName* GetXmlName(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  /// @brief Method HasNodeTypeInNextSiblings, addr 0x4337bac, size 0x64, virtual false, abstract: false, final false
  inline bool HasNodeTypeInNextSiblings(::System::Xml::XmlNodeType nt, ::System::Xml::XmlNode* refNode);

  /// @brief Method HasNodeTypeInPrevSiblings, addr 0x4337afc, size 0xb0, virtual false, abstract: false, final false
  inline bool HasNodeTypeInPrevSiblings(::System::Xml::XmlNodeType nt, ::System::Xml::XmlNode* refNode);

  /// @brief Method ImportAttributes, addr 0x433917c, size 0x114, virtual false, abstract: false, final false
  inline void ImportAttributes(::System::Xml::XmlNode* fromElem, ::System::Xml::XmlNode* toElem);

  /// @brief Method ImportChildren, addr 0x43375d8, size 0x9c, virtual false, abstract: false, final false
  inline void ImportChildren(::System::Xml::XmlNode* fromNode, ::System::Xml::XmlNode* toNode, bool deep);

  /// @brief Method ImportNodeInternal, addr 0x4338cd4, size 0x4a8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* ImportNodeInternal(::System::Xml::XmlNode* node, bool deep);

  /// @brief Method IsValidChildType, addr 0x4337a14, size 0xe8, virtual true, abstract: false, final false
  inline bool IsValidChildType(::System::Xml::XmlNodeType type);

  /// @brief Method Load, addr 0x433985c, size 0x10c, virtual true, abstract: false, final false
  inline void Load(::System::Xml::XmlReader* reader);

  /// @brief Method LoadXml, addr 0x4339ba0, size 0x150, virtual true, abstract: false, final false
  inline void LoadXml(::StringW xml);

  static inline ::System::Xml::XmlDocument* New_ctor();

  static inline ::System::Xml::XmlDocument* New_ctor(::System::Xml::XmlImplementation* imp);

  static inline ::System::Xml::XmlDocument* New_ctor(::System::Xml::XmlNameTable* nt);

  /// @brief Method PrepareDefaultAttribute, addr 0x4338708, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* PrepareDefaultAttribute(::System::Xml::Schema::SchemaAttDef* attdef, ::StringW attrPrefix, ::StringW attrLocalname, ::StringW attrNamespaceURI);

  /// @brief Method ReadNode, addr 0x4339604, size 0xd8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* ReadNode(::System::Xml::XmlReader* reader);

  /// @brief Method RemoveElementWithId, addr 0x43355a0, size 0x144, virtual false, abstract: false, final false
  inline void RemoveElementWithId(::StringW id, ::System::Xml::XmlElement* elem);

  /// @brief Method Save, addr 0x4339d58, size 0x1f4, virtual true, abstract: false, final false
  inline void Save(::System::Xml::XmlWriter* w);

  /// @brief Method SetBaseURI, addr 0x433a6b0, size 0x8, virtual false, abstract: false, final false
  inline void SetBaseURI(::StringW inBaseURI);

  /// @brief Method SetDefaultNamespace, addr 0x4337f30, size 0x90, virtual false, abstract: false, final false
  inline void SetDefaultNamespace(::StringW prefix, ::StringW localName, ::ByRef<::StringW> namespaceURI);

  /// @brief Method SetupReader, addr 0x43397fc, size 0x60, virtual false, abstract: false, final false
  inline ::System::Xml::XmlTextReader* SetupReader(::System::Xml::XmlTextReader* tr);

  /// @brief Method WriteContentTo, addr 0x4339f80, size 0x2d0, virtual true, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* xw);

  /// @brief Method WriteTo, addr 0x4339f70, size 0x10, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* w);

  constexpr bool const& __cordl_internal_get_actualLoadingStatus() const;

  constexpr bool& __cordl_internal_get_actualLoadingStatus();

  constexpr bool const& __cordl_internal_get_bSetResolver() const;

  constexpr bool& __cordl_internal_get_bSetResolver();

  constexpr ::StringW const& __cordl_internal_get_baseURI() const;

  constexpr ::StringW& __cordl_internal_get_baseURI();

  constexpr ::System::Xml::DomNameTable* const& __cordl_internal_get_domNameTable() const;

  constexpr ::System::Xml::DomNameTable*& __cordl_internal_get_domNameTable();

  constexpr ::System::Xml::XmlNamedNodeMap* const& __cordl_internal_get_entities() const;

  constexpr ::System::Xml::XmlNamedNodeMap*& __cordl_internal_get_entities();

  constexpr bool const& __cordl_internal_get_fCDataNodesPresent() const;

  constexpr bool& __cordl_internal_get_fCDataNodesPresent();

  constexpr bool const& __cordl_internal_get_fEntRefNodesPresent() const;

  constexpr bool& __cordl_internal_get_fEntRefNodesPresent();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_htElementIDAttrDecl() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_htElementIDAttrDecl();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_htElementIdMap() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_htElementIdMap();

  constexpr ::System::Xml::XmlImplementation* const& __cordl_internal_get_implementation() const;

  constexpr ::System::Xml::XmlImplementation*& __cordl_internal_get_implementation();

  constexpr bool const& __cordl_internal_get_isLoading() const;

  constexpr bool& __cordl_internal_get_isLoading();

  constexpr ::System::Xml::XmlLinkedNode* const& __cordl_internal_get_lastChild() const;

  constexpr ::System::Xml::XmlLinkedNode*& __cordl_internal_get_lastChild();

  constexpr ::System::Object* const& __cordl_internal_get_objLock() const;

  constexpr ::System::Object*& __cordl_internal_get_objLock();

  constexpr ::System::Xml::XmlNodeChangedEventHandler* const& __cordl_internal_get_onNodeChangedDelegate() const;

  constexpr ::System::Xml::XmlNodeChangedEventHandler*& __cordl_internal_get_onNodeChangedDelegate();

  constexpr ::System::Xml::XmlNodeChangedEventHandler* const& __cordl_internal_get_onNodeChangingDelegate() const;

  constexpr ::System::Xml::XmlNodeChangedEventHandler*& __cordl_internal_get_onNodeChangingDelegate();

  constexpr ::System::Xml::XmlNodeChangedEventHandler* const& __cordl_internal_get_onNodeInsertedDelegate() const;

  constexpr ::System::Xml::XmlNodeChangedEventHandler*& __cordl_internal_get_onNodeInsertedDelegate();

  constexpr ::System::Xml::XmlNodeChangedEventHandler* const& __cordl_internal_get_onNodeInsertingDelegate() const;

  constexpr ::System::Xml::XmlNodeChangedEventHandler*& __cordl_internal_get_onNodeInsertingDelegate();

  constexpr ::System::Xml::XmlNodeChangedEventHandler* const& __cordl_internal_get_onNodeRemovedDelegate() const;

  constexpr ::System::Xml::XmlNodeChangedEventHandler*& __cordl_internal_get_onNodeRemovedDelegate();

  constexpr ::System::Xml::XmlNodeChangedEventHandler* const& __cordl_internal_get_onNodeRemovingDelegate() const;

  constexpr ::System::Xml::XmlNodeChangedEventHandler*& __cordl_internal_get_onNodeRemovingDelegate();

  constexpr bool const& __cordl_internal_get_preserveWhitespace() const;

  constexpr bool& __cordl_internal_get_preserveWhitespace();

  constexpr bool const& __cordl_internal_get_reportValidity() const;

  constexpr bool& __cordl_internal_get_reportValidity();

  constexpr ::System::Xml::XmlResolver* const& __cordl_internal_get_resolver() const;

  constexpr ::System::Xml::XmlResolver*& __cordl_internal_get_resolver();

  constexpr ::System::Xml::Schema::SchemaInfo* const& __cordl_internal_get_schemaInfo() const;

  constexpr ::System::Xml::Schema::SchemaInfo*& __cordl_internal_get_schemaInfo();

  constexpr ::System::Xml::Schema::XmlSchemaSet* const& __cordl_internal_get_schemas() const;

  constexpr ::System::Xml::Schema::XmlSchemaSet*& __cordl_internal_get_schemas();

  constexpr ::StringW const& __cordl_internal_get_strCDataSectionName() const;

  constexpr ::StringW& __cordl_internal_get_strCDataSectionName();

  constexpr ::StringW const& __cordl_internal_get_strCommentName() const;

  constexpr ::StringW& __cordl_internal_get_strCommentName();

  constexpr ::StringW const& __cordl_internal_get_strDocumentFragmentName() const;

  constexpr ::StringW& __cordl_internal_get_strDocumentFragmentName();

  constexpr ::StringW const& __cordl_internal_get_strDocumentName() const;

  constexpr ::StringW& __cordl_internal_get_strDocumentName();

  constexpr ::StringW const& __cordl_internal_get_strEmpty() const;

  constexpr ::StringW& __cordl_internal_get_strEmpty();

  constexpr ::StringW const& __cordl_internal_get_strEntityName() const;

  constexpr ::StringW& __cordl_internal_get_strEntityName();

  constexpr ::StringW const& __cordl_internal_get_strID() const;

  constexpr ::StringW& __cordl_internal_get_strID();

  constexpr ::StringW const& __cordl_internal_get_strLang() const;

  constexpr ::StringW& __cordl_internal_get_strLang();

  constexpr ::StringW const& __cordl_internal_get_strNonSignificantWhitespaceName() const;

  constexpr ::StringW& __cordl_internal_get_strNonSignificantWhitespaceName();

  constexpr ::StringW const& __cordl_internal_get_strReservedXml() const;

  constexpr ::StringW& __cordl_internal_get_strReservedXml();

  constexpr ::StringW const& __cordl_internal_get_strReservedXmlns() const;

  constexpr ::StringW& __cordl_internal_get_strReservedXmlns();

  constexpr ::StringW const& __cordl_internal_get_strSignificantWhitespaceName() const;

  constexpr ::StringW& __cordl_internal_get_strSignificantWhitespaceName();

  constexpr ::StringW const& __cordl_internal_get_strSpace() const;

  constexpr ::StringW& __cordl_internal_get_strSpace();

  constexpr ::StringW const& __cordl_internal_get_strTextName() const;

  constexpr ::StringW& __cordl_internal_get_strTextName();

  constexpr ::StringW const& __cordl_internal_get_strXml() const;

  constexpr ::StringW& __cordl_internal_get_strXml();

  constexpr ::StringW const& __cordl_internal_get_strXmlns() const;

  constexpr ::StringW& __cordl_internal_get_strXmlns();

  constexpr void __cordl_internal_set_actualLoadingStatus(bool value);

  constexpr void __cordl_internal_set_bSetResolver(bool value);

  constexpr void __cordl_internal_set_baseURI(::StringW value);

  constexpr void __cordl_internal_set_domNameTable(::System::Xml::DomNameTable* value);

  constexpr void __cordl_internal_set_entities(::System::Xml::XmlNamedNodeMap* value);

  constexpr void __cordl_internal_set_fCDataNodesPresent(bool value);

  constexpr void __cordl_internal_set_fEntRefNodesPresent(bool value);

  constexpr void __cordl_internal_set_htElementIDAttrDecl(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_htElementIdMap(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_implementation(::System::Xml::XmlImplementation* value);

  constexpr void __cordl_internal_set_isLoading(bool value);

  constexpr void __cordl_internal_set_lastChild(::System::Xml::XmlLinkedNode* value);

  constexpr void __cordl_internal_set_objLock(::System::Object* value);

  constexpr void __cordl_internal_set_onNodeChangedDelegate(::System::Xml::XmlNodeChangedEventHandler* value);

  constexpr void __cordl_internal_set_onNodeChangingDelegate(::System::Xml::XmlNodeChangedEventHandler* value);

  constexpr void __cordl_internal_set_onNodeInsertedDelegate(::System::Xml::XmlNodeChangedEventHandler* value);

  constexpr void __cordl_internal_set_onNodeInsertingDelegate(::System::Xml::XmlNodeChangedEventHandler* value);

  constexpr void __cordl_internal_set_onNodeRemovedDelegate(::System::Xml::XmlNodeChangedEventHandler* value);

  constexpr void __cordl_internal_set_onNodeRemovingDelegate(::System::Xml::XmlNodeChangedEventHandler* value);

  constexpr void __cordl_internal_set_preserveWhitespace(bool value);

  constexpr void __cordl_internal_set_reportValidity(bool value);

  constexpr void __cordl_internal_set_resolver(::System::Xml::XmlResolver* value);

  constexpr void __cordl_internal_set_schemaInfo(::System::Xml::Schema::SchemaInfo* value);

  constexpr void __cordl_internal_set_schemas(::System::Xml::Schema::XmlSchemaSet* value);

  constexpr void __cordl_internal_set_strCDataSectionName(::StringW value);

  constexpr void __cordl_internal_set_strCommentName(::StringW value);

  constexpr void __cordl_internal_set_strDocumentFragmentName(::StringW value);

  constexpr void __cordl_internal_set_strDocumentName(::StringW value);

  constexpr void __cordl_internal_set_strEmpty(::StringW value);

  constexpr void __cordl_internal_set_strEntityName(::StringW value);

  constexpr void __cordl_internal_set_strID(::StringW value);

  constexpr void __cordl_internal_set_strLang(::StringW value);

  constexpr void __cordl_internal_set_strNonSignificantWhitespaceName(::StringW value);

  constexpr void __cordl_internal_set_strReservedXml(::StringW value);

  constexpr void __cordl_internal_set_strReservedXmlns(::StringW value);

  constexpr void __cordl_internal_set_strSignificantWhitespaceName(::StringW value);

  constexpr void __cordl_internal_set_strSpace(::StringW value);

  constexpr void __cordl_internal_set_strTextName(::StringW value);

  constexpr void __cordl_internal_set_strXml(::StringW value);

  constexpr void __cordl_internal_set_strXmlns(::StringW value);

  /// @brief Method .ctor, addr 0x4336838, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x43368f4, size 0x3c0, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlImplementation* imp);

  /// @brief Method .ctor, addr 0x4336cb4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nt);

  static inline ::System::Xml::EmptyEnumerator* getStaticF_EmptyEnumerator();

  static inline ::System::Xml::Schema::IXmlSchemaInfo* getStaticF_InvalidSchemaInfo();

  static inline ::System::Xml::Schema::IXmlSchemaInfo* getStaticF_NotKnownSchemaInfo();

  static inline ::System::Xml::Schema::IXmlSchemaInfo* getStaticF_ValidSchemaInfo();

  /// @brief Method get_ActualLoadingStatus, addr 0x43395fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_ActualLoadingStatus();

  /// @brief Method get_BaseURI, addr 0x433a6a8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_CanReportValidity, addr 0x4337880, size 0x8, virtual false, abstract: false, final false
  inline bool get_CanReportValidity();

  /// @brief Method get_Declaration, addr 0x4337710, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDeclaration* get_Declaration();

  /// @brief Method get_DocumentElement, addr 0x43377cc, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlElement* get_DocumentElement();

  /// @brief Method get_DocumentType, addr 0x4337684, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDocumentType* get_DocumentType();

  /// @brief Method get_DtdSchemaInfo, addr 0x4336d48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SchemaInfo* get_DtdSchemaInfo();

  /// @brief Method get_Encoding, addr 0x433a414, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_Encoding();

  /// @brief Method get_Entities, addr 0x4339578, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNamedNodeMap* get_Entities();

  /// @brief Method get_HasSetResolver, addr 0x4337888, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasSetResolver();

  /// @brief Method get_Implementation, addr 0x43377b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlImplementation* get_Implementation();

  /// @brief Method get_IsContainer, addr 0x4337858, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsContainer();

  /// @brief Method get_IsLoading, addr 0x43395e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsLoading();

  /// @brief Method get_IsReadOnly, addr 0x4339570, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_LastNode, addr 0x4337860, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlLinkedNode* get_LastNode();

  /// @brief Method get_LocalName, addr 0x43377c4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x43377bc, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameTable, addr 0x43328c4, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NodeType, addr 0x4337674, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_OwnerDocument, addr 0x4337870, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_OwnerDocument();

  /// @brief Method get_ParentNode, addr 0x433767c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method get_SchemaInfo, addr 0x433a564, size 0x144, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();

  /// @brief Method get_Standalone, addr 0x4339f4c, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_Standalone();

  /// @brief Method get_Version, addr 0x433a3f0, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_Version();

  static inline void setStaticF_EmptyEnumerator(::System::Xml::EmptyEnumerator* value);

  static inline void setStaticF_InvalidSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo* value);

  static inline void setStaticF_NotKnownSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo* value);

  static inline void setStaticF_ValidSchemaInfo(::System::Xml::Schema::IXmlSchemaInfo* value);

  /// @brief Method set_DtdSchemaInfo, addr 0x4336d50, size 0x8, virtual false, abstract: false, final false
  inline void set_DtdSchemaInfo(::System::Xml::Schema::SchemaInfo* value);

  /// @brief Method set_Entities, addr 0x43395e0, size 0x8, virtual false, abstract: false, final false
  inline void set_Entities(::System::Xml::XmlNamedNodeMap* value);

  /// @brief Method set_InnerText, addr 0x4339cf0, size 0x58, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

  /// @brief Method set_InnerXml, addr 0x4339d48, size 0x10, virtual true, abstract: false, final false
  inline void set_InnerXml(::StringW value);

  /// @brief Method set_IsLoading, addr 0x43395f0, size 0xc, virtual false, abstract: false, final false
  inline void set_IsLoading(bool value);

  /// @brief Method set_LastNode, addr 0x4337868, size 0x8, virtual true, abstract: false, final false
  inline void set_LastNode(::System::Xml::XmlLinkedNode* value);

  /// @brief Method set_Schemas, addr 0x4337878, size 0x8, virtual false, abstract: false, final false
  inline void set_Schemas(::System::Xml::Schema::XmlSchemaSet* value);

  /// @brief Method set_XmlResolver, addr 0x4337898, size 0x17c, virtual true, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDocument();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDocument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDocument(XmlDocument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDocument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDocument(XmlDocument const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7295 };

  /// @brief Field implementation, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlImplementation* ___implementation;

  /// @brief Field domNameTable, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::DomNameTable* ___domNameTable;

  /// @brief Field lastChild, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlLinkedNode* ___lastChild;

  /// @brief Field entities, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::XmlNamedNodeMap* ___entities;

  /// @brief Field htElementIdMap, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___htElementIdMap;

  /// @brief Field htElementIDAttrDecl, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___htElementIDAttrDecl;

  /// @brief Field schemaInfo, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaInfo* ___schemaInfo;

  /// @brief Field schemas, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSet* ___schemas;

  /// @brief Field reportValidity, offset: 0x58, size: 0x1, def value: None
  bool ___reportValidity;

  /// @brief Field actualLoadingStatus, offset: 0x59, size: 0x1, def value: None
  bool ___actualLoadingStatus;

  /// @brief Field onNodeInsertingDelegate, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::XmlNodeChangedEventHandler* ___onNodeInsertingDelegate;

  /// @brief Field onNodeInsertedDelegate, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::XmlNodeChangedEventHandler* ___onNodeInsertedDelegate;

  /// @brief Field onNodeRemovingDelegate, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::XmlNodeChangedEventHandler* ___onNodeRemovingDelegate;

  /// @brief Field onNodeRemovedDelegate, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::XmlNodeChangedEventHandler* ___onNodeRemovedDelegate;

  /// @brief Field onNodeChangingDelegate, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::XmlNodeChangedEventHandler* ___onNodeChangingDelegate;

  /// @brief Field onNodeChangedDelegate, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::XmlNodeChangedEventHandler* ___onNodeChangedDelegate;

  /// @brief Field fEntRefNodesPresent, offset: 0x90, size: 0x1, def value: None
  bool ___fEntRefNodesPresent;

  /// @brief Field fCDataNodesPresent, offset: 0x91, size: 0x1, def value: None
  bool ___fCDataNodesPresent;

  /// @brief Field preserveWhitespace, offset: 0x92, size: 0x1, def value: None
  bool ___preserveWhitespace;

  /// @brief Field isLoading, offset: 0x93, size: 0x1, def value: None
  bool ___isLoading;

  /// @brief Field strDocumentName, offset: 0x98, size: 0x8, def value: None
  ::StringW ___strDocumentName;

  /// @brief Field strDocumentFragmentName, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___strDocumentFragmentName;

  /// @brief Field strCommentName, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___strCommentName;

  /// @brief Field strTextName, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___strTextName;

  /// @brief Field strCDataSectionName, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___strCDataSectionName;

  /// @brief Field strEntityName, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___strEntityName;

  /// @brief Field strID, offset: 0xc8, size: 0x8, def value: None
  ::StringW ___strID;

  /// @brief Field strXmlns, offset: 0xd0, size: 0x8, def value: None
  ::StringW ___strXmlns;

  /// @brief Field strXml, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___strXml;

  /// @brief Field strSpace, offset: 0xe0, size: 0x8, def value: None
  ::StringW ___strSpace;

  /// @brief Field strLang, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___strLang;

  /// @brief Field strEmpty, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___strEmpty;

  /// @brief Field strNonSignificantWhitespaceName, offset: 0xf8, size: 0x8, def value: None
  ::StringW ___strNonSignificantWhitespaceName;

  /// @brief Field strSignificantWhitespaceName, offset: 0x100, size: 0x8, def value: None
  ::StringW ___strSignificantWhitespaceName;

  /// @brief Field strReservedXmlns, offset: 0x108, size: 0x8, def value: None
  ::StringW ___strReservedXmlns;

  /// @brief Field strReservedXml, offset: 0x110, size: 0x8, def value: None
  ::StringW ___strReservedXml;

  /// @brief Field baseURI, offset: 0x118, size: 0x8, def value: None
  ::StringW ___baseURI;

  /// @brief Field resolver, offset: 0x120, size: 0x8, def value: None
  ::System::Xml::XmlResolver* ___resolver;

  /// @brief Field bSetResolver, offset: 0x128, size: 0x1, def value: None
  bool ___bSetResolver;

  /// @brief Field objLock, offset: 0x130, size: 0x8, def value: None
  ::System::Object* ___objLock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDocument, ___implementation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___domNameTable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___lastChild) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___entities) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___htElementIdMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___htElementIDAttrDecl) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___schemaInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___schemas) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___reportValidity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___actualLoadingStatus) == 0x59, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___onNodeInsertingDelegate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___onNodeInsertedDelegate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___onNodeRemovingDelegate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___onNodeRemovedDelegate) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___onNodeChangingDelegate) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___onNodeChangedDelegate) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___fEntRefNodesPresent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___fCDataNodesPresent) == 0x91, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___preserveWhitespace) == 0x92, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___isLoading) == 0x93, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strDocumentName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strDocumentFragmentName) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strCommentName) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strTextName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strCDataSectionName) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strEntityName) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strID) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strXmlns) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strXml) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strSpace) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strLang) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strEmpty) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strNonSignificantWhitespaceName) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strSignificantWhitespaceName) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strReservedXmlns) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___strReservedXml) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___baseURI) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___resolver) == 0x120, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___bSetResolver) == 0x128, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDocument, ___objLock) == 0x130, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDocument, 0x138>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlDocument);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDocument*, "System.Xml", "XmlDocument");
