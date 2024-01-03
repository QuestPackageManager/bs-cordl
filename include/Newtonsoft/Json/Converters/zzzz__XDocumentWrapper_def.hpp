#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XContainerWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XDocumentWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlDocument;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml::Linq {
class XDocument;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XDocumentWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XDocumentWrapper);
// Type: Newtonsoft.Json.Converters::XDocumentWrapper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12064))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12060))
// CS Name: ::Newtonsoft.Json.Converters::XDocumentWrapper*
class CORDL_TYPE XDocumentWrapper : public ::Newtonsoft::Json::Converters::XContainerWrapper {
public:
  // Declarations
  __declspec(property(get = get_Document))::System::Xml::Linq::XDocument* Document;

  __declspec(property(get = get_ChildNodes))::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* ChildNodes;

  __declspec(property(get = get_DocumentElement))::Newtonsoft::Json::Converters::IXmlElement* DocumentElement;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDocument"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlDocument*() noexcept;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  /// @brief Method get_Document, addr 0x26bb098, size 0x78, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XDocument* get_Document();

  static inline ::Newtonsoft::Json::Converters::XDocumentWrapper* New_ctor(::System::Xml::Linq::XDocument* document);

  /// @brief Method .ctor, addr 0x26bb110, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XDocument* document);

  /// @brief Method get_ChildNodes, addr 0x26bb180, size 0x164, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Converters::IXmlNode*>* get_ChildNodes();

  /// @brief Method CreateComment, addr 0x26bb69c, size 0x94, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateComment(::StringW text);

  /// @brief Method CreateTextNode, addr 0x26bb730, size 0x94, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateTextNode(::StringW text);

  /// @brief Method CreateCDataSection, addr 0x26bb7c4, size 0x94, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateCDataSection(::StringW data);

  /// @brief Method CreateWhitespace, addr 0x26bb858, size 0x94, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateWhitespace(::StringW text);

  /// @brief Method CreateSignificantWhitespace, addr 0x26bb8ec, size 0x94, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateSignificantWhitespace(::StringW text);

  /// @brief Method CreateXmlDeclaration, addr 0x26bb980, size 0xa8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone);

  /// @brief Method CreateXmlDocumentType, addr 0x26bba28, size 0xb8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset);

  /// @brief Method CreateProcessingInstruction, addr 0x26bbae0, size 0xa0, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateProcessingInstruction(::StringW target, ::StringW data);

  /// @brief Method CreateElement, addr 0x26bbbec, size 0xa4, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW elementName);

  /// @brief Method CreateElement, addr 0x26bbc94, size 0xbc, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW qualifiedName, ::StringW namespaceUri);

  /// @brief Method CreateAttribute, addr 0x26bbd50, size 0xb4, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::StringW name, ::StringW value);

  /// @brief Method CreateAttribute, addr 0x26bbe70, size 0xc4, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::StringW qualifiedName, ::StringW namespaceUri, ::StringW value);

  /// @brief Method get_DocumentElement, addr 0x26bbf34, size 0x9c, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlElement* get_DocumentElement();

  /// @brief Method AppendChild, addr 0x26bbfd0, size 0xa4, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* newChild);

  // Ctor Parameters [CppParam { name: "", ty: "XDocumentWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XDocumentWrapper(XDocumentWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XDocumentWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XDocumentWrapper(XDocumentWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XDocumentWrapper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XDocumentWrapper, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XDocumentWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XDocumentWrapper*, "Newtonsoft.Json.Converters", "XDocumentWrapper");
