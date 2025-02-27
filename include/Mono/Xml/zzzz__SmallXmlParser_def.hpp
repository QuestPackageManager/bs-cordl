#pragma once
// IWYU pragma private; include "Mono/Xml/SmallXmlParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::Mono::Xml::SmallXmlParser);
MARK_REF_PTR_T(::Mono::Xml::SmallXmlParser_AttrListImpl);
MARK_REF_PTR_T(::Mono::Xml::SmallXmlParser_IAttrList);
MARK_REF_PTR_T(::Mono::Xml::SmallXmlParser_IContentHandler);
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

  __declspec(property(get = get_Names)) ::ArrayW<::StringW, ::Array<::StringW>*> Names;

  __declspec(property(get = get_Values)) ::ArrayW<::StringW, ::Array<::StringW>*> Values;

  /// @brief Method GetName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetName(int32_t i);

  /// @brief Method GetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetValue(int32_t i);

  /// @brief Method GetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetValue(::StringW name);

  /// @brief Method get_Length, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_Names, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Names();

  /// @brief Method get_Values, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Values();

  // Ctor Parameters [CppParam { name: "", ty: "SmallXmlParser_IAttrList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmallXmlParser_IAttrList(SmallXmlParser_IAttrList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2252 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Mono::Xml
// Dependencies Mono.Xml.SmallXmlParser::IAttrList, System.Object
namespace Mono::Xml {
// Is value type: false
// CS Name: Mono.Xml.SmallXmlParser/AttrListImpl
class CORDL_TYPE SmallXmlParser_AttrListImpl : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Names)) ::ArrayW<::StringW, ::Array<::StringW>*> Names;

  __declspec(property(get = get_Values)) ::ArrayW<::StringW, ::Array<::StringW>*> Values;

  /// @brief Field attrNames, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attrNames, put = __cordl_internal_set_attrNames)) ::System::Collections::Generic::List_1<::StringW>* attrNames;

  /// @brief Field attrValues, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_attrValues, put = __cordl_internal_set_attrValues)) ::System::Collections::Generic::List_1<::StringW>* attrValues;

  /// @brief Convert operator to "::Mono::Xml::SmallXmlParser_IAttrList"
  constexpr operator ::Mono::Xml::SmallXmlParser_IAttrList*() noexcept;

  /// @brief Method Add, addr 0x3c656e4, size 0x10c, virtual false, abstract: false, final false
  inline void Add(::StringW name, ::StringW value);

  /// @brief Method Clear, addr 0x3c65220, size 0x9c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetName, addr 0x3c65838, size 0x58, virtual true, abstract: false, final true
  inline ::StringW GetName(int32_t i);

  /// @brief Method GetValue, addr 0x3c65890, size 0x58, virtual true, abstract: false, final true
  inline ::StringW GetValue(int32_t i);

  /// @brief Method GetValue, addr 0x3c658e8, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW GetValue(::StringW name);

  static inline ::Mono::Xml::SmallXmlParser_AttrListImpl* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_attrNames() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_attrNames();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_attrValues() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_attrValues();

  constexpr void __cordl_internal_set_attrNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_attrValues(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x3c63eb8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Length, addr 0x3c657f0, size 0x48, virtual true, abstract: false, final true
  inline int32_t get_Length();

  /// @brief Method get_Names, addr 0x3c659a8, size 0x50, virtual true, abstract: false, final true
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Names();

  /// @brief Method get_Values, addr 0x3c659f8, size 0x50, virtual true, abstract: false, final true
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Values();

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

static_assert(::cordl_internals::size_check_v<::Mono::Xml::SmallXmlParser_AttrListImpl, 0x20>, "Size mismatch!");

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
  __declspec(property(get = __cordl_internal_get_nameBuffer, put = __cordl_internal_set_nameBuffer)) ::ArrayW<char16_t, ::Array<char16_t>*> nameBuffer;

  /// @brief Field reader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader)) ::System::IO::TextReader* reader;

  /// @brief Field resetColumn, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_resetColumn, put = __cordl_internal_set_resetColumn)) bool resetColumn;

  /// @brief Field xmlSpace, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlSpace, put = __cordl_internal_set_xmlSpace)) ::StringW xmlSpace;

  /// @brief Field xmlSpaces, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlSpaces, put = __cordl_internal_set_xmlSpaces)) ::System::Collections::Stack* xmlSpaces;

  /// @brief Method Cleanup, addr 0x3c651a4, size 0x7c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Error, addr 0x3c63f4c, size 0x70, virtual false, abstract: false, final false
  inline ::System::Exception* Error(::StringW msg);

  /// @brief Method Expect, addr 0x3c64488, size 0xc0, virtual false, abstract: false, final false
  inline void Expect(int32_t c);

  /// @brief Method HandleBufferedContent, addr 0x3c6506c, size 0x138, virtual false, abstract: false, final false
  inline void HandleBufferedContent();

  /// @brief Method HandleWhitespaces, addr 0x3c6434c, size 0xc0, virtual false, abstract: false, final false
  inline void HandleWhitespaces();

  /// @brief Method IsNameChar, addr 0x3c64174, size 0xfc, virtual false, abstract: false, final false
  inline bool IsNameChar(char16_t c, bool start);

  /// @brief Method IsWhitespace, addr 0x3c64270, size 0x28, virtual false, abstract: false, final false
  inline bool IsWhitespace(int32_t c);

  static inline ::Mono::Xml::SmallXmlParser* New_ctor();

  /// @brief Method Parse, addr 0x3c63958, size 0x1c8, virtual false, abstract: false, final false
  inline void Parse(::System::IO::TextReader* input, ::Mono::Xml::SmallXmlParser_IContentHandler* handler);

  /// @brief Method Peek, addr 0x3c64468, size 0x20, virtual false, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x3c6440c, size 0x5c, virtual false, abstract: false, final false
  inline int32_t Read();

  /// @brief Method ReadAttribute, addr 0x3c6543c, size 0x164, virtual false, abstract: false, final false
  inline void ReadAttribute(::Mono::Xml::SmallXmlParser_AttrListImpl* a);

  /// @brief Method ReadCDATASection, addr 0x3c652bc, size 0xf8, virtual false, abstract: false, final false
  inline void ReadCDATASection();

  /// @brief Method ReadCharacterReference, addr 0x3c65628, size 0xbc, virtual false, abstract: false, final false
  inline int32_t ReadCharacterReference();

  /// @brief Method ReadCharacters, addr 0x3c655a0, size 0x88, virtual false, abstract: false, final false
  inline void ReadCharacters();

  /// @brief Method ReadComment, addr 0x3c653b4, size 0x88, virtual false, abstract: false, final false
  inline void ReadComment();

  /// @brief Method ReadContent, addr 0x3c64990, size 0x6dc, virtual false, abstract: false, final false
  inline void ReadContent();

  /// @brief Method ReadName, addr 0x3c647ec, size 0x1a4, virtual false, abstract: false, final false
  inline ::StringW ReadName();

  /// @brief Method ReadReference, addr 0x3c64624, size 0x1c8, virtual false, abstract: false, final false
  inline void ReadReference();

  /// @brief Method ReadUntil, addr 0x3c64548, size 0xdc, virtual false, abstract: false, final false
  inline ::StringW ReadUntil(char16_t until, bool handleReferences);

  /// @brief Method SkipWhitespaces, addr 0x3c64298, size 0x8, virtual false, abstract: false, final false
  inline void SkipWhitespaces();

  /// @brief Method SkipWhitespaces, addr 0x3c642a0, size 0xac, virtual false, abstract: false, final false
  inline void SkipWhitespaces(bool expected);

  /// @brief Method UnexpectedEndError, addr 0x3c64088, size 0xec, virtual false, abstract: false, final false
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

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_nameBuffer() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_nameBuffer();

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

  constexpr void __cordl_internal_set_nameBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_reader(::System::IO::TextReader* value);

  constexpr void __cordl_internal_set_resetColumn(bool value);

  constexpr void __cordl_internal_set_xmlSpace(::StringW value);

  constexpr void __cordl_internal_set_xmlSpaces(::System::Collections::Stack* value);

  /// @brief Method .ctor, addr 0x3c637c4, size 0x10c, virtual false, abstract: false, final false
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
  ::ArrayW<char16_t, ::Array<char16_t>*> ___nameBuffer;

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

static_assert(::cordl_internals::size_check_v<::Mono::Xml::SmallXmlParser, 0x68>, "Size mismatch!");

} // namespace Mono::Xml
NEED_NO_BOX(::Mono::Xml::SmallXmlParser);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::SmallXmlParser*, "Mono.Xml", "SmallXmlParser");
NEED_NO_BOX(::Mono::Xml::SmallXmlParser_AttrListImpl);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::SmallXmlParser_AttrListImpl*, "Mono.Xml", "SmallXmlParser/AttrListImpl");
NEED_NO_BOX(::Mono::Xml::SmallXmlParser_IAttrList);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::SmallXmlParser_IAttrList*, "Mono.Xml", "SmallXmlParser/IAttrList");
NEED_NO_BOX(::Mono::Xml::SmallXmlParser_IContentHandler);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::SmallXmlParser_IContentHandler*, "Mono.Xml", "SmallXmlParser/IContentHandler");
