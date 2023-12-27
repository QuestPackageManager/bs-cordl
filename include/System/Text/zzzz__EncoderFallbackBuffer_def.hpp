#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: System.Text::EncoderFallbackBuffer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2845))
// CS Name: ::System.Text::EncoderFallbackBuffer*
class CORDL_TYPE EncoderFallbackBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field charStart, offset 0x10, size 0x8
  __declspec(property(get = __get_charStart, put = __set_charStart))::cordl_internals::Ptr<char16_t> charStart;

  /// @brief Field charEnd, offset 0x18, size 0x8
  __declspec(property(get = __get_charEnd, put = __set_charEnd))::cordl_internals::Ptr<char16_t> charEnd;

  /// @brief Field encoder, offset 0x20, size 0x8
  __declspec(property(get = __get_encoder, put = __set_encoder))::System::Text::EncoderNLS* encoder;

  /// @brief Field setEncoder, offset 0x28, size 0x1
  __declspec(property(get = __get_setEncoder, put = __set_setEncoder)) bool setEncoder;

  /// @brief Field bUsedEncoder, offset 0x29, size 0x1
  __declspec(property(get = __get_bUsedEncoder, put = __set_bUsedEncoder)) bool bUsedEncoder;

  /// @brief Field bFallingBack, offset 0x2a, size 0x1
  __declspec(property(get = __get_bFallingBack, put = __set_bFallingBack)) bool bFallingBack;

  /// @brief Field iRecursionCount, offset 0x2c, size 0x4
  __declspec(property(get = __get_iRecursionCount, put = __set_iRecursionCount)) int32_t iRecursionCount;

  __declspec(property(get = get_Remaining)) int32_t Remaining;

  constexpr ::cordl_internals::Ptr<char16_t>& __get_charStart();

  constexpr ::cordl_internals::Ptr<char16_t> const& __get_charStart() const;

  constexpr void __set_charStart(::cordl_internals::Ptr<char16_t> value);

  constexpr ::cordl_internals::Ptr<char16_t>& __get_charEnd();

  constexpr ::cordl_internals::Ptr<char16_t> const& __get_charEnd() const;

  constexpr void __set_charEnd(::cordl_internals::Ptr<char16_t> value);

  constexpr ::System::Text::EncoderNLS*& __get_encoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::EncoderNLS*> const& __get_encoder() const;

  constexpr void __set_encoder(::System::Text::EncoderNLS* value);

  constexpr bool& __get_setEncoder();

  constexpr bool const& __get_setEncoder() const;

  constexpr void __set_setEncoder(bool value);

  constexpr bool& __get_bUsedEncoder();

  constexpr bool const& __get_bUsedEncoder() const;

  constexpr void __set_bUsedEncoder(bool value);

  constexpr bool& __get_bFallingBack();

  constexpr bool const& __get_bFallingBack() const;

  constexpr void __set_bFallingBack(bool value);

  constexpr int32_t& __get_iRecursionCount();

  constexpr int32_t const& __get_iRecursionCount() const;

  constexpr void __set_iRecursionCount(int32_t value);

  /// @brief Method Fallback addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Fallback(char16_t charUnknown, int32_t index);

  /// @brief Method Fallback addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index);

  /// @brief Method GetNextChar addr 0x0 size 0xffffffffffffffff virtual true final false
  inline char16_t GetNextChar();

  /// @brief Method MovePrevious addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool MovePrevious();

  /// @brief Method get_Remaining addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_Remaining();

  /// @brief Method Reset addr 0x263419c size 0x28 virtual true final false
  inline void Reset();

  /// @brief Method InternalReset addr 0x26341c4 size 0x18 virtual false final false
  inline void InternalReset();

  /// @brief Method InternalInitialize addr 0x262f3f4 size 0x1c virtual false final false
  inline void InternalInitialize(::cordl_internals::Ptr<char16_t> charStart, ::cordl_internals::Ptr<char16_t> charEnd, ::System::Text::EncoderNLS* encoder, bool setEncoder);

  /// @brief Method InternalGetNextChar addr 0x262f410 size 0x34 virtual false final false
  inline char16_t InternalGetNextChar();

  /// @brief Method InternalFallback addr 0x26341dc size 0x1a8 virtual true final false
  inline bool InternalFallback(char16_t ch, ByRef<::cordl_internals::Ptr<char16_t>> chars);

  /// @brief Method ThrowLastCharRecursive addr 0x2634384 size 0x1090 virtual false final false
  inline void ThrowLastCharRecursive(int32_t charRecursive);

  static inline ::System::Text::EncoderFallbackBuffer* New_ctor();

  /// @brief Method .ctor addr 0x26336f4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EncoderFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncoderFallbackBuffer(EncoderFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncoderFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncoderFallbackBuffer(EncoderFallbackBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncoderFallbackBuffer();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Text::EncoderFallbackBuffer, 0x30>, "Size mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::EncoderFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::EncoderFallbackBuffer*, "System.Text", "EncoderFallbackBuffer");
