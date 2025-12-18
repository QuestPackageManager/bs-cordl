#pragma once
// IWYU pragma private; include "System/Text/UnicodeEncoding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnicodeEncoding)
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
class UnicodeEncoding_Decoder;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Text {
class UnicodeEncoding;
}
namespace System::Text {
class UnicodeEncoding_Decoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::UnicodeEncoding);
MARK_REF_PTR_T(::System::Text::UnicodeEncoding_Decoder);
// Dependencies System.Text.DecoderNLS
namespace System::Text {
// Is value type: false
// CS Name: System.Text.UnicodeEncoding/Decoder
class CORDL_TYPE UnicodeEncoding_Decoder : public ::System::Text::DecoderNLS {
public:
  // Declarations
  __declspec(property(get = get_HasState)) bool HasState;

  /// @brief Field lastByte, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_lastByte, put = __cordl_internal_set_lastByte)) int32_t lastByte;

  /// @brief Field lastChar, offset 0x34, size 0x2
  __declspec(property(get = __cordl_internal_get_lastChar, put = __cordl_internal_set_lastChar)) char16_t lastChar;

  static inline ::System::Text::UnicodeEncoding_Decoder* New_ctor(::System::Text::UnicodeEncoding* encoding);

  /// @brief Method Reset, addr 0x5936eb8, size 0x28, virtual true, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_lastByte() const;

  constexpr int32_t& __cordl_internal_get_lastByte();

  constexpr char16_t const& __cordl_internal_get_lastChar() const;

  constexpr char16_t& __cordl_internal_get_lastChar();

  constexpr void __cordl_internal_set_lastByte(int32_t value);

  constexpr void __cordl_internal_set_lastChar(char16_t value);

  /// @brief Method .ctor, addr 0x59366d8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::UnicodeEncoding* encoding);

  /// @brief Method get_HasState, addr 0x5936ee0, size 0x24, virtual true, abstract: false, final false
  inline bool get_HasState();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnicodeEncoding_Decoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnicodeEncoding_Decoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnicodeEncoding_Decoder(UnicodeEncoding_Decoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnicodeEncoding_Decoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnicodeEncoding_Decoder(UnicodeEncoding_Decoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2885 };

  /// @brief Field lastByte, offset: 0x30, size: 0x4, def value: None
  int32_t ___lastByte;

  /// @brief Field lastChar, offset: 0x34, size: 0x2, def value: None
  char16_t ___lastChar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::UnicodeEncoding_Decoder, ___lastByte) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::UnicodeEncoding_Decoder, ___lastChar) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::UnicodeEncoding_Decoder, 0x38>, "Size mismatch!");

} // namespace System::Text
// Dependencies System.Text.Encoding
namespace System::Text {
// Is value type: false
// CS Name: System.Text.UnicodeEncoding
class CORDL_TYPE UnicodeEncoding : public ::System::Text::Encoding {
public:
  // Declarations
  using Decoder = ::System::Text::UnicodeEncoding_Decoder;

  __declspec(property(get = get_Preamble)) ::System::ReadOnlySpan_1<uint8_t> Preamble;

  /// @brief Field bigEndian, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_bigEndian, put = __cordl_internal_set_bigEndian)) bool bigEndian;

  /// @brief Field byteOrderMark, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_byteOrderMark, put = __cordl_internal_set_byteOrderMark)) bool byteOrderMark;

  /// @brief Field highLowPatternMask, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_highLowPatternMask, put = setStaticF_highLowPatternMask)) uint64_t highLowPatternMask;

  /// @brief Field isThrowException, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isThrowException, put = __cordl_internal_set_isThrowException)) bool isThrowException;

  /// @brief Field s_bigEndianDefault, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_bigEndianDefault, put = setStaticF_s_bigEndianDefault)) ::System::Text::UnicodeEncoding* s_bigEndianDefault;

  /// @brief Field s_bigEndianPreamble, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_bigEndianPreamble, put = setStaticF_s_bigEndianPreamble)) ::ArrayW<uint8_t, ::Array<uint8_t>*> s_bigEndianPreamble;

  /// @brief Field s_littleEndianDefault, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_littleEndianDefault, put = setStaticF_s_littleEndianDefault)) ::System::Text::UnicodeEncoding* s_littleEndianDefault;

  /// @brief Field s_littleEndianPreamble, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_littleEndianPreamble, put = setStaticF_s_littleEndianPreamble)) ::ArrayW<uint8_t, ::Array<uint8_t>*> s_littleEndianPreamble;

  /// @brief Method Equals, addr 0x5936bac, size 0x11c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetByteCount, addr 0x5933c04, size 0x188, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetByteCount, addr 0x5933df8, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetByteCount(char16_t* chars, int32_t count);

  /// @brief Method GetByteCount, addr 0x5934bec, size 0x514, virtual true, abstract: false, final false
  inline int32_t GetByteCount(char16_t* chars, int32_t count, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetByteCount, addr 0x5933d8c, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::StringW s);

  /// @brief Method GetBytes, addr 0x5934110, size 0x280, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes, addr 0x5934390, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetBytes(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount);

