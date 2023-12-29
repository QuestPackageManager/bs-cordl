#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UTF8Encoding)
namespace System::Text {
class DecoderNLS;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
class Object;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class __UTF8Encoding__UTF8EncodingSealed;
}
namespace System::Text {
class DecoderFallbackBuffer;
}
namespace System::Text {
class EncoderNLS;
}
namespace System::Text {
class __UTF8Encoding__UTF8Decoder;
}
namespace System::Text {
class __UTF8Encoding__UTF8Encoder;
}
// Forward declare root types
namespace System::Text {
class UTF8Encoding;
}
namespace System::Text {
class __UTF8Encoding__UTF8Decoder;
}
namespace System::Text {
class __UTF8Encoding__UTF8Encoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::UTF8Encoding);
MARK_REF_PTR_T(::System::Text::__UTF8Encoding__UTF8Decoder);
MARK_REF_PTR_T(::System::Text::__UTF8Encoding__UTF8Encoder);
// Type: ::UTF8Encoder
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2842))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2859))
// CS Name: ::UTF8Encoding::UTF8Encoder*
class CORDL_TYPE __UTF8Encoding__UTF8Encoder : public ::System::Text::EncoderNLS {
public:
  // Declarations
  /// @brief Field surrogateChar, offset 0x38, size 0x4
  __declspec(property(get = __get_surrogateChar, put = __set_surrogateChar)) int32_t surrogateChar;

  __declspec(property(get = get_HasState)) bool HasState;

  constexpr int32_t& __get_surrogateChar();

  constexpr int32_t const& __get_surrogateChar() const;

  constexpr void __set_surrogateChar(int32_t value);

  static inline ::System::Text::__UTF8Encoding__UTF8Encoder* New_ctor(::System::Text::UTF8Encoding* encoding);

  /// @brief Method .ctor addr 0x22eb2cc size 0x4 virtual false final false
  inline void _ctor(::System::Text::UTF8Encoding* encoding);

  /// @brief Method Reset addr 0x22eba60 size 0x20 virtual true final false
  inline void Reset();

  /// @brief Method get_HasState addr 0x22eba80 size 0x10 virtual true final false
  inline bool get_HasState();

  // Ctor Parameters [CppParam { name: "", ty: "__UTF8Encoding__UTF8Encoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UTF8Encoding__UTF8Encoder(__UTF8Encoding__UTF8Encoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UTF8Encoding__UTF8Encoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UTF8Encoding__UTF8Encoder(__UTF8Encoding__UTF8Encoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UTF8Encoding__UTF8Encoder();

public:
  /// @brief Field surrogateChar, offset: 0x38, size: 0x4, def value: None
  int32_t ___surrogateChar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::__UTF8Encoding__UTF8Encoder, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Text::__UTF8Encoding__UTF8Encoder, ___surrogateChar) == 0x38, "Offset mismatch!");

} // namespace System::Text
// Type: ::UTF8Decoder
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2831))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2860))
// CS Name: ::UTF8Encoding::UTF8Decoder*
class CORDL_TYPE __UTF8Encoding__UTF8Decoder : public ::System::Text::DecoderNLS {
public:
  // Declarations
  /// @brief Field bits, offset 0x30, size 0x4
  __declspec(property(get = __get_bits, put = __set_bits)) int32_t bits;

  __declspec(property(get = get_HasState)) bool HasState;

  constexpr int32_t& __get_bits();

  constexpr int32_t const& __get_bits() const;

  constexpr void __set_bits(int32_t value);

  static inline ::System::Text::__UTF8Encoding__UTF8Decoder* New_ctor(::System::Text::UTF8Encoding* encoding);

  /// @brief Method .ctor addr 0x22eb264 size 0x8 virtual false final false
  inline void _ctor(::System::Text::UTF8Encoding* encoding);

  /// @brief Method Reset addr 0x22eba90 size 0x20 virtual true final false
  inline void Reset();

  /// @brief Method get_HasState addr 0x22ebab0 size 0x10 virtual true final false
  inline bool get_HasState();

