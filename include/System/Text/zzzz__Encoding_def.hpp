#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Encoding)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System::Text {
class __Encoding__EncodingByteBuffer;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Text {
class __Encoding__DefaultEncoder;
}
namespace System {
class Object;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class __Encoding__EncodingCharBuffer;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Text {
class DecoderNLS;
}
namespace System::Text {
class DecoderFallback;
}
namespace System::Text {
class EncoderNLS;
}
namespace System::Text {
class Encoder;
}
namespace System::Globalization {
class CodePageDataItem;
}
namespace System::Text {
class __Encoding__DefaultDecoder;
}
namespace System::Text {
class EncoderFallback;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class ICloneable;
}
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Text {
class EncoderFallbackBuffer;
}
namespace System::Text {
class DecoderFallbackBuffer;
}
// Forward declare root types
namespace System::Text {
class Encoding;
}
namespace System::Text {
class __Encoding__DefaultDecoder;
}
namespace System::Text {
class __Encoding__DefaultEncoder;
}
namespace System::Text {
class __Encoding__EncodingByteBuffer;
}
namespace System::Text {
class __Encoding__EncodingCharBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::Encoding);
MARK_REF_PTR_T(::System::Text::__Encoding__DefaultDecoder);
MARK_REF_PTR_T(::System::Text::__Encoding__DefaultEncoder);
MARK_REF_PTR_T(::System::Text::__Encoding__EncodingByteBuffer);
MARK_REF_PTR_T(::System::Text::__Encoding__EncodingCharBuffer);
// Type: ::DefaultEncoder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2834))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2866))
// CS Name: ::Encoding::DefaultEncoder*
class CORDL_TYPE __Encoding__DefaultEncoder : public ::System::Text::Encoder {
public:
  // Declarations
  /// @brief Field m_encoding, offset 0x20, size 0x8
  __declspec(property(get = __get_m_encoding, put = __set_m_encoding))::System::Text::Encoding* m_encoding;

  /// @brief Field m_hasInitializedEncoding, offset 0x28, size 0x1
  __declspec(property(get = __get_m_hasInitializedEncoding, put = __set_m_hasInitializedEncoding)) bool m_hasInitializedEncoding;

  /// @brief Field charLeftOver, offset 0x2a, size 0x2
  __declspec(property(get = __get_charLeftOver, put = __set_charLeftOver)) char16_t charLeftOver;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
  constexpr operator ::System::Runtime::Serialization::IObjectReference*() noexcept;

  constexpr ::System::Text::Encoding*& __get_m_encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get_m_encoding() const;

  constexpr void __set_m_encoding(::System::Text::Encoding* value);

  constexpr bool& __get_m_hasInitializedEncoding();

  constexpr bool const& __get_m_hasInitializedEncoding() const;

  constexpr void __set_m_hasInitializedEncoding(bool value);

  constexpr char16_t& __get_charLeftOver();

  constexpr char16_t const& __get_charLeftOver() const;

  constexpr void __set_charLeftOver(char16_t value);

  static inline ::System::Text::__Encoding__DefaultEncoder* New_ctor(::System::Text::Encoding* encoding);

  /// @brief Method .ctor addr 0x22f3660 size 0x30 virtual false final false
  inline void _ctor(::System::Text::Encoding* encoding);

  static inline ::System::Text::__Encoding__DefaultEncoder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x22f3cd0 size 0x358 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetRealObject addr 0x22f4028 size 0xb8 virtual true final true
  inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x22f40e0 size 0xa4 virtual true final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetByteCount addr 0x22f4184 size 0x20 virtual true final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count, bool flush);

  /// @brief Method GetByteCount addr 0x22f41a4 size 0x24 virtual true final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, bool flush);

  /// @brief Method GetBytes addr 0x22f41c8 size 0x24 virtual true final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, bool flush);

  /// @brief Method GetBytes addr 0x22f41ec size 0x24 virtual true final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, bool flush);

  // Ctor Parameters [CppParam { name: "", ty: "__Encoding__DefaultEncoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Encoding__DefaultEncoder(__Encoding__DefaultEncoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Encoding__DefaultEncoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Encoding__DefaultEncoder(__Encoding__DefaultEncoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Encoding__DefaultEncoder();

public:
  /// @brief Field m_encoding, offset: 0x20, size: 0x8, def value: None
  ::System::Text::Encoding* ___m_encoding;

  /// @brief Field m_hasInitializedEncoding, offset: 0x28, size: 0x1, def value: None
  bool ___m_hasInitializedEncoding;

