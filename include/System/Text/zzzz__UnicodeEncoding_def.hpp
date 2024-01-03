#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class __UnicodeEncoding__Decoder;
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
class __UnicodeEncoding__Decoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::UnicodeEncoding);
MARK_REF_PTR_T(::System::Text::__UnicodeEncoding__Decoder);
// Type: ::Decoder
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 54, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2835))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2866))
// CS Name: ::UnicodeEncoding::Decoder*
class CORDL_TYPE __UnicodeEncoding__Decoder : public ::System::Text::DecoderNLS {
public:
  // Declarations
  /// @brief Field lastByte, offset 0x30, size 0x4
  __declspec(property(get = __get_lastByte, put = __set_lastByte)) int32_t lastByte;

  /// @brief Field lastChar, offset 0x34, size 0x2
  __declspec(property(get = __get_lastChar, put = __set_lastChar)) char16_t lastChar;

  __declspec(property(get = get_HasState)) bool HasState;

  constexpr int32_t& __get_lastByte();

  constexpr int32_t const& __get_lastByte() const;

  constexpr void __set_lastByte(int32_t value);

  constexpr char16_t& __get_lastChar();

  constexpr char16_t const& __get_lastChar() const;

  constexpr void __set_lastChar(char16_t value);

  static inline ::System::Text::__UnicodeEncoding__Decoder* New_ctor(::System::Text::UnicodeEncoding* encoding);

  /// @brief Method .ctor, addr 0x2448d0c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::UnicodeEncoding* encoding);

  /// @brief Method Reset, addr 0x2448d1c, size 0x28, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method get_HasState, addr 0x2448d44, size 0x24, virtual true, abstract: false, final false
  inline bool get_HasState();

  // Ctor Parameters [CppParam { name: "", ty: "__UnicodeEncoding__Decoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnicodeEncoding__Decoder(__UnicodeEncoding__Decoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnicodeEncoding__Decoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnicodeEncoding__Decoder(__UnicodeEncoding__Decoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnicodeEncoding__Decoder();

public:
  /// @brief Field lastByte, offset: 0x30, size: 0x4, def value: None
  int32_t ___lastByte;

  /// @brief Field lastChar, offset: 0x34, size: 0x2, def value: None
  char16_t ___lastChar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::__UnicodeEncoding__Decoder, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Text::__UnicodeEncoding__Decoder, ___lastByte) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::__UnicodeEncoding__Decoder, ___lastChar) == 0x34, "Offset mismatch!");

} // namespace System::Text
// Type: System.Text::UnicodeEncoding
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 59, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2874))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2867))
// CS Name: ::System.Text::UnicodeEncoding*
class CORDL_TYPE UnicodeEncoding : public ::System::Text::Encoding {
public:
  // Declarations
  using Decoder = ::System::Text::__UnicodeEncoding__Decoder;

  /// @brief Field isThrowException, offset 0x38, size 0x1
  __declspec(property(get = __get_isThrowException, put = __set_isThrowException)) bool isThrowException;

  /// @brief Field bigEndian, offset 0x39, size 0x1
  __declspec(property(get = __get_bigEndian, put = __set_bigEndian)) bool bigEndian;

  /// @brief Field byteOrderMark, offset 0x3a, size 0x1
  __declspec(property(get = __get_byteOrderMark, put = __set_byteOrderMark)) bool byteOrderMark;

  /// @brief Field s_bigEndianDefault, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_bigEndianDefault, put = setStaticF_s_bigEndianDefault))::System::Text::UnicodeEncoding* s_bigEndianDefault;

  /// @brief Field s_littleEndianDefault, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_littleEndianDefault, put = setStaticF_s_littleEndianDefault))::System::Text::UnicodeEncoding* s_littleEndianDefault;

  /// @brief Field s_bigEndianPreamble, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_bigEndianPreamble, put = setStaticF_s_bigEndianPreamble))::ArrayW<uint8_t, ::Array<uint8_t>*> s_bigEndianPreamble;

  /// @brief Field s_littleEndianPreamble, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_littleEndianPreamble, put = setStaticF_s_littleEndianPreamble))::ArrayW<uint8_t, ::Array<uint8_t>*> s_littleEndianPreamble;

  /// @brief Field highLowPatternMask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_highLowPatternMask, put = setStaticF_highLowPatternMask)) uint64_t highLowPatternMask;

  __declspec(property(get = get_Preamble))::System::ReadOnlySpan_1<uint8_t> Preamble;

  constexpr bool& __get_isThrowException();

  constexpr bool const& __get_isThrowException() const;

  constexpr void __set_isThrowException(bool value);

  constexpr bool& __get_bigEndian();

  constexpr bool const& __get_bigEndian() const;

  constexpr void __set_bigEndian(bool value);

  constexpr bool& __get_byteOrderMark();

