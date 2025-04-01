#pragma once
// IWYU pragma private; include "System/Text/DecoderFallbackBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderFallbackBuffer)
// Forward declare root types
namespace System::Text {
class DecoderFallbackBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::DecoderFallbackBuffer);
// Dependencies System.Object
namespace System::Text {
// Is value type: false
// CS Name: System.Text.DecoderFallbackBuffer
class CORDL_TYPE DecoderFallbackBuffer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Remaining)) int32_t Remaining;

  /// @brief Field byteStart, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_byteStart, put = __cordl_internal_set_byteStart)) ::cordl_internals::Ptr<uint8_t> byteStart;

  /// @brief Field charEnd, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_charEnd, put = __cordl_internal_set_charEnd)) ::cordl_internals::Ptr<char16_t> charEnd;

  /// @brief Method Fallback, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Fallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index);

  /// @brief Method GetNextChar, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline char16_t GetNextChar();

  /// @brief Method InternalFallback, addr 0x3e6a570, size 0x18c, virtual true, abstract: false, final false
  inline bool InternalFallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::cordl_internals::Ptr<uint8_t> pBytes, ::ByRef<::cordl_internals::Ptr<char16_t>> chars);

  /// @brief Method InternalFallback, addr 0x3e6a6fc, size 0x16c, virtual true, abstract: false, final false
  inline int32_t InternalFallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::cordl_internals::Ptr<uint8_t> pBytes);

  /// @brief Method InternalInitialize, addr 0x3e68b20, size 0x8, virtual false, abstract: false, final false
  inline void InternalInitialize(::cordl_internals::Ptr<uint8_t> byteStart, ::cordl_internals::Ptr<char16_t> charEnd);

  /// @brief Method InternalReset, addr 0x3e68db0, size 0x10, virtual false, abstract: false, final false
  inline void InternalReset();

  static inline ::System::Text::DecoderFallbackBuffer* New_ctor();

  /// @brief Method Reset, addr 0x3e6a548, size 0x28, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ThrowLastBytesRecursive, addr 0x3e6a868, size 0x1f8, virtual false, abstract: false, final false
  inline void ThrowLastBytesRecursive(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown);

  constexpr ::cordl_internals::Ptr<uint8_t> const& __cordl_internal_get_byteStart() const;

  constexpr ::cordl_internals::Ptr<uint8_t>& __cordl_internal_get_byteStart();

  constexpr ::cordl_internals::Ptr<char16_t> const& __cordl_internal_get_charEnd() const;

  constexpr ::cordl_internals::Ptr<char16_t>& __cordl_internal_get_charEnd();

  constexpr void __cordl_internal_set_byteStart(::cordl_internals::Ptr<uint8_t> value);

  constexpr void __cordl_internal_set_charEnd(::cordl_internals::Ptr<char16_t> value);

  /// @brief Method .ctor, addr 0x3e69f30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Remaining, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Remaining();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoderFallbackBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecoderFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoderFallbackBuffer(DecoderFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoderFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoderFallbackBuffer(DecoderFallbackBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2837 };

  /// @brief Field byteStart, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> ___byteStart;

  /// @brief Field charEnd, offset: 0x18, size: 0x8, def value: None
  ::cordl_internals::Ptr<char16_t> ___charEnd;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Text::DecoderFallbackBuffer, ___byteStart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Text::DecoderFallbackBuffer, ___charEnd) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::DecoderFallbackBuffer, 0x20>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::DecoderFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderFallbackBuffer*, "System.Text", "DecoderFallbackBuffer");