  /// @brief Method GetBytes, addr 0x5935100, size 0x694, virtual true, abstract: false, final false
  inline int32_t GetBytes(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetBytes, addr 0x5933ec8, size 0x248, virtual true, abstract: false, final false
  inline int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetCharCount, addr 0x5934488, size 0x188, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount, addr 0x5934610, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetCharCount(uint8_t* bytes, int32_t count);

  /// @brief Method GetCharCount, addr 0x59357f8, size 0x618, virtual true, abstract: false, final false
  inline int32_t GetCharCount(uint8_t* bytes, int32_t count, ::System::Text::DecoderNLS* baseDecoder);

  /// @brief Method GetChars, addr 0x59346e0, size 0x284, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars, addr 0x5934964, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount);

  /// @brief Method GetChars, addr 0x5935e10, size 0x77c, virtual true, abstract: false, final false
  inline int32_t GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount, ::System::Text::DecoderNLS* baseDecoder);

  /// @brief Method GetDecoder, addr 0x593665c, size 0x7c, virtual true, abstract: false, final false
  inline ::System::Text::Decoder* GetDecoder();

  /// @brief Method GetEncoder, addr 0x59365e8, size 0x74, virtual true, abstract: false, final false
  inline ::System::Text::Encoder* GetEncoder();

  /// @brief Method GetHashCode, addr 0x5936cc8, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetMaxByteCount, addr 0x59369b0, size 0xfc, virtual true, abstract: false, final false
  inline int32_t GetMaxByteCount(int32_t charCount);

  /// @brief Method GetMaxCharCount, addr 0x5936aac, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetMaxCharCount(int32_t byteCount);

  /// @brief Method GetPreamble, addr 0x5936708, size 0x124, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreamble();

  /// @brief Method GetString, addr 0x5934a5c, size 0x190, virtual true, abstract: false, final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  static inline ::System::Text::UnicodeEncoding* New_ctor();

  static inline ::System::Text::UnicodeEncoding* New_ctor(bool bigEndian, bool byteOrderMark);

  static inline ::System::Text::UnicodeEncoding* New_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes);

  /// @brief Method SetDefaultFallbacks, addr 0x5933b34, size 0xd0, virtual true, abstract: false, final false
  inline void SetDefaultFallbacks();

  constexpr bool const& __cordl_internal_get_bigEndian() const;

  constexpr bool& __cordl_internal_get_bigEndian();

  constexpr bool const& __cordl_internal_get_byteOrderMark() const;

  constexpr bool& __cordl_internal_get_byteOrderMark();

  constexpr bool const& __cordl_internal_get_isThrowException() const;

  constexpr bool& __cordl_internal_get_isThrowException();

  constexpr void __cordl_internal_set_bigEndian(bool value);

  constexpr void __cordl_internal_set_byteOrderMark(bool value);

  constexpr void __cordl_internal_set_isThrowException(bool value);

  /// @brief Method .ctor, addr 0x59339d4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5933a14, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(bool bigEndian, bool byteOrderMark);

  /// @brief Method .ctor, addr 0x5933a58, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes);

  static inline uint64_t getStaticF_highLowPatternMask();

  static inline ::System::Text::UnicodeEncoding* getStaticF_s_bigEndianDefault();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_bigEndianPreamble();

  static inline ::System::Text::UnicodeEncoding* getStaticF_s_littleEndianDefault();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_littleEndianPreamble();

  /// @brief Method get_Preamble, addr 0x593682c, size 0x184, virtual true, abstract: false, final false
  inline ::System::ReadOnlySpan_1<uint8_t> get_Preamble();

  static inline void setStaticF_highLowPatternMask(uint64_t value);

  static inline void setStaticF_s_bigEndianDefault(::System::Text::UnicodeEncoding* value);

  static inline void setStaticF_s_bigEndianPreamble(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_s_littleEndianDefault(::System::Text::UnicodeEncoding* value);

  static inline void setStaticF_s_littleEndianPreamble(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnicodeEncoding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnicodeEncoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnicodeEncoding(UnicodeEncoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnicodeEncoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnicodeEncoding(UnicodeEncoding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2886 };

  /// @brief Field isThrowException, offset: 0x38, size: 0x1, def value: None
  bool ___isThrowException;

  /// @brief Field bigEndian, offset: 0x39, size: 0x1, def value: None
  bool ___bigEndian;

  /// @brief Field byteOrderMark, offset: 0x3a, size: 0x1, def value: None
  bool ___byteOrderMark;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::UnicodeEncoding, ___isThrowException) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::UnicodeEncoding, ___bigEndian) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Text::UnicodeEncoding, ___byteOrderMark) == 0x3a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::UnicodeEncoding, 0x40>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::UnicodeEncoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UnicodeEncoding*, "System.Text", "UnicodeEncoding");
NEED_NO_BOX(::System::Text::UnicodeEncoding_Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UnicodeEncoding_Decoder*, "System.Text", "UnicodeEncoding/Decoder");
