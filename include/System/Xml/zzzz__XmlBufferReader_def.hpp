#pragma once
// IWYU pragma private; include "System/Xml/XmlBufferReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlBufferReader)
namespace System::IO {
class Stream;
}
namespace System::Xml {
class IXmlDictionary;
}
namespace System::Xml {
class UniqueId;
}
namespace System::Xml {
struct ValueHandleType;
}
namespace System::Xml {
class ValueHandle;
}
namespace System::Xml {
struct XmlBinaryNodeType;
}
namespace System::Xml {
class XmlBinaryReaderSession;
}
namespace System::Xml {
class XmlDictionaryReader;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class XmlBufferReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlBufferReader);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBufferReader
class CORDL_TYPE XmlBufferReader : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  __declspec(property(get = get_EndOfFile)) bool EndOfFile;

  __declspec(property(get = get_IsStreamed)) bool IsStreamed;

  __declspec(property(get = get_Offset, put = set_Offset)) int32_t Offset;

  /// @brief Field buffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field chars, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_chars, put = __cordl_internal_set_chars)) ::ArrayW<char16_t, ::Array<char16_t>*> chars;

  /// @brief Field dictionary, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_dictionary, put = __cordl_internal_set_dictionary)) ::System::Xml::IXmlDictionary* dictionary;

  /// @brief Field empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_empty, put = setStaticF_empty)) ::System::Xml::XmlBufferReader* empty;

  /// @brief Field emptyByteArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_emptyByteArray, put = setStaticF_emptyByteArray)) ::ArrayW<uint8_t, ::Array<uint8_t>*> emptyByteArray;

  /// @brief Field guid, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_guid, put = __cordl_internal_set_guid)) ::ArrayW<uint8_t, ::Array<uint8_t>*> guid;

  /// @brief Field listValue, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_listValue, put = __cordl_internal_set_listValue)) ::System::Xml::ValueHandle* listValue;

  /// @brief Field offset, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset)) int32_t offset;

  /// @brief Field offsetMax, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_offsetMax, put = __cordl_internal_set_offsetMax)) int32_t offsetMax;

  /// @brief Field offsetMin, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_offsetMin, put = __cordl_internal_set_offsetMin)) int32_t offsetMin;

  /// @brief Field reader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader)) ::System::Xml::XmlDictionaryReader* reader;

  /// @brief Field session, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_session, put = __cordl_internal_set_session)) ::System::Xml::XmlBinaryReaderSession* session;

  /// @brief Field stream, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream)) ::System::IO::Stream* stream;

  /// @brief Field streamBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_streamBuffer, put = __cordl_internal_set_streamBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> streamBuffer;

  /// @brief Field windowOffset, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_windowOffset, put = __cordl_internal_set_windowOffset)) int32_t windowOffset;

  /// @brief Field windowOffsetMax, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_windowOffsetMax, put = __cordl_internal_set_windowOffsetMax)) int32_t windowOffsetMax;

  /// @brief Method Advance, addr 0x5f61708, size 0x10, virtual false, abstract: false, final false
  inline void Advance(int32_t count);

  /// @brief Method Close, addr 0x5f614e4, size 0xac, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method Compare, addr 0x5f63614, size 0xe4, virtual false, abstract: false, final false
  inline int32_t Compare(int32_t offset1, int32_t length1, int32_t offset2, int32_t length2);

  /// @brief Method EnsureByte, addr 0x5f61718, size 0x24, virtual false, abstract: false, final false
  inline void EnsureByte();

  /// @brief Method EnsureBytes, addr 0x5f619e4, size 0x24, virtual false, abstract: false, final false
  inline void EnsureBytes(int32_t count);

  /// @brief Method Equals2, addr 0x5f63050, size 0x60, virtual false, abstract: false, final false
  inline bool Equals2(int32_t key1, int32_t key2, ::System::Xml::XmlBufferReader* bufferReader2);

  /// @brief Method Equals2, addr 0x5f630b0, size 0x54, virtual false, abstract: false, final false
  inline bool Equals2(int32_t key1, ::System::Xml::XmlDictionaryString* xmlString2);

  /// @brief Method Equals2, addr 0x5f63104, size 0x8c, virtual false, abstract: false, final false
  inline bool Equals2(int32_t offset1, int32_t length1, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer2);

  /// @brief Method Equals2, addr 0x5f63190, size 0xb0, virtual false, abstract: false, final false
  inline bool Equals2(int32_t offset1, int32_t length1, ::System::Xml::XmlBufferReader* bufferReader2, int32_t offset2, int32_t length2);

  /// @brief Method Equals2, addr 0x5f63240, size 0x9c, virtual false, abstract: false, final false
  inline bool Equals2(int32_t offset1, int32_t length1, int32_t offset2, int32_t length2);

  /// @brief Method Equals2, addr 0x5f632dc, size 0x1f8, virtual false, abstract: false, final false
  inline bool Equals2(int32_t offset1, int32_t length1, ::StringW s2);

  /// @brief Method GetAmpersandCharEntity, addr 0x5f629b4, size 0x8c, virtual false, abstract: false, final false
  inline int32_t GetAmpersandCharEntity(int32_t offset, int32_t length);

  /// @brief Method GetApostropheCharEntity, addr 0x5f62a40, size 0xa8, virtual false, abstract: false, final false
  inline int32_t GetApostropheCharEntity(int32_t offset, int32_t length);

  /// @brief Method GetBase64, addr 0x5f63c94, size 0xc, virtual false, abstract: false, final false
  inline void GetBase64(int32_t srcOffset, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t dstOffset, int32_t count);

  /// @brief Method GetBuffer, addr 0x5f6173c, size 0x34, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBuffer(int32_t count, ::ByRef<int32_t> offset);

  /// @brief Method GetBuffer, addr 0x5f61790, size 0xb4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBuffer(int32_t count, ::ByRef<int32_t> offset, ::ByRef<int32_t> offsetMax);

  /// @brief Method GetBuffer, addr 0x5f619c8, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBuffer(::ByRef<int32_t> offset, ::ByRef<int32_t> offsetMax);

  /// @brief Method GetBufferHard, addr 0x5f61770, size 0x20, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBufferHard(int32_t count, ::ByRef<int32_t> offset);

  /// @brief Method GetByte, addr 0x5f61674, size 0x48, virtual false, abstract: false, final false
  inline uint8_t GetByte();

  /// @brief Method GetByte, addr 0x5f636f8, size 0x30, virtual false, abstract: false, final false
  inline uint8_t GetByte(int32_t offset);

  /// @brief Method GetByteHard, addr 0x5f616bc, size 0x3c, virtual false, abstract: false, final false
  inline uint8_t GetByteHard();

  /// @brief Method GetCharBuffer, addr 0x5f61d64, size 0x98, virtual false, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetCharBuffer(int32_t count);

  /// @brief Method GetCharEntity, addr 0x5f62674, size 0xf8, virtual false, abstract: false, final false
  inline int32_t GetCharEntity(int32_t offset, int32_t length);

  /// @brief Method GetChars, addr 0x5f61dfc, size 0x108, virtual false, abstract: false, final false
  inline int32_t GetChars(int32_t offset, int32_t length, ::ArrayW<char16_t, ::Array<char16_t>*> chars);

  /// @brief Method GetChars, addr 0x5f6205c, size 0x128, virtual false, abstract: false, final false
  inline int32_t GetChars(int32_t offset, int32_t length, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charOffset);

  /// @brief Method GetDecimal, addr 0x5f63a08, size 0x16c, virtual false, abstract: false, final false
  inline ::System::Decimal GetDecimal(int32_t offset);

  /// @brief Method GetDecimalCharEntity, addr 0x5f62ae8, size 0x8c, virtual false, abstract: false, final false
  inline int32_t GetDecimalCharEntity(int32_t offset, int32_t length);

  /// @brief Method GetDictionaryString, addr 0x5f62d14, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* GetDictionaryString(int32_t key);

  /// @brief Method GetDouble, addr 0x5f63910, size 0xf8, virtual false, abstract: false, final false
  inline double_t GetDouble(int32_t offset);

  /// @brief Method GetEscapedChars, addr 0x5f623f8, size 0x260, virtual false, abstract: false, final false
  inline int32_t GetEscapedChars(int32_t offset, int32_t length, ::ArrayW<char16_t, ::Array<char16_t>*> chars);

  /// @brief Method GetEscapedString, addr 0x5f6276c, size 0x54, virtual false, abstract: false, final false
  inline ::StringW GetEscapedString(int32_t offset, int32_t length);

  /// @brief Method GetEscapedString, addr 0x5f627c0, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW GetEscapedString(int32_t offset, int32_t length, ::System::Xml::XmlNameTable* nameTable);

  /// @brief Method GetGreaterThanCharEntity, addr 0x5f6289c, size 0x70, virtual false, abstract: false, final false
  inline int32_t GetGreaterThanCharEntity(int32_t offset, int32_t length);

  /// @brief Method GetGuid, addr 0x5f63be8, size 0xac, virtual false, abstract: false, final false
  inline ::System::Guid GetGuid(int32_t offset);

  /// @brief Method GetHexCharEntity, addr 0x5f62b74, size 0xb4, virtual false, abstract: false, final false
  inline int32_t GetHexCharEntity(int32_t offset, int32_t length);

  /// @brief Method GetInt16, addr 0x5f63004, size 0x4c, virtual false, abstract: false, final false
  inline int32_t GetInt16(int32_t offset);

  /// @brief Method GetInt32, addr 0x5f6373c, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetInt32(int32_t offset);

  /// @brief Method GetInt64, addr 0x5f637b0, size 0xd0, virtual false, abstract: false, final false
  inline int64_t GetInt64(int32_t offset);

  /// @brief Method GetInt8, addr 0x5f63728, size 0x14, virtual false, abstract: false, final false
  inline int32_t GetInt8(int32_t offset);

  /// @brief Method GetLessThanCharEntity, addr 0x5f6282c, size 0x70, virtual false, abstract: false, final false
  inline int32_t GetLessThanCharEntity(int32_t offset, int32_t length);

  /// @brief Method GetList, addr 0x5f63cc4, size 0x194, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetList(int32_t offset, int32_t count);

  /// @brief Method GetNodeType, addr 0x5f63ca0, size 0x14, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBinaryNodeType GetNodeType();

  /// @brief Method GetQuoteCharEntity, addr 0x5f6290c, size 0xa8, virtual false, abstract: false, final false
  inline int32_t GetQuoteCharEntity(int32_t offset, int32_t length);

  /// @brief Method GetRows, addr 0x5f64418, size 0x1d8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetRows();

  /// @brief Method GetSingle, addr 0x5f63884, size 0x8c, virtual false, abstract: false, final false
  inline float_t GetSingle(int32_t offset);

  /// @brief Method GetString, addr 0x5f62184, size 0x54, virtual false, abstract: false, final false
  inline ::StringW GetString(int32_t offset, int32_t length);

  /// @brief Method GetString, addr 0x5f6238c, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW GetString(int32_t offset, int32_t length, ::System::Xml::XmlNameTable* nameTable);

  /// @brief Method GetUInt64, addr 0x5f63880, size 0x4, virtual false, abstract: false, final false
  inline uint64_t GetUInt64(int32_t offset);

  /// @brief Method GetUnicodeString, addr 0x5f621d8, size 0x74, virtual false, abstract: false, final false
  inline ::StringW GetUnicodeString(int32_t offset, int32_t length);

  /// @brief Method GetUniqueId, addr 0x5f63b74, size 0x74, virtual false, abstract: false, final false
  inline ::System::Xml::UniqueId* GetUniqueId(int32_t offset);

  /// @brief Method IsAttrChar, addr 0x5f62658, size 0x1c, virtual false, abstract: false, final false
  inline bool IsAttrChar(int32_t ch);

  /// @brief Method IsWhitespaceKey, addr 0x5f62c28, size 0xec, virtual false, abstract: false, final false
  inline bool IsWhitespaceKey(int32_t key);

  /// @brief Method IsWhitespaceUTF8, addr 0x5f62e1c, size 0x10c, virtual false, abstract: false, final false
  inline bool IsWhitespaceUTF8(int32_t offset, int32_t length);

  /// @brief Method IsWhitespaceUnicode, addr 0x5f62f28, size 0xdc, virtual false, abstract: false, final false
  inline bool IsWhitespaceUnicode(int32_t offset, int32_t length);

  static inline ::System::Xml::XmlBufferReader* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  static inline ::System::Xml::XmlBufferReader* New_ctor(::System::Xml::XmlDictionaryReader* reader);

  /// @brief Method ReadBytes, addr 0x5f61ae8, size 0x50, virtual false, abstract: false, final false
  inline int32_t ReadBytes(int32_t count);

  /// @brief Method ReadDictionaryKey, addr 0x5f64114, size 0x13c, virtual false, abstract: false, final false
  inline int32_t ReadDictionaryKey();

  /// @brief Method ReadInt32, addr 0x5f61c94, size 0xac, virtual false, abstract: false, final false
  inline int32_t ReadInt32();

  /// @brief Method ReadList, addr 0x5f642dc, size 0xd4, virtual false, abstract: false, final false
  inline void ReadList(::System::Xml::ValueHandle* value);

  /// @brief Method ReadMultiByteUInt31, addr 0x5f61b38, size 0xbc, virtual false, abstract: false, final false
  inline int32_t ReadMultiByteUInt31();

  /// @brief Method ReadQName, addr 0x5f643b0, size 0x68, virtual false, abstract: false, final false
  inline void ReadQName(::System::Xml::ValueHandle* value);

  /// @brief Method ReadUInt16, addr 0x5f61c18, size 0x7c, virtual false, abstract: false, final false
  inline int32_t ReadUInt16();

  /// @brief Method ReadUInt31, addr 0x5f61d40, size 0x24, virtual false, abstract: false, final false
  inline int32_t ReadUInt31();

  /// @brief Method ReadUInt8, addr 0x5f61bf4, size 0x24, virtual false, abstract: false, final false
  inline int32_t ReadUInt8();

  /// @brief Method ReadUnicodeValue, addr 0x5f642bc, size 0x20, virtual false, abstract: false, final false
  inline void ReadUnicodeValue(::System::Xml::ValueHandle* value, int32_t length);

  /// @brief Method ReadValue, addr 0x5f63e58, size 0x2bc, virtual false, abstract: false, final false
  inline void ReadValue(::System::Xml::XmlBinaryNodeType nodeType, ::System::Xml::ValueHandle* value);

  /// @brief Method ReadValue, addr 0x5f64250, size 0x6c, virtual false, abstract: false, final false
  inline void ReadValue(::System::Xml::ValueHandle* value, ::System::Xml::ValueHandleType type, int32_t length);

  /// @brief Method SetBuffer, addr 0x5f614c8, size 0x1c, virtual false, abstract: false, final false
  inline void SetBuffer(::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Xml::IXmlDictionary* dictionary,
                        ::System::Xml::XmlBinaryReaderSession* session);

  /// @brief Method SetBuffer, addr 0x5f6142c, size 0x9c, virtual false, abstract: false, final false
  inline void SetBuffer(::System::IO::Stream* stream, ::System::Xml::IXmlDictionary* dictionary, ::System::Xml::XmlBinaryReaderSession* session);

  /// @brief Method SetWindow, addr 0x5f61a08, size 0xd0, virtual false, abstract: false, final false
  inline void SetWindow(int32_t windowOffset, int32_t windowLength);

  /// @brief Method SkipByte, addr 0x5f616f8, size 0x10, virtual false, abstract: false, final false
  inline void SkipByte();

  /// @brief Method SkipNodeType, addr 0x5f63cb4, size 0x10, virtual false, abstract: false, final false
  inline void SkipNodeType();

  /// @brief Method TryEnsureByte, addr 0x5f615c0, size 0xb4, virtual false, abstract: false, final false
  inline bool TryEnsureByte();

  /// @brief Method TryEnsureBytes, addr 0x5f61844, size 0x184, virtual false, abstract: false, final false
  inline bool TryEnsureBytes(int32_t count);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_chars() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_chars();

  constexpr ::System::Xml::IXmlDictionary* const& __cordl_internal_get_dictionary() const;

  constexpr ::System::Xml::IXmlDictionary*& __cordl_internal_get_dictionary();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_guid() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_guid();

  constexpr ::System::Xml::ValueHandle* const& __cordl_internal_get_listValue() const;

  constexpr ::System::Xml::ValueHandle*& __cordl_internal_get_listValue();

  constexpr int32_t const& __cordl_internal_get_offset() const;

  constexpr int32_t& __cordl_internal_get_offset();

  constexpr int32_t const& __cordl_internal_get_offsetMax() const;

  constexpr int32_t& __cordl_internal_get_offsetMax();

  constexpr int32_t const& __cordl_internal_get_offsetMin() const;

  constexpr int32_t& __cordl_internal_get_offsetMin();

  constexpr ::System::Xml::XmlDictionaryReader* const& __cordl_internal_get_reader() const;

  constexpr ::System::Xml::XmlDictionaryReader*& __cordl_internal_get_reader();

  constexpr ::System::Xml::XmlBinaryReaderSession* const& __cordl_internal_get_session() const;

  constexpr ::System::Xml::XmlBinaryReaderSession*& __cordl_internal_get_session();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_stream();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_streamBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_streamBuffer();

  constexpr int32_t const& __cordl_internal_get_windowOffset() const;

  constexpr int32_t& __cordl_internal_get_windowOffset();

  constexpr int32_t const& __cordl_internal_get_windowOffsetMax() const;

  constexpr int32_t& __cordl_internal_get_windowOffsetMax();

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_dictionary(::System::Xml::IXmlDictionary* value);

  constexpr void __cordl_internal_set_guid(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_listValue(::System::Xml::ValueHandle* value);

  constexpr void __cordl_internal_set_offset(int32_t value);

  constexpr void __cordl_internal_set_offsetMax(int32_t value);

  constexpr void __cordl_internal_set_offsetMin(int32_t value);

  constexpr void __cordl_internal_set_reader(::System::Xml::XmlDictionaryReader* value);

  constexpr void __cordl_internal_set_session(::System::Xml::XmlBinaryReaderSession* value);

  constexpr void __cordl_internal_set_stream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_streamBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_windowOffset(int32_t value);

  constexpr void __cordl_internal_set_windowOffsetMax(int32_t value);

  /// @brief Method .ctor, addr 0x5f613ac, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method .ctor, addr 0x5f613a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlDictionaryReader* reader);

  static inline ::System::Xml::XmlBufferReader* getStaticF_empty();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_emptyByteArray();

  /// @brief Method get_Buffer, addr 0x5f61414, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Buffer();

  /// @brief Method get_Empty, addr 0x5f613b8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlBufferReader* get_Empty();

  /// @brief Method get_EndOfFile, addr 0x5f61590, size 0x30, virtual false, abstract: false, final false
  inline bool get_EndOfFile();

  /// @brief Method get_IsStreamed, addr 0x5f6141c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsStreamed();

  /// @brief Method get_Offset, addr 0x5f61ad8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Offset();

  static inline void setStaticF_empty(::System::Xml::XmlBufferReader* value);

  static inline void setStaticF_emptyByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_Offset, addr 0x5f61ae0, size 0x8, virtual false, abstract: false, final false
  inline void set_Offset(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBufferReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBufferReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBufferReader(XmlBufferReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBufferReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBufferReader(XmlBufferReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16940 };

  /// @brief Field reader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryReader* ___reader;

  /// @brief Field stream, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  /// @brief Field streamBuffer, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___streamBuffer;

  /// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field offsetMin, offset: 0x30, size: 0x4, def value: None
  int32_t ___offsetMin;

  /// @brief Field offsetMax, offset: 0x34, size: 0x4, def value: None
  int32_t ___offsetMax;

  /// @brief Field dictionary, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::IXmlDictionary* ___dictionary;

  /// @brief Field session, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::XmlBinaryReaderSession* ___session;

  /// @brief Field guid, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___guid;

  /// @brief Field offset, offset: 0x50, size: 0x4, def value: None
  int32_t ___offset;

  /// @brief Field chars, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___chars;

  /// @brief Field windowOffset, offset: 0x60, size: 0x4, def value: None
  int32_t ___windowOffset;

  /// @brief Field windowOffsetMax, offset: 0x64, size: 0x4, def value: None
  int32_t ___windowOffsetMax;

  /// @brief Field listValue, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::ValueHandle* ___listValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBufferReader, ___reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBufferReader, ___stream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBufferReader, ___streamBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBufferReader, ___buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBufferReader, ___offsetMin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBufferReader, ___offsetMax) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBufferReader, ___dictionary) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBufferReader, ___session) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBufferReader, ___guid) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBufferReader, ___offset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBufferReader, ___chars) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBufferReader, ___windowOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBufferReader, ___windowOffsetMax) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBufferReader, ___listValue) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBufferReader, 0x70>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlBufferReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBufferReader*, "System.Xml", "XmlBufferReader");
