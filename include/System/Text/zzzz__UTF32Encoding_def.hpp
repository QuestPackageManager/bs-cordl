#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UTF32Encoding)
namespace System::Text {
class DecoderNLS;
}
namespace System::Text {
class EncoderNLS;
}
namespace System::Text {
class __UTF32Encoding__UTF32Decoder;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class UTF32Encoding;
}
namespace System::Text {
class __UTF32Encoding__UTF32Decoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::UTF32Encoding);
MARK_REF_PTR_T(::System::Text::__UTF32Encoding__UTF32Decoder);
// Type: ::UTF32Decoder
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2835))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2855))
// CS Name: ::UTF32Encoding::UTF32Decoder*
class CORDL_TYPE __UTF32Encoding__UTF32Decoder : public ::System::Text::DecoderNLS {
public:
  // Declarations
  /// @brief Field iChar, offset 0x30, size 0x4
  __declspec(property(get = __get_iChar, put = __set_iChar)) int32_t iChar;

  /// @brief Field readByteCount, offset 0x34, size 0x4
  __declspec(property(get = __get_readByteCount, put = __set_readByteCount)) int32_t readByteCount;

  __declspec(property(get = get_HasState)) bool HasState;

  constexpr int32_t& __get_iChar();

  constexpr int32_t const& __get_iChar() const;

  constexpr void __set_iChar(int32_t value);

  constexpr int32_t& __get_readByteCount();

  constexpr int32_t const& __get_readByteCount() const;

  constexpr void __set_readByteCount(int32_t value);

  static inline ::System::Text::__UTF32Encoding__UTF32Decoder* New_ctor(::System::Text::UTF32Encoding* encoding);

  /// @brief Method .ctor, addr 0x243f668, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::UTF32Encoding* encoding);

  /// @brief Method Reset, addr 0x243fd9c, size 0x20, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method get_HasState, addr 0x243fdbc, size 0x10, virtual true, abstract: false, final false
  inline bool get_HasState();

  // Ctor Parameters [CppParam { name: "", ty: "__UTF32Encoding__UTF32Decoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UTF32Encoding__UTF32Decoder(__UTF32Encoding__UTF32Decoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UTF32Encoding__UTF32Decoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UTF32Encoding__UTF32Decoder(__UTF32Encoding__UTF32Decoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UTF32Encoding__UTF32Decoder();

public:
  /// @brief Field iChar, offset: 0x30, size: 0x4, def value: None
  int32_t ___iChar;

  /// @brief Field readByteCount, offset: 0x34, size: 0x4, def value: None
  int32_t ___readByteCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::__UTF32Encoding__UTF32Decoder, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Text::__UTF32Encoding__UTF32Decoder, ___iChar) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::__UTF32Encoding__UTF32Decoder, ___readByteCount) == 0x34, "Offset mismatch!");

} // namespace System::Text
// Type: System.Text::UTF32Encoding
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 59, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2874))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2856))
// CS Name: ::System.Text::UTF32Encoding*
class CORDL_TYPE UTF32Encoding : public ::System::Text::Encoding {
public:
  // Declarations
  using UTF32Decoder = ::System::Text::__UTF32Encoding__UTF32Decoder;

  /// @brief Field _emitUTF32ByteOrderMark, offset 0x38, size 0x1
  __declspec(property(get = __get__emitUTF32ByteOrderMark, put = __set__emitUTF32ByteOrderMark)) bool _emitUTF32ByteOrderMark;

  /// @brief Field _isThrowException, offset 0x39, size 0x1
  __declspec(property(get = __get__isThrowException, put = __set__isThrowException)) bool _isThrowException;

  /// @brief Field _bigEndian, offset 0x3a, size 0x1
  __declspec(property(get = __get__bigEndian, put = __set__bigEndian)) bool _bigEndian;

  /// @brief Field s_default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_default, put = setStaticF_s_default))::System::Text::UTF32Encoding* s_default;

  /// @brief Field s_bigEndianDefault, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_bigEndianDefault, put = setStaticF_s_bigEndianDefault))::System::Text::UTF32Encoding* s_bigEndianDefault;

  /// @brief Field s_bigEndianPreamble, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_bigEndianPreamble, put = setStaticF_s_bigEndianPreamble))::ArrayW<uint8_t, ::Array<uint8_t>*> s_bigEndianPreamble;

  /// @brief Field s_littleEndianPreamble, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_littleEndianPreamble, put = setStaticF_s_littleEndianPreamble))::ArrayW<uint8_t, ::Array<uint8_t>*> s_littleEndianPreamble;

  __declspec(property(get = get_Preamble))::System::ReadOnlySpan_1<uint8_t> Preamble;

  constexpr bool& __get__emitUTF32ByteOrderMark();

  constexpr bool const& __get__emitUTF32ByteOrderMark() const;

  constexpr void __set__emitUTF32ByteOrderMark(bool value);

  constexpr bool& __get__isThrowException();

  constexpr bool const& __get__isThrowException() const;

  constexpr void __set__isThrowException(bool value);

  constexpr bool& __get__bigEndian();

  constexpr bool const& __get__bigEndian() const;

  constexpr void __set__bigEndian(bool value);

