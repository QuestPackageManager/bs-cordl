#pragma once
// IWYU pragma private; include "Mono/Xml/SmallXmlParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SmallXmlParser)
namespace Mono::Xml {
class SmallXmlParser_AttrListImpl;
}
namespace Mono::Xml {
class SmallXmlParser_IAttrList;
}
namespace Mono::Xml {
class SmallXmlParser_IContentHandler;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class Stack;
}
namespace System::IO {
class TextReader;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Mono::Xml {
class SmallXmlParser;
}
namespace Mono::Xml {
class SmallXmlParser_AttrListImpl;
}
namespace Mono::Xml {
class SmallXmlParser_IAttrList;
}
namespace Mono::Xml {
class SmallXmlParser_IContentHandler;
}
// Write type traits
MARK_REF_T(::Mono::Xml::SmallXmlParser*);
MARK_REF_T(::Mono::Xml::SmallXmlParser_AttrListImpl*);
MARK_REF_T(::Mono::Xml::SmallXmlParser_IAttrList*);
MARK_REF_T(::Mono::Xml::SmallXmlParser_IContentHandler*);
DEFINE_IL2CPP_CLASS(::Mono::Xml::SmallXmlParser*, "Mono.Xml", "SmallXmlParser");
DEFINE_IL2CPP_CLASS(::Mono::Xml::SmallXmlParser_AttrListImpl*, "Mono.Xml", "SmallXmlParser/AttrListImpl");
DEFINE_IL2CPP_CLASS(::Mono::Xml::SmallXmlParser_IAttrList*, "Mono.Xml", "SmallXmlParser/IAttrList");
DEFINE_IL2CPP_CLASS(::Mono::Xml::SmallXmlParser_IContentHandler*, "Mono.Xml", "SmallXmlParser/IContentHandler");
// Dependencies
namespace Mono::Xml {
// Is value type: false
// CS Name: Mono.Xml.SmallXmlParser/IContentHandler
class CORDL_TYPE SmallXmlParser_IContentHandler {
public:
  // Declarations
  /// @brief Method OnChars, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnChars(::StringW text);

  /// @brief Method OnEndElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnEndElement(::StringW name);

  /// @brief Method OnEndParsing, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnEndParsing(::Mono::Xml::SmallXmlParser* parser);

  /// @brief Method OnIgnorableWhitespace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnIgnorableWhitespace(::StringW text);

  /// @brief Method OnProcessingInstruction, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method OnStartElement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnStartElement(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs);

  /// @brief Method OnStartParsing, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnStartParsing(::Mono::Xml::SmallXmlParser* parser);

  // Ctor Parameters [CppParam { name: "", ty: "SmallXmlParser_IContentHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmallXmlParser_IContentHandler(SmallXmlParser_IContentHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2251 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Mono::Xml
// Dependencies
namespace Mono::Xml {
// Is value type: false
// CS Name: Mono.Xml.SmallXmlParser/IAttrList
class CORDL_TYPE SmallXmlParser_IAttrList {
public:
  // Declarations
  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Names)) ::ArrayW<::StringW> Names;

  __declspec(property(get = get_Values)) ::ArrayW<::StringW> Values;

  /// @brief Method GetName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetName(int32_t i);

  /// @brief Method GetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetValue(int32_t i);

  /// @brief Method GetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetValue(::StringW name);

  /// @brief Method get_Length, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_Names, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW> get_Names();

  /// @brief Method get_Values, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW> get_Values();

  // Ctor Parameters [CppParam { name: "", ty: "SmallXmlParser_IAttrList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmallXmlParser_IAttrList(SmallXmlParser_IAttrList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2252 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Mono::Xml
// Dependencies System.Object
namespace Mono::Xml {
// Is value type: false
// CS Name: Mono.Xml.SmallXmlParser/AttrListImpl
class CORDL_TYPE SmallXmlParser_AttrListImpl : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Names)) ::ArrayW<::StringW> Names;

  __declspec(property(get = get_Values)) ::ArrayW<::StringW> Values;

  /// @brief Field attrNames, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attrNames, put = __cordl_internal_set_attrNames)) ::System::Collections::Generic::List_1<::StringW>* attrNames;

  /// @brief Field attrValues, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_attrValues, put = __cordl_internal_set_attrValues)) ::System::Collections::Generic::List_1<::StringW>* attrValues;