  /// @brief Field charLeftOver, offset: 0x2a, size: 0x2, def value: None
  char16_t ___charLeftOver;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::__Encoding__DefaultEncoder, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Text::__Encoding__DefaultEncoder, ___m_encoding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__DefaultEncoder, ___m_hasInitializedEncoding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__DefaultEncoder, ___charLeftOver) == 0x2a, "Offset mismatch!");

} // namespace System::Text
// Type: ::DefaultDecoder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2823))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2867))
// CS Name: ::Encoding::DefaultDecoder*
class CORDL_TYPE __Encoding__DefaultDecoder : public ::System::Text::Decoder {
public:
  // Declarations
  /// @brief Field m_encoding, offset 0x20, size 0x8
  __declspec(property(get = __get_m_encoding, put = __set_m_encoding))::System::Text::Encoding* m_encoding;

  /// @brief Field m_hasInitializedEncoding, offset 0x28, size 0x1
  __declspec(property(get = __get_m_hasInitializedEncoding, put = __set_m_hasInitializedEncoding)) bool m_hasInitializedEncoding;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
  constexpr operator ::System::Runtime::Serialization::IObjectReference*() noexcept;

  constexpr ::System::Text::Encoding*& __get_m_encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get_m_encoding() const;

  constexpr void __set_m_encoding(::System::Text::Encoding* value);

  constexpr bool& __get_m_hasInitializedEncoding();

  constexpr bool const& __get_m_hasInitializedEncoding() const;

  constexpr void __set_m_hasInitializedEncoding(bool value);

  static inline ::System::Text::__Encoding__DefaultDecoder* New_ctor(::System::Text::Encoding* encoding);

  /// @brief Method .ctor addr 0x22f33dc size 0x30 virtual false final false
  inline void _ctor(::System::Text::Encoding* encoding);

  static inline ::System::Text::__Encoding__DefaultDecoder* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x22f4210 size 0x2b8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetRealObject addr 0x22f44c8 size 0x4c virtual true final true
  inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x22f4514 size 0xa4 virtual true final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetCharCount addr 0x22f45b8 size 0x10 virtual true final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount addr 0x22f45c8 size 0x24 virtual true final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count, bool flush);

  /// @brief Method GetCharCount addr 0x22f45ec size 0x24 virtual true final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, bool flush);

  /// @brief Method GetChars addr 0x22f4610 size 0x10 virtual true final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars addr 0x22f4620 size 0x24 virtual true final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, bool flush);

  /// @brief Method GetChars addr 0x22f4644 size 0x24 virtual true final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, bool flush);

  // Ctor Parameters [CppParam { name: "", ty: "__Encoding__DefaultDecoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Encoding__DefaultDecoder(__Encoding__DefaultDecoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Encoding__DefaultDecoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Encoding__DefaultDecoder(__Encoding__DefaultDecoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Encoding__DefaultDecoder();