  // Ctor Parameters [CppParam { name: "", ty: "__UTF8Encoding__UTF8Decoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UTF8Encoding__UTF8Decoder(__UTF8Encoding__UTF8Decoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UTF8Encoding__UTF8Decoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UTF8Encoding__UTF8Decoder(__UTF8Encoding__UTF8Decoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UTF8Encoding__UTF8Decoder();

public:
  /// @brief Field bits, offset: 0x30, size: 0x4, def value: None
  int32_t ___bits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::__UTF8Encoding__UTF8Decoder, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Text::__UTF8Encoding__UTF8Decoder, ___bits) == 0x30, "Offset mismatch!");

} // namespace System::Text
// Type: System.Text::UTF8Encoding
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 58, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2870))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2861))
// CS Name: ::System.Text::UTF8Encoding*
class CORDL_TYPE UTF8Encoding : public ::System::Text::Encoding {
public:
  // Declarations
  using UTF8Decoder = ::System::Text::__UTF8Encoding__UTF8Decoder;

  using UTF8Encoder = ::System::Text::__UTF8Encoding__UTF8Encoder;

  using UTF8EncodingSealed = ::System::Text::__UTF8Encoding__UTF8EncodingSealed;

  /// @brief Field _emitUTF8Identifier, offset 0x38, size 0x1
  __declspec(property(get = __get__emitUTF8Identifier, put = __set__emitUTF8Identifier)) bool _emitUTF8Identifier;

  /// @brief Field _isThrowException, offset 0x39, size 0x1
  __declspec(property(get = __get__isThrowException, put = __set__isThrowException)) bool _isThrowException;

  /// @brief Field s_default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_default, put = setStaticF_s_default))::System::Text::__UTF8Encoding__UTF8EncodingSealed* s_default;

  /// @brief Field s_preamble, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_preamble, put = setStaticF_s_preamble))::ArrayW<uint8_t, ::Array<uint8_t>*> s_preamble;

  __declspec(property(get = get_Preamble))::System::ReadOnlySpan_1<uint8_t> Preamble;

  constexpr bool& __get__emitUTF8Identifier();

  constexpr bool const& __get__emitUTF8Identifier() const;

  constexpr void __set__emitUTF8Identifier(bool value);

  constexpr bool& __get__isThrowException();

  constexpr bool const& __get__isThrowException() const;

  constexpr void __set__isThrowException(bool value);

  static inline void setStaticF_s_default(::System::Text::__UTF8Encoding__UTF8EncodingSealed* value);

  static inline ::System::Text::__UTF8Encoding__UTF8EncodingSealed* getStaticF_s_default();

  static inline void setStaticF_s_preamble(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_preamble();

  static inline ::System::Text::UTF8Encoding* New_ctor();

  /// @brief Method .ctor addr 0x22e832c size 0x20 virtual false final false
  inline void _ctor();

  static inline ::System::Text::UTF8Encoding* New_ctor(bool encoderShouldEmitUTF8Identifier);

  /// @brief Method .ctor addr 0x22e834c size 0x30 virtual false final false
  inline void _ctor(bool encoderShouldEmitUTF8Identifier);

  static inline ::System::Text::UTF8Encoding* New_ctor(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes);

  /// @brief Method .ctor addr 0x22e837c size 0x60 virtual false final false
  inline void _ctor(bool encoderShouldEmitUTF8Identifier, bool throwOnInvalidBytes);

  /// @brief Method SetDefaultFallbacks addr 0x22e83dc size 0xd4 virtual true final false
  inline void SetDefaultFallbacks();

  /// @brief Method GetByteCount addr 0x22e84b0 size 0x184 virtual true final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetByteCount addr 0x22e8634 size 0x90 virtual true final false
  inline int32_t GetByteCount(::StringW chars);

  /// @brief Method GetByteCount addr 0x22e86c4 size 0xd8 virtual true final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count);

  /// @brief Method GetBytes addr 0x22e879c size 0x260 virtual true final false
  inline int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes addr 0x22e89fc size 0x27c virtual true final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes addr 0x22e8c78 size 0x100 virtual true final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount);

  /// @brief Method GetCharCount addr 0x22e8d78 size 0x184 virtual true final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount addr 0x22e8efc size 0xd8 virtual true final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count);

  /// @brief Method GetChars addr 0x22e8fd4 size 0x27c virtual true final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars addr 0x22e9250 size 0x100 virtual true final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount);

