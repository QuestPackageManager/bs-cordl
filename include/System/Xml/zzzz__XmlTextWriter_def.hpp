#pragma once
// IWYU pragma private; include "System/Xml/XmlTextWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__Formatting_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextWriter)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextWriter;
}
namespace System::Text {
class Encoding;
}
namespace System::Xml {
struct Formatting;
}
namespace System::Xml {
struct WriteState;
}
namespace System::Xml {
class XmlTextEncoder;
}
namespace System::Xml {
class XmlTextWriterBase64Encoder;
}
namespace System::Xml {
struct XmlTextWriter_NamespaceState;
}
namespace System::Xml {
struct XmlTextWriter_Namespace;
}
namespace System::Xml {
struct XmlTextWriter_SpecialAttr;
}
namespace System::Xml {
struct XmlTextWriter_State;
}
namespace System::Xml {
struct XmlTextWriter_TagInfo;
}
namespace System::Xml {
struct XmlTextWriter_Token;
}
// Forward declare root types
namespace System::Xml {
struct XmlTextWriter_NamespaceState;
}
namespace System::Xml {
struct XmlTextWriter_SpecialAttr;
}
namespace System::Xml {
struct XmlTextWriter_State;
}
namespace System::Xml {
struct XmlTextWriter_Token;
}
namespace System::Xml {
class XmlTextWriter;
}
namespace System::Xml {
struct XmlTextWriter_Namespace;
}
namespace System::Xml {
struct XmlTextWriter_TagInfo;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlTextWriter_NamespaceState);
MARK_VAL_T(::System::Xml::XmlTextWriter_SpecialAttr);
MARK_VAL_T(::System::Xml::XmlTextWriter_State);
MARK_VAL_T(::System::Xml::XmlTextWriter_Token);
MARK_REF_PTR_T(::System::Xml::XmlTextWriter);
MARK_VAL_T(::System::Xml::XmlTextWriter_Namespace);
MARK_VAL_T(::System::Xml::XmlTextWriter_TagInfo);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlTextWriter/NamespaceState
struct CORDL_TYPE XmlTextWriter_NamespaceState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlTextWriter_NamespaceState_Unwrapped
  enum struct __XmlTextWriter_NamespaceState_Unwrapped : int32_t {
    __E_Uninitialized = static_cast<int32_t>(0x0),
    __E_NotDeclaredButInScope = static_cast<int32_t>(0x1),
    __E_DeclaredButNotWrittenOut = static_cast<int32_t>(0x2),
    __E_DeclaredAndWrittenOut = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlTextWriter_NamespaceState_Unwrapped() const noexcept {
    return static_cast<__XmlTextWriter_NamespaceState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTextWriter_NamespaceState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlTextWriter_NamespaceState(int32_t value__) noexcept;

  /// @brief Field DeclaredAndWrittenOut value: I32(3)
  static ::System::Xml::XmlTextWriter_NamespaceState const DeclaredAndWrittenOut;

  /// @brief Field DeclaredButNotWrittenOut value: I32(2)
  static ::System::Xml::XmlTextWriter_NamespaceState const DeclaredButNotWrittenOut;

  /// @brief Field NotDeclaredButInScope value: I32(1)
  static ::System::Xml::XmlTextWriter_NamespaceState const NotDeclaredButInScope;

  /// @brief Field Uninitialized value: I32(0)
  static ::System::Xml::XmlTextWriter_NamespaceState const Uninitialized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7243 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlTextWriter_NamespaceState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlTextWriter_NamespaceState, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlSpace, System.Xml.XmlTextWriter::NamespaceState
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlTextWriter/TagInfo
struct CORDL_TYPE XmlTextWriter_TagInfo {
public:
  // Declarations
  /// @brief Method Init, addr 0x4319588, size 0x6c, virtual false, abstract: false, final false
  inline void Init(int32_t nsTop);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTextWriter_TagInfo();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "defaultNs", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "defaultNsState", ty: "::System::Xml::XmlTextWriter_NamespaceState", modifiers: "", def_value: None }, CppParam {
  // name: "xmlSpace", ty: "::System::Xml::XmlSpace", modifiers: "", def_value: None }, CppParam { name: "xmlLang", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "prevNsTop", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "prefixCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mixed", ty: "bool", modifiers: "", def_value: None
  // }]
  constexpr XmlTextWriter_TagInfo(::StringW name, ::StringW prefix, ::StringW defaultNs, ::System::Xml::XmlTextWriter_NamespaceState defaultNsState, ::System::Xml::XmlSpace xmlSpace,
                                  ::StringW xmlLang, int32_t prevNsTop, int32_t prefixCount, bool mixed) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7244 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field prefix, offset: 0x8, size: 0x8, def value: None
  ::StringW prefix;

  /// @brief Field defaultNs, offset: 0x10, size: 0x8, def value: None
  ::StringW defaultNs;

  /// @brief Field defaultNsState, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::XmlTextWriter_NamespaceState defaultNsState;

  /// @brief Field xmlSpace, offset: 0x1c, size: 0x4, def value: None
  ::System::Xml::XmlSpace xmlSpace;

  /// @brief Field xmlLang, offset: 0x20, size: 0x8, def value: None
  ::StringW xmlLang;

  /// @brief Field prevNsTop, offset: 0x28, size: 0x4, def value: None
  int32_t prevNsTop;

  /// @brief Field prefixCount, offset: 0x2c, size: 0x4, def value: None
  int32_t prefixCount;

  /// @brief Field mixed, offset: 0x30, size: 0x1, def value: None
  bool mixed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlTextWriter_TagInfo, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter_TagInfo, prefix) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter_TagInfo, defaultNs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter_TagInfo, defaultNsState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter_TagInfo, xmlSpace) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter_TagInfo, xmlLang) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter_TagInfo, prevNsTop) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter_TagInfo, prefixCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter_TagInfo, mixed) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlTextWriter_TagInfo, 0x38>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlTextWriter/Namespace
