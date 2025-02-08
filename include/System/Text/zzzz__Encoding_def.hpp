#pragma once
// IWYU pragma private; include "System/Text/Encoding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Encoding)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Globalization {
class CodePageDataItem;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Text {
class DecoderFallbackBuffer;
}
namespace System::Text {
class DecoderFallback;
}
namespace System::Text {
class DecoderNLS;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class EncoderFallbackBuffer;
}
namespace System::Text {
class EncoderFallback;
}
namespace System::Text {
class EncoderNLS;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Encoding_DefaultDecoder;
}
namespace System::Text {
class Encoding_DefaultEncoder;
}
namespace System::Text {
class Encoding_EncodingByteBuffer;
}
namespace System::Text {
class Encoding_EncodingCharBuffer;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Text {
class Encoding;
}
namespace System::Text {
class Encoding_DefaultDecoder;
}
namespace System::Text {
class Encoding_DefaultEncoder;
}
namespace System::Text {
class Encoding_EncodingByteBuffer;
}
namespace System::Text {
class Encoding_EncodingCharBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::Encoding);
MARK_REF_PTR_T(::System::Text::Encoding_DefaultDecoder);
MARK_REF_PTR_T(::System::Text::Encoding_DefaultEncoder);
MARK_REF_PTR_T(::System::Text::Encoding_EncodingByteBuffer);
MARK_REF_PTR_T(::System::Text::Encoding_EncodingCharBuffer);
// Dependencies System.Runtime.Serialization.IObjectReference, System.Runtime.Serialization.ISerializable, System.Text.Encoder
namespace System::Text {
// Is value type: false
// CS Name: System.Text.Encoding/DefaultEncoder
class CORDL_TYPE Encoding_DefaultEncoder : public ::System::Text::Encoder {
public:
  // Declarations
  /// @brief Field charLeftOver, offset 0x2a, size 0x2
  __declspec(property(get = __cordl_internal_get_charLeftOver, put = __cordl_internal_set_charLeftOver)) char16_t charLeftOver;

  /// @brief Field m_encoding, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_encoding, put = __cordl_internal_set_m_encoding)) ::System::Text::Encoding* m_encoding;

  /// @brief Field m_hasInitializedEncoding, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_hasInitializedEncoding, put = __cordl_internal_set_m_hasInitializedEncoding)) bool m_hasInitializedEncoding;

  /// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
  constexpr operator ::System::Runtime::Serialization::IObjectReference*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetByteCount, addr 0x3c95650, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count, bool flush);

  /// @brief Method GetByteCount, addr 0x3c95670, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, bool flush);

  /// @brief Method GetBytes, addr 0x3c95694, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, bool flush);

  /// @brief Method GetBytes, addr 0x3c956b8, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, bool flush);

  /// @brief Method GetRealObject, addr 0x3c954f8, size 0xb8, virtual true, abstract: false, final true
  inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Text::Encoding_DefaultEncoder* New_ctor(::System::Text::Encoding* encoding);

  static inline ::System::Text::Encoding_DefaultEncoder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x3c955b0, size 0xa0, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  constexpr char16_t const& __cordl_internal_get_charLeftOver() const;

  constexpr char16_t& __cordl_internal_get_charLeftOver();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get_m_encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get_m_encoding();

  constexpr bool const& __cordl_internal_get_m_hasInitializedEncoding() const;

  constexpr bool& __cordl_internal_get_m_hasInitializedEncoding();

  constexpr void __cordl_internal_set_charLeftOver(char16_t value);

  constexpr void __cordl_internal_set_m_encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_m_hasInitializedEncoding(bool value);

  /// @brief Method .ctor, addr 0x3c94c08, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x3c951a4, size 0x354, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
  constexpr ::System::Runtime::Serialization::IObjectReference* i___System__Runtime__Serialization__IObjectReference() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Encoding_DefaultEncoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Encoding_DefaultEncoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Encoding_DefaultEncoder(Encoding_DefaultEncoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Encoding_DefaultEncoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Encoding_DefaultEncoder(Encoding_DefaultEncoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2873 };

  /// @brief Field m_encoding, offset: 0x20, size: 0x8, def value: None
  ::System::Text::Encoding* ___m_encoding;

  /// @brief Field m_hasInitializedEncoding, offset: 0x28, size: 0x1, def value: None
  bool ___m_hasInitializedEncoding;

  /// @brief Field charLeftOver, offset: 0x2a, size: 0x2, def value: None
  char16_t ___charLeftOver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::Encoding_DefaultEncoder, ___m_encoding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_DefaultEncoder, ___m_hasInitializedEncoding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_DefaultEncoder, ___charLeftOver) == 0x2a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::Encoding_DefaultEncoder, 0x30>, "Size mismatch!");

} // namespace System::Text
// Dependencies System.Runtime.Serialization.IObjectReference, System.Runtime.Serialization.ISerializable, System.Text.Decoder
namespace System::Text {
// Is value type: false
// CS Name: System.Text.Encoding/DefaultDecoder
class CORDL_TYPE Encoding_DefaultDecoder : public ::System::Text::Decoder {
public:
  // Declarations
  /// @brief Field m_encoding, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_encoding, put = __cordl_internal_set_m_encoding)) ::System::Text::Encoding* m_encoding;

