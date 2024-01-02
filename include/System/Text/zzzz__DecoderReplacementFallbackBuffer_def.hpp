#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2834))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2837))
// CS Name: ::System.Text::DecoderReplacementFallbackBuffer*
class CORDL_TYPE DecoderReplacementFallbackBuffer : public ::System::Text::DecoderFallbackBuffer {
public:
  // Declarations
  /// @brief Field _strDefault, offset 0x20, size 0x8
  __declspec(property(get = __get__strDefault, put = __set__strDefault))::StringW _strDefault;

  /// @brief Field _fallbackCount, offset 0x28, size 0x4
  __declspec(property(get = __get__fallbackCount, put = __set__fallbackCount)) int32_t _fallbackCount;

  /// @brief Field _fallbackIndex, offset 0x2c, size 0x4
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

  static inline ::System::Text::DecoderReplacementFallbackBuffer* New_ctor(::System::Text::DecoderReplacementFallback* fallback);

  /// @brief Method .ctor, addr 0x2632850, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::DecoderReplacementFallback* fallback);

  /// @brief Method Fallback, addr 0x2632948, size 0x44, virtual true, abstract: false, final false
  inline bool Fallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index);

  /// @brief Method GetNextChar, addr 0x263298c, size 0x50, virtual true, abstract: false, final false
  inline char16_t GetNextChar();

  /// @brief Method get_Remaining, addr 0x26329dc, size 0xc, virtual true, abstract: false, final false
  inline int32_t get_Remaining();

  /// @brief Method Reset, addr 0x26329e8, size 0x10, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method InternalFallback, addr 0x26329f8, size 0x1c, virtual true, abstract: false, final false
  inline int32_t InternalFallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::cordl_internals::Ptr<uint8_t> pBytes);

  // Ctor Parameters [CppParam { name: "", ty: "DecoderReplacementFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoderReplacementFallbackBuffer(DecoderReplacementFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoderReplacementFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoderReplacementFallbackBuffer(DecoderReplacementFallbackBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoderReplacementFallbackBuffer();

public:
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
