#pragma once
// IWYU pragma private; include "System/Text/BinHexEncoding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinHexEncoding)
// Forward declare root types
namespace System::Text {
class BinHexEncoding;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::BinHexEncoding);
// Dependencies System.Text.Encoding
namespace System::Text {
// Is value type: false
// CS Name: System.Text.BinHexEncoding
class CORDL_TYPE BinHexEncoding : public ::System::Text::Encoding {
public:
  // Declarations
  /// @brief Field char2val, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_char2val, put = setStaticF_char2val)) ::ArrayW<uint8_t, ::Array<uint8_t>*> char2val;

  /// @brief Field val2char, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_val2char, put = setStaticF_val2char)) ::StringW val2char;

  /// @brief Method GetByteCount, addr 0x5f161d4, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  /// @brief Method GetBytes, addr 0x5f161e8, size 0x550, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex);

  /// @brief Method GetCharCount, addr 0x5f16844, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetChars, addr 0x5f16858, size 0x458, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetMaxByteCount, addr 0x5f160bc, size 0x118, virtual true, abstract: false, final false
  inline int32_t GetMaxByteCount(int32_t charCount);

  /// @brief Method GetMaxCharCount, addr 0x5f16738, size 0x10c, virtual true, abstract: false, final false
  inline int32_t GetMaxCharCount(int32_t byteCount);

  static inline ::System::Text::BinHexEncoding* New_ctor();

  /// @brief Method .ctor, addr 0x5f16cb0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_char2val();

  static inline ::StringW getStaticF_val2char();

  static inline void setStaticF_char2val(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_val2char(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinHexEncoding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinHexEncoding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinHexEncoding(BinHexEncoding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinHexEncoding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinHexEncoding(BinHexEncoding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16952 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::BinHexEncoding, 0x38>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::BinHexEncoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::BinHexEncoding*, "System.Text", "BinHexEncoding");
