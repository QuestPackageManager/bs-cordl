#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IXmlDocument)
namespace Newtonsoft::Json::Converters {
class IXmlElement;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class IXmlDocument;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::IXmlDocument);
// Type: Newtonsoft.Json.Converters::IXmlDocument
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12053))
// CS Name: ::Newtonsoft.Json.Converters::IXmlDocument*
class CORDL_TYPE IXmlDocument {
public:
  // Declarations
  __declspec(property(get = get_DocumentElement))::Newtonsoft::Json::Converters::IXmlElement* DocumentElement;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  /// @brief Method CreateComment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateComment(::StringW text);

  /// @brief Method CreateTextNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateTextNode(::StringW text);

  /// @brief Method CreateCDataSection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateCDataSection(::StringW data);

  /// @brief Method CreateWhitespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateWhitespace(::StringW text);

  /// @brief Method CreateSignificantWhitespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateSignificantWhitespace(::StringW text);

  /// @brief Method CreateXmlDeclaration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDeclaration(::StringW version, ::StringW encoding, ::StringW standalone);

  /// @brief Method CreateXmlDocumentType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDocumentType(::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset);

  /// @brief Method CreateProcessingInstruction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateProcessingInstruction(::StringW target, ::StringW data);

  /// @brief Method CreateElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW elementName);

  /// @brief Method CreateElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW qualifiedName, ::StringW namespaceUri);

  /// @brief Method CreateAttribute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::StringW name, ::StringW value);

  /// @brief Method CreateAttribute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::StringW qualifiedName, ::StringW namespaceUri, ::StringW value);

  /// @brief Method get_DocumentElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlElement* get_DocumentElement();

  // Ctor Parameters [CppParam { name: "", ty: "IXmlDocument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXmlDocument(IXmlDocument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXmlDocument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlDocument(IXmlDocument const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::IXmlDocument);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::IXmlDocument*, "Newtonsoft.Json.Converters", "IXmlDocument");
