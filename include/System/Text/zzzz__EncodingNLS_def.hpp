#pragma once
// IWYU pragma private; include "System/Text/EncodingNLS.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncodingNLS)
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoder;
}
// Forward declare root types
namespace System::Text {
class EncodingNLS;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncodingNLS);
// Dependencies System.Text.Encoding
namespace System::Text {
// Is value type: false
// CS Name: System.Text.EncodingNLS
class CORDL_TYPE EncodingNLS : public ::System::Text::Encoding {
public:
  // Declarations
  /// @brief Method GetByteCount, addr 0x3c7afdc, size 0x178, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetByteCount, addr 0x3c7b1e0, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count);

  /// @brief Method GetByteCount, addr 0x3c7b154, size 0x8c, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::StringW s);

  /// @brief Method GetBytes, addr 0x3c7b4f8, size 0x264, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes, addr 0x3c7b75c, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount);

  /// @brief Method GetBytes, addr 0x3c7b2b0, size 0x248, virtual true, abstract: false, final false
  inline int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetCharCount, addr 0x3c7b854, size 0x178, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount, addr 0x3c7b9cc, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count);

  /// @brief Method GetChars, addr 0x3c7ba9c, size 0x264, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars, addr 0x3c7bd00, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount);

  /// @brief Method GetDecoder, addr 0x3c7bfb4, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Text::Decoder* GetDecoder();

  /// @brief Method GetEncoder, addr 0x3c7c010, size 0x58, virtual true, abstract: false, final false
  inline ::System::Text::Encoder* GetEncoder();

  /// @brief Method GetString, addr 0x3c7bdf8, size 0x1bc, virtual true, abstract: false, final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  static inline ::System::Text::EncodingNLS* New_ctor(int32_t codePage);

  /// @brief Method .ctor, addr 0x3c7afd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t codePage);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncodingNLS();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncodingNLS", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncodingNLS(EncodingNLS&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncodingNLS", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncodingNLS(EncodingNLS const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2852 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncodingNLS, 0x38>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncodingNLS);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncodingNLS*, "System.Text", "EncodingNLS");