  constexpr bool const& __get_byteOrderMark() const;

  constexpr void __set_byteOrderMark(bool value);

  static inline void setStaticF_s_bigEndianDefault(::System::Text::UnicodeEncoding* value);

  static inline ::System::Text::UnicodeEncoding* getStaticF_s_bigEndianDefault();

  static inline void setStaticF_s_littleEndianDefault(::System::Text::UnicodeEncoding* value);

  static inline ::System::Text::UnicodeEncoding* getStaticF_s_littleEndianDefault();

  static inline void setStaticF_s_bigEndianPreamble(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_bigEndianPreamble();

  static inline void setStaticF_s_littleEndianPreamble(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_littleEndianPreamble();

  static inline void setStaticF_highLowPatternMask(uint64_t value);

  static inline uint64_t getStaticF_highLowPatternMask();

  static inline ::System::Text::UnicodeEncoding* New_ctor();

  /// @brief Method .ctor, addr 0x24455dc, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::UnicodeEncoding* New_ctor(bool bigEndian, bool byteOrderMark);

  /// @brief Method .ctor, addr 0x2445610, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool bigEndian, bool byteOrderMark);

  static inline ::System::Text::UnicodeEncoding* New_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes);

  /// @brief Method .ctor, addr 0x2445658, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes);

  /// @brief Method SetDefaultFallbacks, addr 0x24456d0, size 0xd4, virtual true, abstract: false, final false
  inline void SetDefaultFallbacks();

  /// @brief Method GetByteCount, addr 0x24457a4, size 0x184, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetByteCount, addr 0x2445928, size 0x90, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::StringW s);

  /// @brief Method GetByteCount, addr 0x24459b8, size 0xd8, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count);

  /// @brief Method GetBytes, addr 0x2445a90, size 0x260, virtual true, abstract: false, final false
  inline int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes, addr 0x2445cf0, size 0x27c, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes, addr 0x2445f6c, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount);

  /// @brief Method GetCharCount, addr 0x244606c, size 0x184, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount, addr 0x24461f0, size 0xd8, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count);

  /// @brief Method GetChars, addr 0x24462c8, size 0x27c, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars, addr 0x2446544, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount);

  /// @brief Method GetString, addr 0x2446644, size 0x1c8, virtual true, abstract: false, final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetByteCount, addr 0x244680c, size 0x56c, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetBytes, addr 0x2446d78, size 0x734, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetCharCount, addr 0x24474ac, size 0x6c0, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, ::System::Text::DecoderNLS* baseDecoder);

  /// @brief Method GetChars, addr 0x2447b6c, size 0x920, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::System::Text::DecoderNLS* baseDecoder);

  /// @brief Method GetEncoder, addr 0x244848c, size 0x60, virtual true, abstract: false, final false
  inline ::System::Text::Encoder* GetEncoder();

  /// @brief Method GetDecoder, addr 0x24484ec, size 0x64, virtual true, abstract: false, final false
  inline ::System::Text::Decoder* GetDecoder();

  /// @brief Method GetPreamble, addr 0x2448550, size 0xfc, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreamble();

  /// @brief Method get_Preamble, addr 0x244864c, size 0x170, virtual true, abstract: false, final false
  inline ::System::ReadOnlySpan_1<uint8_t> get_Preamble();

  /// @brief Method GetMaxByteCount, addr 0x24487bc, size 0x108, virtual true, abstract: false, final false
  inline int32_t GetMaxByteCount(int32_t charCount);

  /// @brief Method GetMaxCharCount, addr 0x24488c4, size 0x10c, virtual true, abstract: false, final false
  inline int32_t GetMaxCharCount(int32_t byteCount);

  /// @brief Method Equals, addr 0x24489d0, size 0x114, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x2448ae4, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "UnicodeEncoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnicodeEncoding(UnicodeEncoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnicodeEncoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnicodeEncoding(UnicodeEncoding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnicodeEncoding();

public:
  /// @brief Field isThrowException, offset: 0x38, size: 0x1, def value: None
  bool ___isThrowException;

  /// @brief Field bigEndian, offset: 0x39, size: 0x1, def value: None
  bool ___bigEndian;

  /// @brief Field byteOrderMark, offset: 0x3a, size: 0x1, def value: None
  bool ___byteOrderMark;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::UnicodeEncoding, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Text::UnicodeEncoding, ___isThrowException) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::UnicodeEncoding, ___bigEndian) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Text::UnicodeEncoding, ___byteOrderMark) == 0x3a, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::UnicodeEncoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UnicodeEncoding*, "System.Text", "UnicodeEncoding");
NEED_NO_BOX(::System::Text::__UnicodeEncoding__Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::__UnicodeEncoding__Decoder*, "System.Text", "UnicodeEncoding/Decoder");
