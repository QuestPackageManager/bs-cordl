#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/IXmlDocument.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::Newtonsoft::Json::Converters::IXmlDocument*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Converters::IXmlDocument*, "Newtonsoft.Json.Converters", "IXmlDocument");
// [NullableContext(1)]
// Dependencies
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.IXmlDocument
class CORDL_TYPE IXmlDocument {
public:
  // Declarations
  /// @brief [Nullable(2)]
  __declspec(property(get = get_DocumentElement)) ::Newtonsoft::Json::Converters::IXmlElement* DocumentElement;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  /// @brief Method CreateAttribute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::StringW name, ::StringW value);

  /// @brief Method CreateAttribute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateAttribute(::StringW qualifiedName, ::StringW namespaceUri, ::StringW value);

  /// @brief Method CreateCDataSection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateCDataSection(/* [Nullable(2)] */ ::StringW data);

  /// @brief Method CreateComment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateComment(/* [Nullable(2)] */ ::StringW text);

  /// @brief Method CreateElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW elementName);

  /// @brief Method CreateElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::StringW qualifiedName, ::StringW namespaceUri);

  /// @brief Method CreateProcessingInstruction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateProcessingInstruction(::StringW target, ::StringW data);

  /// @brief Method CreateSignificantWhitespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateSignificantWhitespace(/* [Nullable(2)] */ ::StringW text);

  /// @brief Method CreateTextNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateTextNode(/* [Nullable(2)] */ ::StringW text);

  /// @brief Method CreateWhitespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateWhitespace(/* [Nullable(2)] */ ::StringW text);

  /// @brief Method CreateXmlDeclaration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDeclaration(::StringW version, /* [Nullable(2)] */ ::StringW encoding, /* [Nullable(2)] */ ::StringW standalone);

  /// [NullableContext(2)]
  /// @brief Method CreateXmlDocumentType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlNode* CreateXmlDocumentType(/* [Nullable(1)] */ ::StringW name, ::StringW publicId, ::StringW systemId, ::StringW internalSubset);

  /// [NullableContext(2)]
  /// @brief Method get_DocumentElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Converters::IXmlElement* get_DocumentElement();

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr ::Newtonsoft::Json::Converters::IXmlNode* i___Newtonsoft__Json__Converters__IXmlNode() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IXmlDocument", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlDocument(IXmlDocumentconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13674 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Converters
