#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__Decoder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecoderNLS)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::Text {
class DecoderNLS;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::DecoderNLS);
// Type: System.Text::DecoderNLS
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2827))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2835))
// CS Name: ::System.Text::DecoderNLS*
class CORDL_TYPE DecoderNLS : public ::System::Text::Decoder {
public:
  // Declarations
  /// @brief Field _encoding, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__encoding, put = __cordl_internal_set__encoding))::System::Text::Encoding* _encoding;

  /// @brief Field _mustFlush, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__mustFlush, put = __cordl_internal_set__mustFlush)) bool _mustFlush;

  /// @brief Field _throwOnOverflow, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__throwOnOverflow, put = __cordl_internal_set__throwOnOverflow)) bool _throwOnOverflow;

  /// @brief Field _bytesUsed, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__bytesUsed, put = __cordl_internal_set__bytesUsed)) int32_t _bytesUsed;

  __declspec(property(get = get_MustFlush)) bool MustFlush;

  __declspec(property(get = get_HasState)) bool HasState;

  constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __cordl_internal_get__encoding() const;

  constexpr void __cordl_internal_set__encoding(::System::Text::Encoding* value);

  constexpr bool& __cordl_internal_get__mustFlush();

  constexpr bool const& __cordl_internal_get__mustFlush() const;

  constexpr void __cordl_internal_set__mustFlush(bool value);

  constexpr bool& __cordl_internal_get__throwOnOverflow();

  constexpr bool const& __cordl_internal_get__throwOnOverflow() const;

  constexpr void __cordl_internal_set__throwOnOverflow(bool value);

  constexpr int32_t& __cordl_internal_get__bytesUsed();

  constexpr int32_t const& __cordl_internal_get__bytesUsed() const;

  constexpr void __cordl_internal_set__bytesUsed(int32_t value);

  static inline ::System::Text::DecoderNLS* New_ctor(::System::Text::Encoding* encoding);

  /// @brief Method .ctor, addr 0x262ff08, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::Encoding* encoding);

  /// @brief Method Reset, addr 0x263198c, size 0x18, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method GetCharCount, addr 0x26319a4, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count);

  /// @brief Method GetCharCount, addr 0x26319b4, size 0x1d8, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t index, int32_t count, bool flush);

  /// @brief Method GetCharCount, addr 0x2631b8c, size 0xf8, virtual true, abstract: false, final false
  inline int32_t GetCharCount(::cordl_internals::Ptr<uint8_t> bytes, int32_t count, bool flush);

  /// @brief Method GetChars, addr 0x2631c84, size 0x10, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  /// @brief Method GetChars, addr 0x2631c94, size 0x298, virtual true, abstract: false, final false
  inline int32_t GetChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, bool flush);

  /// @brief Method GetChars, addr 0x2631f2c, size 0x120, virtual true, abstract: false, final false
  inline int32_t GetChars(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, bool flush);

  /// @brief Method Convert, addr 0x263204c, size 0x2d0, virtual true, abstract: false, final false
  inline void Convert(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex, int32_t charCount, bool flush,
                      ByRef<int32_t> bytesUsed, ByRef<int32_t> charsUsed, ByRef<bool> completed);

  /// @brief Method Convert, addr 0x263231c, size 0x1ac, virtual true, abstract: false, final false
  inline void Convert(::cordl_internals::Ptr<uint8_t> bytes, int32_t byteCount, ::cordl_internals::Ptr<char16_t> chars, int32_t charCount, bool flush, ByRef<int32_t> bytesUsed,
                      ByRef<int32_t> charsUsed, ByRef<bool> completed);

  /// @brief Method get_MustFlush, addr 0x26324c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_MustFlush();

  /// @brief Method get_HasState, addr 0x26324d0, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasState();

  /// @brief Method ClearMustFlush, addr 0x26324d8, size 0x8, virtual false, abstract: false, final false
  inline void ClearMustFlush();

  // Ctor Parameters [CppParam { name: "", ty: "DecoderNLS", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoderNLS(DecoderNLS&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoderNLS", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoderNLS(DecoderNLS const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoderNLS();

public:
  /// @brief Field _encoding, offset: 0x20, size: 0x8, def value: None
  ::System::Text::Encoding* ____encoding;

  /// @brief Field _mustFlush, offset: 0x28, size: 0x1, def value: None
  bool ____mustFlush;

  /// @brief Field _throwOnOverflow, offset: 0x29, size: 0x1, def value: None
  bool ____throwOnOverflow;

  /// @brief Field _bytesUsed, offset: 0x2c, size: 0x4, def value: None
  int32_t ____bytesUsed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::DecoderNLS, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Text::DecoderNLS, ____encoding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::DecoderNLS, ____mustFlush) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::DecoderNLS, ____throwOnOverflow) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::Text::DecoderNLS, ____bytesUsed) == 0x2c, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::DecoderNLS);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderNLS*, "System.Text", "DecoderNLS");
