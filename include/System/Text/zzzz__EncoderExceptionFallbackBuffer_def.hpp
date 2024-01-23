#pragma once
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
// Type: System.Text::EncoderExceptionFallbackBuffer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2845))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2842))
// CS Name: ::System.Text::EncoderExceptionFallbackBuffer*
class CORDL_TYPE EncoderExceptionFallbackBuffer : public ::System::Text::EncoderFallbackBuffer {
public:
  // Declarations
  __declspec(property(get = get_Remaining)) int32_t Remaining;

  static inline ::System::Text::EncoderExceptionFallbackBuffer* New_ctor();

  /// @brief Method .ctor, addr 0x2633ad0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Fallback, addr 0x2633b44, size 0xb4, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknown, int32_t index);

  /// @brief Method Fallback, addr 0x2633c28, size 0x260, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index);

  /// @brief Method GetNextChar, addr 0x2634080, size 0x8, virtual true, abstract: false, final false
  inline char16_t GetNextChar();

  /// @brief Method MovePrevious, addr 0x2634088, size 0x8, virtual true, abstract: false, final false
  inline bool MovePrevious();

  /// @brief Method get_Remaining, addr 0x2634090, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Remaining();

  // Ctor Parameters [CppParam { name: "", ty: "EncoderExceptionFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncoderExceptionFallbackBuffer(EncoderExceptionFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncoderExceptionFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncoderExceptionFallbackBuffer(EncoderExceptionFallbackBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncoderExceptionFallbackBuffer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncoderExceptionFallbackBuffer, 0x30>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderExceptionFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderExceptionFallbackBuffer*, "System.Text", "EncoderExceptionFallbackBuffer");
