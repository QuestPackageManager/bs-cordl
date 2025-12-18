#pragma once
// IWYU pragma private; include "System/Xml/EncodingStreamWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EncodingStreamWrapper)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class UTF8Encoding;
}
namespace System::Text {
class UnicodeEncoding;
}
namespace System::Xml {
struct EncodingStreamWrapper_SupportedEncoding;
}
// Forward declare root types
namespace System::Xml {
struct EncodingStreamWrapper_SupportedEncoding;
}
namespace System::Xml {
class EncodingStreamWrapper;
}
// Write type traits
MARK_VAL_T(::System::Xml::EncodingStreamWrapper_SupportedEncoding);
MARK_REF_PTR_T(::System::Xml::EncodingStreamWrapper);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.EncodingStreamWrapper/SupportedEncoding
struct CORDL_TYPE EncodingStreamWrapper_SupportedEncoding {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EncodingStreamWrapper_SupportedEncoding_Unwrapped
  enum struct __EncodingStreamWrapper_SupportedEncoding_Unwrapped : int32_t {
    __E_UTF8 = static_cast<int32_t>(0x0),
    __E_UTF16LE = static_cast<int32_t>(0x1),
    __E_UTF16BE = static_cast<int32_t>(0x2),
    __E_None = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EncodingStreamWrapper_SupportedEncoding_Unwrapped() const noexcept {
    return static_cast<__EncodingStreamWrapper_SupportedEncoding_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EncodingStreamWrapper_SupportedEncoding();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EncodingStreamWrapper_SupportedEncoding(int32_t value__) noexcept;

  /// @brief Field None value: I32(3)
  static ::System::Xml::EncodingStreamWrapper_SupportedEncoding const None;

  /// @brief Field UTF16BE value: I32(2)
  static ::System::Xml::EncodingStreamWrapper_SupportedEncoding const UTF16BE;

  /// @brief Field UTF16LE value: I32(1)
  static ::System::Xml::EncodingStreamWrapper_SupportedEncoding const UTF16LE;

  /// @brief Field UTF8 value: I32(0)
  static ::System::Xml::EncodingStreamWrapper_SupportedEncoding const UTF8;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16899 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::EncodingStreamWrapper_SupportedEncoding, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::EncodingStreamWrapper_SupportedEncoding, 0x4>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.IO.Stream, System.Xml.EncodingStreamWrapper::SupportedEncoding
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.EncodingStreamWrapper
class CORDL_TYPE EncodingStreamWrapper : public ::System::IO::Stream {
public:
  // Declarations
  using SupportedEncoding = ::System::Xml::EncodingStreamWrapper_SupportedEncoding;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanTimeout)) bool CanTimeout;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  __declspec(property(get = get_ReadTimeout, put = set_ReadTimeout)) int32_t ReadTimeout;

  /// @brief Field SafeBEUTF16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SafeBEUTF16, put = setStaticF_SafeBEUTF16)) ::System::Text::UnicodeEncoding* SafeBEUTF16;

  /// @brief Field SafeUTF16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SafeUTF16, put = setStaticF_SafeUTF16)) ::System::Text::UnicodeEncoding* SafeUTF16;

  /// @brief Field SafeUTF8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SafeUTF8, put = setStaticF_SafeUTF8)) ::System::Text::UTF8Encoding* SafeUTF8;

  /// @brief Field ValidatingBEUTF16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ValidatingBEUTF16, put = setStaticF_ValidatingBEUTF16)) ::System::Text::UnicodeEncoding* ValidatingBEUTF16;

  /// @brief Field ValidatingUTF16, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ValidatingUTF16, put = setStaticF_ValidatingUTF16)) ::System::Text::UnicodeEncoding* ValidatingUTF16;

  /// @brief Field ValidatingUTF8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ValidatingUTF8, put = setStaticF_ValidatingUTF8)) ::System::Text::UTF8Encoding* ValidatingUTF8;

  __declspec(property(get = get_WriteTimeout, put = set_WriteTimeout)) int32_t WriteTimeout;

  /// @brief Field byteBuffer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_byteBuffer, put = __cordl_internal_set_byteBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuffer;

  /// @brief Field byteCount, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_byteCount, put = __cordl_internal_set_byteCount)) int32_t byteCount;

  /// @brief Field byteOffset, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_byteOffset, put = __cordl_internal_set_byteOffset)) int32_t byteOffset;

  /// @brief Field bytes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_bytes, put = __cordl_internal_set_bytes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes;

