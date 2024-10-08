#pragma once
// IWYU pragma private; include "System/Text/UnicodeEncoding.hpp"
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
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 54, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// CS Name: ::UnicodeEncoding::Decoder*
class CORDL_TYPE __UnicodeEncoding__Decoder : public ::System::Text::DecoderNLS {
public:
  // Declarations
  __declspec(property(get = get_HasState)) bool HasState;

  /// @brief Field lastByte, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_lastByte, put = __cordl_internal_set_lastByte)) int32_t lastByte;

  /// @brief Field lastChar, offset 0x34, size 0x2
  __declspec(property(get = __cordl_internal_get_lastChar, put = __cordl_internal_set_lastChar)) char16_t lastChar;

  static inline ::System::Text::__UnicodeEncoding__Decoder* New_ctor(::System::Text::UnicodeEncoding* encoding);

  /// @brief Method Reset, addr 0x3c1643c, size 0x28, virtual true, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_lastByte() const;

  constexpr int32_t& __cordl_internal_get_lastByte();

  constexpr char16_t const& __cordl_internal_get_lastChar() const;

  constexpr char16_t& __cordl_internal_get_lastChar();

  constexpr void __cordl_internal_set_lastByte(int32_t value);

  constexpr void __cordl_internal_set_lastChar(char16_t value);

  /// @brief Method .ctor, addr 0x3c15c8c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::UnicodeEncoding* encoding);

  /// @brief Method get_HasState, addr 0x3c16464, size 0x24, virtual true, abstract: false, final false
  inline bool get_HasState();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnicodeEncoding__Decoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UnicodeEncoding__Decoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UnicodeEncoding__Decoder(__UnicodeEncoding__Decoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UnicodeEncoding__Decoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UnicodeEncoding__Decoder(__UnicodeEncoding__Decoder const&) = delete;

  /// @brief Field lastByte, offset: 0x30, size: 0x4, def value: None
  int32_t ___lastByte;

  /// @brief Field lastChar, offset: 0x34, size: 0x2, def value: None
  char16_t ___lastChar;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2869 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::__UnicodeEncoding__Decoder, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Text::__UnicodeEncoding__Decoder, ___lastByte) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::__UnicodeEncoding__Decoder, ___lastChar) == 0x34, "Offset mismatch!");

} // namespace System::Text
// Type: System.Text::UnicodeEncoding
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 59, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// CS Name: ::System.Text::UnicodeEncoding*
class CORDL_TYPE UnicodeEncoding : public ::System::Text::Encoding {
public:
  // Declarations
  using Decoder = ::System::Text::__UnicodeEncoding__Decoder;

  __declspec(property(get = get_Preamble)) ::System::ReadOnlySpan_1<uint8_t> Preamble;

  /// @brief Field bigEndian, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_bigEndian, put = __cordl_internal_set_bigEndian)) bool bigEndian;

  /// @brief Field byteOrderMark, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_byteOrderMark, put = __cordl_internal_set_byteOrderMark)) bool byteOrderMark;

  /// @brief Field highLowPatternMask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_highLowPatternMask, put = setStaticF_highLowPatternMask)) uint64_t highLowPatternMask;

  /// @brief Field isThrowException, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isThrowException, put = __cordl_internal_set_isThrowException)) bool isThrowException;

  /// @brief Field s_bigEndianDefault, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_bigEndianDefault, put = setStaticF_s_bigEndianDefault)) ::System::Text::UnicodeEncoding* s_bigEndianDefault;

  /// @brief Field s_bigEndianPreamble, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_bigEndianPreamble, put = setStaticF_s_bigEndianPreamble)) ::ArrayW<uint8_t, ::Array<uint8_t>*> s_bigEndianPreamble;

  /// @brief Field s_littleEndianDefault, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_littleEndianDefault, put = setStaticF_s_littleEndianDefault)) ::System::Text::UnicodeEncoding* s_littleEndianDefault;

  /// @brief Field s_littleEndianPreamble, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_littleEndianPreamble, put = setStaticF_s_littleEndianPreamble)) ::ArrayW<uint8_t, ::Array<uint8_t>*> s_littleEndianPreamble;

  /// @brief Method Equals, addr 0x3c1612c, size 0x114, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetByteCount, addr 0x3c13030, size 0x178, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetByteCount, addr 0x3c13234, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count);

  /// @brief Method GetByteCount, addr 0x3c14008, size 0x520, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetByteCount, addr 0x3c131a8, size 0x8c, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::StringW s);

  /// @brief Method GetBytes, addr 0x3c1354c, size 0x264, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes, addr 0x3c137b0, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount);

  /// @brief Method GetBytes, addr 0x3c14528, size 0x6a8, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetBytes, addr 0x3c13304, size 0x248, virtual true, abstract: false, final false
  inline int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetCharCount, addr 0x3c138a8, size 0x178, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount, addr 0x3c13a20, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count);

  /// @brief Method GetCharCount, addr 0x3c14c48, size 0x644, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, ::System::Text::DecoderNLS* baseDecoder);

  /// @brief Method GetChars, addr 0x3c13af0, size 0x264, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars, addr 0x3c13d54, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount);

  /// @brief Method GetChars, addr 0x3c1528c, size 0x8c8, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::System::Text::DecoderNLS* baseDecoder);

  /// @brief Method GetDecoder, addr 0x3c15c28, size 0x64, virtual true, abstract: false, final false
  inline ::System::Text::Decoder* GetDecoder();

  /// @brief Method GetEncoder, addr 0x3c15bcc, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Text::Encoder* GetEncoder();

  /// @brief Method GetHashCode, addr 0x3c16240, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetMaxByteCount, addr 0x3c15f28, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetMaxByteCount(int32_t charCount);

  /// @brief Method GetMaxCharCount, addr 0x3c16028, size 0x104, virtual true, abstract: false, final false
  inline int32_t GetMaxCharCount(int32_t byteCount);

  /// @brief Method GetPreamble, addr 0x3c15c9c, size 0x10c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreamble();

  /// @brief Method GetString, addr 0x3c13e4c, size 0x1bc, virtual true, abstract: false, final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  static inline ::System::Text::UnicodeEncoding* New_ctor();

  static inline ::System::Text::UnicodeEncoding* New_ctor(bool bigEndian, bool byteOrderMark);

  static inline ::System::Text::UnicodeEncoding* New_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes);

  /// @brief Method SetDefaultFallbacks, addr 0x3c12f6c, size 0xc4, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x3c12de8, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c12e34, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool bigEndian, bool byteOrderMark);

  /// @brief Method .ctor, addr 0x3c12e74, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidBytes);

  static inline uint64_t getStaticF_highLowPatternMask();

  static inline ::System::Text::UnicodeEncoding* getStaticF_s_bigEndianDefault();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_bigEndianPreamble();

  static inline ::System::Text::UnicodeEncoding* getStaticF_s_littleEndianDefault();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_littleEndianPreamble();

  /// @brief Method get_Preamble, addr 0x3c15da8, size 0x180, virtual true, abstract: false, final false
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

  /// @brief Field isThrowException, offset: 0x38, size: 0x1, def value: None
  bool ___isThrowException;

  /// @brief Field bigEndian, offset: 0x39, size: 0x1, def value: None
  bool ___bigEndian;

  /// @brief Field byteOrderMark, offset: 0x3a, size: 0x1, def value: None
  bool ___byteOrderMark;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2870 };

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