  /// @brief Field m_hasInitializedEncoding, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_hasInitializedEncoding, put = __cordl_internal_set_m_hasInitializedEncoding)) bool m_hasInitializedEncoding;

  /// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
  constexpr operator ::System::Runtime::Serialization::IObjectReference*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetCharCount, addr 0x3c95a7c, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount, addr 0x3c95a8c, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count, bool flush);

  /// @brief Method GetCharCount, addr 0x3c95ab0, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, bool flush);

  /// @brief Method GetChars, addr 0x3c95ad4, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars, addr 0x3c95ae4, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, bool flush);

  /// @brief Method GetChars, addr 0x3c95b08, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, bool flush);

  /// @brief Method GetRealObject, addr 0x3c95990, size 0x4c, virtual true, abstract: false, final true
  inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Text::Encoding_DefaultDecoder* New_ctor(::System::Text::Encoding* encoding);

  static inline ::System::Text::Encoding_DefaultDecoder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x3c959dc, size 0xa0, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  constexpr ::System::Text::Encoding* const& __cordl_internal_get_m_encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get_m_encoding();

  constexpr bool const& __cordl_internal_get_m_hasInitializedEncoding() const;

  constexpr bool& __cordl_internal_get_m_hasInitializedEncoding();

  constexpr void __cordl_internal_set_m_encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_m_hasInitializedEncoding(bool value);