public:
  /// @brief Field m_encoding, offset: 0x20, size: 0x8, def value: None
  ::System::Text::Encoding* ___m_encoding;

  /// @brief Field m_hasInitializedEncoding, offset: 0x28, size: 0x1, def value: None
  bool ___m_hasInitializedEncoding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::__Encoding__DefaultDecoder, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Text::__Encoding__DefaultDecoder, ___m_encoding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__DefaultDecoder, ___m_hasInitializedEncoding) == 0x28, "Offset mismatch!");

} // namespace System::Text
// Type: ::EncodingCharBuffer
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2868))
// CS Name: ::Encoding::EncodingCharBuffer*
class CORDL_TYPE __Encoding__EncodingCharBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field chars, offset 0x10, size 0x8
  __declspec(property(get = __get_chars, put = __set_chars))::cordl_internals::Ptr<char16_t> chars;

  /// @brief Field charStart, offset 0x18, size 0x8
  __declspec(property(get = __get_charStart, put = __set_charStart))::cordl_internals::Ptr<char16_t> charStart;

  /// @brief Field charEnd, offset 0x20, size 0x8
  __declspec(property(get = __get_charEnd, put = __set_charEnd))::cordl_internals::Ptr<char16_t> charEnd;

  /// @brief Field charCountResult, offset 0x28, size 0x4
  __declspec(property(get = __get_charCountResult, put = __set_charCountResult)) int32_t charCountResult;

  /// @brief Field enc, offset 0x30, size 0x8
  __declspec(property(get = __get_enc, put = __set_enc))::System::Text::Encoding* enc;

  /// @brief Field decoder, offset 0x38, size 0x8
  __declspec(property(get = __get_decoder, put = __set_decoder))::System::Text::DecoderNLS* decoder;

  /// @brief Field byteStart, offset 0x40, size 0x8
  __declspec(property(get = __get_byteStart, put = __set_byteStart))::cordl_internals::Ptr<uint8_t> byteStart;

  /// @brief Field byteEnd, offset 0x48, size 0x8
  __declspec(property(get = __get_byteEnd, put = __set_byteEnd))::cordl_internals::Ptr<uint8_t> byteEnd;

  /// @brief Field bytes, offset 0x50, size 0x8
  __declspec(property(get = __get_bytes, put = __set_bytes))::cordl_internals::Ptr<uint8_t> bytes;

  /// @brief Field fallbackBuffer, offset 0x58, size 0x8
  __declspec(property(get = __get_fallbackBuffer, put = __set_fallbackBuffer))::System::Text::DecoderFallbackBuffer* fallbackBuffer;

  __declspec(property(get = get_MoreData)) bool MoreData;

  __declspec(property(get = get_BytesUsed)) int32_t BytesUsed;

  __declspec(property(get = get_Count)) int32_t Count;

  constexpr ::cordl_internals::Ptr<char16_t>& __get_chars();

  constexpr ::cordl_internals::Ptr<char16_t> const& __get_chars() const;

  constexpr void __set_chars(::cordl_internals::Ptr<char16_t> value);

  constexpr ::cordl_internals::Ptr<char16_t>& __get_charStart();

  constexpr ::cordl_internals::Ptr<char16_t> const& __get_charStart() const;

  constexpr void __set_charStart(::cordl_internals::Ptr<char16_t> value);

  constexpr ::cordl_internals::Ptr<char16_t>& __get_charEnd();

  constexpr ::cordl_internals::Ptr<char16_t> const& __get_charEnd() const;

  constexpr void __set_charEnd(::cordl_internals::Ptr<char16_t> value);

  constexpr int32_t& __get_charCountResult();

  constexpr int32_t const& __get_charCountResult() const;

  constexpr void __set_charCountResult(int32_t value);

  constexpr ::System::Text::Encoding*& __get_enc();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get_enc() const;

  constexpr void __set_enc(::System::Text::Encoding* value);

  constexpr ::System::Text::DecoderNLS*& __get_decoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::DecoderNLS*> const& __get_decoder() const;

  constexpr void __set_decoder(::System::Text::DecoderNLS* value);

  constexpr ::cordl_internals::Ptr<uint8_t>& __get_byteStart();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __get_byteStart() const;

  constexpr void __set_byteStart(::cordl_internals::Ptr<uint8_t> value);

  constexpr ::cordl_internals::Ptr<uint8_t>& __get_byteEnd();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __get_byteEnd() const;

  constexpr void __set_byteEnd(::cordl_internals::Ptr<uint8_t> value);

  constexpr ::cordl_internals::Ptr<uint8_t>& __get_bytes();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __get_bytes() const;

  constexpr void __set_bytes(::cordl_internals::Ptr<uint8_t> value);

  constexpr ::System::Text::DecoderFallbackBuffer*& __get_fallbackBuffer();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::DecoderFallbackBuffer*> const& __get_fallbackBuffer() const;

  constexpr void __set_fallbackBuffer(::System::Text::DecoderFallbackBuffer* value);

  static inline ::System::Text::__Encoding__EncodingCharBuffer* New_ctor(::System::Text::Encoding* enc, ::System::Text::DecoderNLS* decoder, ::cordl_internals::Ptr<char16_t> charStart,
                                                                         int32_t charCount, ::cordl_internals::Ptr<uint8_t> byteStart, int32_t byteCount);

  /// @brief Method .ctor addr 0x22f4668 size 0xa8 virtual false final false
  inline void _ctor(::System::Text::Encoding* enc, ::System::Text::DecoderNLS* decoder, ::cordl_internals::Ptr<char16_t> charStart, int32_t charCount, ::cordl_internals::Ptr<uint8_t> byteStart,
                    int32_t byteCount);

  /// @brief Method AddChar addr 0x22f4710 size 0x70 virtual false final false
  inline bool AddChar(char16_t ch, int32_t numBytes);

  /// @brief Method AddChar addr 0x22f4780 size 0x8 virtual false final false
  inline bool AddChar(char16_t ch);

  /// @brief Method AdjustBytes addr 0x22f4788 size 0x10 virtual false final false
  inline void AdjustBytes(int32_t count);

  /// @brief Method get_MoreData addr 0x22f4798 size 0x10 virtual false final false
  inline bool get_MoreData();

  /// @brief Method GetNextByte addr 0x22f47a8 size 0x24 virtual false final false
  inline uint8_t GetNextByte();

  /// @brief Method get_BytesUsed addr 0x22f47cc size 0x10 virtual false final false
  inline int32_t get_BytesUsed();

  /// @brief Method Fallback addr 0x22f47dc size 0x78 virtual false final false
  inline bool Fallback(uint8_t fallbackByte);

  /// @brief Method Fallback addr 0x22f4854 size 0xdc virtual false final false
  inline bool Fallback(::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuffer);

  /// @brief Method get_Count addr 0x22f4930 size 0x8 virtual false final false
  inline int32_t get_Count();

  // Ctor Parameters [CppParam { name: "", ty: "__Encoding__EncodingCharBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Encoding__EncodingCharBuffer(__Encoding__EncodingCharBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Encoding__EncodingCharBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Encoding__EncodingCharBuffer(__Encoding__EncodingCharBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Encoding__EncodingCharBuffer();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Text::__Encoding__EncodingCharBuffer, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingCharBuffer, ___chars) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingCharBuffer, ___charStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingCharBuffer, ___charEnd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingCharBuffer, ___charCountResult) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingCharBuffer, ___enc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingCharBuffer, ___decoder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingCharBuffer, ___byteStart) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingCharBuffer, ___byteEnd) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingCharBuffer, ___bytes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingCharBuffer, ___fallbackBuffer) == 0x58, "Offset mismatch!");

} // namespace System::Text
// Type: ::EncodingByteBuffer
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2869))
// CS Name: ::Encoding::EncodingByteBuffer*
class CORDL_TYPE __Encoding__EncodingByteBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field bytes, offset 0x10, size 0x8
  __declspec(property(get = __get_bytes, put = __set_bytes))::cordl_internals::Ptr<uint8_t> bytes;

  /// @brief Field byteStart, offset 0x18, size 0x8
  __declspec(property(get = __get_byteStart, put = __set_byteStart))::cordl_internals::Ptr<uint8_t> byteStart;

  /// @brief Field byteEnd, offset 0x20, size 0x8
  __declspec(property(get = __get_byteEnd, put = __set_byteEnd))::cordl_internals::Ptr<uint8_t> byteEnd;

  /// @brief Field chars, offset 0x28, size 0x8
  __declspec(property(get = __get_chars, put = __set_chars))::cordl_internals::Ptr<char16_t> chars;

  /// @brief Field charStart, offset 0x30, size 0x8
  __declspec(property(get = __get_charStart, put = __set_charStart))::cordl_internals::Ptr<char16_t> charStart;

  /// @brief Field charEnd, offset 0x38, size 0x8
  __declspec(property(get = __get_charEnd, put = __set_charEnd))::cordl_internals::Ptr<char16_t> charEnd;

  /// @brief Field byteCountResult, offset 0x40, size 0x4
  __declspec(property(get = __get_byteCountResult, put = __set_byteCountResult)) int32_t byteCountResult;

  /// @brief Field enc, offset 0x48, size 0x8
  __declspec(property(get = __get_enc, put = __set_enc))::System::Text::Encoding* enc;

  /// @brief Field encoder, offset 0x50, size 0x8
  __declspec(property(get = __get_encoder, put = __set_encoder))::System::Text::EncoderNLS* encoder;

  /// @brief Field fallbackBuffer, offset 0x58, size 0x8
  __declspec(property(get = __get_fallbackBuffer, put = __set_fallbackBuffer))::System::Text::EncoderFallbackBuffer* fallbackBuffer;

  __declspec(property(get = get_MoreData)) bool MoreData;

  __declspec(property(get = get_CharsUsed)) int32_t CharsUsed;

  __declspec(property(get = get_Count)) int32_t Count;

  constexpr ::cordl_internals::Ptr<uint8_t>& __get_bytes();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __get_bytes() const;

  constexpr void __set_bytes(::cordl_internals::Ptr<uint8_t> value);

  constexpr ::cordl_internals::Ptr<uint8_t>& __get_byteStart();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __get_byteStart() const;

  constexpr void __set_byteStart(::cordl_internals::Ptr<uint8_t> value);

  constexpr ::cordl_internals::Ptr<uint8_t>& __get_byteEnd();

  constexpr ::cordl_internals::Ptr<uint8_t> const& __get_byteEnd() const;

  constexpr void __set_byteEnd(::cordl_internals::Ptr<uint8_t> value);

  constexpr ::cordl_internals::Ptr<char16_t>& __get_chars();

  constexpr ::cordl_internals::Ptr<char16_t> const& __get_chars() const;

  constexpr void __set_chars(::cordl_internals::Ptr<char16_t> value);

  constexpr ::cordl_internals::Ptr<char16_t>& __get_charStart();

  constexpr ::cordl_internals::Ptr<char16_t> const& __get_charStart() const;

  constexpr void __set_charStart(::cordl_internals::Ptr<char16_t> value);

  constexpr ::cordl_internals::Ptr<char16_t>& __get_charEnd();

  constexpr ::cordl_internals::Ptr<char16_t> const& __get_charEnd() const;

  constexpr void __set_charEnd(::cordl_internals::Ptr<char16_t> value);

  constexpr int32_t& __get_byteCountResult();

  constexpr int32_t const& __get_byteCountResult() const;

  constexpr void __set_byteCountResult(int32_t value);

  constexpr ::System::Text::Encoding*& __get_enc();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get_enc() const;

  constexpr void __set_enc(::System::Text::Encoding* value);

  constexpr ::System::Text::EncoderNLS*& __get_encoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::EncoderNLS*> const& __get_encoder() const;

  constexpr void __set_encoder(::System::Text::EncoderNLS* value);

  constexpr ::System::Text::EncoderFallbackBuffer*& __get_fallbackBuffer();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::EncoderFallbackBuffer*> const& __get_fallbackBuffer() const;

  constexpr void __set_fallbackBuffer(::System::Text::EncoderFallbackBuffer* value);

  static inline ::System::Text::__Encoding__EncodingByteBuffer* New_ctor(::System::Text::Encoding* inEncoding, ::System::Text::EncoderNLS* inEncoder, ::cordl_internals::Ptr<uint8_t> inByteStart,
                                                                         int32_t inByteCount, ::cordl_internals::Ptr<char16_t> inCharStart, int32_t inCharCount);

  /// @brief Method .ctor addr 0x22f4938 size 0x204 virtual false final false
  inline void _ctor(::System::Text::Encoding* inEncoding, ::System::Text::EncoderNLS* inEncoder, ::cordl_internals::Ptr<uint8_t> inByteStart, int32_t inByteCount,
                    ::cordl_internals::Ptr<char16_t> inCharStart, int32_t inCharCount);

  /// @brief Method AddByte addr 0x22f4b3c size 0x50 virtual false final false
  inline bool AddByte(uint8_t b, int32_t moreBytesExpected);

  /// @brief Method AddByte addr 0x22f4c0c size 0x8 virtual false final false
  inline bool AddByte(uint8_t b1);

  /// @brief Method AddByte addr 0x22f4c14 size 0x8 virtual false final false
  inline bool AddByte(uint8_t b1, uint8_t b2);

  /// @brief Method AddByte addr 0x22f4c1c size 0x48 virtual false final false
  inline bool AddByte(uint8_t b1, uint8_t b2, int32_t moreBytesExpected);

  /// @brief Method MovePrevious addr 0x22f4b8c size 0x80 virtual false final false
  inline void MovePrevious(bool bThrow);

  /// @brief Method get_MoreData addr 0x22f4c64 size 0x48 virtual false final false
  inline bool get_MoreData();

  /// @brief Method GetNextChar addr 0x22f4cac size 0x50 virtual false final false
  inline char16_t GetNextChar();

  /// @brief Method get_CharsUsed addr 0x22f4cfc size 0x18 virtual false final false
  inline int32_t get_CharsUsed();

  /// @brief Method get_Count addr 0x22f4d14 size 0x8 virtual false final false
  inline int32_t get_Count();

  // Ctor Parameters [CppParam { name: "", ty: "__Encoding__EncodingByteBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Encoding__EncodingByteBuffer(__Encoding__EncodingByteBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Encoding__EncodingByteBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Encoding__EncodingByteBuffer(__Encoding__EncodingByteBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Encoding__EncodingByteBuffer();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Text::__Encoding__EncodingByteBuffer, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingByteBuffer, ___bytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingByteBuffer, ___byteStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingByteBuffer, ___byteEnd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingByteBuffer, ___chars) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingByteBuffer, ___charStart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingByteBuffer, ___charEnd) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingByteBuffer, ___byteCountResult) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingByteBuffer, ___enc) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingByteBuffer, ___encoder) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Text::__Encoding__EncodingByteBuffer, ___fallbackBuffer) == 0x58, "Offset mismatch!");

} // namespace System::Text
// Type: System.Text::Encoding
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2870))
// CS Name: ::System.Text::Encoding*
class CORDL_TYPE Encoding : public ::System::Object {
public:
  // Declarations
  using EncodingByteBuffer = ::System::Text::__Encoding__EncodingByteBuffer;

