#pragma once
// IWYU pragma private; include "System/Text/Encoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Encoder)
namespace System::Text {
class EncoderFallbackBuffer;
}
namespace System::Text {
class EncoderFallback;
}
// Forward declare root types
namespace System::Text {
class Encoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::Encoder);
// Dependencies System.Object
namespace System::Text {
// Is value type: false
// CS Name: System.Text.Encoder
class CORDL_TYPE Encoder : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Fallback)) ::System::Text::EncoderFallback* Fallback;

  __declspec(property(get = get_FallbackBuffer)) ::System::Text::EncoderFallbackBuffer* FallbackBuffer;

  __declspec(property(get = get_InternalHasFallbackBuffer)) bool InternalHasFallbackBuffer;

  /// @brief Field _fallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__fallback, put = __cordl_internal_set__fallback)) ::System::Text::EncoderFallback* _fallback;

  /// @brief Field _fallbackBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fallbackBuffer, put = __cordl_internal_set__fallbackBuffer)) ::System::Text::EncoderFallbackBuffer* _fallbackBuffer;

  /// @brief Method Convert, addr 0x3e70a98, size 0x2dc, virtual true, abstract: false, final false
  inline void Convert(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, bool flush,
                      ::ByRef<int32_t> charsUsed, ::ByRef<int32_t> bytesUsed, ::ByRef<bool> completed);

  /// @brief Method Convert, addr 0x3e70d74, size 0x380, virtual true, abstract: false, final false
  inline void Convert(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, bool flush, ::ByRef<int32_t> charsUsed,
                      ::ByRef<int32_t> bytesUsed, ::ByRef<bool> completed);

  /// @brief Method GetByteCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count, bool flush);

  /// @brief Method GetByteCount, addr 0x3e70724, size 0x164, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, bool flush);

  /// @brief Method GetBytes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, bool flush);

  /// @brief Method GetBytes, addr 0x3e70888, size 0x210, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, bool flush);

  static inline ::System::Text::Encoder* New_ctor();

  /// @brief Method Reset, addr 0x3e70640, size 0xe4, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::System::Text::EncoderFallback* const& __cordl_internal_get__fallback() const;

  constexpr ::System::Text::EncoderFallback*& __cordl_internal_get__fallback();

  constexpr ::System::Text::EncoderFallbackBuffer* const& __cordl_internal_get__fallbackBuffer() const;

  constexpr ::System::Text::EncoderFallbackBuffer*& __cordl_internal_get__fallbackBuffer();

  constexpr void __cordl_internal_set__fallback(::System::Text::EncoderFallback* value);

  constexpr void __cordl_internal_set__fallbackBuffer(::System::Text::EncoderFallbackBuffer* value);

  /// @brief Method .ctor, addr 0x3e70630, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Fallback, addr 0x3e70638, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::EncoderFallback* get_Fallback();

  /// @brief Method get_FallbackBuffer, addr 0x3e6d0c8, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Text::EncoderFallbackBuffer* get_FallbackBuffer();

  /// @brief Method get_InternalHasFallbackBuffer, addr 0x3e6d0b8, size 0x10, virtual false, abstract: false, final false
  inline bool get_InternalHasFallbackBuffer();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Encoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Encoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Encoder(Encoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Encoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Encoder(Encoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2841 };

  /// @brief Field _fallback, offset: 0x10, size: 0x8, def value: None
  ::System::Text::EncoderFallback* ____fallback;

  /// @brief Field _fallbackBuffer, offset: 0x18, size: 0x8, def value: None
  ::System::Text::EncoderFallbackBuffer* ____fallbackBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::Encoder, ____fallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoder, ____fallbackBuffer) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::Encoder, 0x20>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::Encoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Encoder*, "System.Text", "Encoder");
