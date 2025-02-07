#pragma once
// IWYU pragma private; include "System/Text/EncoderFallbackBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncoderFallbackBuffer)
namespace System::Text {
class EncoderNLS;
}
// Forward declare root types
namespace System::Text {
class EncoderFallbackBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::EncoderFallbackBuffer);
// Dependencies System.Object
namespace System::Text {
// Is value type: false
// CS Name: System.Text.EncoderFallbackBuffer
class CORDL_TYPE EncoderFallbackBuffer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Remaining)) int32_t Remaining;

  /// @brief Field bFallingBack, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_bFallingBack, put = __cordl_internal_set_bFallingBack)) bool bFallingBack;

  /// @brief Field bUsedEncoder, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_bUsedEncoder, put = __cordl_internal_set_bUsedEncoder)) bool bUsedEncoder;

  /// @brief Field charEnd, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_charEnd, put = __cordl_internal_set_charEnd)) ::cordl_internals::Ptr<char16_t> charEnd;

  /// @brief Field charStart, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_charStart, put = __cordl_internal_set_charStart)) ::cordl_internals::Ptr<char16_t> charStart;

  /// @brief Field encoder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_encoder, put = __cordl_internal_set_encoder)) ::System::Text::EncoderNLS* encoder;

  /// @brief Field iRecursionCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_iRecursionCount, put = __cordl_internal_set_iRecursionCount)) int32_t iRecursionCount;

  /// @brief Field setEncoder, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_setEncoder, put = __cordl_internal_set_setEncoder)) bool setEncoder;

  /// @brief Method Fallback, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknown, int32_t index);

  /// @brief Method Fallback, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index);

  /// @brief Method GetNextChar, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline char16_t GetNextChar();

  /// @brief Method InternalFallback, addr 0x3c7e100, size 0x1a8, virtual true, abstract: false, final false
  inline bool InternalFallback(char16_t ch, ::ByRef<::cordl_internals::Ptr<char16_t>> chars);

  /// @brief Method InternalGetNextChar, addr 0x3c7e0d0, size 0x30, virtual false, abstract: false, final false
  inline char16_t InternalGetNextChar();

  /// @brief Method InternalInitialize, addr 0x3c7e0b4, size 0x1c, virtual false, abstract: false, final false
  inline void InternalInitialize(::cordl_internals::Ptr<char16_t> charStart, ::cordl_internals::Ptr<char16_t> charEnd, ::System::Text::EncoderNLS* encoder, bool setEncoder);

  /// @brief Method InternalReset, addr 0x3c7e09c, size 0x18, virtual false, abstract: false, final false
  inline void InternalReset();

  /// @brief Method MovePrevious, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool MovePrevious();

  static inline ::System::Text::EncoderFallbackBuffer* New_ctor();

  /// @brief Method Reset, addr 0x3c7e074, size 0x28, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ThrowLastCharRecursive, addr 0x3c7e2a8, size 0x8c, virtual false, abstract: false, final false
  inline void ThrowLastCharRecursive(int32_t charRecursive);

  constexpr bool const& __cordl_internal_get_bFallingBack() const;

  constexpr bool& __cordl_internal_get_bFallingBack();

  constexpr bool const& __cordl_internal_get_bUsedEncoder() const;

  constexpr bool& __cordl_internal_get_bUsedEncoder();

  constexpr ::cordl_internals::Ptr<char16_t> const& __cordl_internal_get_charEnd() const;

  constexpr ::cordl_internals::Ptr<char16_t>& __cordl_internal_get_charEnd();

  constexpr ::cordl_internals::Ptr<char16_t> const& __cordl_internal_get_charStart() const;

  constexpr ::cordl_internals::Ptr<char16_t>& __cordl_internal_get_charStart();

  constexpr ::System::Text::EncoderNLS* const& __cordl_internal_get_encoder() const;

  constexpr ::System::Text::EncoderNLS*& __cordl_internal_get_encoder();

  constexpr int32_t const& __cordl_internal_get_iRecursionCount() const;

  constexpr int32_t& __cordl_internal_get_iRecursionCount();

  constexpr bool const& __cordl_internal_get_setEncoder() const;

  constexpr bool& __cordl_internal_get_setEncoder();

  constexpr void __cordl_internal_set_bFallingBack(bool value);

  constexpr void __cordl_internal_set_bUsedEncoder(bool value);

  constexpr void __cordl_internal_set_charEnd(::cordl_internals::Ptr<char16_t> value);

  constexpr void __cordl_internal_set_charStart(::cordl_internals::Ptr<char16_t> value);

  constexpr void __cordl_internal_set_encoder(::System::Text::EncoderNLS* value);

  constexpr void __cordl_internal_set_iRecursionCount(int32_t value);

  constexpr void __cordl_internal_set_setEncoder(bool value);

  /// @brief Method .ctor, addr 0x3c7d52c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Remaining, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Remaining();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncoderFallbackBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncoderFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncoderFallbackBuffer(EncoderFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncoderFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncoderFallbackBuffer(EncoderFallbackBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2848 };

  /// @brief Field charStart, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<char16_t> ___charStart;

  /// @brief Field charEnd, offset: 0x18, size: 0x8, def value: None
  ::cordl_internals::Ptr<char16_t> ___charEnd;

  /// @brief Field encoder, offset: 0x20, size: 0x8, def value: None
  ::System::Text::EncoderNLS* ___encoder;

  /// @brief Field setEncoder, offset: 0x28, size: 0x1, def value: None
  bool ___setEncoder;

  /// @brief Field bUsedEncoder, offset: 0x29, size: 0x1, def value: None
  bool ___bUsedEncoder;

  /// @brief Field bFallingBack, offset: 0x2a, size: 0x1, def value: None
  bool ___bFallingBack;

  /// @brief Field iRecursionCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ___iRecursionCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::EncoderFallbackBuffer, ___charStart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderFallbackBuffer, ___charEnd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderFallbackBuffer, ___encoder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderFallbackBuffer, ___setEncoder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderFallbackBuffer, ___bUsedEncoder) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderFallbackBuffer, ___bFallingBack) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::System::Text::EncoderFallbackBuffer, ___iRecursionCount) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::EncoderFallbackBuffer, 0x30>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderFallbackBuffer*, "System.Text", "EncoderFallbackBuffer");
