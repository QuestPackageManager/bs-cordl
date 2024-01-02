#pragma once
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
// Type: System.Text::EncoderReplacementFallbackBuffer
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2845))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2848))
// CS Name: ::System.Text::EncoderReplacementFallbackBuffer*
class CORDL_TYPE EncoderReplacementFallbackBuffer : public ::System::Text::EncoderFallbackBuffer {
public:
  // Declarations
  /// @brief Field _strDefault, offset 0x30, size 0x8
  __declspec(property(get = __get__strDefault, put = __set__strDefault))::StringW _strDefault;

  /// @brief Field _fallbackCount, offset 0x38, size 0x4
  __declspec(property(get = __get__fallbackCount, put = __set__fallbackCount)) int32_t _fallbackCount;

  /// @brief Field _fallbackIndex, offset 0x3c, size 0x4
  __declspec(property(get = __get__fallbackIndex, put = __set__fallbackIndex)) int32_t _fallbackIndex;

  __declspec(property(get = get_Remaining)) int32_t Remaining;

  constexpr ::StringW& __get__strDefault();

  constexpr ::StringW const& __get__strDefault() const;

  constexpr void __set__strDefault(::StringW value);

  constexpr int32_t& __get__fallbackCount();

  constexpr int32_t const& __get__fallbackCount() const;

  constexpr void __set__fallbackCount(int32_t value);

  constexpr int32_t& __get__fallbackIndex();

  constexpr int32_t const& __get__fallbackIndex() const;

  constexpr void __set__fallbackIndex(int32_t value);

  static inline ::System::Text::EncoderReplacementFallbackBuffer* New_ctor(::System::Text::EncoderReplacementFallback* fallback);

  /// @brief Method .ctor, addr 0x2436dbc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::EncoderReplacementFallback* fallback);

  /// @brief Method Fallback, addr 0x2436ec0, size 0x150, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknown, int32_t index);

  /// @brief Method Fallback, addr 0x2437010, size 0x228, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index);

  /// @brief Method GetNextChar, addr 0x2437238, size 0x50, virtual true, abstract: false, final false
  inline char16_t GetNextChar();

  /// @brief Method MovePrevious, addr 0x2437288, size 0x30, virtual true, abstract: false, final false
  inline bool MovePrevious();

  /// @brief Method get_Remaining, addr 0x24372b8, size 0xc, virtual true, abstract: false, final false
  inline int32_t get_Remaining();

  /// @brief Method Reset, addr 0x24372c4, size 0x14, virtual true, abstract: false, final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncoderReplacementFallbackBuffer(EncoderReplacementFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncoderReplacementFallbackBuffer(EncoderReplacementFallbackBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncoderReplacementFallbackBuffer();

public:
  /// @brief Field _strDefault, offset: 0x30, size: 0x8, def value: None
  ::StringW ____strDefault;

  /// @brief Field _fallbackCount, offset: 0x38, size: 0x4, def value: None
  int32_t ____fallbackCount;

  /// @brief Field _fallbackIndex, offset: 0x3c, size: 0x4, def value: None
  int32_t ____fallbackIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::EncoderReplacementFallbackBuffer, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Text::EncoderReplacementFallbackBuffer, ____strDefault) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderReplacementFallbackBuffer, ____fallbackCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderReplacementFallbackBuffer, ____fallbackIndex) == 0x3c, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderReplacementFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderReplacementFallbackBuffer*, "System.Text", "EncoderReplacementFallbackBuffer");
