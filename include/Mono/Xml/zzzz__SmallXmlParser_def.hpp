#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SmallXmlParser)
namespace Mono::Xml {
class __SmallXmlParser__IContentHandler;
}
namespace System {
class Exception;
}
namespace Mono::Xml {
class __SmallXmlParser__IAttrList;
}
namespace Mono::Xml {
class __SmallXmlParser__AttrListImpl;
}
namespace System::Collections {
class Stack;
}
namespace System::Text {
class StringBuilder;
}
namespace System::IO {
class TextReader;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Mono::Xml {
class SmallXmlParser;
}
namespace Mono::Xml {
class __SmallXmlParser__AttrListImpl;
}
namespace Mono::Xml {
class __SmallXmlParser__IAttrList;
}
namespace Mono::Xml {
class __SmallXmlParser__IContentHandler;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Xml::SmallXmlParser);
MARK_REF_PTR_T(::Mono::Xml::__SmallXmlParser__AttrListImpl);
MARK_REF_PTR_T(::Mono::Xml::__SmallXmlParser__IAttrList);
MARK_REF_PTR_T(::Mono::Xml::__SmallXmlParser__IContentHandler);
// Type: ::IContentHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2251))
// CS Name: ::SmallXmlParser::IContentHandler*
class CORDL_TYPE __SmallXmlParser__IContentHandler {
public:
  // Declarations
  /// @brief Method OnStartParsing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnStartParsing(::Mono::Xml::SmallXmlParser* parser);

  /// @brief Method OnEndParsing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnEndParsing(::Mono::Xml::SmallXmlParser* parser);

  /// @brief Method OnStartElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnStartElement(::StringW name, ::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method OnEndElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnEndElement(::StringW name);

  /// @brief Method OnProcessingInstruction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method OnChars, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnChars(::StringW text);

  /// @brief Method OnIgnorableWhitespace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnIgnorableWhitespace(::StringW text);

  // Ctor Parameters [CppParam { name: "", ty: "__SmallXmlParser__IContentHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SmallXmlParser__IContentHandler(__SmallXmlParser__IContentHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SmallXmlParser__IContentHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SmallXmlParser__IContentHandler(__SmallXmlParser__IContentHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Mono::Xml
// Type: ::IAttrList
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2252))
// CS Name: ::SmallXmlParser::IAttrList*
class CORDL_TYPE __SmallXmlParser__IAttrList {
public:
  // Declarations
  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Names))::ArrayW<::StringW, ::Array<::StringW>*> Names;

  __declspec(property(get = get_Values))::ArrayW<::StringW, ::Array<::StringW>*> Values;

  /// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Length();

  /// @brief Method GetName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetName(int32_t i);

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetValue(int32_t i);

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetValue(::StringW name);

  /// @brief Method get_Names, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Names();

  /// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Values();

  // Ctor Parameters [CppParam { name: "", ty: "__SmallXmlParser__IAttrList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SmallXmlParser__IAttrList(__SmallXmlParser__IAttrList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SmallXmlParser__IAttrList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SmallXmlParser__IAttrList(__SmallXmlParser__IAttrList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Mono::Xml
// Type: ::AttrListImpl
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2253))
// CS Name: ::SmallXmlParser::AttrListImpl*
class CORDL_TYPE __SmallXmlParser__AttrListImpl : public ::System::Object {
public:
  // Declarations
  /// @brief Field attrNames, offset 0x10, size 0x8
  __declspec(property(get = __get_attrNames, put = __set_attrNames))::System::Collections::Generic::List_1<::StringW>* attrNames;

