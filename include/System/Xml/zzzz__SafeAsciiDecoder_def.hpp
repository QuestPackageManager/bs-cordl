#pragma once
// IWYU pragma private; include "System/Xml/SafeAsciiDecoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Decoder_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeAsciiDecoder)
// Forward declare root types
namespace System::Xml {
class SafeAsciiDecoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::SafeAsciiDecoder);
// Dependencies System.Text.Decoder
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.SafeAsciiDecoder
class CORDL_TYPE SafeAsciiDecoder : public ::System::Text::Decoder {
public:
  // Declarations
  /// @brief Method Convert, addr 0x435f7d0, size 0x88, virtual true, abstract: false, final false
  inline void Convert(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, bool flush,
                      ::ByRef<int32_t> bytesUsed, ::ByRef<int32_t> charsUsed, ::ByRef<bool> completed);

  /// @brief Method GetCharCount, addr 0x435f75c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetChars, addr 0x435f764, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  static inline ::System::Xml::SafeAsciiDecoder* New_ctor();

  /// @brief Method .ctor, addr 0x435f754, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeAsciiDecoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeAsciiDecoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeAsciiDecoder(SafeAsciiDecoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeAsciiDecoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeAsciiDecoder(SafeAsciiDecoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7353 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::SafeAsciiDecoder, 0x20>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::SafeAsciiDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::SafeAsciiDecoder*, "System.Xml", "SafeAsciiDecoder");