  /// @brief Field chars, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_chars, put = __cordl_internal_set_chars)) ::ArrayW<char16_t, ::Array<char16_t>*> chars;

  /// @brief Field dec, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_dec, put = __cordl_internal_set_dec)) ::System::Text::Decoder* dec;

  /// @brief Field enc, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_enc, put = __cordl_internal_set_enc)) ::System::Text::Encoder* enc;

  /// @brief Field encoding, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_encoding, put = __cordl_internal_set_encoding)) ::System::Text::Encoding* encoding;

  /// @brief Field encodingAttr, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_encodingAttr, put = setStaticF_encodingAttr)) ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingAttr;

  /// @brief Field encodingCode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_encodingCode, put = __cordl_internal_set_encodingCode)) ::System::Xml::EncodingStreamWrapper_SupportedEncoding encodingCode;

  /// @brief Field encodingUTF8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_encodingUTF8, put = setStaticF_encodingUTF8)) ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingUTF8;

  /// @brief Field encodingUnicode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_encodingUnicode, put = setStaticF_encodingUnicode)) ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingUnicode;

  /// @brief Field encodingUnicodeBE, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_encodingUnicodeBE, put = setStaticF_encodingUnicodeBE)) ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingUnicodeBE;

  /// @brief Field encodingUnicodeLE, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_encodingUnicodeLE, put = setStaticF_encodingUnicodeLE)) ::ArrayW<uint8_t, ::Array<uint8_t>*> encodingUnicodeLE;

  /// @brief Field isReading, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_isReading, put = __cordl_internal_set_isReading)) bool isReading;

  /// @brief Field stream, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_stream, put = __cordl_internal_set_stream)) ::System::IO::Stream* stream;

  /// @brief Method CheckUTF8DeclarationEncoding, addr 0x5f4b6c8, size 0x5f0, virtual false, abstract: false, final false
  static inline void CheckUTF8DeclarationEncoding(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::Xml::EncodingStreamWrapper_SupportedEncoding e,
                                                  ::System::Xml::EncodingStreamWrapper_SupportedEncoding expectedEnc);

  /// @brief Method CleanupCharBreak, addr 0x5f4bd94, size 0x1b0, virtual false, abstract: false, final false
  inline void CleanupCharBreak();

  /// @brief Method Close, addr 0x5f4c88c, size 0x44, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Compare, addr 0x5f4c4e0, size 0x88, virtual false, abstract: false, final false
  static inline bool Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method CompareCaseInsensitive, addr 0x5f4c568, size 0x138, virtual false, abstract: false, final false
  static inline bool CompareCaseInsensitive(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset);

  /// @brief Method EnsureBuffers, addr 0x5f4bcb8, size 0x64, virtual false, abstract: false, final false
  inline void EnsureBuffers();

  /// @brief Method EnsureByteBuffer, addr 0x5f4c464, size 0x5c, virtual false, abstract: false, final false
  inline void EnsureByteBuffer();

  /// @brief Method FillBuffer, addr 0x5f4b658, size 0x70, virtual false, abstract: false, final false
  inline void FillBuffer(int32_t count);

  /// @brief Method Flush, addr 0x5f4c8d0, size 0x20, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method GetEncoding, addr 0x5f4bf44, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Text::Encoding* GetEncoding(::System::Xml::EncodingStreamWrapper_SupportedEncoding e);

  /// @brief Method GetEncodingName, addr 0x5f4c04c, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW GetEncodingName(::System::Xml::EncodingStreamWrapper_SupportedEncoding enc);

  /// @brief Method GetSupportedEncoding, addr 0x5f4b194, size 0x1ac, virtual false, abstract: false, final false
  static inline ::System::Xml::EncodingStreamWrapper_SupportedEncoding GetSupportedEncoding(::System::Text::Encoding* encoding);

  /// @brief Method IsWhitespace, addr 0x5f4c4c0, size 0x20, virtual false, abstract: false, final false
  static inline bool IsWhitespace(uint8_t ch);

  static inline ::System::Xml::EncodingStreamWrapper* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  static inline ::System::Xml::EncodingStreamWrapper* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool emitBOM);

  /// @brief Method Read, addr 0x5f4c974, size 0x24c, virtual true, abstract: false, final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadBOMEncoding, addr 0x5f4c2f4, size 0x170, virtual false, abstract: false, final false
  static inline ::System::Xml::EncodingStreamWrapper_SupportedEncoding ReadBOMEncoding(uint8_t b1, uint8_t b2, uint8_t b3, uint8_t b4, bool notOutOfBand, ::ByRef<int32_t> preserve);