  /// @brief Field attrValues, offset 0x18, size 0x8
  __declspec(property(get = __get_attrValues, put = __set_attrValues))::System::Collections::Generic::List_1<::StringW>* attrValues;

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Names))::ArrayW<::StringW, ::Array<::StringW>*> Names;

  __declspec(property(get = get_Values))::ArrayW<::StringW, ::Array<::StringW>*> Values;

  /// @brief Convert operator to "::Mono::Xml::__SmallXmlParser__IAttrList"
  constexpr operator ::Mono::Xml::__SmallXmlParser__IAttrList*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_attrNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_attrNames() const;

  constexpr void __set_attrNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_attrValues();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_attrValues() const;

  constexpr void __set_attrValues(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method get_Length, addr 0x24150ec, size 0x48, virtual true, abstract: false, final true
  inline int32_t get_Length();

  /// @brief Method GetName, addr 0x2415134, size 0x58, virtual true, abstract: false, final true
  inline ::StringW GetName(int32_t i);

  /// @brief Method GetValue, addr 0x241518c, size 0x58, virtual true, abstract: false, final true
  inline ::StringW GetValue(int32_t i);

  /// @brief Method GetValue, addr 0x24151e4, size 0xc0, virtual true, abstract: false, final true
  inline ::StringW GetValue(::StringW name);

  /// @brief Method get_Names, addr 0x24152a4, size 0x50, virtual true, abstract: false, final true
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Names();

  /// @brief Method get_Values, addr 0x24152f4, size 0x50, virtual true, abstract: false, final true
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Values();

  /// @brief Method Clear, addr 0x2414a90, size 0x9c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Add, addr 0x2414fd8, size 0x114, virtual false, abstract: false, final false
  inline void Add(::StringW name, ::StringW value);

  static inline ::Mono::Xml::__SmallXmlParser__AttrListImpl* New_ctor();

  /// @brief Method .ctor, addr 0x2413718, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SmallXmlParser__AttrListImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SmallXmlParser__AttrListImpl(__SmallXmlParser__AttrListImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SmallXmlParser__AttrListImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SmallXmlParser__AttrListImpl(__SmallXmlParser__AttrListImpl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SmallXmlParser__AttrListImpl();

public:
  /// @brief Field attrNames, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___attrNames;

  /// @brief Field attrValues, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___attrValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Xml::__SmallXmlParser__AttrListImpl, 0x20>, "Size mismatch!");

static_assert(offsetof(::Mono::Xml::__SmallXmlParser__AttrListImpl, ___attrNames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Xml::__SmallXmlParser__AttrListImpl, ___attrValues) == 0x18, "Offset mismatch!");

} // namespace Mono::Xml
// Type: Mono.Xml::SmallXmlParser
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2254))
// CS Name: ::Mono.Xml::SmallXmlParser*
class CORDL_TYPE SmallXmlParser : public ::System::Object {
public:
  // Declarations
  using AttrListImpl = ::Mono::Xml::__SmallXmlParser__AttrListImpl;

  using IAttrList = ::Mono::Xml::__SmallXmlParser__IAttrList;

  using IContentHandler = ::Mono::Xml::__SmallXmlParser__IContentHandler;

  /// @brief Field handler, offset 0x10, size 0x8
  __declspec(property(get = __get_handler, put = __set_handler))::Mono::Xml::__SmallXmlParser__IContentHandler* handler;

  /// @brief Field reader, offset 0x18, size 0x8
  __declspec(property(get = __get_reader, put = __set_reader))::System::IO::TextReader* reader;

  /// @brief Field elementNames, offset 0x20, size 0x8
  __declspec(property(get = __get_elementNames, put = __set_elementNames))::System::Collections::Stack* elementNames;

  /// @brief Field xmlSpaces, offset 0x28, size 0x8
  __declspec(property(get = __get_xmlSpaces, put = __set_xmlSpaces))::System::Collections::Stack* xmlSpaces;

  /// @brief Field xmlSpace, offset 0x30, size 0x8
  __declspec(property(get = __get_xmlSpace, put = __set_xmlSpace))::StringW xmlSpace;

  /// @brief Field buffer, offset 0x38, size 0x8
  __declspec(property(get = __get_buffer, put = __set_buffer))::System::Text::StringBuilder* buffer;

  /// @brief Field nameBuffer, offset 0x40, size 0x8
  __declspec(property(get = __get_nameBuffer, put = __set_nameBuffer))::ArrayW<char16_t, ::Array<char16_t>*> nameBuffer;

  /// @brief Field isWhitespace, offset 0x48, size 0x1
  __declspec(property(get = __get_isWhitespace, put = __set_isWhitespace)) bool isWhitespace;

