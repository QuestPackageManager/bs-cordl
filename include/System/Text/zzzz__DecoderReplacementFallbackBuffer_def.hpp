#pragma once
// IWYU pragma private; include "System/Text/DecoderReplacementFallbackBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderReplacementFallbackBuffer)
namespace System::Text {
class DecoderReplacementFallback;
}
// Forward declare root types
namespace System::Text {
class DecoderReplacementFallbackBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::DecoderReplacementFallbackBuffer);
// Type: System.Text::DecoderReplacementFallbackBuffer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// CS Name: ::System.Text::DecoderReplacementFallbackBuffer*
class CORDL_TYPE DecoderReplacementFallbackBuffer : public ::System::Text::DecoderFallbackBuffer {
public:
  // Declarations
  __declspec(property(get = get_Remaining)) int32_t Remaining;

  /// @brief Field _fallbackCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__fallbackCount, put = __cordl_internal_set__fallbackCount)) int32_t _fallbackCount;

  /// @brief Field _fallbackIndex, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__fallbackIndex, put = __cordl_internal_set__fallbackIndex)) int32_t _fallbackIndex;

  /// @brief Field _strDefault, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__strDefault, put = __cordl_internal_set__strDefault))::StringW _strDefault;

  /// @brief Method Fallback, addr 0x29d68d4, size 0x44, virtual true, abstract: false, final false
  inline bool Fallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index);

  /// @brief Method GetNextChar, addr 0x29d6918, size 0x50, virtual true, abstract: false, final false
  inline char16_t GetNextChar();

  /// @brief Method InternalFallback, addr 0x29d6984, size 0x1c, virtual true, abstract: false, final false
  inline int32_t InternalFallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::cordl_internals::Ptr<uint8_t> pBytes);

  static inline ::System::Text::DecoderReplacementFallbackBuffer* New_ctor(::System::Text::DecoderReplacementFallback* fallback);

  /// @brief Method Reset, addr 0x29d6974, size 0x10, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x29d67dc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::DecoderReplacementFallback* fallback);

  /// @brief Method get_Remaining, addr 0x29d6968, size 0xc, virtual true, abstract: false, final false
  inline int32_t get_Remaining();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoderReplacementFallbackBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecoderReplacementFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoderReplacementFallbackBuffer(DecoderReplacementFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoderReplacementFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoderReplacementFallbackBuffer(DecoderReplacementFallbackBuffer const&) = delete;

  /// @brief Field _strDefault, offset: 0x20, size: 0x8, def value: None
  ::StringW ____strDefault;

  /// @brief Field _fallbackCount, offset: 0x28, size: 0x4, def value: None
  int32_t ____fallbackCount;

  /// @brief Field _fallbackIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t ____fallbackIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::DecoderReplacementFallbackBuffer, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Text::DecoderReplacementFallbackBuffer, ____strDefault) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::DecoderReplacementFallbackBuffer, ____fallbackCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::DecoderReplacementFallbackBuffer, ____fallbackIndex) == 0x2c, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::DecoderReplacementFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderReplacementFallbackBuffer*, "System.Text", "DecoderReplacementFallbackBuffer");
