#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDocumentWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml {
class XmlDocument;
}
namespace Newtonsoft::Json::Converters {
class IXmlDocument;
}
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlDocumentWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XmlDocumentWrapper);
// Type: Newtonsoft.Json.Converters::XmlDocumentWrapper
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12052))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12048))
// CS Name: ::Newtonsoft.Json.Converters::XmlDocumentWrapper*
class CORDL_TYPE XmlDocumentWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper {
public:
  // Declarations
  /// @brief Field _document, offset 0x28, size 0x8
  __declspec(property(get = __get__document, put = __set__document))::System::Xml::XmlDocument* _document;

  __declspec(property(get = get_DocumentElement))::Newtonsoft::Json::Converters::IXmlElement* DocumentElement;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDocument"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlDocument*() noexcept;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  constexpr ::System::Xml::XmlDocument*& __get__document();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDocument*> const& __get__document() const;

  constexpr void __set__document(::System::Xml::XmlDocument* value);

  static inline ::Newtonsoft::Json::Converters::XmlDocumentWrapper* New_ctor(::System::Xml::XmlDocument* document);

  /// @brief Method .ctor, addr 0x26b97cc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlDocument* document);

  /// @brief Method CreateComment, addr 0x26b9820, size 0x8c, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateComment(::StringW data);

  /// @brief Method CreateTextNode, addr 0x26b98ac, size 0x8c, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateTextNode(::StringW text);

  /// @brief Method CreateCDataSection, addr 0x26b9938, size 0x8c, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateCDataSection(::StringW data);

  /// @brief Method CreateWhitespace, addr 0x26b99c4, size 0x8c, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateWhitespace(::StringW text);

  /// @brief Method CreateSignificantWhitespace, addr 0x26b9a50, size 0x8c, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateSignificantWhitespace(::StringW text);

  /// @brief Method CreateXmlDeclaration, addr 0x26b9adc, size 0xa8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone);

  /// @brief Method CreateXmlDocumentType, addr 0x26b9bb0, size 0xac, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset);

  /// @brief Method CreateProcessingInstruction, addr 0x26b9c88, size 0x9c, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateProcessingInstruction(::StringW target, ::StringW data);

  /// @brief Method CreateElement, addr 0x26b9d24, size 0x88, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW elementName);

  /// @brief Method CreateElement, addr 0x26b9dd8, size 0x98, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW qualifiedName, ::StringW namespaceUri);

  /// @brief Method CreateAttribute, addr 0x26b9e70, size 0xa8, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::StringW name, ::StringW value);

  /// @brief Method CreateAttribute, addr 0x26b9f38, size 0xb0, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::StringW qualifiedName, ::StringW namespaceUri, ::StringW value);

  /// @brief Method get_DocumentElement, addr 0x26b9fe8, size 0x9c, virtual true, abstract: false, final true
  inline ::Newtonsoft::Json::Converters::IXmlElement* get_DocumentElement();

  // Ctor Parameters [CppParam { name: "", ty: "XmlDocumentWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDocumentWrapper(XmlDocumentWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDocumentWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDocumentWrapper(XmlDocumentWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDocumentWrapper();

public:
  /// @brief Field _document, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlDocument* ____document;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XmlDocumentWrapper, 0x30>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Converters::XmlDocumentWrapper, ____document) == 0x28, "Offset mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlDocumentWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlDocumentWrapper*, "Newtonsoft.Json.Converters", "XmlDocumentWrapper");
