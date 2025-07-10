#pragma once
// IWYU pragma private; include "System/Xml/XmlLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlLoader)
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System::Xml {
class XmlDeclaration;
}
namespace System::Xml {
class XmlDocumentType;
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
class XmlEntity;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlParserContext;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlResolver;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml {
class XmlLoader;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlLoader);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlLoader
class CORDL_TYPE XmlLoader : public ::System::Object {
public:
  // Declarations
  /// @brief Field doc, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_doc, put = __cordl_internal_set_doc)) ::System::Xml::XmlDocument* doc;

  /// @brief Field preserveWhitespace, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_preserveWhitespace, put = __cordl_internal_set_preserveWhitespace)) bool preserveWhitespace;

  /// @brief Field reader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader)) ::System::Xml::XmlReader* reader;

  /// @brief Method CreateInnerXmlReader, addr 0x4340794, size 0x27c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlReader* CreateInnerXmlReader(::StringW xmlFragment, ::System::Xml::XmlNodeType nt, ::System::Xml::XmlParserContext* context, ::System::Xml::XmlDocument* doc);

  /// @brief Method EntitizeName, addr 0x4340cb0, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW EntitizeName(::StringW name);

  /// @brief Method ExpandEntity, addr 0x433c878, size 0x4c, virtual false, abstract: false, final false
  inline void ExpandEntity(::System::Xml::XmlEntity* ent);

  /// @brief Method ExpandEntityReference, addr 0x433caec, size 0x600, virtual false, abstract: false, final false
  inline void ExpandEntityReference(::System::Xml::XmlEntityReference* eref);

  /// @brief Method GetContext, addr 0x433feac, size 0x8e8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlParserContext* GetContext(::System::Xml::XmlNode* node);

  /// @brief Method Load, addr 0x4339600, size 0x238, virtual false, abstract: false, final false
  inline void Load(::System::Xml::XmlDocument* doc, ::System::Xml::XmlReader* reader, bool preserveWhitespace);

  /// @brief Method LoadAttributeNode, addr 0x433dd14, size 0x328, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* LoadAttributeNode();

  /// @brief Method LoadAttributeNodeDirect, addr 0x433faa8, size 0x140, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* LoadAttributeNodeDirect();

  /// @brief Method LoadAttributeValue, addr 0x433e81c, size 0x30c, virtual false, abstract: false, final false
  inline void LoadAttributeValue(::System::Xml::XmlNode* parent, bool direct);

  /// @brief Method LoadDeclarationNode, addr 0x433e224, size 0x1ac, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDeclaration* LoadDeclarationNode();

  /// @brief Method LoadDefaultAttribute, addr 0x433e68c, size 0x190, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* LoadDefaultAttribute();

  /// @brief Method LoadDocSequence, addr 0x433d718, size 0x6c, virtual false, abstract: false, final false
  inline void LoadDocSequence(::System::Xml::XmlDocument* parentDoc);

  /// @brief Method LoadDocumentType, addr 0x433ef88, size 0xb20, virtual false, abstract: false, final false
  inline void LoadDocumentType(::System::Xml::IDtdInfo* dtdInfo, ::System::Xml::XmlDocumentType* dtNode);

  /// @brief Method LoadDocumentTypeNode, addr 0x433e3d0, size 0x1ac, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDocumentType* LoadDocumentTypeNode();

  /// @brief Method LoadEntityReferenceNode, addr 0x433e03c, size 0x1e8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlEntityReference* LoadEntityReferenceNode(bool direct);

  /// @brief Method LoadInnerXmlAttribute, addr 0x433391c, size 0x8, virtual false, abstract: false, final false
  inline void LoadInnerXmlAttribute(::System::Xml::XmlAttribute* node, ::StringW innerxmltext);

  /// @brief Method LoadInnerXmlElement, addr 0x433c514, size 0x74, virtual false, abstract: false, final false
  inline void LoadInnerXmlElement(::System::Xml::XmlElement* node, ::StringW innerxmltext);

  /// @brief Method LoadNode, addr 0x433d784, size 0x590, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* LoadNode(bool skipOverWhitespace);

  /// @brief Method LoadNodeDirect, addr 0x433eb28, size 0x460, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* LoadNodeDirect();

  static inline ::System::Xml::XmlLoader* New_ctor();

  /// @brief Method ParseDocumentType, addr 0x433ae3c, size 0x68, virtual false, abstract: false, final false
  inline void ParseDocumentType(::System::Xml::XmlDocumentType* dtNode);

  /// @brief Method ParseDocumentType, addr 0x433fbe8, size 0x2c4, virtual false, abstract: false, final false
  inline void ParseDocumentType(::System::Xml::XmlDocumentType* dtNode, bool bUseResolver, ::System::Xml::XmlResolver* resolver);

  /// @brief Method ParsePartialContent, addr 0x433a778, size 0x204, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNamespaceManager* ParsePartialContent(::System::Xml::XmlNode* parentNode, ::StringW innerxmltext, ::System::Xml::XmlNodeType nt);

  /// @brief Method ParseXmlDeclarationValue, addr 0x43361c0, size 0x218, virtual false, abstract: false, final false
  static inline void ParseXmlDeclarationValue(::StringW strValue, ::ByRef<::StringW> version, ::ByRef<::StringW> encoding, ::ByRef<::StringW> standalone);

  /// @brief Method ReadCurrentNode, addr 0x4339374, size 0x120, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* ReadCurrentNode(::System::Xml::XmlDocument* doc, ::System::Xml::XmlReader* reader);

  /// @brief Method RemoveDuplicateNamespace, addr 0x4340a10, size 0x2a0, virtual false, abstract: false, final false
  inline void RemoveDuplicateNamespace(::System::Xml::XmlElement* elem, ::System::Xml::XmlNamespaceManager* mgr, bool fCheckElemAttrs);

  /// @brief Method UnexpectedNodeType, addr 0x433e57c, size 0x110, virtual false, abstract: false, final false
  static inline ::System::Exception* UnexpectedNodeType(::System::Xml::XmlNodeType nodetype);

  constexpr ::System::Xml::XmlDocument* const& __cordl_internal_get_doc() const;

  constexpr ::System::Xml::XmlDocument*& __cordl_internal_get_doc();

  constexpr bool const& __cordl_internal_get_preserveWhitespace() const;

  constexpr bool& __cordl_internal_get_preserveWhitespace();

  constexpr ::System::Xml::XmlReader* const& __cordl_internal_get_reader() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_reader();

  constexpr void __cordl_internal_set_doc(::System::Xml::XmlDocument* value);

  constexpr void __cordl_internal_set_preserveWhitespace(bool value);

  constexpr void __cordl_internal_set_reader(::System::Xml::XmlReader* value);

  /// @brief Method .ctor, addr 0x4333914, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlLoader(XmlLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlLoader(XmlLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7304 };

  /// @brief Field doc, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlDocument* ___doc;

  /// @brief Field reader, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___reader;

  /// @brief Field preserveWhitespace, offset: 0x20, size: 0x1, def value: None
  bool ___preserveWhitespace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlLoader, ___doc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlLoader, ___reader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlLoader, ___preserveWhitespace) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlLoader, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlLoader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlLoader*, "System.Xml", "XmlLoader");