  /// @brief Method GetString addr 0x22e9350 size 0x1c8 virtual true final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetByteCount addr 0x22e9518 size 0x60c virtual true final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, ::System::Text::EncoderNLS* baseEncoder);

  /// @brief Method PtrDiff addr 0x22e9b38 size 0xc virtual false final false
  static inline int32_t PtrDiff(::cordl_internals::Ptr<char16_t> a, ::cordl_internals::Ptr<char16_t> b);

  /// @brief Method PtrDiff addr 0x22e9b44 size 0x8 virtual false final false
  static inline int32_t PtrDiff(::cordl_internals::Ptr<uint8_t> a, ::cordl_internals::Ptr<uint8_t> b);

  /// @brief Method InRange addr 0x22e9b24 size 0x14 virtual false final false
  static inline bool InRange(int32_t ch, int32_t start, int32_t end);

  /// @brief Method GetBytes addr 0x22e9b4c size 0x748 virtual true final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::System::Text::EncoderNLS* baseEncoder);

  /// @brief Method GetCharCount addr 0x22ea294 size 0x540 virtual true final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, ::System::Text::DecoderNLS* baseDecoder);

  /// @brief Method GetChars addr 0x22ea814 size 0x784 virtual true final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::System::Text::DecoderNLS* baseDecoder);

  /// @brief Method FallbackInvalidByteSequence addr 0x22eaf98 size 0x74 virtual false final false
  inline bool FallbackInvalidByteSequence(ByRef<::cordl_internals::Ptr<uint8_t>> pSrc, int32_t ch, ::System::Text::DecoderFallbackBuffer* fallback, ByRef<::cordl_internals::Ptr<char16_t>> pTarget);

  /// @brief Method FallbackInvalidByteSequence addr 0x22ea7d4 size 0x40 virtual false final false
  inline int32_t FallbackInvalidByteSequence(::cordl_internals::Ptr<uint8_t> pSrc, int32_t ch, ::System::Text::DecoderFallbackBuffer* fallback);

  /// @brief Method GetBytesUnknown addr 0x22eb00c size 0x1f4 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytesUnknown(ByRef<::cordl_internals::Ptr<uint8_t>> pSrc, int32_t ch);

  /// @brief Method GetDecoder addr 0x22eb200 size 0x64 virtual true final false
  inline ::System::Text::Decoder* GetDecoder();

  /// @brief Method GetEncoder addr 0x22eb26c size 0x60 virtual true final false
  inline ::System::Text::Encoder* GetEncoder();

  /// @brief Method GetMaxByteCount addr 0x22eb2d0 size 0x108 virtual true final false
  inline int32_t GetMaxByteCount(int32_t charCount);

  /// @brief Method GetMaxCharCount addr 0x22eb3d8 size 0x108 virtual true final false
  inline int32_t GetMaxCharCount(int32_t byteCount);

  /// @brief Method GetPreamble addr 0x22eb4e0 size 0xd4 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPreamble();

  /// @brief Method get_Preamble addr 0x22eb5b4 size 0x160 virtual true final false
  inline ::System::ReadOnlySpan_1<uint8_t> get_Preamble();

  /// @brief Method Equals addr 0x22eb714 size 0xd0 virtual true final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode addr 0x22eb7e4 size 0x60 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "UTF8Encoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UTF8Encoding(UTF8Encoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UTF8Encoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UTF8Encoding(UTF8Encoding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UTF8Encoding();

public:
  /// @brief Field _emitUTF8Identifier, offset: 0x38, size: 0x1, def value: None
  bool ____emitUTF8Identifier;

  /// @brief Field _isThrowException, offset: 0x39, size: 0x1, def value: None
  bool ____isThrowException;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::UTF8Encoding, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Text::UTF8Encoding, ____emitUTF8Identifier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::UTF8Encoding, ____isThrowException) == 0x39, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::UTF8Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::UTF8Encoding*, "System.Text", "UTF8Encoding");
NEED_NO_BOX(::System::Text::__UTF8Encoding__UTF8Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::__UTF8Encoding__UTF8Decoder*, "System.Text", "UTF8Encoding/UTF8Decoder");
NEED_NO_BOX(::System::Text::__UTF8Encoding__UTF8Encoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::__UTF8Encoding__UTF8Encoder*, "System.Text", "UTF8Encoding/UTF8Encoder");
