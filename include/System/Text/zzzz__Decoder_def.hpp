#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Decoder)
namespace System {
template <typename T> struct Span_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System::Text {
class DecoderFallback;
}
namespace System::Text {
class DecoderFallbackBuffer;
}
// Forward declare root types
namespace System::Text {
class Decoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::Decoder);
// Type: System.Text::Decoder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2823))
// CS Name: ::System.Text::Decoder*
class CORDL_TYPE Decoder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _fallback, offset 0x10, size 0x8
  __declspec(property(get = __get__fallback, put = __set__fallback))::System::Text::DecoderFallback* _fallback;

  /// @brief Field _fallbackBuffer, offset 0x18, size 0x8
  __declspec(property(get = __get__fallbackBuffer, put = __set__fallbackBuffer))::System::Text::DecoderFallbackBuffer* _fallbackBuffer;

  __declspec(property(get = get_Fallback))::System::Text::DecoderFallback* Fallback;

  __declspec(property(get = get_FallbackBuffer))::System::Text::DecoderFallbackBuffer* FallbackBuffer;

  __declspec(property(get = get_InternalHasFallbackBuffer)) bool InternalHasFallbackBuffer;

  constexpr ::System::Text::DecoderFallback*& __get__fallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::DecoderFallback*> const& __get__fallback() const;

  constexpr void __set__fallback(::System::Text::DecoderFallback* value);

  constexpr ::System::Text::DecoderFallbackBuffer*& __get__fallbackBuffer();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::DecoderFallbackBuffer*> const& __get__fallbackBuffer() const;

  constexpr void __set__fallbackBuffer(::System::Text::DecoderFallbackBuffer* value);

  static inline ::System::Text::Decoder* New_ctor();

  /// @brief Method .ctor addr 0x24d5f74 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method get_Fallback addr 0x24d5f7c size 0x8 virtual false final false
  inline ::System::Text::DecoderFallback* get_Fallback();

  /// @brief Method get_FallbackBuffer addr 0x24d58b4 size 0x3c virtual false final false
  inline ::System::Text::DecoderFallbackBuffer* get_FallbackBuffer();

  /// @brief Method get_InternalHasFallbackBuffer addr 0x24d5f84 size 0x10 virtual false final false
  inline bool get_InternalHasFallbackBuffer();

  /// @brief Method Reset addr 0x24d5f94 size 0x108 virtual true final false
  inline void Reset();

  /// @brief Method GetCharCount addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount addr 0x24d609c size 0xc virtual true final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count, bool flush);

  /// @brief Method GetCharCount addr 0x24d60a8 size 0x164 virtual true final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, bool flush);

  /// @brief Method GetChars addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars addr 0x24d620c size 0xc virtual true final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, bool flush);

  /// @brief Method GetChars addr 0x24d6218 size 0x218 virtual true final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, bool flush);

  /// @brief Method GetChars addr 0x24d6430 size 0xa8 virtual true final false
  inline int32_t GetChars(::System::ReadOnlySpan_1<uint8_t> bytes, ::System::Span_1<char16_t> chars, bool flush);

  /// @brief Method Convert addr 0x24d64d8 size 0x2f8 virtual true final false
  inline void Convert(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, bool flush,
                      ByRef<int32_t> bytesUsed, ByRef<int32_t> charsUsed, ByRef<bool> completed);

  /// @brief Method Convert addr 0x24d67d0 size 0x22c virtual true final false
  inline void Convert(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, bool flush, ByRef<int32_t> bytesUsed,
                      ByRef<int32_t> charsUsed, ByRef<bool> completed);

  // Ctor Parameters [CppParam { name: "", ty: "Decoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Decoder(Decoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Decoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Decoder(Decoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Decoder();

public:
  /// @brief Field _fallback, offset: 0x10, size: 0x8, def value: None
  ::System::Text::DecoderFallback* ____fallback;

  /// @brief Field _fallbackBuffer, offset: 0x18, size: 0x8, def value: None
  ::System::Text::DecoderFallbackBuffer* ____fallbackBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::Decoder, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Text::Decoder, ____fallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::Decoder, ____fallbackBuffer) == 0x18, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::Decoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Decoder*, "System.Text", "Decoder");