  /// @brief Field attributes, offset 0x50, size 0x8
  __declspec(property(get = __get_attributes, put = __set_attributes))::Mono::Xml::__SmallXmlParser__AttrListImpl* attributes;

  /// @brief Field line, offset 0x58, size 0x4
  __declspec(property(get = __get_line, put = __set_line)) int32_t line;

  /// @brief Field column, offset 0x5c, size 0x4
  __declspec(property(get = __get_column, put = __set_column)) int32_t column;

  /// @brief Field resetColumn, offset 0x60, size 0x1
  __declspec(property(get = __get_resetColumn, put = __set_resetColumn)) bool resetColumn;

  constexpr ::Mono::Xml::__SmallXmlParser__IContentHandler*& __get_handler();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Xml::__SmallXmlParser__IContentHandler*> const& __get_handler() const;

  constexpr void __set_handler(::Mono::Xml::__SmallXmlParser__IContentHandler* value);

  constexpr ::System::IO::TextReader*& __get_reader();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextReader*> const& __get_reader() const;

  constexpr void __set_reader(::System::IO::TextReader* value);

  constexpr ::System::Collections::Stack*& __get_elementNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Stack*> const& __get_elementNames() const;

  constexpr void __set_elementNames(::System::Collections::Stack* value);

  constexpr ::System::Collections::Stack*& __get_xmlSpaces();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Stack*> const& __get_xmlSpaces() const;

  constexpr void __set_xmlSpaces(::System::Collections::Stack* value);

  constexpr ::StringW& __get_xmlSpace();

  constexpr ::StringW const& __get_xmlSpace() const;

  constexpr void __set_xmlSpace(::StringW value);

  constexpr ::System::Text::StringBuilder*& __get_buffer();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get_buffer() const;