  using EncodingCharBuffer = ::System::Text::__Encoding__EncodingCharBuffer;

  using DefaultDecoder = ::System::Text::__Encoding__DefaultDecoder;

  using DefaultEncoder = ::System::Text::__Encoding__DefaultEncoder;

  /// @brief Field m_codePage, offset 0x10, size 0x4
  __declspec(property(get = __get_m_codePage, put = __set_m_codePage)) int32_t m_codePage;

  /// @brief Field dataItem, offset 0x18, size 0x8
  __declspec(property(get = __get_dataItem, put = __set_dataItem))::System::Globalization::CodePageDataItem* dataItem;

  /// @brief Field m_deserializedFromEverett, offset 0x20, size 0x1
  __declspec(property(get = __get_m_deserializedFromEverett, put = __set_m_deserializedFromEverett)) bool m_deserializedFromEverett;

  /// @brief Field m_isReadOnly, offset 0x21, size 0x1
  __declspec(property(get = __get_m_isReadOnly, put = __set_m_isReadOnly)) bool m_isReadOnly;

  /// @brief Field encoderFallback, offset 0x28, size 0x8
  __declspec(property(get = __get_encoderFallback, put = __set_encoderFallback))::System::Text::EncoderFallback* encoderFallback;

  /// @brief Field decoderFallback, offset 0x30, size 0x8
  __declspec(property(get = __get_decoderFallback, put = __set_decoderFallback))::System::Text::DecoderFallback* decoderFallback;

