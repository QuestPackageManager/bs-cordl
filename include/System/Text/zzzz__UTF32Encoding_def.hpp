#pragma once
// IWYU pragma private; include "System/Text/UTF32Encoding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UTF32Encoding)
namespace System::Text {
class DecoderNLS;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class EncoderNLS;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class UTF32Encoding_UTF32Decoder;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Text {
class UTF32Encoding;
}
namespace System::Text {
class UTF32Encoding_UTF32Decoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::UTF32Encoding);
MARK_REF_PTR_T(::System::Text::UTF32Encoding_UTF32Decoder);
// Dependencies System.Text.DecoderNLS
namespace System::Text {
// Is value type: false
// CS Name: System.Text.UTF32Encoding/UTF32Decoder
class CORDL_TYPE UTF32Encoding_UTF32Decoder : public ::System::Text::DecoderNLS {
public:
  // Declarations
  __declspec(property(get = get_HasState)) bool HasState;

  /// @brief Field iChar, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_iChar, put = __cordl_internal_set_iChar)) int32_t iChar;

  /// @brief Field readByteCount, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_readByteCount, put = __cordl_internal_set_readByteCount)) int32_t readByteCount;

  static inline ::System::Text::UTF32Encoding_UTF32Decoder* New_ctor(::System::Text::UTF32Encoding* encoding);

  /// @brief Method Reset, addr 0x3c834f8, size 0x20, virtual true, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_iChar() const;

  constexpr int32_t& __cordl_internal_get_iChar();

  constexpr int32_t const& __cordl_internal_get_readByteCount() const;

  constexpr int32_t& __cordl_internal_get_readByteCount();

  constexpr void __cordl_internal_set_iChar(int32_t value);

  constexpr void __cordl_internal_set_readByteCount(int32_t value);

  /// @brief Method .ctor, addr 0x3c82dc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::UTF32Encoding* encoding);

  /// @brief Method get_HasState, addr 0x3c83518, size 0x10, virtual true, abstract: false, final false
  inline bool get_HasState();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UTF32Encoding_UTF32Decoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UTF32Encoding_UTF32Decoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UTF32Encoding_UTF32Decoder(UTF32Encoding_UTF32Decoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UTF32Encoding_UTF32Decoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UTF32Encoding_UTF32Decoder(UTF32Encoding_UTF32Decoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2858 };

  /// @brief Field iChar, offset: 0x30, size: 0x4, def value: None
  int32_t ___iChar;

  /// @brief Field readByteCount, offset: 0x34, size: 0x4, def value: None
  int32_t ___readByteCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::UTF32Encoding_UTF32Decoder, ___iChar) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF32Encoding_UTF32Decoder, ___readByteCount) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::UTF32Encoding_UTF32Decoder, 0x38>, "Size mismatch!");

} // namespace System::Text
// Dependencies System.Text.Encoding
namespace System::Text {
// Is value type: false
// CS Name: System.Text.UTF32Encoding
class CORDL_TYPE UTF32Encoding : public ::System::Text::Encoding {
public:
  // Declarations
  using UTF32Decoder = ::System::Text::UTF32Encoding_UTF32Decoder;

  __declspec(property(get = get_Preamble)) ::System::ReadOnlySpan_1<uint8_t> Preamble;

  /// @brief Field _bigEndian, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get__bigEndian, put = __cordl_internal_set__bigEndian)) bool _bigEndian;

  /// @brief Field _emitUTF32ByteOrderMark, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__emitUTF32ByteOrderMark, put = __cordl_internal_set__emitUTF32ByteOrderMark)) bool _emitUTF32ByteOrderMark;

  /// @brief Field _isThrowException, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__isThrowException, put = __cordl_internal_set__isThrowException)) bool _isThrowException;

  /// @brief Field s_bigEndianDefault, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_bigEndianDefault, put = setStaticF_s_bigEndianDefault)) ::System::Text::UTF32Encoding* s_bigEndianDefault;

  /// @brief Field s_bigEndianPreamble, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_bigEndianPreamble, put = setStaticF_s_bigEndianPreamble)) ::ArrayW<uint8_t, ::Array<uint8_t>*> s_bigEndianPreamble;

  /// @brief Field s_default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_default, put = setStaticF_s_default)) ::System::Text::UTF32Encoding* s_default;

  /// @brief Field s_littleEndianPreamble, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_littleEndianPreamble, put = setStaticF_s_littleEndianPreamble)) ::ArrayW<uint8_t, ::Array<uint8_t>*> s_littleEndianPreamble;

  /// @brief Method Equals, addr 0x3c83280, size 0xc4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetByteCount, addr 0x3c80f74, size 0x178, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetByteCount, addr 0x3c81178, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count);

  /// @brief Method GetByteCount, addr 0x3c81f4c, size 0x2d4, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetByteCount, addr 0x3c810ec, size 0x8c, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::StringW s);

  /// @brief Method GetBytes, addr 0x3c81490, size 0x264, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes, addr 0x3c816f4, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount);

