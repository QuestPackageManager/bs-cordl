#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Xml/zzzz__SmallXmlParser_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SecurityParser)
namespace System::Collections {
class Stack;
}
namespace System::Security {
class SecurityElement;
}
namespace Mono::Xml {
class __SmallXmlParser__IAttrList;
}
namespace Mono::Xml {
class __SmallXmlParser__IContentHandler;
}
namespace Mono::Xml {
class SmallXmlParser;
}
// Forward declare root types
namespace Mono::Xml {
class SecurityParser;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Xml::SecurityParser);
// Type: Mono.Xml::SecurityParser
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2254))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2250))
// CS Name: ::Mono.Xml::SecurityParser*
class CORDL_TYPE SecurityParser : public ::Mono::Xml::SmallXmlParser {
public:
  // Declarations
  /// @brief Field root, offset 0x68, size 0x8
  __declspec(property(get = __get_root, put = __set_root))::System::Security::SecurityElement* root;

  /// @brief Field current, offset 0x70, size 0x8
  __declspec(property(get = __get_current, put = __set_current))::System::Security::SecurityElement* current;

  /// @brief Field stack, offset 0x78, size 0x8
  __declspec(property(get = __get_stack, put = __set_stack))::System::Collections::Stack* stack;

  /// @brief Convert operator to "::Mono::Xml::__SmallXmlParser__IContentHandler"
  constexpr operator ::Mono::Xml::__SmallXmlParser__IContentHandler*() noexcept;

  constexpr ::System::Security::SecurityElement*& __get_root();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::SecurityElement*> const& __get_root() const;

  constexpr void __set_root(::System::Security::SecurityElement* value);

  constexpr ::System::Security::SecurityElement*& __get_current();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::SecurityElement*> const& __get_current() const;

  constexpr void __set_current(::System::Security::SecurityElement* value);

  constexpr ::System::Collections::Stack*& __get_stack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Stack*> const& __get_stack() const;

  constexpr void __set_stack(::System::Collections::Stack* value);

  static inline ::Mono::Xml::SecurityParser* New_ctor();

  /// @brief Method .ctor addr 0x2412fa8 size 0x68 virtual false final false
  inline void _ctor();

  /// @brief Method LoadXml addr 0x2413128 size 0x8c virtual false final false
  inline void LoadXml(::StringW xml);

  /// @brief Method ToXml addr 0x241337c size 0x8 virtual false final false
  inline ::System::Security::SecurityElement* ToXml();

  /// @brief Method OnStartParsing addr 0x2413384 size 0x4 virtual true final true
  inline void OnStartParsing(::Mono::Xml::SmallXmlParser* parser);

  /// @brief Method OnProcessingInstruction addr 0x2413388 size 0x4 virtual true final true
  inline void OnProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method OnIgnorableWhitespace addr 0x241338c size 0x4 virtual true final true
  inline void OnIgnorableWhitespace(::StringW s);

  /// @brief Method OnStartElement addr 0x2413390 size 0x27c virtual true final true
  inline void OnStartElement(::StringW name, ::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method OnEndElement addr 0x241360c size 0x88 virtual true final true
  inline void OnEndElement(::StringW name);

  /// @brief Method OnChars addr 0x2413694 size 0x80 virtual true final true
  inline void OnChars(::StringW ch);

  /// @brief Method OnEndParsing addr 0x2413714 size 0x4 virtual true final true
  inline void OnEndParsing(::Mono::Xml::SmallXmlParser* parser);

  // Ctor Parameters [CppParam { name: "", ty: "SecurityParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecurityParser(SecurityParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecurityParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecurityParser(SecurityParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityParser();

public:
  /// @brief Field root, offset: 0x68, size: 0x8, def value: None
  ::System::Security::SecurityElement* ___root;

  /// @brief Field current, offset: 0x70, size: 0x8, def value: None
  ::System::Security::SecurityElement* ___current;

  /// @brief Field stack, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Stack* ___stack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Xml::SecurityParser, 0x80>, "Size mismatch!");

} // namespace Mono::Xml
NEED_NO_BOX(::Mono::Xml::SecurityParser);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::SecurityParser*, "Mono.Xml", "SecurityParser");
