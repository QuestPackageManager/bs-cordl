#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Utilities/zzzz__StringBuffer_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringReference_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonTextReader)
namespace Newtonsoft::Json::Utilities {
class PropertyNameTable;
}
namespace Newtonsoft::Json {
template <typename T> class IArrayPool_1;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
class JsonReaderException;
}
namespace Newtonsoft::Json {
struct ReadType;
}
namespace System::IO {
class TextReader;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonTextReader;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonTextReader);
// Type: Newtonsoft.Json::JsonTextReader
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::JsonTextReader*
class CORDL_TYPE JsonTextReader : public ::Newtonsoft::Json::JsonReader {
public:
  // Declarations
  __declspec(property(get = get_ArrayPool, put = set_ArrayPool))::Newtonsoft::Json::IArrayPool_1<char16_t>* ArrayPool;

  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  /// @brief Field NameTable, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_NameTable, put = __cordl_internal_set_NameTable))::Newtonsoft::Json::Utilities::PropertyNameTable* NameTable;

  /// @brief Field _arrayPool, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__arrayPool, put = __cordl_internal_set__arrayPool))::Newtonsoft::Json::IArrayPool_1<char16_t>* _arrayPool;

  /// @brief Field _charPos, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__charPos, put = __cordl_internal_set__charPos)) int32_t _charPos;

  /// @brief Field _chars, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__chars, put = __cordl_internal_set__chars))::ArrayW<char16_t, ::Array<char16_t>*> _chars;

  /// @brief Field _charsUsed, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__charsUsed, put = __cordl_internal_set__charsUsed)) int32_t _charsUsed;

  /// @brief Field _isEndOfFile, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__isEndOfFile, put = __cordl_internal_set__isEndOfFile)) bool _isEndOfFile;

  /// @brief Field _lineNumber, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__lineNumber, put = __cordl_internal_set__lineNumber)) int32_t _lineNumber;

  /// @brief Field _lineStartPos, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__lineStartPos, put = __cordl_internal_set__lineStartPos)) int32_t _lineStartPos;

  /// @brief Field _reader, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__reader, put = __cordl_internal_set__reader))::System::IO::TextReader* _reader;

  /// @brief Field _stringBuffer, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get__stringBuffer, put = __cordl_internal_set__stringBuffer))::Newtonsoft::Json::Utilities::StringBuffer _stringBuffer;

  /// @brief Field _stringReference, offset 0xb0, size 0x10
  __declspec(property(get = __cordl_internal_get__stringReference, put = __cordl_internal_set__stringReference))::Newtonsoft::Json::Utilities::StringReference _stringReference;

  /// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept;

  /// @brief Method BlockCopyChars, addr 0x27950e0, size 0x14, virtual false, abstract: false, final false
  static inline void BlockCopyChars(::ArrayW<char16_t, ::Array<char16_t>*> src, int32_t srcOffset, ::ArrayW<char16_t, ::Array<char16_t>*> dst, int32_t dstOffset, int32_t count);

  /// @brief Method ClearRecentString, addr 0x279a834, size 0xc, virtual false, abstract: false, final false
  inline void ClearRecentString();

  /// @brief Method Close, addr 0x279b568, size 0x60, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method CreateUnexpectedCharacterException, addr 0x27979c0, size 0xd0, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::JsonReaderException* CreateUnexpectedCharacterException(char16_t c);

  /// @brief Method EatWhitespace, addr 0x2795e14, size 0x130, virtual false, abstract: false, final false
  inline bool EatWhitespace(bool oneOrMore);

  /// @brief Method EndComment, addr 0x279b2ac, size 0x60, virtual false, abstract: false, final false
  inline void EndComment(bool setToken, int32_t initialPosition, int32_t endPosition);

  /// @brief Method EnsureBuffer, addr 0x27955b4, size 0x44, virtual false, abstract: false, final false
  inline void EnsureBuffer();

  /// @brief Method EnsureBufferNotEmpty, addr 0x2794584, size 0x54, virtual false, abstract: false, final false
  inline void EnsureBufferNotEmpty();

  /// @brief Method EnsureChars, addr 0x279530c, size 0x20, virtual false, abstract: false, final false
  inline bool EnsureChars(int32_t relativePosition, bool append);

