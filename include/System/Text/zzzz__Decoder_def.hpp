#pragma once
// IWYU pragma private; include "System\Text\Decoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Decoder)
namespace System::Text {
class DecoderFallbackBuffer;
}
namespace System::Text {
class DecoderFallback;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Text {
class Decoder;
}
// Write type traits
MARK_REF_T(::System::Text::Decoder*);
DEFINE_IL2CPP_CLASS(::System::Text::Decoder*, "System.Text", "Decoder");
// Dependencies System.Object
namespace System::Text {
// Is value type: false
// CS Name: System.Text.Decoder
class CORDL_TYPE Decoder : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Fallback)) ::System::Text::DecoderFallback* Fallback;

  __declspec(property(get = get_FallbackBuffer)) ::System::Text::DecoderFallbackBuffer* FallbackBuffer;

  __declspec(property(get = get_InternalHasFallbackBuffer)) bool InternalHasFallbackBuffer;

  /// @brief Field _fallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__fallback, put = __cordl_internal_set__fallback)) ::System::Text::DecoderFallback* _fallback;

  /// @brief Field _fallbackBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fallbackBuffer, put = __cordl_internal_set__fallbackBuffer)) ::System::Text::DecoderFallbackBuffer* _fallbackBuffer;

  /// @brief Method Convert, addr 0x5ccb28c, size 0x2dc, virtual true, abstract: false, final false
  inline void Convert(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, bool flush, ::by_ref<int32_t> bytesUsed,
                      ::by_ref<int32_t> charsUsed, ::by_ref<bool> completed);

  /// @brief Method Convert, addr 0x5ccb568, size 0x220, virtual true, abstract: false, final false
  inline void Convert(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount, bool flush, ::by_ref<int32_t> bytesUsed, ::by_ref<int32_t> charsUsed, ::by_ref<bool> completed);

  /// @brief Method GetCharCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount, addr 0x5ccae14, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count, bool flush);

  /// @brief Method GetCharCount, addr 0x5ccae20, size 0x158, virtual true, abstract: false, final false
  inline int32_t GetCharCount(uint8_t* bytes, int32_t count, bool flush);

  /// @brief Method GetChars, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex);

  /// @brief Method GetChars, addr 0x5ccaf78, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, bool flush);

  /// @brief Method GetChars, addr 0x5ccb194, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetChars(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Span_1<char16_t> chars, bool flush);

  /// @brief Method GetChars, addr 0x5ccaf84, size 0x210, virtual true, abstract: false, final false
  inline int32_t GetChars(uint8_t* bytes, int32_t byteCount, char16_t* chars, int32_t charCount, bool flush);

  static inline ::System::Text::Decoder* New_ctor();

  /// @brief Method Reset, addr 0x5ccacec, size 0x128, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::System::Text::DecoderFallback* const& __cordl_internal_get__fallback() const;

  constexpr ::System::Text::DecoderFallback*& __cordl_internal_get__fallback();

  constexpr ::System::Text::DecoderFallbackBuffer* const& __cordl_internal_get__fallbackBuffer() const;

  constexpr ::System::Text::DecoderFallbackBuffer*& __cordl_internal_get__fallbackBuffer();

  constexpr void __cordl_internal_set__fallback(::System::Text::DecoderFallback* value);

  constexpr void __cordl_internal_set__fallbackBuffer(::System::Text::DecoderFallbackBuffer* value);

  /// @brief Method .ctor, addr 0x5ccacd0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Fallback, addr 0x5ccacd4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::DecoderFallback* get_Fallback();

  /// @brief Method get_FallbackBuffer, addr 0x5cca618, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Text::DecoderFallbackBuffer* get_FallbackBuffer();

  /// @brief Method get_InternalHasFallbackBuffer, addr 0x5ccacdc, size 0x10, virtual false, abstract: false, final false
  inline bool get_InternalHasFallbackBuffer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Decoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Decoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Decoder(Decoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Decoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Decoder(Decoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2846 };

  /// @brief Field _fallback, offset: 0x10, size: 0x8, def value: None
  ::System::Text::DecoderFallback* ____fallback;

  /// @brief Field _fallbackBuffer, offset: 0x18, size: 0x8, def value: None
  ::System::Text::DecoderFallbackBuffer* ____fallbackBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::Decoder, ____fallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::Decoder, ____fallbackBuffer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Text::Decoder) == 0x20, "Size mismatch!");

} // namespace System::Text