  /// @brief Field defaultEncoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultEncoding, put = setStaticF_defaultEncoding))::System::Text::Encoding* defaultEncoding;

  /// @brief Field unicodeEncoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_unicodeEncoding, put = setStaticF_unicodeEncoding))::System::Text::Encoding* unicodeEncoding;

  /// @brief Field bigEndianUnicode, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bigEndianUnicode, put = setStaticF_bigEndianUnicode))::System::Text::Encoding* bigEndianUnicode;

  /// @brief Field utf7Encoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_utf7Encoding, put = setStaticF_utf7Encoding))::System::Text::Encoding* utf7Encoding;

  /// @brief Field utf8Encoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_utf8Encoding, put = setStaticF_utf8Encoding))::System::Text::Encoding* utf8Encoding;

  /// @brief Field utf32Encoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_utf32Encoding, put = setStaticF_utf32Encoding))::System::Text::Encoding* utf32Encoding;

  /// @brief Field asciiEncoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_asciiEncoding, put = setStaticF_asciiEncoding))::System::Text::Encoding* asciiEncoding;

  /// @brief Field latin1Encoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_latin1Encoding, put = setStaticF_latin1Encoding))::System::Text::Encoding* latin1Encoding;

  /// @brief Field encodings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_encodings, put = setStaticF_encodings))::System::Collections::Generic::Dictionary_2<int32_t, ::System::Text::Encoding*>* encodings;

