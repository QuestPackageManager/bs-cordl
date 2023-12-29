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
namespace Newtonsoft::Json {
struct ReadType;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace System::IO {
class TextReader;
}
namespace System {
class Object;
}
namespace System {
struct Decimal;
}
namespace Newtonsoft::Json {
class JsonReaderException;
}
namespace Newtonsoft::Json::Utilities {
class PropertyNameTable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Newtonsoft::Json {
template <typename T> class IArrayPool_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11761)), TypeDefinitionIndex(TypeDefinitionIndex(11818)), TypeDefinitionIndex(TypeDefinitionIndex(11794))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11752))
// CS Name: ::Newtonsoft.Json::JsonTextReader*
class CORDL_TYPE JsonTextReader : public ::Newtonsoft::Json::JsonReader {
public:
  // Declarations
  /// @brief Field _reader, offset 0x78, size 0x8
  __declspec(property(get = __get__reader, put = __set__reader))::System::IO::TextReader* _reader;

  /// @brief Field _chars, offset 0x80, size 0x8
  __declspec(property(get = __get__chars, put = __set__chars))::ArrayW<char16_t, ::Array<char16_t>*> _chars;

  /// @brief Field _charsUsed, offset 0x88, size 0x4
  __declspec(property(get = __get__charsUsed, put = __set__charsUsed)) int32_t _charsUsed;

  /// @brief Field _charPos, offset 0x8c, size 0x4
  __declspec(property(get = __get__charPos, put = __set__charPos)) int32_t _charPos;

  /// @brief Field _lineStartPos, offset 0x90, size 0x4
  __declspec(property(get = __get__lineStartPos, put = __set__lineStartPos)) int32_t _lineStartPos;

  /// @brief Field _lineNumber, offset 0x94, size 0x4
  __declspec(property(get = __get__lineNumber, put = __set__lineNumber)) int32_t _lineNumber;

  /// @brief Field _isEndOfFile, offset 0x98, size 0x1
  __declspec(property(get = __get__isEndOfFile, put = __set__isEndOfFile)) bool _isEndOfFile;

  /// @brief Field _stringBuffer, offset 0xa0, size 0x10
  __declspec(property(get = __get__stringBuffer, put = __set__stringBuffer))::Newtonsoft::Json::Utilities::StringBuffer _stringBuffer;

  /// @brief Field _stringReference, offset 0xb0, size 0x10
  __declspec(property(get = __get__stringReference, put = __set__stringReference))::Newtonsoft::Json::Utilities::StringReference _stringReference;

  /// @brief Field _arrayPool, offset 0xc0, size 0x8
  __declspec(property(get = __get__arrayPool, put = __set__arrayPool))::Newtonsoft::Json::IArrayPool_1<char16_t>* _arrayPool;

  /// @brief Field NameTable, offset 0xc8, size 0x8
  __declspec(property(get = __get_NameTable, put = __set_NameTable))::Newtonsoft::Json::Utilities::PropertyNameTable* NameTable;

  __declspec(property(get = get_ArrayPool, put = set_ArrayPool))::Newtonsoft::Json::IArrayPool_1<char16_t>* ArrayPool;

  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  /// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
  constexpr operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept;

  constexpr ::System::IO::TextReader*& __get__reader();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextReader*> const& __get__reader() const;

  constexpr void __set__reader(::System::IO::TextReader* value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get__chars();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get__chars() const;

  constexpr void __set__chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr int32_t& __get__charsUsed();

  constexpr int32_t const& __get__charsUsed() const;

  constexpr void __set__charsUsed(int32_t value);

  constexpr int32_t& __get__charPos();

  constexpr int32_t const& __get__charPos() const;

  constexpr void __set__charPos(int32_t value);

  constexpr int32_t& __get__lineStartPos();

  constexpr int32_t const& __get__lineStartPos() const;

  constexpr void __set__lineStartPos(int32_t value);

  constexpr int32_t& __get__lineNumber();

  constexpr int32_t const& __get__lineNumber() const;

  constexpr void __set__lineNumber(int32_t value);

  constexpr bool& __get__isEndOfFile();

  constexpr bool const& __get__isEndOfFile() const;

  constexpr void __set__isEndOfFile(bool value);

  constexpr ::Newtonsoft::Json::Utilities::StringBuffer& __get__stringBuffer();

  constexpr ::Newtonsoft::Json::Utilities::StringBuffer const& __get__stringBuffer() const;

  constexpr void __set__stringBuffer(::Newtonsoft::Json::Utilities::StringBuffer value);

  constexpr ::Newtonsoft::Json::Utilities::StringReference& __get__stringReference();

  constexpr ::Newtonsoft::Json::Utilities::StringReference const& __get__stringReference() const;

  constexpr void __set__stringReference(::Newtonsoft::Json::Utilities::StringReference value);

  constexpr ::Newtonsoft::Json::IArrayPool_1<char16_t>*& __get__arrayPool();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::IArrayPool_1<char16_t>*> const& __get__arrayPool() const;

  constexpr void __set__arrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>* value);

