#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XmlDocumentWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__IXmlDocument_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDocumentWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml {
class XmlDocument;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlDocumentWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XmlDocumentWrapper);
// Dependencies Newtonsoft.Json.Converters.IXmlDocument, Newtonsoft.Json.Converters.IXmlNode, Newtonsoft.Json.Converters.XmlNodeWrapper
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.XmlDocumentWrapper
class CORDL_TYPE XmlDocumentWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper {
public:
  // Declarations
  __declspec(property(get = get_DocumentElement)) ::Newtonsoft::Json::Converters::IXmlElement* DocumentElement;

  /// @brief Field _document, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__document, put = __cordl_internal_set__document)) ::System::Xml::XmlDocument* _document;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDocument"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlDocument*() noexcept;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  /// @brief Method CreateAttribute, addr 0x3f43664, size 0xa4, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::StringW name, ::StringW value);

  /// @brief Method CreateAttribute, addr 0x3f43728, size 0xac, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::StringW qualifiedName, ::StringW namespaceUri, ::StringW value);

  /// @brief Method CreateCDataSection, addr 0x3f4314c, size 0x88, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateCDataSection(::StringW data);

  /// @brief Method CreateComment, addr 0x3f4303c, size 0x88, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateComment(::StringW data);

  /// @brief Method CreateElement, addr 0x3f43520, size 0x84, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW elementName);

  /// @brief Method CreateElement, addr 0x3f435d0, size 0x94, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW qualifiedName, ::StringW namespaceUri);

  /// @brief Method CreateProcessingInstruction, addr 0x3f43488, size 0x98, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateProcessingInstruction(::StringW target, ::StringW data);

  /// @brief Method CreateSignificantWhitespace, addr 0x3f4325c, size 0x88, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateSignificantWhitespace(::StringW text);

  /// @brief Method CreateTextNode, addr 0x3f430c4, size 0x88, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateTextNode(::StringW text);

  /// @brief Method CreateWhitespace, addr 0x3f431d4, size 0x88, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateWhitespace(::StringW text);

  /// @brief Method CreateXmlDeclaration, addr 0x3f432e4, size 0xa4, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone);

  /// @brief Method CreateXmlDocumentType, addr 0x3f433b4, size 0xa8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset);

  static inline ::Newtonsoft::Json::Converters::XmlDocumentWrapper* New_ctor(::System::Xml::XmlDocument* document);

  constexpr ::System::Xml::XmlDocument* const& __cordl_internal_get__document() const;

  constexpr ::System::Xml::XmlDocument*& __cordl_internal_get__document();

  constexpr void __cordl_internal_set__document(::System::Xml::XmlDocument* value);

  /// @brief Method .ctor, addr 0x3f42fe8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlDocument* document);

  /// @brief Method get_DocumentElement, addr 0x3f437d4, size 0x98, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlElement* get_DocumentElement();

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlDocument"
  constexpr ::Newtonsoft::Json::Converters::IXmlDocument* i___Newtonsoft__Json__Converters__IXmlDocument() noexcept;

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr ::Newtonsoft::Json::Converters::IXmlNode* i___Newtonsoft__Json__Converters__IXmlNode() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDocumentWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDocumentWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDocumentWrapper(XmlDocumentWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDocumentWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDocumentWrapper(XmlDocumentWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10484 };

  /// @brief Field _document, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlDocument* ____document;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Converters::XmlDocumentWrapper, ____document) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XmlDocumentWrapper, 0x30>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlDocumentWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlDocumentWrapper*, "Newtonsoft.Json.Converters", "XmlDocumentWrapper");