  /// @brief Convert operator to "::Mono::Xml::SmallXmlParser_IAttrList"
  constexpr operator ::Mono::Xml::SmallXmlParser_IAttrList*() noexcept;

  /// @brief Method Add, addr 0x5aadf24, size 0x110, virtual false, abstract: false, final false
  inline void Add(::StringW name, ::StringW value);

  /// @brief Method Clear, addr 0x5aada20, size 0xa4, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetName, addr 0x5aae084, size 0x64, virtual true, abstract: false, final true
  inline ::StringW GetName(int32_t i);

  /// @brief Method GetValue, addr 0x5aae0e8, size 0x64, virtual true, abstract: false, final true
  inline ::StringW GetValue(int32_t i);

  /// @brief Method GetValue, addr 0x5aae14c, size 0xc8, virtual true, abstract: false, final true
  inline ::StringW GetValue(::StringW name);

  static inline ::Mono::Xml::SmallXmlParser_AttrListImpl* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_attrNames() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_attrNames();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_attrValues() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_attrValues();

  constexpr void __cordl_internal_set_attrNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_attrValues(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x5aac6b8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Length, addr 0x5aae034, size 0x50, virtual true, abstract: false, final true
  inline int32_t get_Length();

  /// @brief Method get_Names, addr 0x5aae214, size 0x54, virtual true, abstract: false, final true
  inline ::ArrayW<::StringW> get_Names();

  /// @brief Method get_Values, addr 0x5aae268, size 0x54, virtual true, abstract: false, final true
  inline ::ArrayW<::StringW> get_Values();

  /// @brief Convert to "::Mono::Xml::SmallXmlParser_IAttrList"
  constexpr ::Mono::Xml::SmallXmlParser_IAttrList* i___Mono__Xml__SmallXmlParser_IAttrList() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmallXmlParser_AttrListImpl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmallXmlParser_AttrListImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmallXmlParser_AttrListImpl(SmallXmlParser_AttrListImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmallXmlParser_AttrListImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmallXmlParser_AttrListImpl(SmallXmlParser_AttrListImpl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2253 };

  /// @brief Field attrNames, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___attrNames;

  /// @brief Field attrValues, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___attrValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Xml::SmallXmlParser_AttrListImpl, ___attrNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SmallXmlParser_AttrListImpl, ___attrValues) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Mono::Xml::SmallXmlParser_AttrListImpl) == 0x20, "Size mismatch!");

} // namespace Mono::Xml
// Dependencies System.Object
namespace Mono::Xml {
// Is value type: false
// CS Name: Mono.Xml.SmallXmlParser
class CORDL_TYPE SmallXmlParser : public ::System::Object {
public:
  // Declarations
  using AttrListImpl = ::Mono::Xml::SmallXmlParser_AttrListImpl;

  using IAttrList = ::Mono::Xml::SmallXmlParser_IAttrList;

  using IContentHandler = ::Mono::Xml::SmallXmlParser_IContentHandler;

  /// @brief Field attributes, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes)) ::Mono::Xml::SmallXmlParser_AttrListImpl* attributes;

  /// @brief Field buffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::System::Text::StringBuilder* buffer;

  /// @brief Field column, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_column, put = __cordl_internal_set_column)) int32_t column;

  /// @brief Field elementNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_elementNames, put = __cordl_internal_set_elementNames)) ::System::Collections::Stack* elementNames;

  /// @brief Field handler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_handler, put = __cordl_internal_set_handler)) ::Mono::Xml::SmallXmlParser_IContentHandler* handler;

  /// @brief Field isWhitespace, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_isWhitespace, put = __cordl_internal_set_isWhitespace)) bool isWhitespace;

  /// @brief Field line, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_line, put = __cordl_internal_set_line)) int32_t line;

  /// @brief Field nameBuffer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_nameBuffer, put = __cordl_internal_set_nameBuffer)) ::ArrayW<char16_t> nameBuffer;

  /// @brief Field reader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader)) ::System::IO::TextReader* reader;

  /// @brief Field resetColumn, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_resetColumn, put = __cordl_internal_set_resetColumn)) bool resetColumn;

  /// @brief Field xmlSpace, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlSpace, put = __cordl_internal_set_xmlSpace)) ::StringW xmlSpace;

  /// @brief Field xmlSpaces, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlSpaces, put = __cordl_internal_set_xmlSpaces)) ::System::Collections::Stack* xmlSpaces;

  /// @brief Method Cleanup, addr 0x5aad9a4, size 0x7c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Error, addr 0x5aac74c, size 0x74, virtual false, abstract: false, final false
  inline ::System::Exception* Error(::StringW msg);

  /// @brief Method Expect, addr 0x5aacc94, size 0xb8, virtual false, abstract: false, final false
  inline void Expect(int32_t c);

  /// @brief Method HandleBufferedContent, addr 0x5aad858, size 0x14c, virtual false, abstract: false, final false
  inline void HandleBufferedContent();

  /// @brief Method HandleWhitespaces, addr 0x5aacb60, size 0xbc, virtual false, abstract: false, final false
  inline void HandleWhitespaces();

  /// @brief Method IsNameChar, addr 0x5aac9b8, size 0xd8, virtual false, abstract: false, final false
  inline bool IsNameChar(char16_t c, bool start);

  /// @brief Method IsWhitespace, addr 0x5aaca90, size 0x1c, virtual false, abstract: false, final false
  inline bool IsWhitespace(int32_t c);

  static inline ::Mono::Xml::SmallXmlParser* New_ctor();

  /// @brief Method Parse, addr 0x5aac144, size 0x1cc, virtual false, abstract: false, final false
  inline void Parse(::System::IO::TextReader* input, ::Mono::Xml::SmallXmlParser_IContentHandler* handler);

  /// @brief Method Peek, addr 0x5aacc78, size 0x1c, virtual false, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x5aacc1c, size 0x5c, virtual false, abstract: false, final false
  inline int32_t Read();

  /// @brief Method ReadAttribute, addr 0x5aadc48, size 0x164, virtual false, abstract: false, final false
  inline void ReadAttribute(::Mono::Xml::SmallXmlParser_AttrListImpl* a);

  /// @brief Method ReadCDATASection, addr 0x5aadac4, size 0xfc, virtual false, abstract: false, final false
  inline void ReadCDATASection();

  /// @brief Method ReadCharacterReference, addr 0x5aade34, size 0xf0, virtual false, abstract: false, final false
  inline int32_t ReadCharacterReference();

  /// @brief Method ReadCharacters, addr 0x5aaddac, size 0x88, virtual false, abstract: false, final false
  inline void ReadCharacters();

  /// @brief Method ReadComment, addr 0x5aadbc0, size 0x88, virtual false, abstract: false, final false
  inline void ReadComment();

  /// @brief Method ReadContent, addr 0x5aad194, size 0x6c4, virtual false, abstract: false, final false
  inline void ReadContent();

  /// @brief Method ReadName, addr 0x5aacff0, size 0x1a4, virtual false, abstract: false, final false
  inline ::StringW ReadName();

  /// @brief Method ReadReference, addr 0x5aace28, size 0x1c8, virtual false, abstract: false, final false
  inline void ReadReference();

  /// @brief Method ReadUntil, addr 0x5aacd4c, size 0xdc, virtual false, abstract: false, final false
  inline ::StringW ReadUntil(char16_t until, bool handleReferences);

  /// @brief Method SkipWhitespaces, addr 0x5aacaac, size 0x8, virtual false, abstract: false, final false
  inline void SkipWhitespaces();

  /// @brief Method SkipWhitespaces, addr 0x5aacab4, size 0xac, virtual false, abstract: false, final false
  inline void SkipWhitespaces(bool expected);

  /// @brief Method UnexpectedEndError, addr 0x5aac8a0, size 0x118, virtual false, abstract: false, final false
  inline ::System::Exception* UnexpectedEndError();

  constexpr ::Mono::Xml::SmallXmlParser_AttrListImpl* const& __cordl_internal_get_attributes() const;

  constexpr ::Mono::Xml::SmallXmlParser_AttrListImpl*& __cordl_internal_get_attributes();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_buffer() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_buffer();

  constexpr int32_t const& __cordl_internal_get_column() const;

  constexpr int32_t& __cordl_internal_get_column();

  constexpr ::System::Collections::Stack* const& __cordl_internal_get_elementNames() const;

  constexpr ::System::Collections::Stack*& __cordl_internal_get_elementNames();

  constexpr ::Mono::Xml::SmallXmlParser_IContentHandler* const& __cordl_internal_get_handler() const;

  constexpr ::Mono::Xml::SmallXmlParser_IContentHandler*& __cordl_internal_get_handler();

  constexpr bool const& __cordl_internal_get_isWhitespace() const;

  constexpr bool& __cordl_internal_get_isWhitespace();

  constexpr int32_t const& __cordl_internal_get_line() const;

  constexpr int32_t& __cordl_internal_get_line();

  constexpr ::ArrayW<char16_t> const& __cordl_internal_get_nameBuffer() const;

  constexpr ::ArrayW<char16_t>& __cordl_internal_get_nameBuffer();

  constexpr ::System::IO::TextReader* const& __cordl_internal_get_reader() const;

  constexpr ::System::IO::TextReader*& __cordl_internal_get_reader();

  constexpr bool const& __cordl_internal_get_resetColumn() const;

  constexpr bool& __cordl_internal_get_resetColumn();

  constexpr ::StringW const& __cordl_internal_get_xmlSpace() const;

  constexpr ::StringW& __cordl_internal_get_xmlSpace();

  constexpr ::System::Collections::Stack* const& __cordl_internal_get_xmlSpaces() const;

  constexpr ::System::Collections::Stack*& __cordl_internal_get_xmlSpaces();

  constexpr void __cordl_internal_set_attributes(::Mono::Xml::SmallXmlParser_AttrListImpl* value);

  constexpr void __cordl_internal_set_buffer(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_column(int32_t value);

  constexpr void __cordl_internal_set_elementNames(::System::Collections::Stack* value);

  constexpr void __cordl_internal_set_handler(::Mono::Xml::SmallXmlParser_IContentHandler* value);

  constexpr void __cordl_internal_set_isWhitespace(bool value);

  constexpr void __cordl_internal_set_line(int32_t value);

  constexpr void __cordl_internal_set_nameBuffer(::ArrayW<char16_t> value);

  constexpr void __cordl_internal_set_reader(::System::IO::TextReader* value);

  constexpr void __cordl_internal_set_resetColumn(bool value);

  constexpr void __cordl_internal_set_xmlSpace(::StringW value);

  constexpr void __cordl_internal_set_xmlSpaces(::System::Collections::Stack* value);

  /// @brief Method .ctor, addr 0x5aabfa8, size 0x108, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmallXmlParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmallXmlParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmallXmlParser(SmallXmlParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmallXmlParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmallXmlParser(SmallXmlParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2254 };

  /// @brief Field handler, offset: 0x10, size: 0x8, def value: None
  ::Mono::Xml::SmallXmlParser_IContentHandler* ___handler;

  /// @brief Field reader, offset: 0x18, size: 0x8, def value: None
  ::System::IO::TextReader* ___reader;

  /// @brief Field elementNames, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Stack* ___elementNames;

  /// @brief Field xmlSpaces, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Stack* ___xmlSpaces;

  /// @brief Field xmlSpace, offset: 0x30, size: 0x8, def value: None
  ::StringW ___xmlSpace;

  /// @brief Field buffer, offset: 0x38, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___buffer;

  /// @brief Field nameBuffer, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<char16_t> ___nameBuffer;

  /// @brief Field isWhitespace, offset: 0x48, size: 0x1, def value: None
  bool ___isWhitespace;

  /// @brief Field attributes, offset: 0x50, size: 0x8, def value: None
  ::Mono::Xml::SmallXmlParser_AttrListImpl* ___attributes;

  /// @brief Field line, offset: 0x58, size: 0x4, def value: None
  int32_t ___line;

  /// @brief Field column, offset: 0x5c, size: 0x4, def value: None
  int32_t ___column;

  /// @brief Field resetColumn, offset: 0x60, size: 0x1, def value: None
  bool ___resetColumn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Xml::SmallXmlParser, ___handler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SmallXmlParser, ___reader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SmallXmlParser, ___elementNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SmallXmlParser, ___xmlSpaces) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SmallXmlParser, ___xmlSpace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SmallXmlParser, ___buffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SmallXmlParser, ___nameBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SmallXmlParser, ___isWhitespace) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SmallXmlParser, ___attributes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SmallXmlParser, ___line) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SmallXmlParser, ___column) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::SmallXmlParser, ___resetColumn) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Mono::Xml::SmallXmlParser) == 0x68, "Size mismatch!");

} // namespace Mono::Xml
