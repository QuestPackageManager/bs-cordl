#pragma once
// IWYU pragma private; include "System/Text/ASCIIEncoding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ASCIIEncoding)
namespace GlobalNamespace {
class ASCIIEncoding_ASCIIEncodingSealed;
}
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
// Forward declare root types
namespace System::Text {
class ASCIIEncoding;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::ASCIIEncoding);
// Dependencies System.Text.Encoding
namespace System::Text {
// Is value type: false
// CS Name: System.Text.ASCIIEncoding
class CORDL_TYPE ASCIIEncoding : public ::System::Text::Encoding {
public:
  // Declarations
  using ASCIIEncodingSealed = ::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed;

  /// @brief Field s_default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_default, put = setStaticF_s_default)) ::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed* s_default;

  /// @brief Method GetByteCount, addr 0x3e6c1cc, size 0x178, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetByteCount, addr 0x3e6c344, size 0x8c, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::StringW chars);

  /// @brief Method GetByteCount, addr 0x3e6d1a4, size 0x2f4, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetByteCount, addr 0x3e6c3d0, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count);

  /// @brief Method GetBytes, addr 0x3e6c6e8, size 0x264, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes, addr 0x3e6c4a0, size 0x248, virtual true, abstract: false, final false
  inline int32_t GetBytes(::StringW chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes, addr 0x3e6c94c, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount);

  /// @brief Method GetBytes, addr 0x3e6d4e4, size 0x424, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::System::Text::EncoderNLS* encoder);

  /// @brief Method GetCharCount, addr 0x3e6ca44, size 0x178, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount, addr 0x3e6cbbc, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count);

  /// @brief Method GetCharCount, addr 0x3e6d908, size 0x150, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, ::System::Text::DecoderNLS* decoder);

  /// @brief Method GetChars, addr 0x3e6cc8c, size 0x264, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars, addr 0x3e6cef0, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount);

  /// @brief Method GetChars, addr 0x3e6da9c, size 0x288, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::System::Text::DecoderNLS* decoder);

  /// @brief Method GetDecoder, addr 0x3e6df30, size 0x58, virtual true, abstract: false, final false
  inline ::System::Text::Decoder* GetDecoder();

  /// @brief Method GetEncoder, addr 0x3e6dfcc, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Text::Encoder* GetEncoder();

  /// @brief Method GetMaxByteCount, addr 0x3e6dd34, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetMaxByteCount(int32_t charCount);

  /// @brief Method GetMaxCharCount, addr 0x3e6de34, size 0xfc, virtual true, abstract: false, final false
  inline int32_t GetMaxCharCount(int32_t byteCount);

  /// @brief Method GetString, addr 0x3e6cfe8, size 0x1bc, virtual true, abstract: false, final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount);

  static inline ::System::Text::ASCIIEncoding* New_ctor();

  /// @brief Method SetDefaultFallbacks, addr 0x3e6c114, size 0x24, virtual true, abstract: false, final false
  inline void SetDefaultFallbacks();

  /// @brief Method .ctor, addr 0x3e6c108, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed* getStaticF_s_default();

  static inline void setStaticF_s_default(::GlobalNamespace::ASCIIEncoding_ASCIIEncodingSealed* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ASCIIEncoding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ASCIIEncoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ASCIIEncoding(ASCIIEncoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ASCIIEncoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ASCIIEncoding(ASCIIEncoding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2829 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::ASCIIEncoding, 0x38>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::ASCIIEncoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::ASCIIEncoding*, "System.Text", "ASCIIEncoding");