  /// @brief Field s_InternalSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InternalSyncObject, put = setStaticF_s_InternalSyncObject))::System::Object* s_InternalSyncObject;

  __declspec(property(get = get_Preamble))::System::ReadOnlySpan_1<uint8_t> Preamble;

  __declspec(property(get = get_EncodingName))::StringW EncodingName;

  __declspec(property(get = get_WebName))::StringW WebName;

  __declspec(property(get = get_EncoderFallback, put = set_EncoderFallback))::System::Text::EncoderFallback* EncoderFallback;

  __declspec(property(get = get_DecoderFallback, put = set_DecoderFallback))::System::Text::DecoderFallback* DecoderFallback;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_CodePage)) int32_t CodePage;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr int32_t& __get_m_codePage();

  constexpr int32_t const& __get_m_codePage() const;

  constexpr void __set_m_codePage(int32_t value);

  constexpr ::System::Globalization::CodePageDataItem*& __get_dataItem();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CodePageDataItem*> const& __get_dataItem() const;

  constexpr void __set_dataItem(::System::Globalization::CodePageDataItem* value);

  constexpr bool& __get_m_deserializedFromEverett();

  constexpr bool const& __get_m_deserializedFromEverett() const;

  constexpr void __set_m_deserializedFromEverett(bool value);

  constexpr bool& __get_m_isReadOnly();

  constexpr bool const& __get_m_isReadOnly() const;

  constexpr void __set_m_isReadOnly(bool value);

  constexpr ::System::Text::EncoderFallback*& __get_encoderFallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::EncoderFallback*> const& __get_encoderFallback() const;

  constexpr void __set_encoderFallback(::System::Text::EncoderFallback* value);

  constexpr ::System::Text::DecoderFallback*& __get_decoderFallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::DecoderFallback*> const& __get_decoderFallback() const;

  constexpr void __set_decoderFallback(::System::Text::DecoderFallback* value);

  static inline void setStaticF_defaultEncoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_defaultEncoding();

  static inline void setStaticF_unicodeEncoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_unicodeEncoding();

  static inline void setStaticF_bigEndianUnicode(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_bigEndianUnicode();

  static inline void setStaticF_utf7Encoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_utf7Encoding();

  static inline void setStaticF_utf8Encoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_utf8Encoding();

  static inline void setStaticF_utf32Encoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_utf32Encoding();

  static inline void setStaticF_asciiEncoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_asciiEncoding();

  static inline void setStaticF_latin1Encoding(::System::Text::Encoding* value);

  static inline ::System::Text::Encoding* getStaticF_latin1Encoding();

  static inline void setStaticF_encodings(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Text::Encoding*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Text::Encoding*>* getStaticF_encodings();

  static inline void setStaticF_s_InternalSyncObject(::System::Object* value);

  static inline ::System::Object* getStaticF_s_InternalSyncObject();

  static inline ::System::Text::Encoding* New_ctor();

  /// @brief Method .ctor addr 0x22f030c size 0x30 virtual false final false
  inline void _ctor();

  static inline ::System::Text::Encoding* New_ctor(int32_t codePage);

  /// @brief Method .ctor addr 0x22f033c size 0x8c virtual false final false
  inline void _ctor(int32_t codePage);

  /// @brief Method SetDefaultFallbacks addr 0x22f03c8 size 0x98 virtual true final false
  inline void SetDefaultFallbacks();

  /// @brief Method OnDeserializing addr 0x22f0460 size 0x10 virtual false final false
  inline void OnDeserializing();

  /// @brief Method OnDeserialized addr 0x22f0470 size 0x3c virtual false final false
  inline void OnDeserialized();

  /// @brief Method OnDeserializing addr 0x22f04ac size 0x10 virtual false final false
  inline void OnDeserializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnDeserialized addr 0x22f04bc size 0x3c virtual false final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method OnSerializing addr 0x22f04f8 size 0x8 virtual false final false
  inline void OnSerializing(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method DeserializeEncoding addr 0x22f0500 size 0x400 virtual false final false
  inline void DeserializeEncoding(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SerializeEncoding addr 0x22f0900 size 0x1ac virtual false final false
  inline void SerializeEncoding(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_InternalSyncObject addr 0x22f0aac size 0xa0 virtual false final false
  static inline ::System::Object* get_InternalSyncObject();

  /// @brief Method GetEncoding addr 0x22f0b4c size 0x8ec virtual false final false
  static inline ::System::Text::Encoding* GetEncoding(int32_t codepage);

  /// @brief Method GetEncoding addr 0x22f1fc8 size 0x104 virtual false final false
  static inline ::System::Text::Encoding* GetEncoding(int32_t codepage, ::System::Text::EncoderFallback* encoderFallback, ::System::Text::DecoderFallback* decoderFallback);

  /// @brief Method GetEncoding addr 0x22f225c size 0x9c virtual false final false
  static inline ::System::Text::Encoding* GetEncoding(::StringW name);

  /// @brief Method GetPreamble addr 0x22f22f8 size 0x58 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreamble();

  /// @brief Method get_Preamble addr 0x22f2350 size 0x54 virtual true final false
  inline ::System::ReadOnlySpan_1<uint8_t> get_Preamble();

  /// @brief Method GetDataItem addr 0x22f23a4 size 0x128 virtual false final false
  inline void GetDataItem();

  /// @brief Method get_EncodingName addr 0x22f24cc size 0xc virtual true final false
  inline ::StringW get_EncodingName();

  /// @brief Method get_WebName addr 0x22f24d8 size 0x30 virtual true final false
  inline ::StringW get_WebName();

  /// @brief Method get_EncoderFallback addr 0x22f2508 size 0x8 virtual false final false
  inline ::System::Text::EncoderFallback* get_EncoderFallback();

  /// @brief Method set_EncoderFallback addr 0x22f20cc size 0xc8 virtual false final false
  inline void set_EncoderFallback(::System::Text::EncoderFallback* value);

  /// @brief Method get_DecoderFallback addr 0x22f2510 size 0x8 virtual false final false
  inline ::System::Text::DecoderFallback* get_DecoderFallback();

  /// @brief Method set_DecoderFallback addr 0x22f2194 size 0xc8 virtual false final false
  inline void set_DecoderFallback(::System::Text::DecoderFallback* value);

  /// @brief Method Clone addr 0x22f2518 size 0x88 virtual true final false
  inline ::System::Object* Clone();

  /// @brief Method get_IsReadOnly addr 0x22f25a0 size 0x8 virtual false final false
  inline bool get_IsReadOnly();

  /// @brief Method get_ASCII addr 0x22f176c size 0xa8 virtual false final false
  static inline ::System::Text::Encoding* get_ASCII();

  /// @brief Method get_Latin1 addr 0x22f1814 size 0xa8 virtual false final false
  static inline ::System::Text::Encoding* get_Latin1();

  /// @brief Method GetByteCount addr 0x22f25a8 size 0x8c virtual true final false
  inline int32_t GetByteCount(::StringW s);

  /// @brief Method GetByteCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetByteCount addr 0x22f2634 size 0x174 virtual true final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count);

  /// @brief Method GetByteCount addr 0x22f27a8 size 0x10 virtual true final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetBytes addr 0x22f27b8 size 0x94 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars);

  /// @brief Method GetBytes addr 0x22f284c size 0xb8 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetBytes addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes addr 0x22f2904 size 0x104 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(::StringW s);

  /// @brief Method GetBytes addr 0x22f2a08 size 0xb0 virtual true final false
  inline int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes addr 0x22f2ab8 size 0x10 virtual true final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetBytes addr 0x22f2ac8 size 0x22c virtual true final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount);

  /// @brief Method GetCharCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount addr 0x22f2cf4 size 0x178 virtual true final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count);

  /// @brief Method GetCharCount addr 0x22f2e6c size 0x10 virtual true final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, ::System::Text::DecoderNLS* decoder);

  /// @brief Method GetChars addr 0x22f2e7c size 0xbc virtual true final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetChars addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars addr 0x22f2f38 size 0x22c virtual true final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount);

  /// @brief Method GetChars addr 0x22f3164 size 0x10 virtual true final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::System::Text::DecoderNLS* decoder);

  /// @brief Method GetString addr 0x22f3174 size 0xec virtual false final false
  inline ::StringW GetString(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount);

  /// @brief Method GetChars addr 0x22f3260 size 0xa4 virtual true final false
  inline int32_t GetChars(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Span_1<char16_t> chars);

  /// @brief Method GetString addr 0x22f3304 size 0x64 virtual false final false
  inline ::StringW GetString(::System::ReadOnlySpan_1<uint8_t> bytes);

  /// @brief Method get_CodePage addr 0x22f3368 size 0x8 virtual true final false
  inline int32_t get_CodePage();

  /// @brief Method GetDecoder addr 0x22f3370 size 0x6c virtual true final false
  inline ::System::Text::Decoder* GetDecoder();

  /// @brief Method CreateDefaultEncoding addr 0x22f340c size 0x60 virtual false final false
  static inline ::System::Text::Encoding* CreateDefaultEncoding();

  /// @brief Method setReadOnly addr 0x22f35e8 size 0xc virtual false final false
  inline void setReadOnly(bool value);

  /// @brief Method get_Default addr 0x22f1438 size 0x7c virtual false final false
  static inline ::System::Text::Encoding* get_Default();

  /// @brief Method GetEncoder addr 0x22f35f4 size 0x6c virtual true final false
  inline ::System::Text::Encoder* GetEncoder();

  /// @brief Method GetMaxByteCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetMaxByteCount(int32_t charCount);

  /// @brief Method GetMaxCharCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetMaxCharCount(int32_t byteCount);

  /// @brief Method GetString addr 0x22f3690 size 0x94 virtual true final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method GetString addr 0x22f3724 size 0x28 virtual true final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method get_Unicode addr 0x22f14b4 size 0xb0 virtual false final false
  static inline ::System::Text::Encoding* get_Unicode();

  /// @brief Method get_BigEndianUnicode addr 0x22f1564 size 0xb0 virtual false final false
  static inline ::System::Text::Encoding* get_BigEndianUnicode();

  /// @brief Method get_UTF7 addr 0x22f1614 size 0xa8 virtual false final false
  static inline ::System::Text::Encoding* get_UTF7();

  /// @brief Method get_UTF8 addr 0x22f016c size 0xac virtual false final false
  static inline ::System::Text::Encoding* get_UTF8();

  /// @brief Method get_UTF32 addr 0x22f16bc size 0xb0 virtual false final false
  static inline ::System::Text::Encoding* get_UTF32();

  /// @brief Method Equals addr 0x22f374c size 0xd0 virtual true final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode addr 0x22f381c size 0x58 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method GetBestFitUnicodeToBytesData addr 0x22f3874 size 0x58 virtual true final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetBestFitUnicodeToBytesData();

  /// @brief Method GetBestFitBytesToUnicodeData addr 0x22f38cc size 0x58 virtual true final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetBestFitBytesToUnicodeData();

  /// @brief Method ThrowBytesOverflow addr 0x22f3924 size 0x108 virtual false final false
  inline void ThrowBytesOverflow();

  /// @brief Method ThrowBytesOverflow addr 0x22f3a2c size 0x7c virtual false final false
  inline void ThrowBytesOverflow(::System::Text::EncoderNLS* encoder, bool nothingEncoded);

  /// @brief Method ThrowCharsOverflow addr 0x22f3aa8 size 0x108 virtual false final false
  inline void ThrowCharsOverflow();

  /// @brief Method ThrowCharsOverflow addr 0x22f3bb0 size 0x7c virtual false final false
  inline void ThrowCharsOverflow(::System::Text::DecoderNLS* decoder, bool nothingDecoded);

  /// @brief Method GetBytes addr 0x22f3c2c size 0xa4 virtual true final false
  inline int32_t GetBytes(::System::ReadOnlySpan_1<char16_t> chars, ::System::Span_1<uint8_t> bytes);

  // Ctor Parameters [CppParam { name: "", ty: "Encoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Encoding(Encoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Encoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Encoding(Encoding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Encoding();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Text::Encoding, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Text::Encoding, ___m_codePage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding, ___dataItem) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding, ___m_deserializedFromEverett) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding, ___m_isReadOnly) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding, ___encoderFallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoding, ___decoderFallback) == 0x30, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Encoding*, "System.Text", "Encoding");
NEED_NO_BOX(::System::Text::__Encoding__DefaultDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::__Encoding__DefaultDecoder*, "System.Text", "Encoding/DefaultDecoder");
NEED_NO_BOX(::System::Text::__Encoding__DefaultEncoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::__Encoding__DefaultEncoder*, "System.Text", "Encoding/DefaultEncoder");
NEED_NO_BOX(::System::Text::__Encoding__EncodingByteBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::__Encoding__EncodingByteBuffer*, "System.Text", "Encoding/EncodingByteBuffer");
NEED_NO_BOX(::System::Text::__Encoding__EncodingCharBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::__Encoding__EncodingCharBuffer*, "System.Text", "Encoding/EncodingCharBuffer");