  /// @brief Method .ctor, addr 0x3c9498c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x3c956dc, size 0x2b4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
  constexpr ::System::Runtime::Serialization::IObjectReference* i___System__Runtime__Serialization__IObjectReference() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Encoding_DefaultDecoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Encoding_DefaultDecoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Encoding_DefaultDecoder(Encoding_DefaultDecoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Encoding_DefaultDecoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Encoding_DefaultDecoder(Encoding_DefaultDecoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2874 };

  /// @brief Field m_encoding, offset: 0x20, size: 0x8, def value: None
  ::System::Text::Encoding* ___m_encoding;

  /// @brief Field m_hasInitializedEncoding, offset: 0x28, size: 0x1, def value: None
  bool ___m_hasInitializedEncoding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::Encoding_DefaultDecoder, ___m_encoding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_DefaultDecoder, ___m_hasInitializedEncoding) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::Encoding_DefaultDecoder, 0x30>, "Size mismatch!");

} // namespace System::Text
// Dependencies System.Object
namespace System::Text {
// Is value type: false
// CS Name: System.Text.Encoding/EncodingCharBuffer
class CORDL_TYPE Encoding_EncodingCharBuffer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BytesUsed)) int32_t BytesUsed;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_MoreData)) bool MoreData;

  /// @brief Field byteEnd, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_byteEnd, put = __cordl_internal_set_byteEnd)) ::cordl_internals::Ptr<uint8_t> byteEnd;

  /// @brief Field byteStart, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_byteStart, put = __cordl_internal_set_byteStart)) ::cordl_internals::Ptr<uint8_t> byteStart;

  /// @brief Field bytes, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_bytes, put = __cordl_internal_set_bytes)) ::cordl_internals::Ptr<uint8_t> bytes;

  /// @brief Field charCountResult, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_charCountResult, put = __cordl_internal_set_charCountResult)) int32_t charCountResult;

  /// @brief Field charEnd, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_charEnd, put = __cordl_internal_set_charEnd)) ::cordl_internals::Ptr<char16_t> charEnd;

  /// @brief Field charStart, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_charStart, put = __cordl_internal_set_charStart)) ::cordl_internals::Ptr<char16_t> charStart;

  /// @brief Field chars, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_chars, put = __cordl_internal_set_chars)) ::cordl_internals::Ptr<char16_t> chars;

  /// @brief Field decoder, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_decoder, put = __cordl_internal_set_decoder)) ::System::Text::DecoderNLS* decoder;

  /// @brief Field enc, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_enc, put = __cordl_internal_set_enc)) ::System::Text::Encoding* enc;

  /// @brief Field fallbackBuffer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_fallbackBuffer, put = __cordl_internal_set_fallbackBuffer)) ::System::Text::DecoderFallbackBuffer* fallbackBuffer;

  /// @brief Method AddChar, addr 0x3c95c44, size 0x8, virtual false, abstract: false, final false
  inline bool AddChar(char16_t ch);

  /// @brief Method AddChar, addr 0x3c95bd4, size 0x70, virtual false, abstract: false, final false
  inline bool AddChar(char16_t ch, int32_t numBytes);

  /// @brief Method AdjustBytes, addr 0x3c95c4c, size 0x10, virtual false, abstract: false, final false
  inline void AdjustBytes(int32_t count);

  /// @brief Method Fallback, addr 0x3c95d18, size 0xdc, virtual false, abstract: false, final false
  inline bool Fallback(::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuffer);

  /// @brief Method Fallback, addr 0x3c95ca0, size 0x78, virtual false, abstract: false, final false
  inline bool Fallback(uint8_t fallbackByte);

  /// @brief Method GetNextByte, addr 0x3c95c6c, size 0x24, virtual false, abstract: false, final false
  inline uint8_t GetNextByte();

  static inline ::System::Text::Encoding_EncodingCharBuffer* New_ctor(::System::Text::Encoding* enc, ::System::Text::DecoderNLS* decoder, ::cordl_internals::Ptr<char16_t> charStart, int32_t charCount,
                                                                      ::cordl_internals::Ptr<uint8_t> byteStart, int32_t byteCount);

  constexpr ::cordl_internals::Ptr<uint8_t> const& __cordl_internal_get_byteEnd() const;

  constexpr ::cordl_internals::Ptr<uint8_t>& __cordl_internal_get_byteEnd();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __cordl_internal_get_byteStart() const;

  constexpr ::cordl_internals::Ptr<uint8_t>& __cordl_internal_get_byteStart();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __cordl_internal_get_bytes() const;

  constexpr ::cordl_internals::Ptr<uint8_t>& __cordl_internal_get_bytes();

  constexpr int32_t const& __cordl_internal_get_charCountResult() const;

  constexpr int32_t& __cordl_internal_get_charCountResult();

  constexpr ::cordl_internals::Ptr<char16_t> const& __cordl_internal_get_charEnd() const;

  constexpr ::cordl_internals::Ptr<char16_t>& __cordl_internal_get_charEnd();

  constexpr ::cordl_internals::Ptr<char16_t> const& __cordl_internal_get_charStart() const;

  constexpr ::cordl_internals::Ptr<char16_t>& __cordl_internal_get_charStart();

  constexpr ::cordl_internals::Ptr<char16_t> const& __cordl_internal_get_chars() const;

  constexpr ::cordl_internals::Ptr<char16_t>& __cordl_internal_get_chars();

  constexpr ::System::Text::DecoderNLS* const& __cordl_internal_get_decoder() const;

  constexpr ::System::Text::DecoderNLS*& __cordl_internal_get_decoder();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get_enc() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get_enc();

  constexpr ::System::Text::DecoderFallbackBuffer* const& __cordl_internal_get_fallbackBuffer() const;

  constexpr ::System::Text::DecoderFallbackBuffer*& __cordl_internal_get_fallbackBuffer();

  constexpr void __cordl_internal_set_byteEnd(::cordl_internals::Ptr<uint8_t> value);

  constexpr void __cordl_internal_set_byteStart(::cordl_internals::Ptr<uint8_t> value);

  constexpr void __cordl_internal_set_bytes(::cordl_internals::Ptr<uint8_t> value);

  constexpr void __cordl_internal_set_charCountResult(int32_t value);

  constexpr void __cordl_internal_set_charEnd(::cordl_internals::Ptr<char16_t> value);

  constexpr void __cordl_internal_set_charStart(::cordl_internals::Ptr<char16_t> value);

  constexpr void __cordl_internal_set_chars(::cordl_internals::Ptr<char16_t> value);

  constexpr void __cordl_internal_set_decoder(::System::Text::DecoderNLS* value);

  constexpr void __cordl_internal_set_enc(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_fallbackBuffer(::System::Text::DecoderFallbackBuffer* value);

  /// @brief Method .ctor, addr 0x3c95b2c, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::Encoding* enc, ::System::Text::DecoderNLS* decoder, ::cordl_internals::Ptr<char16_t> charStart, int32_t charCount, ::cordl_internals::Ptr<uint8_t> byteStart,
                    int32_t byteCount);

  /// @brief Method get_BytesUsed, addr 0x3c95c90, size 0x10, virtual false, abstract: false, final false
  inline int32_t get_BytesUsed();

  /// @brief Method get_Count, addr 0x3c95df4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_MoreData, addr 0x3c95c5c, size 0x10, virtual false, abstract: false, final false
  inline bool get_MoreData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Encoding_EncodingCharBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Encoding_EncodingCharBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Encoding_EncodingCharBuffer(Encoding_EncodingCharBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Encoding_EncodingCharBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Encoding_EncodingCharBuffer(Encoding_EncodingCharBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2875 };

  /// @brief Field chars, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<char16_t> ___chars;

  /// @brief Field charStart, offset: 0x18, size: 0x8, def value: None
  ::cordl_internals::Ptr<char16_t> ___charStart;

  /// @brief Field charEnd, offset: 0x20, size: 0x8, def value: None
  ::cordl_internals::Ptr<char16_t> ___charEnd;

  /// @brief Field charCountResult, offset: 0x28, size: 0x4, def value: None
  int32_t ___charCountResult;

  /// @brief Field enc, offset: 0x30, size: 0x8, def value: None
  ::System::Text::Encoding* ___enc;

  /// @brief Field decoder, offset: 0x38, size: 0x8, def value: None
  ::System::Text::DecoderNLS* ___decoder;

  /// @brief Field byteStart, offset: 0x40, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> ___byteStart;

  /// @brief Field byteEnd, offset: 0x48, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> ___byteEnd;

  /// @brief Field bytes, offset: 0x50, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> ___bytes;

  /// @brief Field fallbackBuffer, offset: 0x58, size: 0x8, def value: None
  ::System::Text::DecoderFallbackBuffer* ___fallbackBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::Encoding_EncodingCharBuffer, ___chars) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingCharBuffer, ___charStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingCharBuffer, ___charEnd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingCharBuffer, ___charCountResult) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingCharBuffer, ___enc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingCharBuffer, ___decoder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingCharBuffer, ___byteStart) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingCharBuffer, ___byteEnd) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingCharBuffer, ___bytes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingCharBuffer, ___fallbackBuffer) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::Encoding_EncodingCharBuffer, 0x60>, "Size mismatch!");

} // namespace System::Text
// Dependencies System.Object
namespace System::Text {
// Is value type: false
// CS Name: System.Text.Encoding/EncodingByteBuffer
class CORDL_TYPE Encoding_EncodingByteBuffer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CharsUsed)) int32_t CharsUsed;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_MoreData)) bool MoreData;

  /// @brief Field byteCountResult, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_byteCountResult, put = __cordl_internal_set_byteCountResult)) int32_t byteCountResult;

  /// @brief Field byteEnd, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_byteEnd, put = __cordl_internal_set_byteEnd)) ::cordl_internals::Ptr<uint8_t> byteEnd;

  /// @brief Field byteStart, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_byteStart, put = __cordl_internal_set_byteStart)) ::cordl_internals::Ptr<uint8_t> byteStart;

  /// @brief Field bytes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bytes, put = __cordl_internal_set_bytes)) ::cordl_internals::Ptr<uint8_t> bytes;

  /// @brief Field charEnd, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_charEnd, put = __cordl_internal_set_charEnd)) ::cordl_internals::Ptr<char16_t> charEnd;

  /// @brief Field charStart, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_charStart, put = __cordl_internal_set_charStart)) ::cordl_internals::Ptr<char16_t> charStart;

  /// @brief Field chars, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_chars, put = __cordl_internal_set_chars)) ::cordl_internals::Ptr<char16_t> chars;

  /// @brief Field enc, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_enc, put = __cordl_internal_set_enc)) ::System::Text::Encoding* enc;

  /// @brief Field encoder, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_encoder, put = __cordl_internal_set_encoder)) ::System::Text::EncoderNLS* encoder;

  /// @brief Field fallbackBuffer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_fallbackBuffer, put = __cordl_internal_set_fallbackBuffer)) ::System::Text::EncoderFallbackBuffer* fallbackBuffer;

  /// @brief Method AddByte, addr 0x3c95ff8, size 0x50, virtual false, abstract: false, final false
  inline bool AddByte(uint8_t b, int32_t moreBytesExpected);

  /// @brief Method AddByte, addr 0x3c960c4, size 0x8, virtual false, abstract: false, final false
  inline bool AddByte(uint8_t b1);

  /// @brief Method AddByte, addr 0x3c960cc, size 0x8, virtual false, abstract: false, final false
  inline bool AddByte(uint8_t b1, uint8_t b2);

  /// @brief Method AddByte, addr 0x3c960d4, size 0x48, virtual false, abstract: false, final false
  inline bool AddByte(uint8_t b1, uint8_t b2, int32_t moreBytesExpected);

  /// @brief Method GetNextChar, addr 0x3c96164, size 0x50, virtual false, abstract: false, final false
  inline char16_t GetNextChar();

  /// @brief Method MovePrevious, addr 0x3c96048, size 0x7c, virtual false, abstract: false, final false
  inline void MovePrevious(bool bThrow);

  static inline ::System::Text::Encoding_EncodingByteBuffer* New_ctor(::System::Text::Encoding* inEncoding, ::System::Text::EncoderNLS* inEncoder, ::cordl_internals::Ptr<uint8_t> inByteStart,
                                                                      int32_t inByteCount, ::cordl_internals::Ptr<char16_t> inCharStart, int32_t inCharCount);

  constexpr int32_t const& __cordl_internal_get_byteCountResult() const;

  constexpr int32_t& __cordl_internal_get_byteCountResult();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __cordl_internal_get_byteEnd() const;

  constexpr ::cordl_internals::Ptr<uint8_t>& __cordl_internal_get_byteEnd();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __cordl_internal_get_byteStart() const;

  constexpr ::cordl_internals::Ptr<uint8_t>& __cordl_internal_get_byteStart();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __cordl_internal_get_bytes() const;

  constexpr ::cordl_internals::Ptr<uint8_t>& __cordl_internal_get_bytes();

  constexpr ::cordl_internals::Ptr<char16_t> const& __cordl_internal_get_charEnd() const;

  constexpr ::cordl_internals::Ptr<char16_t>& __cordl_internal_get_charEnd();

  constexpr ::cordl_internals::Ptr<char16_t> const& __cordl_internal_get_charStart() const;

  constexpr ::cordl_internals::Ptr<char16_t>& __cordl_internal_get_charStart();

  constexpr ::cordl_internals::Ptr<char16_t> const& __cordl_internal_get_chars() const;

  constexpr ::cordl_internals::Ptr<char16_t>& __cordl_internal_get_chars();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get_enc() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get_enc();

  constexpr ::System::Text::EncoderNLS* const& __cordl_internal_get_encoder() const;

  constexpr ::System::Text::EncoderNLS*& __cordl_internal_get_encoder();

  constexpr ::System::Text::EncoderFallbackBuffer* const& __cordl_internal_get_fallbackBuffer() const;

  constexpr ::System::Text::EncoderFallbackBuffer*& __cordl_internal_get_fallbackBuffer();

  constexpr void __cordl_internal_set_byteCountResult(int32_t value);

  constexpr void __cordl_internal_set_byteEnd(::cordl_internals::Ptr<uint8_t> value);

  constexpr void __cordl_internal_set_byteStart(::cordl_internals::Ptr<uint8_t> value);

  constexpr void __cordl_internal_set_bytes(::cordl_internals::Ptr<uint8_t> value);

  constexpr void __cordl_internal_set_charEnd(::cordl_internals::Ptr<char16_t> value);

  constexpr void __cordl_internal_set_charStart(::cordl_internals::Ptr<char16_t> value);

  constexpr void __cordl_internal_set_chars(::cordl_internals::Ptr<char16_t> value);

  constexpr void __cordl_internal_set_enc(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_encoder(::System::Text::EncoderNLS* value);

  constexpr void __cordl_internal_set_fallbackBuffer(::System::Text::EncoderFallbackBuffer* value);

  /// @brief Method .ctor, addr 0x3c95dfc, size 0x1fc, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::Encoding* inEncoding, ::System::Text::EncoderNLS* inEncoder, ::cordl_internals::Ptr<uint8_t> inByteStart, int32_t inByteCount,
                    ::cordl_internals::Ptr<char16_t> inCharStart, int32_t inCharCount);

  /// @brief Method get_CharsUsed, addr 0x3c961b4, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_CharsUsed();

  /// @brief Method get_Count, addr 0x3c961cc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_MoreData, addr 0x3c9611c, size 0x48, virtual false, abstract: false, final false
  inline bool get_MoreData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Encoding_EncodingByteBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Encoding_EncodingByteBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Encoding_EncodingByteBuffer(Encoding_EncodingByteBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Encoding_EncodingByteBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Encoding_EncodingByteBuffer(Encoding_EncodingByteBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2876 };

  /// @brief Field bytes, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> ___bytes;

  /// @brief Field byteStart, offset: 0x18, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> ___byteStart;

  /// @brief Field byteEnd, offset: 0x20, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> ___byteEnd;

  /// @brief Field chars, offset: 0x28, size: 0x8, def value: None
  ::cordl_internals::Ptr<char16_t> ___chars;

  /// @brief Field charStart, offset: 0x30, size: 0x8, def value: None
  ::cordl_internals::Ptr<char16_t> ___charStart;

  /// @brief Field charEnd, offset: 0x38, size: 0x8, def value: None
  ::cordl_internals::Ptr<char16_t> ___charEnd;

  /// @brief Field byteCountResult, offset: 0x40, size: 0x4, def value: None
  int32_t ___byteCountResult;

  /// @brief Field enc, offset: 0x48, size: 0x8, def value: None
  ::System::Text::Encoding* ___enc;

  /// @brief Field encoder, offset: 0x50, size: 0x8, def value: None
  ::System::Text::EncoderNLS* ___encoder;

  /// @brief Field fallbackBuffer, offset: 0x58, size: 0x8, def value: None
  ::System::Text::EncoderFallbackBuffer* ___fallbackBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::Encoding_EncodingByteBuffer, ___bytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingByteBuffer, ___byteStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingByteBuffer, ___byteEnd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingByteBuffer, ___chars) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingByteBuffer, ___charStart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingByteBuffer, ___charEnd) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingByteBuffer, ___byteCountResult) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingByteBuffer, ___enc) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingByteBuffer, ___encoder) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding_EncodingByteBuffer, ___fallbackBuffer) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::Encoding_EncodingByteBuffer, 0x60>, "Size mismatch!");

} // namespace System::Text
// Dependencies System.ICloneable, System.Object
namespace System::Text {
// Is value type: false
// CS Name: System.Text.Encoding
class CORDL_TYPE Encoding : public ::System::Object {
public:
  // Declarations
  using DefaultDecoder = ::System::Text::Encoding_DefaultDecoder;

