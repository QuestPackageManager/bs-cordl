#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Text::Encoder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// CS Name: ::System.Text::Encoder*
class CORDL_TYPE Encoder : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Fallback))::System::Text::EncoderFallback* Fallback;

  __declspec(property(get = get_FallbackBuffer))::System::Text::EncoderFallbackBuffer* FallbackBuffer;

  __declspec(property(get = get_InternalHasFallbackBuffer)) bool InternalHasFallbackBuffer;

  /// @brief Field _fallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__fallback, put = __cordl_internal_set__fallback))::System::Text::EncoderFallback* _fallback;

  /// @brief Field _fallbackBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fallbackBuffer, put = __cordl_internal_set__fallbackBuffer))::System::Text::EncoderFallbackBuffer* _fallbackBuffer;

  /// @brief Method Convert, addr 0x28bbedc, size 0x2f8, virtual true, abstract: false, final false
  inline void Convert(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, bool flush,
                      ByRef<int32_t> charsUsed, ByRef<int32_t> bytesUsed, ByRef<bool> completed);

  /// @brief Method Convert, addr 0x28bc1d4, size 0x22c, virtual true, abstract: false, final false
  inline void Convert(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, bool flush, ByRef<int32_t> charsUsed,
                      ByRef<int32_t> bytesUsed, ByRef<bool> completed);

  /// @brief Method GetByteCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetByteCount(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count, bool flush);

  /// @brief Method GetByteCount, addr 0x28bbb58, size 0x16c, virtual true, abstract: false, final false
  inline int32_t GetByteCount(::cordl_internals::Ptr<char16_t> chars, int32_t count, bool flush);

  /// @brief Method GetBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetBytes(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, bool flush);

  /// @brief Method GetBytes, addr 0x28bbcc4, size 0x218, virtual true, abstract: false, final false
  inline int32_t GetBytes(::cordl_internals::Ptr<char16_t> chars, int32_t charCount, ::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, bool flush);

  static inline ::System::Text::Encoder* New_ctor();

  /// @brief Method Reset, addr 0x28bba74, size 0xe4, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::System::Text::EncoderFallback*& __cordl_internal_get__fallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::EncoderFallback*> const& __cordl_internal_get__fallback() const;

  constexpr ::System::Text::EncoderFallbackBuffer*& __cordl_internal_get__fallbackBuffer();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::EncoderFallbackBuffer*> const& __cordl_internal_get__fallbackBuffer() const;

  constexpr void __cordl_internal_set__fallback(::System::Text::EncoderFallback* value);

  constexpr void __cordl_internal_set__fallbackBuffer(::System::Text::EncoderFallbackBuffer* value);

  /// @brief Method .ctor, addr 0x28bba64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Fallback, addr 0x28bba6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::EncoderFallback* get_Fallback();

  /// @brief Method get_FallbackBuffer, addr 0x28b8468, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Text::EncoderFallbackBuffer* get_FallbackBuffer();

  /// @brief Method get_InternalHasFallbackBuffer, addr 0x28b8458, size 0x10, virtual false, abstract: false, final false
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

  /// @brief Field _fallback, offset: 0x10, size: 0x8, def value: None
  ::System::Text::EncoderFallback* ____fallback;

  /// @brief Field _fallbackBuffer, offset: 0x18, size: 0x8, def value: None
  ::System::Text::EncoderFallbackBuffer* ____fallbackBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::Encoder, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Text::Encoder, ____fallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::Encoder, ____fallbackBuffer) == 0x18, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::Encoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Encoder*, "System.Text", "Encoder");