  /// @brief Method GetBytes, addr 0x3c82220, size 0x3dc, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetBytes, addr 0x3c81248, size 0x248, virtual true, abstract: false, final false
  inline int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetCharCount, addr 0x3c817ec, size 0x178, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount, addr 0x3c81964, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count);

  /// @brief Method GetCharCount, addr 0x3c82618, size 0x338, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, ::System::Text::DecoderNLS* baseDecoder);

  /// @brief Method GetChars, addr 0x3c81a34, size 0x264, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars, addr 0x3c81c98, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount);

  /// @brief Method GetChars, addr 0x3c82950, size 0x3f4, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::System::Text::DecoderNLS* baseDecoder);

  /// @brief Method GetDecoder, addr 0x3c82d64, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Text::Decoder* GetDecoder();

  /// @brief Method GetEncoder, addr 0x3c82dc8, size 0x58, virtual true, abstract: false, final false
  inline ::System::Text::Encoder* GetEncoder();

  /// @brief Method GetHashCode, addr 0x3c83344, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetHighSurrogate, addr 0x3c82d44, size 0x14, virtual false, abstract: false, final false
  inline char16_t GetHighSurrogate(uint32_t iChar);

  /// @brief Method GetLowSurrogate, addr 0x3c82d58, size 0xc, virtual false, abstract: false, final false
  inline char16_t GetLowSurrogate(uint32_t iChar);

  /// @brief Method GetMaxByteCount, addr 0x3c82e20, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetMaxByteCount(int32_t charCount);

  /// @brief Method GetMaxCharCount, addr 0x3c82f20, size 0xcc, virtual true, abstract: false, final false
  inline int32_t GetMaxCharCount(int32_t byteCount);

  /// @brief Method GetPreamble, addr 0x3c82fec, size 0x114, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreamble();

  /// @brief Method GetString, addr 0x3c81d90, size 0x1bc, virtual true, abstract: false, final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetSurrogate, addr 0x3c825fc, size 0x1c, virtual false, abstract: false, final false
  inline uint32_t GetSurrogate(char16_t cHigh, char16_t cLow);

  static inline ::System::Text::UTF32Encoding* New_ctor();

  static inline ::System::Text::UTF32Encoding* New_ctor(bool bigEndian, bool byteOrderMark);

  static inline ::System::Text::UTF32Encoding* New_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters);

  /// @brief Method SetDefaultFallbacks, addr 0x3c80eb8, size 0xbc, virtual true, abstract: false, final false
  inline void SetDefaultFallbacks();

  constexpr bool const& __cordl_internal_get__bigEndian() const;

  constexpr bool& __cordl_internal_get__bigEndian();

  constexpr bool const& __cordl_internal_get__emitUTF32ByteOrderMark() const;

  constexpr bool& __cordl_internal_get__emitUTF32ByteOrderMark();

  constexpr bool const& __cordl_internal_get__isThrowException() const;

  constexpr bool& __cordl_internal_get__isThrowException();

  constexpr void __cordl_internal_set__bigEndian(bool value);

  constexpr void __cordl_internal_set__emitUTF32ByteOrderMark(bool value);

  constexpr void __cordl_internal_set__isThrowException(bool value);

  /// @brief Method .ctor, addr 0x3c80de8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c80e7c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(bool bigEndian, bool byteOrderMark);

  /// @brief Method .ctor, addr 0x3c80e10, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters);

  static inline ::System::Text::UTF32Encoding* getStaticF_s_bigEndianDefault();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_bigEndianPreamble();

  static inline ::System::Text::UTF32Encoding* getStaticF_s_default();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_littleEndianPreamble();

  /// @brief Method get_Preamble, addr 0x3c83100, size 0x180, virtual true, abstract: false, final false
  inline ::System::ReadOnlySpan_1<uint8_t> get_Preamble();

  static inline void setStaticF_s_bigEndianDefault(::System::Text::UTF32Encoding* value);

  static inline void setStaticF_s_bigEndianPreamble(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_s_default(::System::Text::UTF32Encoding* value);

  static inline void setStaticF_s_littleEndianPreamble(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UTF32Encoding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UTF32Encoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UTF32Encoding(UTF32Encoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UTF32Encoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UTF32Encoding(UTF32Encoding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2859 };

  /// @brief Field _emitUTF32ByteOrderMark, offset: 0x38, size: 0x1, def value: None
  bool ____emitUTF32ByteOrderMark;

  /// @brief Field _isThrowException, offset: 0x39, size: 0x1, def value: None
  bool ____isThrowException;

  /// @brief Field _bigEndian, offset: 0x3a, size: 0x1, def value: None
  bool ____bigEndian;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::UTF32Encoding, ____emitUTF32ByteOrderMark) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF32Encoding, ____isThrowException) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF32Encoding, ____bigEndian) == 0x3a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::UTF32Encoding, 0x40>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::UTF32Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UTF32Encoding*, "System.Text", "UTF32Encoding");
NEED_NO_BOX(::System::Text::UTF32Encoding_UTF32Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UTF32Encoding_UTF32Decoder*, "System.Text", "UTF32Encoding/UTF32Decoder");