  using DefaultEncoder = ::System::Text::Encoding_DefaultEncoder;

  using EncodingByteBuffer = ::System::Text::Encoding_EncodingByteBuffer;

  using EncodingCharBuffer = ::System::Text::Encoding_EncodingCharBuffer;

  __declspec(property(get = get_CodePage)) int32_t CodePage;

  __declspec(property(get = get_DecoderFallback, put = set_DecoderFallback)) ::System::Text::DecoderFallback* DecoderFallback;

  __declspec(property(get = get_EncoderFallback, put = set_EncoderFallback)) ::System::Text::EncoderFallback* EncoderFallback;

  __declspec(property(get = get_EncodingName)) ::StringW EncodingName;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Preamble)) ::System::ReadOnlySpan_1<uint8_t> Preamble;

  __declspec(property(get = get_WebName)) ::StringW WebName;

  /// @brief Field asciiEncoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_asciiEncoding, put = setStaticF_asciiEncoding)) ::System::Text::Encoding* asciiEncoding;

  /// @brief Field bigEndianUnicode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_bigEndianUnicode, put = setStaticF_bigEndianUnicode)) ::System::Text::Encoding* bigEndianUnicode;

  /// @brief Field dataItem, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dataItem, put = __cordl_internal_set_dataItem)) ::System::Globalization::CodePageDataItem* dataItem;

  /// @brief Field decoderFallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_decoderFallback, put = __cordl_internal_set_decoderFallback)) ::System::Text::DecoderFallback* decoderFallback;

  /// @brief Field defaultEncoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultEncoding, put = setStaticF_defaultEncoding)) ::System::Text::Encoding* defaultEncoding;

  /// @brief Field encoderFallback, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_encoderFallback, put = __cordl_internal_set_encoderFallback)) ::System::Text::EncoderFallback* encoderFallback;

  /// @brief Field encodings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_encodings, put = setStaticF_encodings)) ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Text::Encoding*>* encodings;

  /// @brief Field latin1Encoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_latin1Encoding, put = setStaticF_latin1Encoding)) ::System::Text::Encoding* latin1Encoding;

  /// @brief Field m_codePage, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_codePage, put = __cordl_internal_set_m_codePage)) int32_t m_codePage;

  /// @brief Field m_deserializedFromEverett, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_deserializedFromEverett, put = __cordl_internal_set_m_deserializedFromEverett)) bool m_deserializedFromEverett;

  /// @brief Field m_isReadOnly, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isReadOnly, put = __cordl_internal_set_m_isReadOnly)) bool m_isReadOnly;

  /// @brief Field s_InternalSyncObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InternalSyncObject, put = setStaticF_s_InternalSyncObject)) ::System::Object* s_InternalSyncObject;

  /// @brief Field unicodeEncoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_unicodeEncoding, put = setStaticF_unicodeEncoding)) ::System::Text::Encoding* unicodeEncoding;

  /// @brief Field utf32Encoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_utf32Encoding, put = setStaticF_utf32Encoding)) ::System::Text::Encoding* utf32Encoding;

  /// @brief Field utf7Encoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_utf7Encoding, put = setStaticF_utf7Encoding)) ::System::Text::Encoding* utf7Encoding;

  /// @brief Field utf8Encoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_utf8Encoding, put = setStaticF_utf8Encoding)) ::System::Text::Encoding* utf8Encoding;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x3c93ad0, size 0x88, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method CreateDefaultEncoding, addr 0x3c949bc, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* CreateDefaultEncoding();

  /// @brief Method DeserializeEncoding, addr 0x3c91b04, size 0x3fc, virtual false, abstract: false, final false
  inline void DeserializeEncoding(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Equals, addr 0x3c94cf0, size 0xd0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetBestFitBytesToUnicodeData, addr 0x3c94e70, size 0x58, virtual true, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetBestFitBytesToUnicodeData();

  /// @brief Method GetBestFitUnicodeToBytesData, addr 0x3c94e18, size 0x58, virtual true, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetBestFitUnicodeToBytesData();

  /// @brief Method GetByteCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetByteCount, addr 0x3c93be8, size 0x16c, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count);

  /// @brief Method GetByteCount, addr 0x3c93d54, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetByteCount, addr 0x3c93b60, size 0x88, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::StringW s);

  /// @brief Method GetBytes, addr 0x3c93d64, size 0x90, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars);

  /// @brief Method GetBytes, addr 0x3c93df4, size 0xb8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetBytes, addr 0x3c93eac, size 0x100, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(::StringW s);

  /// @brief Method GetBytes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes, addr 0x3c950d0, size 0xd4, virtual true, abstract: false, final false
  inline int32_t GetBytes(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<uint8_t> bytes);

  /// @brief Method GetBytes, addr 0x3c94068, size 0x21c, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount);

  /// @brief Method GetBytes, addr 0x3c94058, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetBytes, addr 0x3c93fac, size 0xac, virtual true, abstract: false, final false
  inline int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetCharCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount, addr 0x3c94284, size 0x170, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count);

  /// @brief Method GetCharCount, addr 0x3c943f4, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, ::System::Text::DecoderNLS* decoder);

  /// @brief Method GetChars, addr 0x3c94404, size 0xbc, virtual true, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetChars, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars, addr 0x3c947d0, size 0xd4, virtual true, abstract: false, final false
  inline int32_t GetChars(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Span_1<char16_t> chars);

  /// @brief Method GetChars, addr 0x3c944c0, size 0x21c, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount);

  /// @brief Method GetChars, addr 0x3c946dc, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::System::Text::DecoderNLS* decoder);

  /// @brief Method GetDataItem, addr 0x3c93964, size 0x120, virtual false, abstract: false, final false
  inline void GetDataItem();

  /// @brief Method GetDecoder, addr 0x3c94928, size 0x64, virtual true, abstract: false, final false
  inline ::System::Text::Decoder* GetDecoder();

  /// @brief Method GetEncoder, addr 0x3c94ba4, size 0x64, virtual true, abstract: false, final false
  inline ::System::Text::Encoder* GetEncoder();

  /// @brief Method GetEncoding, addr 0x3c92140, size 0x8ac, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* GetEncoding(int32_t codepage);

  /// @brief Method GetEncoding, addr 0x3c935a0, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* GetEncoding(int32_t codepage, ::System::Text::EncoderFallback* encoderFallback, ::System::Text::DecoderFallback* decoderFallback);

  /// @brief Method GetEncoding, addr 0x3c9381c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* GetEncoding(::StringW name);

  /// @brief Method GetHashCode, addr 0x3c94dc0, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetMaxByteCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetMaxByteCount(int32_t charCount);

  /// @brief Method GetMaxCharCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetMaxCharCount(int32_t byteCount);

  /// @brief Method GetPreamble, addr 0x3c938b8, size 0x58, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreamble();

  /// @brief Method GetString, addr 0x3c94c38, size 0x90, virtual true, abstract: false, final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method GetString, addr 0x3c94cc8, size 0x28, virtual true, abstract: false, final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetString, addr 0x3c948a4, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW GetString(::System::ReadOnlySpan_1<uint8_t> bytes);

  /// @brief Method GetString, addr 0x3c946ec, size 0xe4, virtual false, abstract: false, final false
  inline ::StringW GetString(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount);

  static inline ::System::Text::Encoding* New_ctor();

  static inline ::System::Text::Encoding* New_ctor(int32_t codePage);

  /// @brief Method OnDeserialized, addr 0x3c91a74, size 0x3c, virtual false, abstract: false, final false
  inline void OnDeserialized();

  /// @brief Method OnDeserialized, addr 0x3c91ac0, size 0x3c, virtual false, abstract: false, final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnDeserializing, addr 0x3c91a64, size 0x10, virtual false, abstract: false, final false
  inline void OnDeserializing();

  /// @brief Method OnDeserializing, addr 0x3c91ab0, size 0x10, virtual false, abstract: false, final false
  inline void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnSerializing, addr 0x3c91afc, size 0x8, virtual false, abstract: false, final false
  inline void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method SerializeEncoding, addr 0x3c91f00, size 0x1a8, virtual false, abstract: false, final false
  inline void SerializeEncoding(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SetDefaultFallbacks, addr 0x3c919d0, size 0x94, virtual true, abstract: false, final false
  inline void SetDefaultFallbacks();

  /// @brief Method ThrowBytesOverflow, addr 0x3c94ec8, size 0x104, virtual false, abstract: false, final false
  inline void ThrowBytesOverflow();

  /// @brief Method ThrowBytesOverflow, addr 0x3c8f290, size 0x78, virtual false, abstract: false, final false
  inline void ThrowBytesOverflow(::System::Text::EncoderNLS* encoder, bool nothingEncoded);

  /// @brief Method ThrowCharsOverflow, addr 0x3c94fcc, size 0x104, virtual false, abstract: false, final false
  inline void ThrowCharsOverflow();

  /// @brief Method ThrowCharsOverflow, addr 0x3c90214, size 0x78, virtual false, abstract: false, final false
  inline void ThrowCharsOverflow(::System::Text::DecoderNLS* decoder, bool nothingDecoded);

  constexpr ::System::Globalization::CodePageDataItem* const& __cordl_internal_get_dataItem() const;

  constexpr ::System::Globalization::CodePageDataItem*& __cordl_internal_get_dataItem();

  constexpr ::System::Text::DecoderFallback* const& __cordl_internal_get_decoderFallback() const;

  constexpr ::System::Text::DecoderFallback*& __cordl_internal_get_decoderFallback();

  constexpr ::System::Text::EncoderFallback* const& __cordl_internal_get_encoderFallback() const;

  constexpr ::System::Text::EncoderFallback*& __cordl_internal_get_encoderFallback();

  constexpr int32_t const& __cordl_internal_get_m_codePage() const;

  constexpr int32_t& __cordl_internal_get_m_codePage();

  constexpr bool const& __cordl_internal_get_m_deserializedFromEverett() const;

  constexpr bool& __cordl_internal_get_m_deserializedFromEverett();

  constexpr bool const& __cordl_internal_get_m_isReadOnly() const;

  constexpr bool& __cordl_internal_get_m_isReadOnly();

  constexpr void __cordl_internal_set_dataItem(::System::Globalization::CodePageDataItem* value);

  constexpr void __cordl_internal_set_decoderFallback(::System::Text::DecoderFallback* value);

  constexpr void __cordl_internal_set_encoderFallback(::System::Text::EncoderFallback* value);

  constexpr void __cordl_internal_set_m_codePage(int32_t value);

  constexpr void __cordl_internal_set_m_deserializedFromEverett(bool value);

  constexpr void __cordl_internal_set_m_isReadOnly(bool value);

  /// @brief Method .ctor, addr 0x3c919a0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c8d5a4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(int32_t codePage);

  static inline ::System::Text::Encoding* getStaticF_asciiEncoding();

  static inline ::System::Text::Encoding* getStaticF_bigEndianUnicode();

  static inline ::System::Text::Encoding* getStaticF_defaultEncoding();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Text::Encoding*>* getStaticF_encodings();

  static inline ::System::Text::Encoding* getStaticF_latin1Encoding();

  static inline ::System::Object* getStaticF_s_InternalSyncObject();

  static inline ::System::Text::Encoding* getStaticF_unicodeEncoding();

  static inline ::System::Text::Encoding* getStaticF_utf32Encoding();

  static inline ::System::Text::Encoding* getStaticF_utf7Encoding();

  static inline ::System::Text::Encoding* getStaticF_utf8Encoding();

  /// @brief Method get_ASCII, addr 0x3c92d4c, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* get_ASCII();

  /// @brief Method get_BigEndianUnicode, addr 0x3c92b34, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* get_BigEndianUnicode();

  /// @brief Method get_CodePage, addr 0x3c94920, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_CodePage();

  /// @brief Method get_DecoderFallback, addr 0x3c93ac8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::DecoderFallback* get_DecoderFallback();

  /// @brief Method get_Default, addr 0x3c929ec, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* get_Default();

  /// @brief Method get_EncoderFallback, addr 0x3c93ac0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::EncoderFallback* get_EncoderFallback();

  /// @brief Method get_EncodingName, addr 0x3c93a84, size 0xc, virtual true, abstract: false, final false
  inline ::StringW get_EncodingName();

  /// @brief Method get_InternalSyncObject, addr 0x3c920a8, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Object* get_InternalSyncObject();

  /// @brief Method get_IsReadOnly, addr 0x3c93b58, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Latin1, addr 0x3c92dec, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* get_Latin1();

  /// @brief Method get_Preamble, addr 0x3c93910, size 0x54, virtual true, abstract: false, final false
  inline ::System::ReadOnlySpan_1<uint8_t> get_Preamble();

  /// @brief Method get_UTF32, addr 0x3c92ca4, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* get_UTF32();

  /// @brief Method get_UTF7, addr 0x3c92c04, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* get_UTF7();

  /// @brief Method get_UTF8, addr 0x3c91808, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* get_UTF8();

  /// @brief Method get_Unicode, addr 0x3c92a68, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* get_Unicode();

  /// @brief Method get_WebName, addr 0x3c93a90, size 0x30, virtual true, abstract: false, final false
  inline ::StringW get_WebName();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method setReadOnly, addr 0x3c94b98, size 0xc, virtual false, abstract: false, final false
  inline void setReadOnly(bool value);

  static inline void setStaticF_asciiEncoding(::System::Text::Encoding* value);

  static inline void setStaticF_bigEndianUnicode(::System::Text::Encoding* value);

  static inline void setStaticF_defaultEncoding(::System::Text::Encoding* value);

  static inline void setStaticF_encodings(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Text::Encoding*>* value);

  static inline void setStaticF_latin1Encoding(::System::Text::Encoding* value);

  static inline void setStaticF_s_InternalSyncObject(::System::Object* value);

  static inline void setStaticF_unicodeEncoding(::System::Text::Encoding* value);

  static inline void setStaticF_utf32Encoding(::System::Text::Encoding* value);

  static inline void setStaticF_utf7Encoding(::System::Text::Encoding* value);

  static inline void setStaticF_utf8Encoding(::System::Text::Encoding* value);

  /// @brief Method set_DecoderFallback, addr 0x3c93760, size 0xbc, virtual false, abstract: false, final false
  inline void set_DecoderFallback(::System::Text::DecoderFallback* value);

  /// @brief Method set_EncoderFallback, addr 0x3c936a4, size 0xbc, virtual false, abstract: false, final false
  inline void set_EncoderFallback(::System::Text::EncoderFallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Encoding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Encoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Encoding(Encoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Encoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Encoding(Encoding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2877 };

  /// @brief Field m_codePage, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_codePage;

  /// @brief Field dataItem, offset: 0x18, size: 0x8, def value: None
  ::System::Globalization::CodePageDataItem* ___dataItem;

  /// @brief Field m_deserializedFromEverett, offset: 0x20, size: 0x1, def value: None
  bool ___m_deserializedFromEverett;

  /// @brief Field m_isReadOnly, offset: 0x21, size: 0x1, def value: None
  bool ___m_isReadOnly;

  /// @brief Field encoderFallback, offset: 0x28, size: 0x8, def value: None
  ::System::Text::EncoderFallback* ___encoderFallback;

  /// @brief Field decoderFallback, offset: 0x30, size: 0x8, def value: None
  ::System::Text::DecoderFallback* ___decoderFallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::Encoding, ___m_codePage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding, ___dataItem) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding, ___m_deserializedFromEverett) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding, ___m_isReadOnly) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding, ___encoderFallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding, ___decoderFallback) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::Encoding, 0x38>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Encoding*, "System.Text", "Encoding");
NEED_NO_BOX(::System::Text::Encoding_DefaultDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Encoding_DefaultDecoder*, "System.Text", "Encoding/DefaultDecoder");
NEED_NO_BOX(::System::Text::Encoding_DefaultEncoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Encoding_DefaultEncoder*, "System.Text", "Encoding/DefaultEncoder");
NEED_NO_BOX(::System::Text::Encoding_EncodingByteBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Encoding_EncodingByteBuffer*, "System.Text", "Encoding/EncodingByteBuffer");
NEED_NO_BOX(::System::Text::Encoding_EncodingCharBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Encoding_EncodingCharBuffer*, "System.Text", "Encoding/EncodingCharBuffer");