  static inline void setStaticF_s_default(::System::Text::UTF32Encoding* value);

  static inline ::System::Text::UTF32Encoding* getStaticF_s_default();

  static inline void setStaticF_s_bigEndianDefault(::System::Text::UTF32Encoding* value);

  static inline ::System::Text::UTF32Encoding* getStaticF_s_bigEndianDefault();

  static inline void setStaticF_s_bigEndianPreamble(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_bigEndianPreamble();

  static inline void setStaticF_s_littleEndianPreamble(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_littleEndianPreamble();

  static inline ::System::Text::UTF32Encoding* New_ctor();

  /// @brief Method .ctor, addr 0x243d5d0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::UTF32Encoding* New_ctor(bool bigEndian, bool byteOrderMark);

  /// @brief Method .ctor, addr 0x243d668, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool bigEndian, bool byteOrderMark);

  static inline ::System::Text::UTF32Encoding* New_ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters);

  /// @brief Method .ctor, addr 0x243d5f8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(bool bigEndian, bool byteOrderMark, bool throwOnInvalidCharacters);

  /// @brief Method SetDefaultFallbacks, addr 0x243d6a8, size 0xd4, virtual true, abstract: false, final false
  inline void SetDefaultFallbacks();

  /// @brief Method GetByteCount, addr 0x243d77c, size 0x184, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetByteCount, addr 0x243d900, size 0x90, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::StringW s);

  /// @brief Method GetByteCount, addr 0x243d990, size 0xd8, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count);

  /// @brief Method GetBytes, addr 0x243da68, size 0x260, virtual true, abstract: false, final false
  inline int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes, addr 0x243dcc8, size 0x27c, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes, addr 0x243df44, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount);

  /// @brief Method GetCharCount, addr 0x243e044, size 0x184, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount, addr 0x243e1c8, size 0xd8, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count);

  /// @brief Method GetChars, addr 0x243e2a0, size 0x27c, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars, addr 0x243e51c, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount);

  /// @brief Method GetString, addr 0x243e61c, size 0x1c8, virtual true, abstract: false, final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetByteCount, addr 0x243e7e4, size 0x2d8, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetBytes, addr 0x243eabc, size 0x3c8, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetCharCount, addr 0x243eea0, size 0x348, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, ::System::Text::DecoderNLS* baseDecoder);

  /// @brief Method GetChars, addr 0x243f1e8, size 0x3fc, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::System::Text::DecoderNLS* baseDecoder);

  /// @brief Method GetSurrogate, addr 0x243ee84, size 0x1c, virtual false, abstract: false, final false
  inline uint32_t GetSurrogate(char16_t cHigh, char16_t cLow);

  /// @brief Method GetHighSurrogate, addr 0x243f5e4, size 0x14, virtual false, abstract: false, final false
  inline char16_t GetHighSurrogate(uint32_t iChar);

  /// @brief Method GetLowSurrogate, addr 0x243f5f8, size 0xc, virtual false, abstract: false, final false
  inline char16_t GetLowSurrogate(uint32_t iChar);

  /// @brief Method GetDecoder, addr 0x243f604, size 0x64, virtual true, abstract: false, final false
  inline ::System::Text::Decoder* GetDecoder();

  /// @brief Method GetEncoder, addr 0x243f670, size 0x60, virtual true, abstract: false, final false
  inline ::System::Text::Encoder* GetEncoder();

  /// @brief Method GetMaxByteCount, addr 0x243f6d0, size 0x108, virtual true, abstract: false, final false
  inline int32_t GetMaxByteCount(int32_t charCount);

  /// @brief Method GetMaxCharCount, addr 0x243f7d8, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetMaxCharCount(int32_t byteCount);

  /// @brief Method GetPreamble, addr 0x243f8a8, size 0x104, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreamble();

  /// @brief Method get_Preamble, addr 0x243f9ac, size 0x170, virtual true, abstract: false, final false
  inline ::System::ReadOnlySpan_1<uint8_t> get_Preamble();

  /// @brief Method Equals, addr 0x243fb1c, size 0xc4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x243fbe0, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "UTF32Encoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UTF32Encoding(UTF32Encoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UTF32Encoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UTF32Encoding(UTF32Encoding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UTF32Encoding();

public:
  /// @brief Field _emitUTF32ByteOrderMark, offset: 0x38, size: 0x1, def value: None
  bool ____emitUTF32ByteOrderMark;

  /// @brief Field _isThrowException, offset: 0x39, size: 0x1, def value: None
  bool ____isThrowException;

  /// @brief Field _bigEndian, offset: 0x3a, size: 0x1, def value: None
  bool ____bigEndian;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::UTF32Encoding, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Text::UTF32Encoding, ____emitUTF32ByteOrderMark) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF32Encoding, ____isThrowException) == 0x39, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF32Encoding, ____bigEndian) == 0x3a, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::UTF32Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UTF32Encoding*, "System.Text", "UTF32Encoding");
NEED_NO_BOX(::System::Text::__UTF32Encoding__UTF32Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::__UTF32Encoding__UTF32Decoder*, "System.Text", "UTF32Encoding/UTF32Decoder");