  constexpr ::Newtonsoft::Json::Utilities::PropertyNameTable*& __get_NameTable();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::PropertyNameTable*> const& __get_NameTable() const;

  constexpr void __set_NameTable(::Newtonsoft::Json::Utilities::PropertyNameTable* value);

  static inline ::Newtonsoft::Json::JsonTextReader* New_ctor(::System::IO::TextReader* reader);

  /// @brief Method .ctor addr 0x24de140 size 0x9c virtual false final false
  inline void _ctor(::System::IO::TextReader* reader);

  /// @brief Method get_ArrayPool addr 0x24de214 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::IArrayPool_1<char16_t>* get_ArrayPool();

  /// @brief Method set_ArrayPool addr 0x24de21c size 0x60 virtual false final false
  inline void set_ArrayPool(::Newtonsoft::Json::IArrayPool_1<char16_t>* value);

  /// @brief Method EnsureBufferNotEmpty addr 0x24de27c size 0x54 virtual false final false
  inline void EnsureBufferNotEmpty();

  /// @brief Method OnNewLine addr 0x24de2d0 size 0x10 virtual false final false
  inline void OnNewLine(int32_t pos);

  /// @brief Method ParseString addr 0x24de2e0 size 0x3b8 virtual false final false
  inline void ParseString(char16_t quote, ::Newtonsoft::Json::ReadType readType);

  /// @brief Method BlockCopyChars addr 0x24dedd8 size 0x14 virtual false final false
  static inline void BlockCopyChars(::ArrayW<char16_t, ::Array<char16_t>*> src, int32_t srcOffset, ::ArrayW<char16_t, ::Array<char16_t>*> dst, int32_t dstOffset, int32_t count);

  /// @brief Method ShiftBufferIfNeeded addr 0x24de698 size 0xa8 virtual false final false
  inline void ShiftBufferIfNeeded();

  /// @brief Method ReadData addr 0x24dedec size 0xc virtual false final false
  inline int32_t ReadData(bool append);

  /// @brief Method ReadData addr 0x24dedf8 size 0x20c virtual false final false
  inline int32_t ReadData(bool append, int32_t charsRequired);

  /// @brief Method EnsureChars addr 0x24df004 size 0x20 virtual false final false
  inline bool EnsureChars(int32_t relativePosition, bool append);

  /// @brief Method ReadChars addr 0x24df024 size 0x70 virtual false final false
  inline bool ReadChars(int32_t relativePosition, bool append);

  /// @brief Method Read addr 0x24df094 size 0x218 virtual true final false
  inline bool Read();

  /// @brief Method ReadAsInt32 addr 0x24dfedc size 0x90 virtual true final false
  inline ::System::Nullable_1<int32_t> ReadAsInt32();

  /// @brief Method ReadAsDateTime addr 0x24e0424 size 0x90 virtual true final false
  inline ::System::Nullable_1<::System::DateTime> ReadAsDateTime();

  /// @brief Method ReadAsString addr 0x24e0bc4 size 0x64 virtual true final false
  inline ::StringW ReadAsString();

  /// @brief Method ReadAsBytes addr 0x24e0c28 size 0x480 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAsBytes();

  /// @brief Method ReadStringValue addr 0x24e04b4 size 0x710 virtual false final false
  inline ::System::Object* ReadStringValue(::Newtonsoft::Json::ReadType readType);

  /// @brief Method CreateUnexpectedCharacterException addr 0x24e16b8 size 0xd0 virtual false final false
  inline ::Newtonsoft::Json::JsonReaderException* CreateUnexpectedCharacterException(char16_t c);

  /// @brief Method ReadAsBoolean addr 0x24e3110 size 0x4e0 virtual true final false
  inline ::System::Nullable_1<bool> ReadAsBoolean();

  /// @brief Method ProcessValueComma addr 0x24e1660 size 0x58 virtual false final false
  inline void ProcessValueComma();