struct CORDL_TYPE XmlTextWriter_Namespace {
public:
  // Declarations
  /// @brief Method Set, addr 0x431dbdc, size 0x18, virtual false, abstract: false, final false
  inline void Set(::StringW prefix, ::StringW ns, bool declared);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTextWriter_Namespace();

  // Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ns", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "declared", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "prevNsIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlTextWriter_Namespace(::StringW prefix, ::StringW ns, bool declared, int32_t prevNsIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7245 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field prefix, offset: 0x0, size: 0x8, def value: None
  ::StringW prefix;

  /// @brief Field ns, offset: 0x8, size: 0x8, def value: None
  ::StringW ns;

  /// @brief Field declared, offset: 0x10, size: 0x1, def value: None
  bool declared;

  /// @brief Field prevNsIndex, offset: 0x14, size: 0x4, def value: None
  int32_t prevNsIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlTextWriter_Namespace, prefix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter_Namespace, ns) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter_Namespace, declared) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter_Namespace, prevNsIndex) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlTextWriter_Namespace, 0x18>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlTextWriter/SpecialAttr
struct CORDL_TYPE XmlTextWriter_SpecialAttr {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlTextWriter_SpecialAttr_Unwrapped
  enum struct __XmlTextWriter_SpecialAttr_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_XmlSpace = static_cast<int32_t>(0x1),
    __E_XmlLang = static_cast<int32_t>(0x2),
    __E_XmlNs = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlTextWriter_SpecialAttr_Unwrapped() const noexcept {
    return static_cast<__XmlTextWriter_SpecialAttr_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTextWriter_SpecialAttr();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlTextWriter_SpecialAttr(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::System::Xml::XmlTextWriter_SpecialAttr const None;

  /// @brief Field XmlLang value: I32(2)
  static ::System::Xml::XmlTextWriter_SpecialAttr const XmlLang;

  /// @brief Field XmlNs value: I32(3)
  static ::System::Xml::XmlTextWriter_SpecialAttr const XmlNs;

  /// @brief Field XmlSpace value: I32(1)
  static ::System::Xml::XmlTextWriter_SpecialAttr const XmlSpace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7246 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlTextWriter_SpecialAttr, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlTextWriter_SpecialAttr, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlTextWriter/State
struct CORDL_TYPE XmlTextWriter_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlTextWriter_State_Unwrapped
  enum struct __XmlTextWriter_State_Unwrapped : int32_t {
    __E_Start = static_cast<int32_t>(0x0),
    __E_Prolog = static_cast<int32_t>(0x1),
    __E_PostDTD = static_cast<int32_t>(0x2),
    __E_Element = static_cast<int32_t>(0x3),
    __E_Attribute = static_cast<int32_t>(0x4),
    __E_Content = static_cast<int32_t>(0x5),
    __E_AttrOnly = static_cast<int32_t>(0x6),
    __E_Epilog = static_cast<int32_t>(0x7),
    __E_Error = static_cast<int32_t>(0x8),
    __E_Closed = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlTextWriter_State_Unwrapped() const noexcept {
    return static_cast<__XmlTextWriter_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTextWriter_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlTextWriter_State(int32_t value__) noexcept;

  /// @brief Field AttrOnly value: I32(6)
  static ::System::Xml::XmlTextWriter_State const AttrOnly;

  /// @brief Field Attribute value: I32(4)
  static ::System::Xml::XmlTextWriter_State const Attribute;

  /// @brief Field Closed value: I32(9)
  static ::System::Xml::XmlTextWriter_State const Closed;

  /// @brief Field Content value: I32(5)
  static ::System::Xml::XmlTextWriter_State const Content;

  /// @brief Field Element value: I32(3)
  static ::System::Xml::XmlTextWriter_State const Element;

  /// @brief Field Epilog value: I32(7)
  static ::System::Xml::XmlTextWriter_State const Epilog;

  /// @brief Field Error value: I32(8)
  static ::System::Xml::XmlTextWriter_State const Error;

  /// @brief Field PostDTD value: I32(2)
  static ::System::Xml::XmlTextWriter_State const PostDTD;

  /// @brief Field Prolog value: I32(1)
  static ::System::Xml::XmlTextWriter_State const Prolog;

  /// @brief Field Start value: I32(0)
  static ::System::Xml::XmlTextWriter_State const Start;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7247 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlTextWriter_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlTextWriter_State, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlTextWriter/Token
struct CORDL_TYPE XmlTextWriter_Token {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlTextWriter_Token_Unwrapped
  enum struct __XmlTextWriter_Token_Unwrapped : int32_t {
    __E_PI = static_cast<int32_t>(0x0),
    __E_Doctype = static_cast<int32_t>(0x1),
    __E_Comment = static_cast<int32_t>(0x2),
    __E_CData = static_cast<int32_t>(0x3),
    __E_StartElement = static_cast<int32_t>(0x4),
    __E_EndElement = static_cast<int32_t>(0x5),
    __E_LongEndElement = static_cast<int32_t>(0x6),
    __E_StartAttribute = static_cast<int32_t>(0x7),
    __E_EndAttribute = static_cast<int32_t>(0x8),
    __E_Content = static_cast<int32_t>(0x9),
    __E_Base64 = static_cast<int32_t>(0xa),
    __E_RawData = static_cast<int32_t>(0xb),
    __E_Whitespace = static_cast<int32_t>(0xc),
    __E_Empty = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlTextWriter_Token_Unwrapped() const noexcept {
    return static_cast<__XmlTextWriter_Token_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTextWriter_Token();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlTextWriter_Token(int32_t value__) noexcept;

  /// @brief Field Base64 value: I32(10)
  static ::System::Xml::XmlTextWriter_Token const Base64;

  /// @brief Field CData value: I32(3)
  static ::System::Xml::XmlTextWriter_Token const CData;

  /// @brief Field Comment value: I32(2)
  static ::System::Xml::XmlTextWriter_Token const Comment;

  /// @brief Field Content value: I32(9)
  static ::System::Xml::XmlTextWriter_Token const Content;

  /// @brief Field Doctype value: I32(1)
  static ::System::Xml::XmlTextWriter_Token const Doctype;

  /// @brief Field Empty value: I32(13)
  static ::System::Xml::XmlTextWriter_Token const Empty;

  /// @brief Field EndAttribute value: I32(8)
  static ::System::Xml::XmlTextWriter_Token const EndAttribute;

  /// @brief Field EndElement value: I32(5)
  static ::System::Xml::XmlTextWriter_Token const EndElement;

  /// @brief Field LongEndElement value: I32(6)
  static ::System::Xml::XmlTextWriter_Token const LongEndElement;

  /// @brief Field PI value: I32(0)
  static ::System::Xml::XmlTextWriter_Token const PI;

  /// @brief Field RawData value: I32(11)
  static ::System::Xml::XmlTextWriter_Token const RawData;

  /// @brief Field StartAttribute value: I32(7)
  static ::System::Xml::XmlTextWriter_Token const StartAttribute;

  /// @brief Field StartElement value: I32(4)
  static ::System::Xml::XmlTextWriter_Token const StartElement;

  /// @brief Field Whitespace value: I32(12)
  static ::System::Xml::XmlTextWriter_Token const Whitespace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7248 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlTextWriter_Token, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlTextWriter_Token, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.Formatting, System.Xml.XmlCharType, System.Xml.XmlTextWriter::SpecialAttr, System.Xml.XmlTextWriter::State, System.Xml.XmlTextWriter::Token, System.Xml.XmlWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlTextWriter
class CORDL_TYPE XmlTextWriter : public ::System::Xml::XmlWriter {
public:
  // Declarations
  using Namespace = ::System::Xml::XmlTextWriter_Namespace;

  using NamespaceState = ::System::Xml::XmlTextWriter_NamespaceState;

  using SpecialAttr = ::System::Xml::XmlTextWriter_SpecialAttr;

  using State = ::System::Xml::XmlTextWriter_State;

  using TagInfo = ::System::Xml::XmlTextWriter_TagInfo;

  using Token = ::System::Xml::XmlTextWriter_Token;

  __declspec(property(get = get_BaseStream)) ::System::IO::Stream* BaseStream;

  __declspec(property(put = set_Formatting)) ::System::Xml::Formatting Formatting;

  __declspec(property(put = set_Namespaces)) bool Namespaces;

  __declspec(property(put = set_QuoteChar)) char16_t QuoteChar;

  __declspec(property(get = get_WriteState)) ::System::Xml::WriteState WriteState;

  /// @brief Field base64Encoder, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_base64Encoder, put = __cordl_internal_set_base64Encoder)) ::System::Xml::XmlTextWriterBase64Encoder* base64Encoder;

  /// @brief Field curQuoteChar, offset 0x6a, size 0x2
  __declspec(property(get = __cordl_internal_get_curQuoteChar, put = __cordl_internal_set_curQuoteChar)) char16_t curQuoteChar;

  /// @brief Field currentState, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_currentState, put = __cordl_internal_set_currentState)) ::System::Xml::XmlTextWriter_State currentState;

  /// @brief Field encoding, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_encoding, put = __cordl_internal_set_encoding)) ::System::Text::Encoding* encoding;

  /// @brief Field flush, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_flush, put = __cordl_internal_set_flush)) bool flush;

  /// @brief Field formatting, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_formatting, put = __cordl_internal_set_formatting)) ::System::Xml::Formatting formatting;

  /// @brief Field indentChar, offset 0x3c, size 0x2
  __declspec(property(get = __cordl_internal_get_indentChar, put = __cordl_internal_set_indentChar)) char16_t indentChar;

  /// @brief Field indentation, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_indentation, put = __cordl_internal_set_indentation)) int32_t indentation;

  /// @brief Field indented, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_indented, put = __cordl_internal_set_indented)) bool indented;

  /// @brief Field lastToken, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_lastToken, put = __cordl_internal_set_lastToken)) ::System::Xml::XmlTextWriter_Token lastToken;

  /// @brief Field namespaces, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_namespaces, put = __cordl_internal_set_namespaces)) bool namespaces;

  /// @brief Field nsHashtable, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_nsHashtable, put = __cordl_internal_set_nsHashtable)) ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* nsHashtable;

  /// @brief Field nsStack, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_nsStack, put = __cordl_internal_set_nsStack)) ::ArrayW<::System::Xml::XmlTextWriter_Namespace, ::Array<::System::Xml::XmlTextWriter_Namespace>*>
      nsStack;

  /// @brief Field nsTop, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_nsTop, put = __cordl_internal_set_nsTop)) int32_t nsTop;

  /// @brief Field prefixForXmlNs, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_prefixForXmlNs, put = __cordl_internal_set_prefixForXmlNs)) ::StringW prefixForXmlNs;

  /// @brief Field quoteChar, offset 0x68, size 0x2
  __declspec(property(get = __cordl_internal_get_quoteChar, put = __cordl_internal_set_quoteChar)) char16_t quoteChar;

  /// @brief Field specialAttr, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_specialAttr, put = __cordl_internal_set_specialAttr)) ::System::Xml::XmlTextWriter_SpecialAttr specialAttr;

  /// @brief Field stack, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_stack, put = __cordl_internal_set_stack)) ::ArrayW<::System::Xml::XmlTextWriter_TagInfo, ::Array<::System::Xml::XmlTextWriter_TagInfo>*> stack;

  /// @brief Field stateName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_stateName, put = setStaticF_stateName)) ::ArrayW<::StringW, ::Array<::StringW>*> stateName;

  /// @brief Field stateTable, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_stateTable, put = __cordl_internal_set_stateTable)) ::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*>
      stateTable;

  /// @brief Field stateTableDefault, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_stateTableDefault, put = setStaticF_stateTableDefault)) ::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*>
      stateTableDefault;

  /// @brief Field stateTableDocument, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_stateTableDocument, put = setStaticF_stateTableDocument)) ::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*>
      stateTableDocument;

  /// @brief Field textWriter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_textWriter, put = __cordl_internal_set_textWriter)) ::System::IO::TextWriter* textWriter;

  /// @brief Field tokenName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_tokenName, put = setStaticF_tokenName)) ::ArrayW<::StringW, ::Array<::StringW>*> tokenName;

  /// @brief Field top, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_top, put = __cordl_internal_set_top)) int32_t top;

  /// @brief Field useNsHashtable, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_useNsHashtable, put = __cordl_internal_set_useNsHashtable)) bool useNsHashtable;

  /// @brief Field xmlCharType, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlCharType, put = __cordl_internal_set_xmlCharType)) ::System::Xml::XmlCharType xmlCharType;

  /// @brief Field xmlEncoder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlEncoder, put = __cordl_internal_set_xmlEncoder)) ::System::Xml::XmlTextEncoder* xmlEncoder;

  /// @brief Method AddNamespace, addr 0x431da44, size 0x198, virtual false, abstract: false, final false
  inline void AddNamespace(::StringW prefix, ::StringW ns, bool declared);

  /// @brief Method AddToNamespaceHashtable, addr 0x431dbf4, size 0xe8, virtual false, abstract: false, final false
  inline void AddToNamespaceHashtable(int32_t namespaceIndex);

  /// @brief Method AutoComplete, addr 0x431a528, size 0x4fc, virtual false, abstract: false, final false
  inline void AutoComplete(::System::Xml::XmlTextWriter_Token token);

  /// @brief Method AutoCompleteAll, addr 0x4319eec, size 0x54, virtual false, abstract: false, final false
  inline void AutoCompleteAll();

  /// @brief Method Close, addr 0x431d07c, size 0x138, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method FindPrefix, addr 0x431afa0, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW FindPrefix(::StringW ns);

  /// @brief Method Flush, addr 0x431d1b4, size 0x20, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushEncoders, addr 0x431d73c, size 0x24, virtual false, abstract: false, final false
  inline void FlushEncoders();

  /// @brief Method GeneratePrefix, addr 0x431bea0, size 0x114, virtual false, abstract: false, final false
  inline ::StringW GeneratePrefix();

  /// @brief Method HandleSpecialAttribute, addr 0x431d834, size 0x210, virtual false, abstract: false, final false
  inline void HandleSpecialAttribute();

  /// @brief Method Indent, addr 0x431d2d4, size 0xd0, virtual false, abstract: false, final false
  inline void Indent(bool beforeEndElement);

  /// @brief Method InternalWriteEndElement, addr 0x431b404, size 0x2dc, virtual false, abstract: false, final false
  inline void InternalWriteEndElement(bool longFormat);

  /// @brief Method InternalWriteProcessingInstruction, addr 0x431c648, size 0xfc, virtual false, abstract: false, final false
  inline void InternalWriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method LookupNamespace, addr 0x431aec4, size 0xdc, virtual false, abstract: false, final false
  inline int32_t LookupNamespace(::StringW prefix);

  /// @brief Method LookupNamespaceInCurrentScope, addr 0x431bd74, size 0x12c, virtual false, abstract: false, final false
  inline int32_t LookupNamespaceInCurrentScope(::StringW prefix);

  /// @brief Method LookupPrefix, addr 0x431d1d4, size 0x100, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW ns);

  static inline ::System::Xml::XmlTextWriter* New_ctor();

  static inline ::System::Xml::XmlTextWriter* New_ctor(::StringW filename, ::System::Text::Encoding* encoding);

  static inline ::System::Xml::XmlTextWriter* New_ctor(::System::IO::Stream* w, ::System::Text::Encoding* encoding);

  static inline ::System::Xml::XmlTextWriter* New_ctor(::System::IO::TextWriter* w);

  /// @brief Method PopNamespaces, addr 0x431d760, size 0xd4, virtual false, abstract: false, final false
  inline void PopNamespaces(int32_t indexFrom, int32_t indexTo);

  /// @brief Method PushNamespace, addr 0x431b070, size 0x22c, virtual false, abstract: false, final false
  inline void PushNamespace(::StringW prefix, ::StringW ns, bool declared);

  /// @brief Method PushStack, addr 0x431adf4, size 0xd0, virtual false, abstract: false, final false
  inline void PushStack();

  /// @brief Method StartDocument, addr 0x4319990, size 0x390, virtual false, abstract: false, final false
  inline void StartDocument(int32_t standalone);

  /// @brief Method ValidateName, addr 0x431a370, size 0x1b8, virtual false, abstract: false, final false
  inline void ValidateName(::StringW name, bool isNCName);

  /// @brief Method VerifyPrefixXml, addr 0x431b29c, size 0x160, virtual false, abstract: false, final false
  inline void VerifyPrefixXml(::StringW prefix, ::StringW ns);

  /// @brief Method WriteBase64, addr 0x431ce40, size 0x148, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteBinHex, addr 0x431cf88, size 0xd0, virtual true, abstract: false, final false
  inline void WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteCData, addr 0x431c054, size 0x1c4, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x431c810, size 0xc0, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x431cbd0, size 0xd8, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x431c218, size 0x200, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x4319f40, size 0x430, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x431bfb4, size 0xa0, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndAttributeQuote, addr 0x431d3a4, size 0x4c, virtual false, abstract: false, final false
  inline void WriteEndAttributeQuote();

  /// @brief Method WriteEndDocument, addr 0x4319d34, size 0x1b8, virtual true, abstract: false, final false
  inline void WriteEndDocument();

  /// @brief Method WriteEndElement, addr 0x431b3fc, size 0x8, virtual true, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteEndStartTag, addr 0x431d3f0, size 0x34c, virtual false, abstract: false, final false
  inline void WriteEndStartTag(bool empty);

  /// @brief Method WriteEntityRef, addr 0x431c744, size 0xcc, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x431b6e0, size 0x8, virtual true, abstract: false, final false
  inline void WriteFullEndElement();

  /// @brief Method WriteProcessingInstruction, addr 0x431c418, size 0x230, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteRaw, addr 0x431cca8, size 0xd8, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x431cd80, size 0xc0, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartAttribute, addr 0x431b6e8, size 0x68c, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartDocument, addr 0x4319988, size 0x8, virtual true, abstract: false, final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartDocument, addr 0x4319d20, size 0x14, virtual true, abstract: false, final false
  inline void WriteStartDocument(bool standalone);

  /// @brief Method WriteStartElement, addr 0x431aa24, size 0x3d0, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteString, addr 0x431ca3c, size 0xcc, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x431cb08, size 0xc8, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteWhitespace, addr 0x431c8d0, size 0x16c, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  constexpr ::System::Xml::XmlTextWriterBase64Encoder* const& __cordl_internal_get_base64Encoder() const;

  constexpr ::System::Xml::XmlTextWriterBase64Encoder*& __cordl_internal_get_base64Encoder();

  constexpr char16_t const& __cordl_internal_get_curQuoteChar() const;

  constexpr char16_t& __cordl_internal_get_curQuoteChar();

  constexpr ::System::Xml::XmlTextWriter_State const& __cordl_internal_get_currentState() const;

  constexpr ::System::Xml::XmlTextWriter_State& __cordl_internal_get_currentState();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get_encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get_encoding();

  constexpr bool const& __cordl_internal_get_flush() const;

  constexpr bool& __cordl_internal_get_flush();

  constexpr ::System::Xml::Formatting const& __cordl_internal_get_formatting() const;

  constexpr ::System::Xml::Formatting& __cordl_internal_get_formatting();

  constexpr char16_t const& __cordl_internal_get_indentChar() const;

  constexpr char16_t& __cordl_internal_get_indentChar();

  constexpr int32_t const& __cordl_internal_get_indentation() const;

  constexpr int32_t& __cordl_internal_get_indentation();

  constexpr bool const& __cordl_internal_get_indented() const;

  constexpr bool& __cordl_internal_get_indented();

  constexpr ::System::Xml::XmlTextWriter_Token const& __cordl_internal_get_lastToken() const;

  constexpr ::System::Xml::XmlTextWriter_Token& __cordl_internal_get_lastToken();

  constexpr bool const& __cordl_internal_get_namespaces() const;

  constexpr bool& __cordl_internal_get_namespaces();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& __cordl_internal_get_nsHashtable() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get_nsHashtable();

  constexpr ::ArrayW<::System::Xml::XmlTextWriter_Namespace, ::Array<::System::Xml::XmlTextWriter_Namespace>*> const& __cordl_internal_get_nsStack() const;

  constexpr ::ArrayW<::System::Xml::XmlTextWriter_Namespace, ::Array<::System::Xml::XmlTextWriter_Namespace>*>& __cordl_internal_get_nsStack();

  constexpr int32_t const& __cordl_internal_get_nsTop() const;

  constexpr int32_t& __cordl_internal_get_nsTop();

  constexpr ::StringW const& __cordl_internal_get_prefixForXmlNs() const;

  constexpr ::StringW& __cordl_internal_get_prefixForXmlNs();

  constexpr char16_t const& __cordl_internal_get_quoteChar() const;

  constexpr char16_t& __cordl_internal_get_quoteChar();

  constexpr ::System::Xml::XmlTextWriter_SpecialAttr const& __cordl_internal_get_specialAttr() const;

  constexpr ::System::Xml::XmlTextWriter_SpecialAttr& __cordl_internal_get_specialAttr();

  constexpr ::ArrayW<::System::Xml::XmlTextWriter_TagInfo, ::Array<::System::Xml::XmlTextWriter_TagInfo>*> const& __cordl_internal_get_stack() const;

  constexpr ::ArrayW<::System::Xml::XmlTextWriter_TagInfo, ::Array<::System::Xml::XmlTextWriter_TagInfo>*>& __cordl_internal_get_stack();

  constexpr ::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*> const& __cordl_internal_get_stateTable() const;

  constexpr ::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*>& __cordl_internal_get_stateTable();

  constexpr ::System::IO::TextWriter* const& __cordl_internal_get_textWriter() const;

  constexpr ::System::IO::TextWriter*& __cordl_internal_get_textWriter();

  constexpr int32_t const& __cordl_internal_get_top() const;

  constexpr int32_t& __cordl_internal_get_top();

  constexpr bool const& __cordl_internal_get_useNsHashtable() const;

  constexpr bool& __cordl_internal_get_useNsHashtable();

  constexpr ::System::Xml::XmlCharType const& __cordl_internal_get_xmlCharType() const;

  constexpr ::System::Xml::XmlCharType& __cordl_internal_get_xmlCharType();

  constexpr ::System::Xml::XmlTextEncoder* const& __cordl_internal_get_xmlEncoder() const;

  constexpr ::System::Xml::XmlTextEncoder*& __cordl_internal_get_xmlEncoder();

  constexpr void __cordl_internal_set_base64Encoder(::System::Xml::XmlTextWriterBase64Encoder* value);

  constexpr void __cordl_internal_set_curQuoteChar(char16_t value);

  constexpr void __cordl_internal_set_currentState(::System::Xml::XmlTextWriter_State value);

  constexpr void __cordl_internal_set_encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_flush(bool value);

  constexpr void __cordl_internal_set_formatting(::System::Xml::Formatting value);

  constexpr void __cordl_internal_set_indentChar(char16_t value);

  constexpr void __cordl_internal_set_indentation(int32_t value);

  constexpr void __cordl_internal_set_indented(bool value);

  constexpr void __cordl_internal_set_lastToken(::System::Xml::XmlTextWriter_Token value);

  constexpr void __cordl_internal_set_namespaces(bool value);

  constexpr void __cordl_internal_set_nsHashtable(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set_nsStack(::ArrayW<::System::Xml::XmlTextWriter_Namespace, ::Array<::System::Xml::XmlTextWriter_Namespace>*> value);

  constexpr void __cordl_internal_set_nsTop(int32_t value);

  constexpr void __cordl_internal_set_prefixForXmlNs(::StringW value);

  constexpr void __cordl_internal_set_quoteChar(char16_t value);

  constexpr void __cordl_internal_set_specialAttr(::System::Xml::XmlTextWriter_SpecialAttr value);

  constexpr void __cordl_internal_set_stack(::ArrayW<::System::Xml::XmlTextWriter_TagInfo, ::Array<::System::Xml::XmlTextWriter_TagInfo>*> value);

  constexpr void __cordl_internal_set_stateTable(::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*> value);

  constexpr void __cordl_internal_set_textWriter(::System::IO::TextWriter* value);

  constexpr void __cordl_internal_set_top(int32_t value);

  constexpr void __cordl_internal_set_useNsHashtable(bool value);

  constexpr void __cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value);

  constexpr void __cordl_internal_set_xmlEncoder(::System::Xml::XmlTextEncoder* value);

  /// @brief Method .ctor, addr 0x4319464, size 0x124, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x43196c0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW filename, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x43195f4, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* w, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x4319740, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* w);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_stateName();

  static inline ::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*> getStaticF_stateTableDefault();

  static inline ::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*> getStaticF_stateTableDocument();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_tokenName();

  /// @brief Method get_BaseStream, addr 0x43197d8, size 0x9c, virtual false, abstract: false, final false
  inline ::System::IO::Stream* get_BaseStream();

  /// @brief Method get_WriteState, addr 0x431d058, size 0x24, virtual true, abstract: false, final false
  inline ::System::Xml::WriteState get_WriteState();

  static inline void setStaticF_stateName(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_stateTableDefault(::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*> value);

  static inline void setStaticF_stateTableDocument(::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*> value);

  static inline void setStaticF_tokenName(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_Formatting, addr 0x43198e8, size 0x14, virtual false, abstract: false, final false
  inline void set_Formatting(::System::Xml::Formatting value);

  /// @brief Method set_Namespaces, addr 0x4319874, size 0x74, virtual false, abstract: false, final false
  inline void set_Namespaces(bool value);

  /// @brief Method set_QuoteChar, addr 0x43198fc, size 0x8c, virtual false, abstract: false, final false
  inline void set_QuoteChar(char16_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTextWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTextWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTextWriter(XmlTextWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTextWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTextWriter(XmlTextWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7249 };

  /// @brief Field textWriter, offset: 0x18, size: 0x8, def value: None
  ::System::IO::TextWriter* ___textWriter;

  /// @brief Field xmlEncoder, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlTextEncoder* ___xmlEncoder;

  /// @brief Field encoding, offset: 0x28, size: 0x8, def value: None
  ::System::Text::Encoding* ___encoding;

  /// @brief Field formatting, offset: 0x30, size: 0x4, def value: None
  ::System::Xml::Formatting ___formatting;

  /// @brief Field indented, offset: 0x34, size: 0x1, def value: None
  bool ___indented;

  /// @brief Field indentation, offset: 0x38, size: 0x4, def value: None
  int32_t ___indentation;

  /// @brief Field indentChar, offset: 0x3c, size: 0x2, def value: None
  char16_t ___indentChar;

  /// @brief Field stack, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlTextWriter_TagInfo, ::Array<::System::Xml::XmlTextWriter_TagInfo>*> ___stack;

  /// @brief Field top, offset: 0x48, size: 0x4, def value: None
  int32_t ___top;

  /// @brief Field stateTable, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlTextWriter_State, ::Array<::System::Xml::XmlTextWriter_State>*> ___stateTable;

  /// @brief Field currentState, offset: 0x58, size: 0x4, def value: None
  ::System::Xml::XmlTextWriter_State ___currentState;

  /// @brief Field lastToken, offset: 0x5c, size: 0x4, def value: None
  ::System::Xml::XmlTextWriter_Token ___lastToken;

  /// @brief Field base64Encoder, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::XmlTextWriterBase64Encoder* ___base64Encoder;

  /// @brief Field quoteChar, offset: 0x68, size: 0x2, def value: None
  char16_t ___quoteChar;

  /// @brief Field curQuoteChar, offset: 0x6a, size: 0x2, def value: None
  char16_t ___curQuoteChar;

  /// @brief Field namespaces, offset: 0x6c, size: 0x1, def value: None
  bool ___namespaces;

  /// @brief Field specialAttr, offset: 0x70, size: 0x4, def value: None
  ::System::Xml::XmlTextWriter_SpecialAttr ___specialAttr;

  /// @brief Field prefixForXmlNs, offset: 0x78, size: 0x8, def value: None
  ::StringW ___prefixForXmlNs;

  /// @brief Field flush, offset: 0x80, size: 0x1, def value: None
  bool ___flush;

  /// @brief Field nsStack, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlTextWriter_Namespace, ::Array<::System::Xml::XmlTextWriter_Namespace>*> ___nsStack;

  /// @brief Field nsTop, offset: 0x90, size: 0x4, def value: None
  int32_t ___nsTop;

  /// @brief Field nsHashtable, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ___nsHashtable;

  /// @brief Field useNsHashtable, offset: 0xa0, size: 0x1, def value: None
  bool ___useNsHashtable;

  /// @brief Field xmlCharType, offset: 0xa8, size: 0x8, def value: None
  ::System::Xml::XmlCharType ___xmlCharType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlTextWriter, ___textWriter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___xmlEncoder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___encoding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___formatting) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___indented) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___indentation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___indentChar) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___stack) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___top) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___stateTable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___currentState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___lastToken) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___base64Encoder) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___quoteChar) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___curQuoteChar) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___namespaces) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___specialAttr) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___prefixForXmlNs) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___flush) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___nsStack) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___nsTop) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___nsHashtable) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___useNsHashtable) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextWriter, ___xmlCharType) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlTextWriter, 0xb0>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextWriter_NamespaceState, "System.Xml", "XmlTextWriter/NamespaceState");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextWriter_SpecialAttr, "System.Xml", "XmlTextWriter/SpecialAttr");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextWriter_State, "System.Xml", "XmlTextWriter/State");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextWriter_Token, "System.Xml", "XmlTextWriter/Token");
NEED_NO_BOX(::System::Xml::XmlTextWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextWriter*, "System.Xml", "XmlTextWriter");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextWriter_Namespace, "System.Xml", "XmlTextWriter/Namespace");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextWriter_TagInfo, "System.Xml", "XmlTextWriter/TagInfo");
