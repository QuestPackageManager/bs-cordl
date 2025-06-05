#pragma once
// IWYU pragma private; include "System/Text/DecoderExceptionFallbackBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderExceptionFallbackBuffer)
// Forward declare root types
namespace System::Text {
class DecoderExceptionFallbackBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::DecoderExceptionFallbackBuffer);
// Dependencies System.Text.DecoderFallbackBuffer
namespace System::Text {
// Is value type: false
// CS Name: System.Text.DecoderExceptionFallbackBuffer
class CORDL_TYPE DecoderExceptionFallbackBuffer : public ::System::Text::DecoderFallbackBuffer {
public:
  // Declarations
  __declspec(property(get = get_Remaining)) int32_t Remaining;

  /// @brief Method Fallback, addr 0x3e6f0e8, size 0x8, virtual true, abstract: false, final false
  inline bool Fallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index);

  /// @brief Method GetNextChar, addr 0x3e6f2bc, size 0x8, virtual true, abstract: false, final false
  inline char16_t GetNextChar();

  static inline ::System::Text::DecoderExceptionFallbackBuffer* New_ctor();

  /// @brief Method Throw, addr 0x3e6f0f0, size 0x1cc, virtual false, abstract: false, final false
  inline void Throw(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index);

  /// @brief Method .ctor, addr 0x3e6f074, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Remaining, addr 0x3e6f2c4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Remaining();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoderExceptionFallbackBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecoderExceptionFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoderExceptionFallbackBuffer(DecoderExceptionFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoderExceptionFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoderExceptionFallbackBuffer(DecoderExceptionFallbackBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2834 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::DecoderExceptionFallbackBuffer, 0x20>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::DecoderExceptionFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderExceptionFallbackBuffer*, "System.Text", "DecoderExceptionFallbackBuffer");