  constexpr void __set_buffer(::System::Text::StringBuilder* value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_nameBuffer();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_nameBuffer() const;

  constexpr void __set_nameBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr bool& __get_isWhitespace();

  constexpr bool const& __get_isWhitespace() const;

  constexpr void __set_isWhitespace(bool value);

  constexpr ::Mono::Xml::__SmallXmlParser__AttrListImpl*& __get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Xml::__SmallXmlParser__AttrListImpl*> const& __get_attributes() const;

  constexpr void __set_attributes(::Mono::Xml::__SmallXmlParser__AttrListImpl* value);

  constexpr int32_t& __get_line();

  constexpr int32_t const& __get_line() const;

  constexpr void __set_line(int32_t value);

  constexpr int32_t& __get_column();

  constexpr int32_t const& __get_column() const;

  constexpr void __set_column(int32_t value);

  constexpr bool& __get_resetColumn();

  constexpr bool const& __get_resetColumn() const;

  constexpr void __set_resetColumn(bool value);

  static inline ::Mono::Xml::SmallXmlParser* New_ctor();

  /// @brief Method .ctor, addr 0x2413010, size 0x118, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Error, addr 0x24137b8, size 0x78, virtual false, abstract: false, final false
  inline ::System::Exception* Error(::StringW msg);

  /// @brief Method UnexpectedEndError, addr 0x24138fc, size 0xec, virtual false, abstract: false, final false
  inline ::System::Exception* UnexpectedEndError();

  /// @brief Method IsNameChar, addr 0x24139e8, size 0xfc, virtual false, abstract: false, final false
  inline bool IsNameChar(char16_t c, bool start);

  /// @brief Method IsWhitespace, addr 0x2413ae4, size 0x30, virtual false, abstract: false, final false
  inline bool IsWhitespace(int32_t c);

  /// @brief Method SkipWhitespaces, addr 0x2413b14, size 0x8, virtual false, abstract: false, final false
  inline void SkipWhitespaces();

  /// @brief Method HandleWhitespaces, addr 0x2413bc8, size 0xc0, virtual false, abstract: false, final false
  inline void HandleWhitespaces();

  /// @brief Method SkipWhitespaces, addr 0x2413b1c, size 0xac, virtual false, abstract: false, final false
  inline void SkipWhitespaces(bool expected);

  /// @brief Method Peek, addr 0x2413cf0, size 0x20, virtual false, abstract: false, final false
  inline int32_t Peek();

  /// @brief Method Read, addr 0x2413c88, size 0x68, virtual false, abstract: false, final false
  inline int32_t Read();

  /// @brief Method Expect, addr 0x2413d10, size 0xc0, virtual false, abstract: false, final false
  inline void Expect(int32_t c);

  /// @brief Method ReadUntil, addr 0x2413dd0, size 0xdc, virtual false, abstract: false, final false
  inline ::StringW ReadUntil(char16_t until, bool handleReferences);

  /// @brief Method ReadName, addr 0x2414074, size 0x1a4, virtual false, abstract: false, final false
  inline ::StringW ReadName();

  /// @brief Method Parse, addr 0x24131b4, size 0x1c8, virtual false, abstract: false, final false
  inline void Parse(::System::IO::TextReader* input, ::Mono::Xml::__SmallXmlParser__IContentHandler* handler);

  /// @brief Method Cleanup, addr 0x2414a14, size 0x7c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method ReadContent, addr 0x2414218, size 0x6c4, virtual false, abstract: false, final false
  inline void ReadContent();

  /// @brief Method HandleBufferedContent, addr 0x24148dc, size 0x138, virtual false, abstract: false, final false
  inline void HandleBufferedContent();

  /// @brief Method ReadCharacters, addr 0x2414e18, size 0x88, virtual false, abstract: false, final false
  inline void ReadCharacters();

  /// @brief Method ReadReference, addr 0x2413eac, size 0x1c8, virtual false, abstract: false, final false
  inline void ReadReference();

  /// @brief Method ReadCharacterReference, addr 0x2414ea0, size 0x138, virtual false, abstract: false, final false
  inline int32_t ReadCharacterReference();

  /// @brief Method ReadAttribute, addr 0x2414cb4, size 0x164, virtual false, abstract: false, final false
  inline void ReadAttribute(::Mono::Xml::__SmallXmlParser__AttrListImpl* a);

  /// @brief Method ReadCDATASection, addr 0x2414b2c, size 0x100, virtual false, abstract: false, final false
  inline void ReadCDATASection();

  /// @brief Method ReadComment, addr 0x2414c2c, size 0x88, virtual false, abstract: false, final false
  inline void ReadComment();

  // Ctor Parameters [CppParam { name: "", ty: "SmallXmlParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmallXmlParser(SmallXmlParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmallXmlParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmallXmlParser(SmallXmlParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmallXmlParser();

public:
  /// @brief Field handler, offset: 0x10, size: 0x8, def value: None
  ::Mono::Xml::__SmallXmlParser__IContentHandler* ___handler;

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
  ::Mono::Xml::__SmallXmlParser__AttrListImpl* ___attributes;

  /// @brief Field line, offset: 0x58, size: 0x4, def value: None
  int32_t ___line;

  /// @brief Field column, offset: 0x5c, size: 0x4, def value: None
  int32_t ___column;

  /// @brief Field resetColumn, offset: 0x60, size: 0x1, def value: None
  bool ___resetColumn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Xml::SmallXmlParser, 0x68>, "Size mismatch!");

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

} // namespace Mono::Xml
NEED_NO_BOX(::Mono::Xml::SmallXmlParser);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::SmallXmlParser*, "Mono.Xml", "SmallXmlParser");
NEED_NO_BOX(::Mono::Xml::__SmallXmlParser__AttrListImpl);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::__SmallXmlParser__AttrListImpl*, "Mono.Xml", "SmallXmlParser/AttrListImpl");
NEED_NO_BOX(::Mono::Xml::__SmallXmlParser__IAttrList);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::__SmallXmlParser__IAttrList*, "Mono.Xml", "SmallXmlParser/IAttrList");
NEED_NO_BOX(::Mono::Xml::__SmallXmlParser__IContentHandler);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::__SmallXmlParser__IContentHandler*, "Mono.Xml", "SmallXmlParser/IContentHandler");
