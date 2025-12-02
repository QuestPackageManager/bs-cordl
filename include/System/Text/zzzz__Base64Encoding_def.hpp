#pragma once
// IWYU pragma private; include "System/Text/Base64Encoding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Base64Encoding)
// Forward declare root types
namespace System::Text {
class Base64Encoding;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::Base64Encoding);
// Dependencies System.Text.Encoding
namespace System::Text {
// Is value type: false
// CS Name: System.Text.Base64Encoding
class CORDL_TYPE Base64Encoding : public ::System::Text::Encoding {
public:
  // Declarations
  /// @brief Field char2val, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_char2val, put = setStaticF_char2val)) ::ArrayW<uint8_t, ::Array<uint8_t>*> char2val;

  /// @brief Field val2byte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_val2byte, put = setStaticF_val2byte)) ::ArrayW<uint8_t, ::Array<uint8_t>*> val2byte;

  /// @brief Field val2char, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_val2char, put = setStaticF_val2char)) ::StringW val2char;

  /// @brief Method GetByteCount, addr 0x5f14884, size 0x49c, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetBytes, addr 0x5f14d20, size 0x62c, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetBytes, addr 0x5f1534c, size 0x614, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetCharCount, addr 0x5f15a94, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetChars, addr 0x5f15aa8, size 0x4fc, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars, addr 0x5f12a8c, size 0x4fc, virtual false, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> chars, int32_t charIndex);

  /// @brief Method GetMaxByteCount, addr 0x5f14734, size 0x120, virtual true, abstract: false, final false
  inline int32_t GetMaxByteCount(int32_t charCount);

  /// @brief Method GetMaxCharCount, addr 0x5f15960, size 0x134, virtual true, abstract: false, final false
  inline int32_t GetMaxCharCount(int32_t byteCount);

  /// @brief Method IsValidLeadBytes, addr 0x5f14854, size 0x1c, virtual false, abstract: false, final false
  inline bool IsValidLeadBytes(int32_t v1, int32_t v2, int32_t v3, int32_t v4);

  /// @brief Method IsValidTailBytes, addr 0x5f14870, size 0x14, virtual false, abstract: false, final false
  inline bool IsValidTailBytes(int32_t v3, int32_t v4);

  static inline ::System::Text::Base64Encoding* New_ctor();

  /// @brief Method .ctor, addr 0x5f15fa4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_char2val();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_val2byte();

  static inline ::StringW getStaticF_val2char();

  static inline void setStaticF_char2val(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_val2byte(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_val2char(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Base64Encoding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Base64Encoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Base64Encoding(Base64Encoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Base64Encoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Base64Encoding(Base64Encoding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16951 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::Base64Encoding, 0x38>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::Base64Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Base64Encoding*, "System.Text", "Base64Encoding");