  /// @brief Method HandleNull, addr 0x2797898, size 0xd0, virtual false, abstract: false, final false
  inline void HandleNull();

  /// @brief Method HasLineInfo, addr 0x279b5dc, size 0x8, virtual true, abstract: false, final true
  inline bool HasLineInfo();

  /// @brief Method IsSeparator, addr 0x279b410, size 0x158, virtual false, abstract: false, final false
  inline bool IsSeparator(char16_t c);

  /// @brief Method MatchValue, addr 0x279b30c, size 0x104, virtual false, abstract: false, final false
  inline bool MatchValue(::StringW value);

  /// @brief Method MatchValueWithTrailingSeparator, addr 0x27990ac, size 0xa4, virtual false, abstract: false, final false
  inline bool MatchValueWithTrailingSeparator(::StringW value);

  static inline ::Newtonsoft::Json::JsonTextReader* New_ctor(::System::IO::TextReader* reader);

  /// @brief Method OnNewLine, addr 0x27945d8, size 0x10, virtual false, abstract: false, final false
  inline void OnNewLine(int32_t pos);

  /// @brief Method ParseComment, addr 0x2795f50, size 0x28c, virtual false, abstract: false, final false
  inline void ParseComment(bool setToken);

  /// @brief Method ParseConstructor, addr 0x279ae54, size 0x328, virtual false, abstract: false, final false
  inline void ParseConstructor();

  /// @brief Method ParseFalse, addr 0x279ad78, size 0xdc, virtual false, abstract: false, final false
  inline void ParseFalse();

  /// @brief Method ParseNull, addr 0x279a40c, size 0xac, virtual false, abstract: false, final false
  inline void ParseNull();