  /// @brief Method ReadBOMEncoding, addr 0x5f4b340, size 0x234, virtual false, abstract: false, final false
  inline ::System::Xml::EncodingStreamWrapper_SupportedEncoding ReadBOMEncoding(bool notOutOfBand);

  /// @brief Method ReadByte, addr 0x5f4c8f0, size 0x84, virtual true, abstract: false, final false
  inline int32_t ReadByte();

  /// @brief Method Seek, addr 0x5f4cbc0, size 0x38, virtual true, abstract: false, final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x5f4ce28, size 0x38, virtual true, abstract: false, final false
  inline void SetLength(int64_t value);

  /// @brief Method SetReadDocumentEncoding, addr 0x5f4bd1c, size 0x78, virtual false, abstract: false, final false
  inline void SetReadDocumentEncoding(::System::Xml::EncodingStreamWrapper_SupportedEncoding e);

  /// @brief Method ThrowEncodingMismatch, addr 0x5f4c6a0, size 0xb8, virtual false, abstract: false, final false
  static inline void ThrowEncodingMismatch(::StringW declEnc, ::StringW docEnc);

  /// @brief Method ThrowEncodingMismatch, addr 0x5f4c758, size 0x64, virtual false, abstract: false, final false
  static inline void ThrowEncodingMismatch(::StringW declEnc, ::System::Xml::EncodingStreamWrapper_SupportedEncoding enc);

  /// @brief Method ThrowExpectedEncodingMismatch, addr 0x5f4b574, size 0xe4, virtual false, abstract: false, final false
  static inline void ThrowExpectedEncodingMismatch(::System::Xml::EncodingStreamWrapper_SupportedEncoding expEnc, ::System::Xml::EncodingStreamWrapper_SupportedEncoding actualEnc);

  /// @brief Method Write, addr 0x5f4cc5c, size 0x114, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0x5f4cbf8, size 0x64, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_byteBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_byteBuffer();

  constexpr int32_t const& __cordl_internal_get_byteCount() const;

  constexpr int32_t& __cordl_internal_get_byteCount();

  constexpr int32_t const& __cordl_internal_get_byteOffset() const;

  constexpr int32_t& __cordl_internal_get_byteOffset();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_bytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_bytes();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_chars() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_chars();

  constexpr ::System::Text::Decoder* const& __cordl_internal_get_dec() const;

  constexpr ::System::Text::Decoder*& __cordl_internal_get_dec();

  constexpr ::System::Text::Encoder* const& __cordl_internal_get_enc() const;

  constexpr ::System::Text::Encoder*& __cordl_internal_get_enc();

  constexpr ::System::Text::Encoding* const& __cordl_internal_get_encoding() const;

  constexpr ::System::Text::Encoding*& __cordl_internal_get_encoding();

  constexpr ::System::Xml::EncodingStreamWrapper_SupportedEncoding const& __cordl_internal_get_encodingCode() const;

  constexpr ::System::Xml::EncodingStreamWrapper_SupportedEncoding& __cordl_internal_get_encodingCode();

  constexpr bool const& __cordl_internal_get_isReading() const;

  constexpr bool& __cordl_internal_get_isReading();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_stream();

  constexpr void __cordl_internal_set_byteBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_byteCount(int32_t value);

  constexpr void __cordl_internal_set_byteOffset(int32_t value);

  constexpr void __cordl_internal_set_bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_dec(::System::Text::Decoder* value);

  constexpr void __cordl_internal_set_enc(::System::Text::Encoder* value);

  constexpr void __cordl_internal_set_encoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_encodingCode(::System::Xml::EncodingStreamWrapper_SupportedEncoding value);

  constexpr void __cordl_internal_set_isReading(bool value);

  constexpr void __cordl_internal_set_stream(::System::IO::Stream* value);

  /// @brief Method .ctor, addr 0x5f4ad34, size 0x460, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x5f4c114, size 0x1e0, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool emitBOM);

  static inline ::System::Text::UnicodeEncoding* getStaticF_SafeBEUTF16();

  static inline ::System::Text::UnicodeEncoding* getStaticF_SafeUTF16();

  static inline ::System::Text::UTF8Encoding* getStaticF_SafeUTF8();

  static inline ::System::Text::UnicodeEncoding* getStaticF_ValidatingBEUTF16();

  static inline ::System::Text::UnicodeEncoding* getStaticF_ValidatingUTF16();

