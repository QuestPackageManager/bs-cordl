#pragma once
// IWYU pragma private; include "Mono/Xml/SecurityParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Xml/zzzz__SmallXmlParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SecurityParser)
namespace Mono::Xml {
class SmallXmlParser_IAttrList;
}
namespace Mono::Xml {
class SmallXmlParser;
}
namespace System::Collections {
class Stack;
}
namespace System::Security {
class SecurityElement;
}
// Forward declare root types
namespace Mono::Xml {
class SecurityParser;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Xml::SecurityParser);
// Dependencies Mono.Xml.SmallXmlParser, Mono.Xml.SmallXmlParser::IContentHandler
namespace Mono::Xml {
// Is value type: false
// CS Name: Mono.Xml.SecurityParser
class CORDL_TYPE SecurityParser : public ::Mono::Xml::SmallXmlParser {
public:
  // Declarations
  /// @brief Field current, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current)) ::System::Security::SecurityElement* current;

  /// @brief Field root, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_root, put = __cordl_internal_set_root)) ::System::Security::SecurityElement* root;

  /// @brief Field stack, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_stack, put = __cordl_internal_set_stack)) ::System::Collections::Stack* stack;

  /// @brief Convert operator to "::Mono::Xml::SmallXmlParser_IContentHandler"
  constexpr operator ::Mono::Xml::SmallXmlParser_IContentHandler*() noexcept;

  /// @brief Method LoadXml, addr 0x3c55f60, size 0x88, virtual false, abstract: false, final false
  inline void LoadXml(::StringW xml);

  static inline ::Mono::Xml::SecurityParser* New_ctor();

  /// @brief Method OnChars, addr 0x3c564c4, size 0x80, virtual true, abstract: false, final true
  inline void OnChars(::StringW ch);

  /// @brief Method OnEndElement, addr 0x3c5643c, size 0x88, virtual true, abstract: false, final true
  inline void OnEndElement(::StringW name);

  /// @brief Method OnEndParsing, addr 0x3c56544, size 0x4, virtual true, abstract: false, final true
  inline void OnEndParsing(::Mono::Xml::SmallXmlParser* parser);

  /// @brief Method OnIgnorableWhitespace, addr 0x3c561c0, size 0x4, virtual true, abstract: false, final true
  inline void OnIgnorableWhitespace(::StringW s);

  /// @brief Method OnProcessingInstruction, addr 0x3c561bc, size 0x4, virtual true, abstract: false, final true
  inline void OnProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method OnStartElement, addr 0x3c561c4, size 0x278, virtual true, abstract: false, final true
  inline void OnStartElement(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs);

  /// @brief Method OnStartParsing, addr 0x3c561b8, size 0x4, virtual true, abstract: false, final true
  inline void OnStartParsing(::Mono::Xml::SmallXmlParser* parser);

  /// @brief Method ToXml, addr 0x3c561b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::SecurityElement* ToXml();

  constexpr ::System::Security::SecurityElement* const& __cordl_internal_get_current() const;

  constexpr ::System::Security::SecurityElement*& __cordl_internal_get_current();

  constexpr ::System::Security::SecurityElement* const& __cordl_internal_get_root() const;

  constexpr ::System::Security::SecurityElement*& __cordl_internal_get_root();

  constexpr ::System::Collections::Stack* const& __cordl_internal_get_stack() const;

  constexpr ::System::Collections::Stack*& __cordl_internal_get_stack();

  constexpr void __cordl_internal_set_current(::System::Security::SecurityElement* value);

  constexpr void __cordl_internal_set_root(::System::Security::SecurityElement* value);

  constexpr void __cordl_internal_set_stack(::System::Collections::Stack* value);

  /// @brief Method .ctor, addr 0x3c55df4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Mono::Xml::SmallXmlParser_IContentHandler"
  constexpr ::Mono::Xml::SmallXmlParser_IContentHandler* i___Mono__Xml__SmallXmlParser_IContentHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecurityParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecurityParser(SecurityParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecurityParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecurityParser(SecurityParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2250 };

  /// @brief Field root, offset: 0x68, size: 0x8, def value: None
  ::System::Security::SecurityElement* ___root;

  /// @brief Field current, offset: 0x70, size: 0x8, def value: None
  ::System::Security::SecurityElement* ___current;

  /// @brief Field stack, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Stack* ___stack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Xml::SecurityParser, ___root) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SecurityParser, ___current) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SecurityParser, ___stack) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Xml::SecurityParser, 0x80>, "Size mismatch!");

} // namespace Mono::Xml
NEED_NO_BOX(::Mono::Xml::SecurityParser);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::SecurityParser*, "Mono.Xml", "SecurityParser");