  /// @brief Method ParseNumber, addr 0x27982cc, size 0xde0, virtual false, abstract: false, final false
  inline void ParseNumber(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ParseNumberNaN, addr 0x27992b8, size 0x160, virtual false, abstract: false, final false
  inline ::System::Object* ParseNumberNaN(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ParseNumberNegativeInfinity, addr 0x279816c, size 0x160, virtual false, abstract: false, final false
  inline ::System::Object* ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ParseNumberPositiveInfinity, addr 0x2799158, size 0x160, virtual false, abstract: false, final false
  inline ::System::Object* ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ParseObject, addr 0x2795a14, size 0x190, virtual false, abstract: false, final false
  inline bool ParseObject();

  /// @brief Method ParsePostValue, addr 0x2795ba4, size 0x270, virtual false, abstract: false, final false
  inline bool ParsePostValue();

  /// @brief Method ParseProperty, addr 0x279a840, size 0x224, virtual false, abstract: false, final false
  inline bool ParseProperty();

  /// @brief Method ParseString, addr 0x27945e8, size 0x3b8, virtual false, abstract: false, final false
  inline void ParseString(char16_t quote, ::Newtonsoft::Json::ReadType readType);

  /// @brief Method ParseTrue, addr 0x279ac98, size 0xe0, virtual false, abstract: false, final false
  inline void ParseTrue();

  /// @brief Method ParseUndefined, addr 0x279b17c, size 0xac, virtual false, abstract: false, final false
  inline void ParseUndefined();

  /// @brief Method ParseUnicode, addr 0x279a504, size 0x110, virtual false, abstract: false, final false
  inline char16_t ParseUnicode();

  /// @brief Method ParseUnquotedProperty, addr 0x279aae4, size 0x1b4, virtual false, abstract: false, final false
  inline void ParseUnquotedProperty();

  /// @brief Method ParseValue, addr 0x27955f8, size 0x41c, virtual false, abstract: false, final false
  inline bool ParseValue();

  /// @brief Method ProcessCarriageReturn, addr 0x2797a90, size 0x80, virtual false, abstract: false, final false
  inline void ProcessCarriageReturn(bool append);

  /// @brief Method ProcessLineFeed, addr 0x2797b10, size 0x1c, virtual false, abstract: false, final false
  inline void ProcessLineFeed();

  /// @brief Method ProcessValueComma, addr 0x2797968, size 0x58, virtual false, abstract: false, final false
  inline void ProcessValueComma();

  /// @brief Method Read, addr 0x279539c, size 0x218, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAsBoolean, addr 0x2799418, size 0x4e0, virtual true, abstract: false, final false
  inline ::System::Nullable_1<bool> ReadAsBoolean();

  /// @brief Method ReadAsBytes, addr 0x2796f30, size 0x480, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAsBytes();

  /// @brief Method ReadAsDateTime, addr 0x279672c, size 0x90, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTime> ReadAsDateTime();

  /// @brief Method ReadAsDateTimeOffset, addr 0x279a1c0, size 0xcc, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset();

  /// @brief Method ReadAsDecimal, addr 0x279a28c, size 0xcc, virtual true, abstract: false, final false
  inline ::System::Nullable_1<::System::Decimal> ReadAsDecimal();

  /// @brief Method ReadAsDouble, addr 0x279a358, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Nullable_1<double_t> ReadAsDouble();

  /// @brief Method ReadAsInt32, addr 0x27961e4, size 0x90, virtual true, abstract: false, final false
  inline ::System::Nullable_1<int32_t> ReadAsInt32();

  /// @brief Method ReadAsString, addr 0x2796ecc, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ReadAsString();

  /// @brief Method ReadChars, addr 0x279532c, size 0x70, virtual false, abstract: false, final false
  inline bool ReadChars(int32_t relativePosition, bool append);

  /// @brief Method ReadData, addr 0x27950f4, size 0xc, virtual false, abstract: false, final false
  inline int32_t ReadData(bool append);

  /// @brief Method ReadData, addr 0x2795100, size 0x20c, virtual false, abstract: false, final false
  inline int32_t ReadData(bool append, int32_t charsRequired);

  /// @brief Method ReadFinished, addr 0x2797b2c, size 0x150, virtual false, abstract: false, final false
  inline void ReadFinished();

  /// @brief Method ReadNullChar, addr 0x27973b0, size 0x50, virtual false, abstract: false, final false
  inline bool ReadNullChar();

  /// @brief Method ReadNumberIntoBuffer, addr 0x279a664, size 0x1d0, virtual false, abstract: false, final false
  inline void ReadNumberIntoBuffer();

  /// @brief Method ReadNumberValue, addr 0x2796274, size 0x4b8, virtual false, abstract: false, final false
  inline ::System::Object* ReadNumberValue(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ReadStringIntoBuffer, addr 0x2794a48, size 0x498, virtual false, abstract: false, final false
  inline void ReadStringIntoBuffer(char16_t quote);

  /// @brief Method ReadStringValue, addr 0x27967bc, size 0x710, virtual false, abstract: false, final false
  inline ::System::Object* ReadStringValue(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ShiftBufferIfNeeded, addr 0x27949a0, size 0xa8, virtual false, abstract: false, final false
  inline void ShiftBufferIfNeeded();

  /// @brief Method ValidIdentifierChar, addr 0x279aa64, size 0x80, virtual false, abstract: false, final false
  inline bool ValidIdentifierChar(char16_t value);

  /// @brief Method WriteCharToBuffer, addr 0x279a614, size 0x50, virtual false, abstract: false, final false
  inline void WriteCharToBuffer(char16_t writeChar, int32_t lastWritePosition, int32_t writeToPosition);

  constexpr ::Newtonsoft::Json::Utilities::PropertyNameTable*& __cordl_internal_get_NameTable();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::PropertyNameTable*> const& __cordl_internal_get_NameTable() const;

  constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>*& __cordl_internal_get__arrayPool();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::IArrayPool_1<char16_t>*> const& __cordl_internal_get__arrayPool() const;

  constexpr int32_t const& __cordl_internal_get__charPos() const;

  constexpr int32_t& __cordl_internal_get__charPos();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__chars() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__chars();

  constexpr int32_t const& __cordl_internal_get__charsUsed() const;

  constexpr int32_t& __cordl_internal_get__charsUsed();

  constexpr bool const& __cordl_internal_get__isEndOfFile() const;

  constexpr bool& __cordl_internal_get__isEndOfFile();

  constexpr int32_t const& __cordl_internal_get__lineNumber() const;

  constexpr int32_t& __cordl_internal_get__lineNumber();

  constexpr int32_t const& __cordl_internal_get__lineStartPos() const;

  constexpr int32_t& __cordl_internal_get__lineStartPos();

  constexpr ::System::IO::TextReader*& __cordl_internal_get__reader();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextReader*> const& __cordl_internal_get__reader() const;

  constexpr ::Newtonsoft::Json::Utilities::StringBuffer const& __cordl_internal_get__stringBuffer() const;

  constexpr ::Newtonsoft::Json::Utilities::StringBuffer& __cordl_internal_get__stringBuffer();

  constexpr ::Newtonsoft::Json::Utilities::StringReference const& __cordl_internal_get__stringReference() const;

  constexpr ::Newtonsoft::Json::Utilities::StringReference& __cordl_internal_get__stringReference();

  constexpr void __cordl_internal_set_NameTable(::Newtonsoft::Json::Utilities::PropertyNameTable* value);

  constexpr void __cordl_internal_set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>* value);

  constexpr void __cordl_internal_set__charPos(int32_t value);

  constexpr void __cordl_internal_set__chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__charsUsed(int32_t value);

  constexpr void __cordl_internal_set__isEndOfFile(bool value);

  constexpr void __cordl_internal_set__lineNumber(int32_t value);

  constexpr void __cordl_internal_set__lineStartPos(int32_t value);

  constexpr void __cordl_internal_set__reader(::System::IO::TextReader* value);

  constexpr void __cordl_internal_set__stringBuffer(::Newtonsoft::Json::Utilities::StringBuffer value);

  constexpr void __cordl_internal_set__stringReference(::Newtonsoft::Json::Utilities::StringReference value);

  /// @brief Method .ctor, addr 0x2794448, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* reader);

  /// @brief Method get_ArrayPool, addr 0x279451c, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::IArrayPool_1<char16_t>* get_ArrayPool();

  /// @brief Method get_LineNumber, addr 0x279b5e4, size 0x48, virtual true, abstract: false, final true
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x279b62c, size 0xc, virtual true, abstract: false, final true
  inline int32_t get_LinePosition();

  /// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr ::Newtonsoft::Json::IJsonLineInfo* i___Newtonsoft__Json__IJsonLineInfo() noexcept;

  /// @brief Method set_ArrayPool, addr 0x2794524, size 0x60, virtual false, abstract: false, final false
  inline void set_ArrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonTextReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonTextReader(JsonTextReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonTextReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonTextReader(JsonTextReader const&) = delete;

  /// @brief Field _reader, offset: 0x78, size: 0x8, def value: None
  ::System::IO::TextReader* ____reader;

  /// @brief Field _chars, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____chars;

  /// @brief Field _charsUsed, offset: 0x88, size: 0x4, def value: None
  int32_t ____charsUsed;

  /// @brief Field _charPos, offset: 0x8c, size: 0x4, def value: None
  int32_t ____charPos;

  /// @brief Field _lineStartPos, offset: 0x90, size: 0x4, def value: None
  int32_t ____lineStartPos;

  /// @brief Field _lineNumber, offset: 0x94, size: 0x4, def value: None
  int32_t ____lineNumber;

  /// @brief Field _isEndOfFile, offset: 0x98, size: 0x1, def value: None
  bool ____isEndOfFile;

  /// @brief Field _stringBuffer, offset: 0xa0, size: 0x10, def value: None
  ::Newtonsoft::Json::Utilities::StringBuffer ____stringBuffer;

  /// @brief Field _stringReference, offset: 0xb0, size: 0x10, def value: None
  ::Newtonsoft::Json::Utilities::StringReference ____stringReference;

  /// @brief Field _arrayPool, offset: 0xc0, size: 0x8, def value: None
  ::Newtonsoft::Json::IArrayPool_1<char16_t>* ____arrayPool;

  /// @brief Field NameTable, offset: 0xc8, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::PropertyNameTable* ___NameTable;

  /// @brief Field MaximumJavascriptIntegerCharacterLength offset 0xffffffff size 0x4
  static constexpr int32_t MaximumJavascriptIntegerCharacterLength{ static_cast<int32_t>(0x17c) };

  /// @brief Field UnicodeReplacementChar offset 0xffffffff size 0x2
  static constexpr char16_t UnicodeReplacementChar{ u'\u{fffd}' };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonTextReader, 0xd0>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____reader) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____chars) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____charsUsed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____charPos) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____lineStartPos) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____lineNumber) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____isEndOfFile) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____stringBuffer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____stringReference) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ____arrayPool) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonTextReader, ___NameTable) == 0xc8, "Offset mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonTextReader);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonTextReader*, "Newtonsoft.Json", "JsonTextReader");