  static inline ::System::Text::UTF8Encoding* getStaticF_ValidatingUTF8();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_encodingAttr();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_encodingUTF8();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_encodingUnicode();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_encodingUnicodeBE();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_encodingUnicodeLE();

  /// @brief Method get_CanRead, addr 0x5f4c7bc, size 0x2c, virtual true, abstract: false, final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x5f4c7e8, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanSeek();

  /// @brief Method get_CanTimeout, addr 0x5f4cd70, size 0x1c, virtual true, abstract: false, final false
  inline bool get_CanTimeout();

  /// @brief Method get_CanWrite, addr 0x5f4c7f0, size 0x2c, virtual true, abstract: false, final false
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x5f4cd8c, size 0x1c, virtual true, abstract: false, final false
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x5f4c81c, size 0x38, virtual true, abstract: false, final false
  inline int64_t get_Position();

  /// @brief Method get_ReadTimeout, addr 0x5f4cda8, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_ReadTimeout();

  /// @brief Method get_WriteTimeout, addr 0x5f4cde8, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_WriteTimeout();

  static inline void setStaticF_SafeBEUTF16(::System::Text::UnicodeEncoding* value);

  static inline void setStaticF_SafeUTF16(::System::Text::UnicodeEncoding* value);

  static inline void setStaticF_SafeUTF8(::System::Text::UTF8Encoding* value);

  static inline void setStaticF_ValidatingBEUTF16(::System::Text::UnicodeEncoding* value);

  static inline void setStaticF_ValidatingUTF16(::System::Text::UnicodeEncoding* value);

  static inline void setStaticF_ValidatingUTF8(::System::Text::UTF8Encoding* value);

  static inline void setStaticF_encodingAttr(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_encodingUTF8(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_encodingUnicode(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_encodingUnicodeBE(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_encodingUnicodeLE(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method set_Position, addr 0x5f4c854, size 0x38, virtual true, abstract: false, final false
  inline void set_Position(int64_t value);

  /// @brief Method set_ReadTimeout, addr 0x5f4cdc8, size 0x20, virtual true, abstract: false, final false
  inline void set_ReadTimeout(int32_t value);

  /// @brief Method set_WriteTimeout, addr 0x5f4ce08, size 0x20, virtual true, abstract: false, final false
  inline void set_WriteTimeout(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncodingStreamWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncodingStreamWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncodingStreamWrapper(EncodingStreamWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncodingStreamWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncodingStreamWrapper(EncodingStreamWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16900 };

  /// @brief Field encodingCode, offset: 0x28, size: 0x4, def value: None
  ::System::Xml::EncodingStreamWrapper_SupportedEncoding ___encodingCode;

  /// @brief Field encoding, offset: 0x30, size: 0x8, def value: None
  ::System::Text::Encoding* ___encoding;

  /// @brief Field enc, offset: 0x38, size: 0x8, def value: None
  ::System::Text::Encoder* ___enc;

  /// @brief Field dec, offset: 0x40, size: 0x8, def value: None
  ::System::Text::Decoder* ___dec;

  /// @brief Field isReading, offset: 0x48, size: 0x1, def value: None
  bool ___isReading;

  /// @brief Field stream, offset: 0x50, size: 0x8, def value: None
  ::System::IO::Stream* ___stream;

  /// @brief Field chars, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___chars;

  /// @brief Field bytes, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___bytes;

  /// @brief Field byteOffset, offset: 0x68, size: 0x4, def value: None
  int32_t ___byteOffset;

  /// @brief Field byteCount, offset: 0x6c, size: 0x4, def value: None
  int32_t ___byteCount;

  /// @brief Field byteBuffer, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___byteBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::EncodingStreamWrapper, ___encodingCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::EncodingStreamWrapper, ___encoding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::EncodingStreamWrapper, ___enc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::EncodingStreamWrapper, ___dec) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::EncodingStreamWrapper, ___isReading) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::EncodingStreamWrapper, ___stream) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::EncodingStreamWrapper, ___chars) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::EncodingStreamWrapper, ___bytes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::EncodingStreamWrapper, ___byteOffset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::EncodingStreamWrapper, ___byteCount) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::EncodingStreamWrapper, ___byteBuffer) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::EncodingStreamWrapper, 0x78>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::EncodingStreamWrapper_SupportedEncoding, "System.Xml", "EncodingStreamWrapper/SupportedEncoding");
NEED_NO_BOX(::System::Xml::EncodingStreamWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::EncodingStreamWrapper*, "System.Xml", "EncodingStreamWrapper");
