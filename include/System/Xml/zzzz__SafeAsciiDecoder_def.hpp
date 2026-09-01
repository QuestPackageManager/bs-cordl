#pragma once
// IWYU pragma private; include "System\Xml\SafeAsciiDecoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Decoder_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeAsciiDecoder)
// Forward declare root types
namespace System::Xml {
class SafeAsciiDecoder;
}
// Write type traits
MARK_REF_T(::System::Xml::SafeAsciiDecoder*);
DEFINE_IL2CPP_CLASS(::System::Xml::SafeAsciiDecoder*, "System.Xml", "SafeAsciiDecoder");
// Dependencies System.Text.Decoder
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.SafeAsciiDecoder
class CORDL_TYPE SafeAsciiDecoder : public ::System::Text::Decoder {
public:
  // Declarations
  /// @brief Method Convert, addr 0x62e33ec, size 0x8c, virtual true, abstract: false, final false
  inline void Convert(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, bool flush, ::by_ref<int32_t> bytesUsed,
                      ::by_ref<int32_t> charsUsed, ::by_ref<bool> completed);

  /// @brief Method GetCharCount, addr 0x62e3374, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count);

  /// @brief Method GetChars, addr 0x62e337c, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex);

  static inline ::System::Xml::SafeAsciiDecoder* New_ctor();

  /// @brief Method .ctor, addr 0x62e3370, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9443 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::SafeAsciiDecoder) == 0x20, "Size mismatch!");

} // namespace System::Xml
