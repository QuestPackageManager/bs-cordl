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
  /// @brief Method GetByteCount, addr 0x58befb4, size 0x188, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetByteCount, addr 0x58bf1a8, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetByteCount(char16_t* chars, int32_t count);

  /// @brief Method GetByteCount, addr 0x58bf13c, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::StringW s);

  /// @brief Method GetBytes, addr 0x58bf4c0, size 0x280, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes, addr 0x58bf740, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetBytes(char16_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount);

  /// @brief Method GetBytes, addr 0x58bf278, size 0x248, virtual true, abstract: false, final false
  inline int32_t GetBytes(::StringW s, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetCharCount, addr 0x58bf838, size 0x188, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount, addr 0x58bf9c0, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetCharCount(uint8_t* bytes, int32_t count);

  /// @brief Method GetChars, addr 0x58bfa90, size 0x284, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars, addr 0x58bfd14, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount);

  /// @brief Method GetDecoder, addr 0x58bff9c, size 0x74, virtual true, abstract: false, final false
  inline ::System::Text::Decoder* GetDecoder();

  /// @brief Method GetEncoder, addr 0x58c0010, size 0x74, virtual true, abstract: false, final false
  inline ::System::Text::Encoder* GetEncoder();

  /// @brief Method GetString, addr 0x58bfe0c, size 0x190, virtual true, abstract: false, final false
  inline ::StringW GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  static inline ::System::Text::EncodingNLS* New_ctor(int32_t codePage);

  /// @brief Method .ctor, addr 0x58befac, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2868 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncodingNLS, 0x38>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncodingNLS);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncodingNLS*, "System.Text", "EncodingNLS");