  /// @brief Method ReadNumberValue addr 0x24dff6c size 0x4b8 virtual false final false
  inline ::System::Object* ReadNumberValue(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ReadAsDateTimeOffset addr 0x24e3eb8 size 0xcc virtual true final false
  inline ::System::Nullable_1<::System::DateTimeOffset> ReadAsDateTimeOffset();

  /// @brief Method ReadAsDecimal addr 0x24e3f84 size 0xcc virtual true final false
  inline ::System::Nullable_1<::System::Decimal> ReadAsDecimal();

  /// @brief Method ReadAsDouble addr 0x24e4050 size 0xb4 virtual true final false
  inline ::System::Nullable_1<double_t> ReadAsDouble();

  /// @brief Method HandleNull addr 0x24e1590 size 0xd0 virtual false final false
  inline void HandleNull();

  /// @brief Method ReadFinished addr 0x24e1824 size 0x150 virtual false final false
  inline void ReadFinished();

  /// @brief Method ReadNullChar addr 0x24e10a8 size 0x50 virtual false final false
  inline bool ReadNullChar();

  /// @brief Method EnsureBuffer addr 0x24df2ac size 0x44 virtual false final false
  inline void EnsureBuffer();

  /// @brief Method ReadStringIntoBuffer addr 0x24de740 size 0x498 virtual false final false
  inline void ReadStringIntoBuffer(char16_t quote);

  /// @brief Method WriteCharToBuffer addr 0x24e430c size 0x50 virtual false final false
  inline void WriteCharToBuffer(char16_t writeChar, int32_t lastWritePosition, int32_t writeToPosition);

  /// @brief Method ParseUnicode addr 0x24e41fc size 0x110 virtual false final false
  inline char16_t ParseUnicode();

  /// @brief Method ReadNumberIntoBuffer addr 0x24e435c size 0x1d0 virtual false final false
  inline void ReadNumberIntoBuffer();

  /// @brief Method ClearRecentString addr 0x24e452c size 0xc virtual false final false
  inline void ClearRecentString();

  /// @brief Method ParsePostValue addr 0x24df89c size 0x270 virtual false final false
  inline bool ParsePostValue();

  /// @brief Method ParseObject addr 0x24df70c size 0x190 virtual false final false
  inline bool ParseObject();

  /// @brief Method ParseProperty addr 0x24e4538 size 0x224 virtual false final false
  inline bool ParseProperty();

  /// @brief Method ValidIdentifierChar addr 0x24e475c size 0x80 virtual false final false
  inline bool ValidIdentifierChar(char16_t value);

  /// @brief Method ParseUnquotedProperty addr 0x24e47dc size 0x1b4 virtual false final false
  inline void ParseUnquotedProperty();

  /// @brief Method ParseValue addr 0x24df2f0 size 0x41c virtual false final false
  inline bool ParseValue();

  /// @brief Method ProcessLineFeed addr 0x24e1808 size 0x1c virtual false final false
  inline void ProcessLineFeed();

  /// @brief Method ProcessCarriageReturn addr 0x24e1788 size 0x80 virtual false final false
  inline void ProcessCarriageReturn(bool append);

  /// @brief Method EatWhitespace addr 0x24dfb0c size 0x130 virtual false final false
  inline bool EatWhitespace(bool oneOrMore);

  /// @brief Method ParseConstructor addr 0x24e4b4c size 0x328 virtual false final false
  inline void ParseConstructor();

  /// @brief Method ParseNumber addr 0x24e1fc4 size 0xde0 virtual false final false
  inline void ParseNumber(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ParseComment addr 0x24dfc48 size 0x28c virtual false final false
  inline void ParseComment(bool setToken);

  /// @brief Method EndComment addr 0x24e4fa4 size 0x60 virtual false final false
  inline void EndComment(bool setToken, int32_t initialPosition, int32_t endPosition);

  /// @brief Method MatchValue addr 0x24e5004 size 0x104 virtual false final false
  inline bool MatchValue(::StringW value);

  /// @brief Method MatchValueWithTrailingSeparator addr 0x24e2da4 size 0xa4 virtual false final false
  inline bool MatchValueWithTrailingSeparator(::StringW value);

  /// @brief Method IsSeparator addr 0x24e5108 size 0x158 virtual false final false
  inline bool IsSeparator(char16_t c);

  /// @brief Method ParseTrue addr 0x24e4990 size 0xe0 virtual false final false
  inline void ParseTrue();

  /// @brief Method ParseNull addr 0x24e4104 size 0xac virtual false final false
  inline void ParseNull();

  /// @brief Method ParseUndefined addr 0x24e4e74 size 0xac virtual false final false
  inline void ParseUndefined();

  /// @brief Method ParseFalse addr 0x24e4a70 size 0xdc virtual false final false
  inline void ParseFalse();

  /// @brief Method ParseNumberNegativeInfinity addr 0x24e1e64 size 0x160 virtual false final false
  inline ::System::Object* ParseNumberNegativeInfinity(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ParseNumberPositiveInfinity addr 0x24e2e50 size 0x160 virtual false final false
  inline ::System::Object* ParseNumberPositiveInfinity(::Newtonsoft::Json::ReadType readType);

  /// @brief Method ParseNumberNaN addr 0x24e2fb0 size 0x160 virtual false final false
  inline ::System::Object* ParseNumberNaN(::Newtonsoft::Json::ReadType readType);

  /// @brief Method Close addr 0x24e5260 size 0x60 virtual true final false
  inline void Close();

  /// @brief Method HasLineInfo addr 0x24e52d4 size 0x8 virtual true final true
  inline bool HasLineInfo();

  /// @brief Method get_LineNumber addr 0x24e52dc size 0x48 virtual true final true
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition addr 0x24e5324 size 0xc virtual true final true
  inline int32_t get_LinePosition();

  // Ctor Parameters [CppParam { name: "", ty: "JsonTextReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonTextReader(JsonTextReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonTextReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonTextReader(JsonTextReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonTextReader();

public:
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

  /// @brief Field UnicodeReplacementChar offset 0xffffffff size 0x2
  static constexpr char16_t UnicodeReplacementChar{ u'\u{fffd}' };

  /// @brief Field MaximumJavascriptIntegerCharacterLength offset 0xffffffff size 0x4
  static constexpr int32_t MaximumJavascriptIntegerCharacterLength{ static_cast<int32_t>(0x17c) };

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
