#pragma once
// IWYU pragma private; include "System/Text/EncoderExceptionFallbackBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncoderExceptionFallbackBuffer)
// Forward declare root types
namespace System::Text {
class EncoderExceptionFallbackBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncoderExceptionFallbackBuffer);
// Dependencies System.Text.EncoderFallbackBuffer
namespace System::Text {
// Is value type: false
// CS Name: System.Text.EncoderExceptionFallbackBuffer
class CORDL_TYPE EncoderExceptionFallbackBuffer : public ::System::Text::EncoderFallbackBuffer {
public:
  // Declarations
  __declspec(property(get = get_Remaining)) int32_t Remaining;

  /// @brief Method Fallback, addr 0x3c7d96c, size 0xac, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknown, int32_t index);

  /// @brief Method Fallback, addr 0x3c7da48, size 0x250, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index);

  /// @brief Method GetNextChar, addr 0x3c7de88, size 0x8, virtual true, abstract: false, final false
  inline char16_t GetNextChar();

  /// @brief Method MovePrevious, addr 0x3c7de90, size 0x8, virtual true, abstract: false, final false
  inline bool MovePrevious();

  static inline ::System::Text::EncoderExceptionFallbackBuffer* New_ctor();

  /// @brief Method .ctor, addr 0x3c7d8f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Remaining, addr 0x3c7de98, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Remaining();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncoderExceptionFallbackBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncoderExceptionFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncoderExceptionFallbackBuffer(EncoderExceptionFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncoderExceptionFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncoderExceptionFallbackBuffer(EncoderExceptionFallbackBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2845 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncoderExceptionFallbackBuffer, 0x30>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderExceptionFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderExceptionFallbackBuffer*, "System.Text", "EncoderExceptionFallbackBuffer");
