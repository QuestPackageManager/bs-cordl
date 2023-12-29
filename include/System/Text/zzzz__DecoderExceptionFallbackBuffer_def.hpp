#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderExceptionFallbackBuffer)
// Forward declare root types
namespace System::Text {
class DecoderExceptionFallbackBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::DecoderExceptionFallbackBuffer);
// Type: System.Text::DecoderExceptionFallbackBuffer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2827))
// CS Name: ::System.Text::DecoderExceptionFallbackBuffer*
class CORDL_TYPE DecoderExceptionFallbackBuffer : public ::System::Text::DecoderFallbackBuffer {
public:
  // Declarations
  __declspec(property(get = get_Remaining)) int32_t Remaining;

  /// @brief Method Fallback addr 0x24d6ff0 size 0x8 virtual true final false
  inline bool Fallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index);

  /// @brief Method GetNextChar addr 0x24d71cc size 0x8 virtual true final false
  inline char16_t GetNextChar();

  /// @brief Method get_Remaining addr 0x24d71d4 size 0x8 virtual true final false
  inline int32_t get_Remaining();

  /// @brief Method Throw addr 0x24d6ff8 size 0x1d4 virtual false final false
  inline void Throw(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index);

  static inline ::System::Text::DecoderExceptionFallbackBuffer* New_ctor();

  /// @brief Method .ctor addr 0x24d6f7c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DecoderExceptionFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoderExceptionFallbackBuffer(DecoderExceptionFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoderExceptionFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoderExceptionFallbackBuffer(DecoderExceptionFallbackBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoderExceptionFallbackBuffer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::DecoderExceptionFallbackBuffer, 0x20>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::DecoderExceptionFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderExceptionFallbackBuffer*, "System.Text", "DecoderExceptionFallbackBuffer");
