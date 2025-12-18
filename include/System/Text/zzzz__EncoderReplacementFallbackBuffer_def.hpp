#pragma once
// IWYU pragma private; include "System/Text/EncoderReplacementFallbackBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncoderReplacementFallbackBuffer)
namespace System::Text {
class EncoderReplacementFallback;
}
// Forward declare root types
namespace System::Text {
class EncoderReplacementFallbackBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncoderReplacementFallbackBuffer);
// Dependencies System.Text.EncoderFallbackBuffer
namespace System::Text {
// Is value type: false
// CS Name: System.Text.EncoderReplacementFallbackBuffer
class CORDL_TYPE EncoderReplacementFallbackBuffer : public ::System::Text::EncoderFallbackBuffer {
public:
  // Declarations
  __declspec(property(get = get_Remaining)) int32_t Remaining;

  /// @brief Field _fallbackCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__fallbackCount, put = __cordl_internal_set__fallbackCount)) int32_t _fallbackCount;

  /// @brief Field _fallbackIndex, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__fallbackIndex, put = __cordl_internal_set__fallbackIndex)) int32_t _fallbackIndex;

  /// @brief Field _strDefault, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__strDefault, put = __cordl_internal_set__strDefault)) ::StringW _strDefault;

  /// @brief Method Fallback, addr 0x592552c, size 0x130, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknown, int32_t index);

  /// @brief Method Fallback, addr 0x592565c, size 0x1d0, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index);

  /// @brief Method GetNextChar, addr 0x592582c, size 0x7c, virtual true, abstract: false, final false
  inline char16_t GetNextChar();

  /// @brief Method MovePrevious, addr 0x59258a8, size 0x30, virtual true, abstract: false, final false
  inline bool MovePrevious();

  static inline ::System::Text::EncoderReplacementFallbackBuffer* New_ctor(::System::Text::EncoderReplacementFallback* fallback);

  /// @brief Method Reset, addr 0x59258e4, size 0x14, virtual true, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get__fallbackCount() const;

  constexpr int32_t& __cordl_internal_get__fallbackCount();

  constexpr int32_t const& __cordl_internal_get__fallbackIndex() const;

  constexpr int32_t& __cordl_internal_get__fallbackIndex();

  constexpr ::StringW const& __cordl_internal_get__strDefault() const;

  constexpr ::StringW& __cordl_internal_get__strDefault();

  constexpr void __cordl_internal_set__fallbackCount(int32_t value);

  constexpr void __cordl_internal_set__fallbackIndex(int32_t value);

  constexpr void __cordl_internal_set__strDefault(::StringW value);

  /// @brief Method .ctor, addr 0x5925444, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::EncoderReplacementFallback* fallback);

  /// @brief Method get_Remaining, addr 0x59258d8, size 0xc, virtual true, abstract: false, final false
  inline int32_t get_Remaining();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncoderReplacementFallbackBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncoderReplacementFallbackBuffer(EncoderReplacementFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncoderReplacementFallbackBuffer(EncoderReplacementFallbackBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2867 };

  /// @brief Field _strDefault, offset: 0x30, size: 0x8, def value: None
  ::StringW ____strDefault;

  /// @brief Field _fallbackCount, offset: 0x38, size: 0x4, def value: None
  int32_t ____fallbackCount;

  /// @brief Field _fallbackIndex, offset: 0x3c, size: 0x4, def value: None
  int32_t ____fallbackIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::EncoderReplacementFallbackBuffer, ____strDefault) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderReplacementFallbackBuffer, ____fallbackCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderReplacementFallbackBuffer, ____fallbackIndex) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::EncoderReplacementFallbackBuffer, 0x40>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderReplacementFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderReplacementFallbackBuffer*, "System.Text", "EncoderReplacementFallbackBuffer");
